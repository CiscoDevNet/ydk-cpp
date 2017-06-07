
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_77.hpp"
#include "Cisco_IOS_XE_native_78.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol::Protocol()
    :
    pdu{YType::uint32, "pdu"},
    version{YType::enumeration, "version"}
{
    yang_name = "protocol"; yang_parent_name = "redundancy";
}

Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol::~Protocol()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol::has_data() const
{
    return pdu.is_set
	|| version.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol::has_operation() const
{
    return is_set(operation)
	|| is_set(pdu.operation)
	|| is_set(version.operation);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Protocol' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pdu.is_set || is_set(pdu.operation)) leaf_name_data.push_back(pdu.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pdu")
    {
        pdu = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Native::Crypto::Gdoi::Group::Server::Local::Registration::Registration()
    :
    interface{YType::str, "interface"}
    	,
    periodic(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic>())
{
    periodic->parent = this;

    yang_name = "registration"; yang_parent_name = "local";
}

Native::Crypto::Gdoi::Group::Server::Local::Registration::~Registration()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Registration::has_data() const
{
    return interface.is_set
	|| (periodic !=  nullptr && periodic->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Registration::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation)
	|| (periodic !=  nullptr && periodic->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Registration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registration";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Registration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Registration' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Registration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "periodic")
    {
        if(periodic == nullptr)
        {
            periodic = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic>();
        }
        return periodic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Registration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(periodic != nullptr)
    {
        children["periodic"] = periodic;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Registration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
}

Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Periodic()
    :
    crl(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Crl>())
{
    crl->parent = this;

    yang_name = "periodic"; yang_parent_name = "registration";
}

Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::~Periodic()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::has_data() const
{
    return (crl !=  nullptr && crl->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::has_operation() const
{
    return is_set(operation)
	|| (crl !=  nullptr && crl->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "periodic";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Periodic' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "crl")
    {
        if(crl == nullptr)
        {
            crl = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Crl>();
        }
        return crl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(crl != nullptr)
    {
        children["crl"] = crl;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Crl::Crl()
    :
    trustpoint{YType::str, "trustpoint"}
{
    yang_name = "crl"; yang_parent_name = "periodic";
}

Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Crl::~Crl()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Crl::has_data() const
{
    return trustpoint.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Crl::has_operation() const
{
    return is_set(operation)
	|| is_set(trustpoint.operation);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Crl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crl";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Crl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Crl' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trustpoint.is_set || is_set(trustpoint.operation)) leaf_name_data.push_back(trustpoint.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Crl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Crl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Registration::Periodic::Crl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "trustpoint")
    {
        trustpoint = value;
    }
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Rekey()
    :
    acknowledgement{YType::enumeration, "acknowledgement"}
    	,
    address(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::Address>())
	,algorithm(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::Algorithm>())
	,authentication(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication>())
	,lifetime(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::Lifetime>())
	,retransmit(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::Retransmit>())
	,sig_hash(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash>())
	,transport(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::Transport>())
{
    address->parent = this;

    algorithm->parent = this;

    authentication->parent = this;

    lifetime->parent = this;

    retransmit->parent = this;

    sig_hash->parent = this;

    transport->parent = this;

    yang_name = "rekey"; yang_parent_name = "local";
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::~Rekey()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::has_data() const
{
    return acknowledgement.is_set
	|| (address !=  nullptr && address->has_data())
	|| (algorithm !=  nullptr && algorithm->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (lifetime !=  nullptr && lifetime->has_data())
	|| (retransmit !=  nullptr && retransmit->has_data())
	|| (sig_hash !=  nullptr && sig_hash->has_data())
	|| (transport !=  nullptr && transport->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledgement.operation)
	|| (address !=  nullptr && address->has_operation())
	|| (algorithm !=  nullptr && algorithm->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (lifetime !=  nullptr && lifetime->has_operation())
	|| (retransmit !=  nullptr && retransmit->has_operation())
	|| (sig_hash !=  nullptr && sig_hash->has_operation())
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Rekey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rekey";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Rekey::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rekey' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledgement.is_set || is_set(acknowledgement.operation)) leaf_name_data.push_back(acknowledgement.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Rekey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::Address>();
        }
        return address;
    }

    if(child_yang_name == "algorithm")
    {
        if(algorithm == nullptr)
        {
            algorithm = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::Algorithm>();
        }
        return algorithm;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::Lifetime>();
        }
        return lifetime;
    }

    if(child_yang_name == "retransmit")
    {
        if(retransmit == nullptr)
        {
            retransmit = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::Retransmit>();
        }
        return retransmit;
    }

    if(child_yang_name == "sig-hash")
    {
        if(sig_hash == nullptr)
        {
            sig_hash = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash>();
        }
        return sig_hash;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Rekey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(algorithm != nullptr)
    {
        children["algorithm"] = algorithm;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(lifetime != nullptr)
    {
        children["lifetime"] = lifetime;
    }

    if(retransmit != nullptr)
    {
        children["retransmit"] = retransmit;
    }

    if(sig_hash != nullptr)
    {
        children["sig-hash"] = sig_hash;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledgement")
    {
        acknowledgement = value;
    }
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Address::Address()
    :
    ipv4{YType::str, "ipv4"}
{
    yang_name = "address"; yang_parent_name = "rekey";
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Address::~Address()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Address::has_data() const
{
    return ipv4.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Rekey::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Rekey::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Rekey::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Rekey::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Algorithm::Algorithm()
    :
    a3des_cbc{YType::empty, "a3des-cbc"},
    aes_128{YType::empty, "aes-128"},
    aes_192{YType::empty, "aes-192"},
    aes_256{YType::empty, "aes-256"},
    des_cbc{YType::empty, "des-cbc"}
{
    yang_name = "algorithm"; yang_parent_name = "rekey";
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Algorithm::~Algorithm()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Algorithm::has_data() const
{
    return a3des_cbc.is_set
	|| aes_128.is_set
	|| aes_192.is_set
	|| aes_256.is_set
	|| des_cbc.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Algorithm::has_operation() const
{
    return is_set(operation)
	|| is_set(a3des_cbc.operation)
	|| is_set(aes_128.operation)
	|| is_set(aes_192.operation)
	|| is_set(aes_256.operation)
	|| is_set(des_cbc.operation);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Rekey::Algorithm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "algorithm";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Rekey::Algorithm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Algorithm' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (a3des_cbc.is_set || is_set(a3des_cbc.operation)) leaf_name_data.push_back(a3des_cbc.get_name_leafdata());
    if (aes_128.is_set || is_set(aes_128.operation)) leaf_name_data.push_back(aes_128.get_name_leafdata());
    if (aes_192.is_set || is_set(aes_192.operation)) leaf_name_data.push_back(aes_192.get_name_leafdata());
    if (aes_256.is_set || is_set(aes_256.operation)) leaf_name_data.push_back(aes_256.get_name_leafdata());
    if (des_cbc.is_set || is_set(des_cbc.operation)) leaf_name_data.push_back(des_cbc.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Rekey::Algorithm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Rekey::Algorithm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::Algorithm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "a3des-cbc")
    {
        a3des_cbc = value;
    }
    if(value_path == "aes-128")
    {
        aes_128 = value;
    }
    if(value_path == "aes-192")
    {
        aes_192 = value;
    }
    if(value_path == "aes-256")
    {
        aes_256 = value;
    }
    if(value_path == "des-cbc")
    {
        des_cbc = value;
    }
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Authentication()
    :
    mypubkey(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Mypubkey>())
{
    mypubkey->parent = this;

    yang_name = "authentication"; yang_parent_name = "rekey";
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::~Authentication()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::has_data() const
{
    return (mypubkey !=  nullptr && mypubkey->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::has_operation() const
{
    return is_set(operation)
	|| (mypubkey !=  nullptr && mypubkey->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mypubkey")
    {
        if(mypubkey == nullptr)
        {
            mypubkey = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Mypubkey>();
        }
        return mypubkey;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mypubkey != nullptr)
    {
        children["mypubkey"] = mypubkey;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Mypubkey::Mypubkey()
    :
    rsa{YType::str, "rsa"}
{
    yang_name = "mypubkey"; yang_parent_name = "authentication";
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Mypubkey::~Mypubkey()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Mypubkey::has_data() const
{
    return rsa.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Mypubkey::has_operation() const
{
    return is_set(operation)
	|| is_set(rsa.operation);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Mypubkey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mypubkey";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Mypubkey::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mypubkey' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rsa.is_set || is_set(rsa.operation)) leaf_name_data.push_back(rsa.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Mypubkey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Mypubkey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::Authentication::Mypubkey::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rsa")
    {
        rsa = value;
    }
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Lifetime::Lifetime()
    :
    days{YType::uint8, "days"},
    seconds{YType::uint64, "seconds"}
{
    yang_name = "lifetime"; yang_parent_name = "rekey";
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Lifetime::~Lifetime()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Lifetime::has_data() const
{
    return days.is_set
	|| seconds.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Lifetime::has_operation() const
{
    return is_set(operation)
	|| is_set(days.operation)
	|| is_set(seconds.operation);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Rekey::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Rekey::Lifetime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lifetime' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.operation)) leaf_name_data.push_back(days.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Rekey::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Rekey::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::Lifetime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "days")
    {
        days = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Retransmit::Retransmit()
    :
    number{YType::uint8, "number"},
    periodic{YType::empty, "periodic"},
    seconds{YType::uint8, "seconds"}
{
    yang_name = "retransmit"; yang_parent_name = "rekey";
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Retransmit::~Retransmit()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Retransmit::has_data() const
{
    return number.is_set
	|| periodic.is_set
	|| seconds.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Retransmit::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(periodic.operation)
	|| is_set(seconds.operation);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Rekey::Retransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmit";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Rekey::Retransmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Retransmit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (periodic.is_set || is_set(periodic.operation)) leaf_name_data.push_back(periodic.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Rekey::Retransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Rekey::Retransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::Retransmit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "periodic")
    {
        periodic = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::SigHash()
    :
    algorithm{YType::enumeration, "algorithm"}
{
    yang_name = "sig-hash"; yang_parent_name = "rekey";
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::~SigHash()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::has_data() const
{
    return algorithm.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::has_operation() const
{
    return is_set(operation)
	|| is_set(algorithm.operation);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sig-hash";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SigHash' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (algorithm.is_set || is_set(algorithm.operation)) leaf_name_data.push_back(algorithm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "algorithm")
    {
        algorithm = value;
    }
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Transport::Transport()
    :
    unicast{YType::empty, "unicast"}
{
    yang_name = "transport"; yang_parent_name = "rekey";
}

Native::Crypto::Gdoi::Group::Server::Local::Rekey::Transport::~Transport()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Transport::has_data() const
{
    return unicast.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Rekey::Transport::has_operation() const
{
    return is_set(operation)
	|| is_set(unicast.operation);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Rekey::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Rekey::Transport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Transport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast.is_set || is_set(unicast.operation)) leaf_name_data.push_back(unicast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Rekey::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Rekey::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Rekey::Transport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unicast")
    {
        unicast = value;
    }
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Sa()
    :
    receive_only{YType::empty, "receive-only"}
    	,
    d3p(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P>())
	,pair_wise_keying(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::PairWiseKeying>())
{
    d3p->parent = this;

    pair_wise_keying->parent = this;

    yang_name = "sa"; yang_parent_name = "local";
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::~Sa()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::has_data() const
{
    for (std::size_t index=0; index<ipsec.size(); index++)
    {
        if(ipsec[index]->has_data())
            return true;
    }
    return receive_only.is_set
	|| (d3p !=  nullptr && d3p->has_data())
	|| (pair_wise_keying !=  nullptr && pair_wise_keying->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::has_operation() const
{
    for (std::size_t index=0; index<ipsec.size(); index++)
    {
        if(ipsec[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(receive_only.operation)
	|| (d3p !=  nullptr && d3p->has_operation())
	|| (pair_wise_keying !=  nullptr && pair_wise_keying->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Sa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sa";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Sa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sa' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive_only.is_set || is_set(receive_only.operation)) leaf_name_data.push_back(receive_only.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Sa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "d3p")
    {
        if(d3p == nullptr)
        {
            d3p = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P>();
        }
        return d3p;
    }

    if(child_yang_name == "ipsec")
    {
        for(auto const & c : ipsec)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec>();
        c->parent = this;
        ipsec.push_back(c);
        return c;
    }

    if(child_yang_name == "pair-wise-keying")
    {
        if(pair_wise_keying == nullptr)
        {
            pair_wise_keying = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::PairWiseKeying>();
        }
        return pair_wise_keying;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Sa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(d3p != nullptr)
    {
        children["d3p"] = d3p;
    }

    for (auto const & c : ipsec)
    {
        children[c->get_segment_path()] = c;
    }

    if(pair_wise_keying != nullptr)
    {
        children["pair-wise-keying"] = pair_wise_keying;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "receive-only")
    {
        receive_only = value;
    }
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::D3P()
    :
    window(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::Window>())
{
    window->parent = this;

    yang_name = "d3p"; yang_parent_name = "sa";
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::~D3P()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::has_data() const
{
    return (window !=  nullptr && window->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::has_operation() const
{
    return is_set(operation)
	|| (window !=  nullptr && window->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "d3p";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'D3P' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "window")
    {
        if(window == nullptr)
        {
            window = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::Window>();
        }
        return window;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(window != nullptr)
    {
        children["window"] = window;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::Window::Window()
    :
    msec{YType::uint32, "msec"},
    sec{YType::uint8, "sec"}
{
    yang_name = "window"; yang_parent_name = "d3p";
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::Window::~Window()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::Window::has_data() const
{
    return msec.is_set
	|| sec.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::Window::has_operation() const
{
    return is_set(operation)
	|| is_set(msec.operation)
	|| is_set(sec.operation);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::Window::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "window";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::Window::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Window' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec.is_set || is_set(msec.operation)) leaf_name_data.push_back(msec.get_name_leafdata());
    if (sec.is_set || is_set(sec.operation)) leaf_name_data.push_back(sec.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::Window::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::Window::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::D3P::Window::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "msec")
    {
        msec = value;
    }
    if(value_path == "sec")
    {
        sec = value;
    }
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Ipsec()
    :
    sequence{YType::uint16, "sequence"},
    profile{YType::str, "profile"}
    	,
    default_(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_>())
	,match(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match>())
	,replay(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay>())
	,tag(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag>())
{
    default_->parent = this;

    match->parent = this;

    replay->parent = this;

    tag->parent = this;

    yang_name = "ipsec"; yang_parent_name = "sa";
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::~Ipsec()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::has_data() const
{
    return sequence.is_set
	|| profile.is_set
	|| (default_ !=  nullptr && default_->has_data())
	|| (match !=  nullptr && match->has_data())
	|| (replay !=  nullptr && replay->has_data())
	|| (tag !=  nullptr && tag->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::has_operation() const
{
    return is_set(operation)
	|| is_set(sequence.operation)
	|| is_set(profile.operation)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (match !=  nullptr && match->has_operation())
	|| (replay !=  nullptr && replay->has_operation())
	|| (tag !=  nullptr && tag->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec" <<"[sequence='" <<sequence <<"']";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipsec' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.operation)) leaf_name_data.push_back(sequence.get_name_leafdata());
    if (profile.is_set || is_set(profile.operation)) leaf_name_data.push_back(profile.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match>();
        }
        return match;
    }

    if(child_yang_name == "replay")
    {
        if(replay == nullptr)
        {
            replay = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay>();
        }
        return replay;
    }

    if(child_yang_name == "tag")
    {
        if(tag == nullptr)
        {
            tag = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag>();
        }
        return tag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(match != nullptr)
    {
        children["match"] = match;
    }

    if(replay != nullptr)
    {
        children["replay"] = replay;
    }

    if(tag != nullptr)
    {
        children["tag"] = tag;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sequence")
    {
        sequence = value;
    }
    if(value_path == "profile")
    {
        profile = value;
    }
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Default_()
    :
    profile{YType::empty, "profile"}
    	,
    match(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match>())
	,replay(nullptr) // presence node
	,tag(nullptr) // presence node
{
    match->parent = this;

    yang_name = "default"; yang_parent_name = "ipsec";
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::~Default_()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::has_data() const
{
    return profile.is_set
	|| (match !=  nullptr && match->has_data())
	|| (replay !=  nullptr && replay->has_data())
	|| (tag !=  nullptr && tag->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::has_operation() const
{
    return is_set(operation)
	|| is_set(profile.operation)
	|| (match !=  nullptr && match->has_operation())
	|| (replay !=  nullptr && replay->has_operation())
	|| (tag !=  nullptr && tag->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Default_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile.is_set || is_set(profile.operation)) leaf_name_data.push_back(profile.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match>();
        }
        return match;
    }

    if(child_yang_name == "replay")
    {
        if(replay == nullptr)
        {
            replay = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Replay>();
        }
        return replay;
    }

    if(child_yang_name == "tag")
    {
        if(tag == nullptr)
        {
            tag = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Tag>();
        }
        return tag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    if(replay != nullptr)
    {
        children["replay"] = replay;
    }

    if(tag != nullptr)
    {
        children["tag"] = tag;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile")
    {
        profile = value;
    }
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match::Match()
    :
    address(nullptr) // presence node
{
    yang_name = "match"; yang_parent_name = "default";
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match::~Match()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match::has_operation() const
{
    return is_set(operation)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Match' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match::Address::Address()
{
    yang_name = "address"; yang_parent_name = "match";
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match::Address::~Address()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match::Address::has_data() const
{
    return false;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match::Address::has_operation() const
{
    return is_set(operation);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Match::Address::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Replay::Replay()
{
    yang_name = "replay"; yang_parent_name = "default";
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Replay::~Replay()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Replay::has_data() const
{
    return false;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Replay::has_operation() const
{
    return is_set(operation);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Replay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replay";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Replay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Replay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Replay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Replay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Replay::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Tag::Tag()
{
    yang_name = "tag"; yang_parent_name = "default";
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Tag::~Tag()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Tag::has_data() const
{
    return false;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Tag::has_operation() const
{
    return is_set(operation);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Tag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Tag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tag' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Tag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Tag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Default_::Tag::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::Match()
    :
    address(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::Address>())
{
    address->parent = this;

    yang_name = "match"; yang_parent_name = "ipsec";
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::~Match()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::has_operation() const
{
    return is_set(operation)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Match' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::Address::Address()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "address"; yang_parent_name = "match";
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::Address::~Address()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::Address::has_data() const
{
    return ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Match::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Replay()
    :
    counter(nullptr) // presence node
	,time(nullptr) // presence node
{
    yang_name = "replay"; yang_parent_name = "ipsec";
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::~Replay()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::has_data() const
{
    return (counter !=  nullptr && counter->has_data())
	|| (time !=  nullptr && time->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::has_operation() const
{
    return is_set(operation)
	|| (counter !=  nullptr && counter->has_operation())
	|| (time !=  nullptr && time->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "replay";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Replay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counter")
    {
        if(counter == nullptr)
        {
            counter = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter>();
        }
        return counter;
    }

    if(child_yang_name == "time")
    {
        if(time == nullptr)
        {
            time = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Time>();
        }
        return time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(counter != nullptr)
    {
        children["counter"] = counter;
    }

    if(time != nullptr)
    {
        children["time"] = time;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter::Counter()
    :
    window_size{YType::enumeration, "window-size"}
{
    yang_name = "counter"; yang_parent_name = "replay";
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter::~Counter()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter::has_data() const
{
    return window_size.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter::has_operation() const
{
    return is_set(operation)
	|| is_set(window_size.operation);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counter";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Counter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window_size.is_set || is_set(window_size.operation)) leaf_name_data.push_back(window_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "window-size")
    {
        window_size = value;
    }
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Time::Time()
    :
    window_size{YType::uint8, "window-size"}
{
    yang_name = "time"; yang_parent_name = "replay";
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Time::~Time()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Time::has_data() const
{
    return window_size.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Time::has_operation() const
{
    return is_set(operation)
	|| is_set(window_size.operation);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Time::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Time::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Time' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (window_size.is_set || is_set(window_size.operation)) leaf_name_data.push_back(window_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Time::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Time::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Time::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "window-size")
    {
        window_size = value;
    }
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::Tag()
    :
    cts(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::Cts>())
{
    cts->parent = this;

    yang_name = "tag"; yang_parent_name = "ipsec";
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::~Tag()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::has_data() const
{
    return (cts !=  nullptr && cts->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::has_operation() const
{
    return is_set(operation)
	|| (cts !=  nullptr && cts->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tag' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cts")
    {
        if(cts == nullptr)
        {
            cts = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::Cts>();
        }
        return cts;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cts != nullptr)
    {
        children["cts"] = cts;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::Cts::Cts()
    :
    sgt{YType::empty, "sgt"}
{
    yang_name = "cts"; yang_parent_name = "tag";
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::Cts::~Cts()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::Cts::has_data() const
{
    return sgt.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::Cts::has_operation() const
{
    return is_set(operation)
	|| is_set(sgt.operation);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::Cts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cts";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::Cts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cts' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sgt.is_set || is_set(sgt.operation)) leaf_name_data.push_back(sgt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::Cts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::Cts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Tag::Cts::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sgt")
    {
        sgt = value;
    }
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::PairWiseKeying::PairWiseKeying()
    :
    safety_limit{YType::uint8, "safety-limit"}
{
    yang_name = "pair-wise-keying"; yang_parent_name = "sa";
}

Native::Crypto::Gdoi::Group::Server::Local::Sa::PairWiseKeying::~PairWiseKeying()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::PairWiseKeying::has_data() const
{
    return safety_limit.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Sa::PairWiseKeying::has_operation() const
{
    return is_set(operation)
	|| is_set(safety_limit.operation);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Sa::PairWiseKeying::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pair-wise-keying";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Sa::PairWiseKeying::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PairWiseKeying' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (safety_limit.is_set || is_set(safety_limit.operation)) leaf_name_data.push_back(safety_limit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Sa::PairWiseKeying::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Sa::PairWiseKeying::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Sa::PairWiseKeying::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "safety-limit")
    {
        safety_limit = value;
    }
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Default_()
    :
    gdoi{YType::empty, "gdoi"},
    gikev2{YType::empty, "gikev2"}
    	,
    address(nullptr) // presence node
	,authorization(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization>())
	,group(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_>())
	,identifier(nullptr) // presence node
	,redundancy(nullptr) // presence node
	,registration(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration>())
	,rekey(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey>())
	,sa(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa>())
{
    authorization->parent = this;

    group->parent = this;

    registration->parent = this;

    rekey->parent = this;

    sa->parent = this;

    yang_name = "default"; yang_parent_name = "local";
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::~Default_()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::has_data() const
{
    return gdoi.is_set
	|| gikev2.is_set
	|| (address !=  nullptr && address->has_data())
	|| (authorization !=  nullptr && authorization->has_data())
	|| (group !=  nullptr && group->has_data())
	|| (identifier !=  nullptr && identifier->has_data())
	|| (redundancy !=  nullptr && redundancy->has_data())
	|| (registration !=  nullptr && registration->has_data())
	|| (rekey !=  nullptr && rekey->has_data())
	|| (sa !=  nullptr && sa->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::has_operation() const
{
    return is_set(operation)
	|| is_set(gdoi.operation)
	|| is_set(gikev2.operation)
	|| (address !=  nullptr && address->has_operation())
	|| (authorization !=  nullptr && authorization->has_operation())
	|| (group !=  nullptr && group->has_operation())
	|| (identifier !=  nullptr && identifier->has_operation())
	|| (redundancy !=  nullptr && redundancy->has_operation())
	|| (registration !=  nullptr && registration->has_operation())
	|| (rekey !=  nullptr && rekey->has_operation())
	|| (sa !=  nullptr && sa->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Default_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gdoi.is_set || is_set(gdoi.operation)) leaf_name_data.push_back(gdoi.get_name_leafdata());
    if (gikev2.is_set || is_set(gikev2.operation)) leaf_name_data.push_back(gikev2.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Address>();
        }
        return address;
    }

    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization>();
        }
        return authorization;
    }

    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_>();
        }
        return group;
    }

    if(child_yang_name == "identifier")
    {
        if(identifier == nullptr)
        {
            identifier = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Identifier>();
        }
        return identifier;
    }

    if(child_yang_name == "redundancy")
    {
        if(redundancy == nullptr)
        {
            redundancy = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Redundancy>();
        }
        return redundancy;
    }

    if(child_yang_name == "registration")
    {
        if(registration == nullptr)
        {
            registration = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration>();
        }
        return registration;
    }

    if(child_yang_name == "rekey")
    {
        if(rekey == nullptr)
        {
            rekey = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey>();
        }
        return rekey;
    }

    if(child_yang_name == "sa")
    {
        if(sa == nullptr)
        {
            sa = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa>();
        }
        return sa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(authorization != nullptr)
    {
        children["authorization"] = authorization;
    }

    if(group != nullptr)
    {
        children["group"] = group;
    }

    if(identifier != nullptr)
    {
        children["identifier"] = identifier;
    }

    if(redundancy != nullptr)
    {
        children["redundancy"] = redundancy;
    }

    if(registration != nullptr)
    {
        children["registration"] = registration;
    }

    if(rekey != nullptr)
    {
        children["rekey"] = rekey;
    }

    if(sa != nullptr)
    {
        children["sa"] = sa;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "gdoi")
    {
        gdoi = value;
    }
    if(value_path == "gikev2")
    {
        gikev2 = value;
    }
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Address::Address()
{
    yang_name = "address"; yang_parent_name = "default";
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Address::~Address()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Address::has_data() const
{
    return false;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Address::has_operation() const
{
    return is_set(operation);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default_::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Default_::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Default_::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default_::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Address::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization::Authorization()
    :
    identity{YType::empty, "identity"}
    	,
    address(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization::Address>())
{
    address->parent = this;

    yang_name = "authorization"; yang_parent_name = "default";
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization::~Authorization()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization::has_data() const
{
    return identity.is_set
	|| (address !=  nullptr && address->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization::has_operation() const
{
    return is_set(operation)
	|| is_set(identity.operation)
	|| (address !=  nullptr && address->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authorization' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (identity.is_set || is_set(identity.operation)) leaf_name_data.push_back(identity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization::Address>();
        }
        return address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "identity")
    {
        identity = value;
    }
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization::Address::Address()
    :
    ipv4{YType::empty, "ipv4"}
{
    yang_name = "address"; yang_parent_name = "authorization";
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization::Address::~Address()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization::Address::has_data() const
{
    return ipv4.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Authorization::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_::Group_()
    :
    size(nullptr) // presence node
{
    yang_name = "group"; yang_parent_name = "default";
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_::~Group_()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_::has_data() const
{
    return (size !=  nullptr && size->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_::has_operation() const
{
    return is_set(operation)
	|| (size !=  nullptr && size->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Group_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "size")
    {
        if(size == nullptr)
        {
            size = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_::Size>();
        }
        return size;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(size != nullptr)
    {
        children["size"] = size;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_::Size::Size()
{
    yang_name = "size"; yang_parent_name = "group";
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_::Size::~Size()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_::Size::has_data() const
{
    return false;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_::Size::has_operation() const
{
    return is_set(operation);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_::Size::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "size";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_::Size::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Size' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_::Size::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_::Size::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Group_::Size::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Identifier::Identifier()
{
    yang_name = "identifier"; yang_parent_name = "default";
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Identifier::~Identifier()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Identifier::has_data() const
{
    return false;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Identifier::has_operation() const
{
    return is_set(operation);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default_::Identifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifier";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Default_::Identifier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Identifier' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Default_::Identifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default_::Identifier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Identifier::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Redundancy::Redundancy()
{
    yang_name = "redundancy"; yang_parent_name = "default";
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Redundancy::~Redundancy()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Redundancy::has_data() const
{
    return false;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Redundancy::has_operation() const
{
    return is_set(operation);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default_::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Default_::Redundancy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Redundancy' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Default_::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default_::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Redundancy::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Registration()
    :
    interface{YType::str, "interface"}
    	,
    periodic(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic>())
{
    periodic->parent = this;

    yang_name = "registration"; yang_parent_name = "default";
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::~Registration()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::has_data() const
{
    return interface.is_set
	|| (periodic !=  nullptr && periodic->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation)
	|| (periodic !=  nullptr && periodic->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registration";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Registration' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "periodic")
    {
        if(periodic == nullptr)
        {
            periodic = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic>();
        }
        return periodic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(periodic != nullptr)
    {
        children["periodic"] = periodic;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic::Periodic()
    :
    crl(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic::Crl>())
{
    crl->parent = this;

    yang_name = "periodic"; yang_parent_name = "registration";
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic::~Periodic()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic::has_data() const
{
    return (crl !=  nullptr && crl->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic::has_operation() const
{
    return is_set(operation)
	|| (crl !=  nullptr && crl->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "periodic";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Periodic' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "crl")
    {
        if(crl == nullptr)
        {
            crl = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic::Crl>();
        }
        return crl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(crl != nullptr)
    {
        children["crl"] = crl;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic::Crl::Crl()
    :
    trustpoint{YType::empty, "trustpoint"}
{
    yang_name = "crl"; yang_parent_name = "periodic";
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic::Crl::~Crl()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic::Crl::has_data() const
{
    return trustpoint.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic::Crl::has_operation() const
{
    return is_set(operation)
	|| is_set(trustpoint.operation);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic::Crl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crl";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic::Crl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Crl' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trustpoint.is_set || is_set(trustpoint.operation)) leaf_name_data.push_back(trustpoint.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic::Crl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic::Crl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Registration::Periodic::Crl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "trustpoint")
    {
        trustpoint = value;
    }
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Rekey()
    :
    acknowledgement{YType::empty, "acknowledgement"}
    	,
    address(nullptr) // presence node
	,algorithm(nullptr) // presence node
	,authentication(nullptr) // presence node
	,lifetime(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Lifetime>())
	,retransmit(nullptr) // presence node
	,sig_hash(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::SigHash>())
	,transport(std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Transport>())
{
    lifetime->parent = this;

    sig_hash->parent = this;

    transport->parent = this;

    yang_name = "rekey"; yang_parent_name = "default";
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::~Rekey()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::has_data() const
{
    return acknowledgement.is_set
	|| (address !=  nullptr && address->has_data())
	|| (algorithm !=  nullptr && algorithm->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (lifetime !=  nullptr && lifetime->has_data())
	|| (retransmit !=  nullptr && retransmit->has_data())
	|| (sig_hash !=  nullptr && sig_hash->has_data())
	|| (transport !=  nullptr && transport->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledgement.operation)
	|| (address !=  nullptr && address->has_operation())
	|| (algorithm !=  nullptr && algorithm->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (lifetime !=  nullptr && lifetime->has_operation())
	|| (retransmit !=  nullptr && retransmit->has_operation())
	|| (sig_hash !=  nullptr && sig_hash->has_operation())
	|| (transport !=  nullptr && transport->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rekey";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rekey' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledgement.is_set || is_set(acknowledgement.operation)) leaf_name_data.push_back(acknowledgement.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Address>();
        }
        return address;
    }

    if(child_yang_name == "algorithm")
    {
        if(algorithm == nullptr)
        {
            algorithm = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Algorithm>();
        }
        return algorithm;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Lifetime>();
        }
        return lifetime;
    }

    if(child_yang_name == "retransmit")
    {
        if(retransmit == nullptr)
        {
            retransmit = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Retransmit>();
        }
        return retransmit;
    }

    if(child_yang_name == "sig-hash")
    {
        if(sig_hash == nullptr)
        {
            sig_hash = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::SigHash>();
        }
        return sig_hash;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(algorithm != nullptr)
    {
        children["algorithm"] = algorithm;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(lifetime != nullptr)
    {
        children["lifetime"] = lifetime;
    }

    if(retransmit != nullptr)
    {
        children["retransmit"] = retransmit;
    }

    if(sig_hash != nullptr)
    {
        children["sig-hash"] = sig_hash;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledgement")
    {
        acknowledgement = value;
    }
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Address::Address()
{
    yang_name = "address"; yang_parent_name = "rekey";
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Address::~Address()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Address::has_data() const
{
    return false;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Address::has_operation() const
{
    return is_set(operation);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Address::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Algorithm::Algorithm()
{
    yang_name = "algorithm"; yang_parent_name = "rekey";
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Algorithm::~Algorithm()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Algorithm::has_data() const
{
    return false;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Algorithm::has_operation() const
{
    return is_set(operation);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Algorithm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "algorithm";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Algorithm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Algorithm' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Algorithm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Algorithm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Algorithm::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Authentication::Authentication()
{
    yang_name = "authentication"; yang_parent_name = "rekey";
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Authentication::~Authentication()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Authentication::has_data() const
{
    return false;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Authentication::has_operation() const
{
    return is_set(operation);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Authentication::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Lifetime::Lifetime()
    :
    days{YType::empty, "days"},
    seconds{YType::empty, "seconds"}
{
    yang_name = "lifetime"; yang_parent_name = "rekey";
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Lifetime::~Lifetime()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Lifetime::has_data() const
{
    return days.is_set
	|| seconds.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Lifetime::has_operation() const
{
    return is_set(operation)
	|| is_set(days.operation)
	|| is_set(seconds.operation);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Lifetime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifetime";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Lifetime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lifetime' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (days.is_set || is_set(days.operation)) leaf_name_data.push_back(days.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Lifetime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Lifetime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Lifetime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "days")
    {
        days = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Retransmit::Retransmit()
{
    yang_name = "retransmit"; yang_parent_name = "rekey";
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Retransmit::~Retransmit()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Retransmit::has_data() const
{
    return false;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Retransmit::has_operation() const
{
    return is_set(operation);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Retransmit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "retransmit";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Retransmit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Retransmit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Retransmit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Retransmit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Retransmit::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::SigHash::SigHash()
    :
    algorithm{YType::empty, "algorithm"}
{
    yang_name = "sig-hash"; yang_parent_name = "rekey";
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::SigHash::~SigHash()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::SigHash::has_data() const
{
    return algorithm.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::SigHash::has_operation() const
{
    return is_set(operation)
	|| is_set(algorithm.operation);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::SigHash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sig-hash";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::SigHash::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SigHash' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (algorithm.is_set || is_set(algorithm.operation)) leaf_name_data.push_back(algorithm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::SigHash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::SigHash::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::SigHash::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "algorithm")
    {
        algorithm = value;
    }
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Transport::Transport()
    :
    unicast{YType::empty, "unicast"}
{
    yang_name = "transport"; yang_parent_name = "rekey";
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Transport::~Transport()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Transport::has_data() const
{
    return unicast.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Transport::has_operation() const
{
    return is_set(operation)
	|| is_set(unicast.operation);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Transport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Transport' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unicast.is_set || is_set(unicast.operation)) leaf_name_data.push_back(unicast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Rekey::Transport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unicast")
    {
        unicast = value;
    }
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::Sa()
    :
    receive_only{YType::empty, "receive-only"}
    	,
    d3p(nullptr) // presence node
	,pair_wise_keying(nullptr) // presence node
{
    yang_name = "sa"; yang_parent_name = "default";
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::~Sa()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::has_data() const
{
    for (std::size_t index=0; index<ipsec.size(); index++)
    {
        if(ipsec[index]->has_data())
            return true;
    }
    return receive_only.is_set
	|| (d3p !=  nullptr && d3p->has_data())
	|| (pair_wise_keying !=  nullptr && pair_wise_keying->has_data());
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::has_operation() const
{
    for (std::size_t index=0; index<ipsec.size(); index++)
    {
        if(ipsec[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(receive_only.operation)
	|| (d3p !=  nullptr && d3p->has_operation())
	|| (pair_wise_keying !=  nullptr && pair_wise_keying->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sa";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sa' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive_only.is_set || is_set(receive_only.operation)) leaf_name_data.push_back(receive_only.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "d3p")
    {
        if(d3p == nullptr)
        {
            d3p = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::D3P>();
        }
        return d3p;
    }

    if(child_yang_name == "ipsec")
    {
        for(auto const & c : ipsec)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::Ipsec>();
        c->parent = this;
        ipsec.push_back(c);
        return c;
    }

    if(child_yang_name == "pair-wise-keying")
    {
        if(pair_wise_keying == nullptr)
        {
            pair_wise_keying = std::make_shared<Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::PairWiseKeying>();
        }
        return pair_wise_keying;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(d3p != nullptr)
    {
        children["d3p"] = d3p;
    }

    for (auto const & c : ipsec)
    {
        children[c->get_segment_path()] = c;
    }

    if(pair_wise_keying != nullptr)
    {
        children["pair-wise-keying"] = pair_wise_keying;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "receive-only")
    {
        receive_only = value;
    }
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::D3P::D3P()
{
    yang_name = "d3p"; yang_parent_name = "sa";
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::D3P::~D3P()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::D3P::has_data() const
{
    return false;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::D3P::has_operation() const
{
    return is_set(operation);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::D3P::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "d3p";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::D3P::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'D3P' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::D3P::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::D3P::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::D3P::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::Ipsec::Ipsec()
    :
    sequence{YType::uint16, "sequence"}
{
    yang_name = "ipsec"; yang_parent_name = "sa";
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::Ipsec::~Ipsec()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::Ipsec::has_data() const
{
    return sequence.is_set;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::Ipsec::has_operation() const
{
    return is_set(operation)
	|| is_set(sequence.operation);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec" <<"[sequence='" <<sequence <<"']";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::Ipsec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipsec' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence.is_set || is_set(sequence.operation)) leaf_name_data.push_back(sequence.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::Ipsec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sequence")
    {
        sequence = value;
    }
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::PairWiseKeying::PairWiseKeying()
{
    yang_name = "pair-wise-keying"; yang_parent_name = "sa";
}

Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::PairWiseKeying::~PairWiseKeying()
{
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::PairWiseKeying::has_data() const
{
    return false;
}

bool Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::PairWiseKeying::has_operation() const
{
    return is_set(operation);
}

std::string Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::PairWiseKeying::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pair-wise-keying";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::PairWiseKeying::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PairWiseKeying' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::PairWiseKeying::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::PairWiseKeying::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Server::Local::Default_::Sa::PairWiseKeying::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Gdoi::Group::Default_::Default_()
    :
    passive{YType::empty, "passive"}
    	,
    client(std::make_shared<Native::Crypto::Gdoi::Group::Default_::Client>())
	,identity(nullptr) // presence node
	,server(std::make_shared<Native::Crypto::Gdoi::Group::Default_::Server>())
{
    client->parent = this;

    server->parent = this;

    yang_name = "default"; yang_parent_name = "group";
}

Native::Crypto::Gdoi::Group::Default_::~Default_()
{
}

bool Native::Crypto::Gdoi::Group::Default_::has_data() const
{
    return passive.is_set
	|| (client !=  nullptr && client->has_data())
	|| (identity !=  nullptr && identity->has_data())
	|| (server !=  nullptr && server->has_data());
}

bool Native::Crypto::Gdoi::Group::Default_::has_operation() const
{
    return is_set(operation)
	|| is_set(passive.operation)
	|| (client !=  nullptr && client->has_operation())
	|| (identity !=  nullptr && identity->has_operation())
	|| (server !=  nullptr && server->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Default_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (passive.is_set || is_set(passive.operation)) leaf_name_data.push_back(passive.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Crypto::Gdoi::Group::Default_::Client>();
        }
        return client;
    }

    if(child_yang_name == "identity")
    {
        if(identity == nullptr)
        {
            identity = std::make_shared<Native::Crypto::Gdoi::Group::Default_::Identity>();
        }
        return identity;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Crypto::Gdoi::Group::Default_::Server>();
        }
        return server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client != nullptr)
    {
        children["client"] = client;
    }

    if(identity != nullptr)
    {
        children["identity"] = identity;
    }

    if(server != nullptr)
    {
        children["server"] = server;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Default_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "passive")
    {
        passive = value;
    }
}

Native::Crypto::Gdoi::Group::Default_::Client::Client()
    :
    bypass_policy{YType::empty, "bypass-policy"},
    transform_sets{YType::empty, "transform-sets"},
    transport_encrypt_key{YType::enumeration, "transport-encrypt-key"}
    	,
    protocol(nullptr) // presence node
	,recovery_check(nullptr) // presence node
	,registration(std::make_shared<Native::Crypto::Gdoi::Group::Default_::Client::Registration>())
	,rekey(std::make_shared<Native::Crypto::Gdoi::Group::Default_::Client::Rekey>())
	,status(std::make_shared<Native::Crypto::Gdoi::Group::Default_::Client::Status>())
{
    registration->parent = this;

    rekey->parent = this;

    status->parent = this;

    yang_name = "client"; yang_parent_name = "default";
}

Native::Crypto::Gdoi::Group::Default_::Client::~Client()
{
}

bool Native::Crypto::Gdoi::Group::Default_::Client::has_data() const
{
    return bypass_policy.is_set
	|| transform_sets.is_set
	|| transport_encrypt_key.is_set
	|| (protocol !=  nullptr && protocol->has_data())
	|| (recovery_check !=  nullptr && recovery_check->has_data())
	|| (registration !=  nullptr && registration->has_data())
	|| (rekey !=  nullptr && rekey->has_data())
	|| (status !=  nullptr && status->has_data());
}

bool Native::Crypto::Gdoi::Group::Default_::Client::has_operation() const
{
    return is_set(operation)
	|| is_set(bypass_policy.operation)
	|| is_set(transform_sets.operation)
	|| is_set(transport_encrypt_key.operation)
	|| (protocol !=  nullptr && protocol->has_operation())
	|| (recovery_check !=  nullptr && recovery_check->has_operation())
	|| (registration !=  nullptr && registration->has_operation())
	|| (rekey !=  nullptr && rekey->has_operation())
	|| (status !=  nullptr && status->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Default_::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Default_::Client::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Client' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bypass_policy.is_set || is_set(bypass_policy.operation)) leaf_name_data.push_back(bypass_policy.get_name_leafdata());
    if (transform_sets.is_set || is_set(transform_sets.operation)) leaf_name_data.push_back(transform_sets.get_name_leafdata());
    if (transport_encrypt_key.is_set || is_set(transport_encrypt_key.operation)) leaf_name_data.push_back(transport_encrypt_key.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Default_::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol")
    {
        if(protocol == nullptr)
        {
            protocol = std::make_shared<Native::Crypto::Gdoi::Group::Default_::Client::Protocol>();
        }
        return protocol;
    }

    if(child_yang_name == "recovery-check")
    {
        if(recovery_check == nullptr)
        {
            recovery_check = std::make_shared<Native::Crypto::Gdoi::Group::Default_::Client::RecoveryCheck>();
        }
        return recovery_check;
    }

    if(child_yang_name == "registration")
    {
        if(registration == nullptr)
        {
            registration = std::make_shared<Native::Crypto::Gdoi::Group::Default_::Client::Registration>();
        }
        return registration;
    }

    if(child_yang_name == "rekey")
    {
        if(rekey == nullptr)
        {
            rekey = std::make_shared<Native::Crypto::Gdoi::Group::Default_::Client::Rekey>();
        }
        return rekey;
    }

    if(child_yang_name == "status")
    {
        if(status == nullptr)
        {
            status = std::make_shared<Native::Crypto::Gdoi::Group::Default_::Client::Status>();
        }
        return status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Default_::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(protocol != nullptr)
    {
        children["protocol"] = protocol;
    }

    if(recovery_check != nullptr)
    {
        children["recovery-check"] = recovery_check;
    }

    if(registration != nullptr)
    {
        children["registration"] = registration;
    }

    if(rekey != nullptr)
    {
        children["rekey"] = rekey;
    }

    if(status != nullptr)
    {
        children["status"] = status;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Default_::Client::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bypass-policy")
    {
        bypass_policy = value;
    }
    if(value_path == "transform-sets")
    {
        transform_sets = value;
    }
    if(value_path == "transport-encrypt-key")
    {
        transport_encrypt_key = value;
    }
}

Native::Crypto::Gdoi::Group::Default_::Client::Protocol::Protocol()
{
    yang_name = "protocol"; yang_parent_name = "client";
}

Native::Crypto::Gdoi::Group::Default_::Client::Protocol::~Protocol()
{
}

bool Native::Crypto::Gdoi::Group::Default_::Client::Protocol::has_data() const
{
    return false;
}

bool Native::Crypto::Gdoi::Group::Default_::Client::Protocol::has_operation() const
{
    return is_set(operation);
}

std::string Native::Crypto::Gdoi::Group::Default_::Client::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Default_::Client::Protocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Protocol' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Default_::Client::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Default_::Client::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Default_::Client::Protocol::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Gdoi::Group::Default_::Client::RecoveryCheck::RecoveryCheck()
{
    yang_name = "recovery-check"; yang_parent_name = "client";
}

Native::Crypto::Gdoi::Group::Default_::Client::RecoveryCheck::~RecoveryCheck()
{
}

bool Native::Crypto::Gdoi::Group::Default_::Client::RecoveryCheck::has_data() const
{
    return false;
}

bool Native::Crypto::Gdoi::Group::Default_::Client::RecoveryCheck::has_operation() const
{
    return is_set(operation);
}

std::string Native::Crypto::Gdoi::Group::Default_::Client::RecoveryCheck::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "recovery-check";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Default_::Client::RecoveryCheck::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RecoveryCheck' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Default_::Client::RecoveryCheck::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Default_::Client::RecoveryCheck::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Default_::Client::RecoveryCheck::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Gdoi::Group::Default_::Client::Registration::Registration()
    :
    interface{YType::empty, "interface"}
{
    yang_name = "registration"; yang_parent_name = "client";
}

Native::Crypto::Gdoi::Group::Default_::Client::Registration::~Registration()
{
}

bool Native::Crypto::Gdoi::Group::Default_::Client::Registration::has_data() const
{
    return interface.is_set;
}

bool Native::Crypto::Gdoi::Group::Default_::Client::Registration::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation);
}

std::string Native::Crypto::Gdoi::Group::Default_::Client::Registration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registration";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Default_::Client::Registration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Registration' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Default_::Client::Registration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Default_::Client::Registration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Default_::Client::Registration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
}

Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Rekey()
    :
    encryption(nullptr) // presence node
	,hash(nullptr) // presence node
{
    yang_name = "rekey"; yang_parent_name = "client";
}

Native::Crypto::Gdoi::Group::Default_::Client::Rekey::~Rekey()
{
}

bool Native::Crypto::Gdoi::Group::Default_::Client::Rekey::has_data() const
{
    return (encryption !=  nullptr && encryption->has_data())
	|| (hash !=  nullptr && hash->has_data());
}

bool Native::Crypto::Gdoi::Group::Default_::Client::Rekey::has_operation() const
{
    return is_set(operation)
	|| (encryption !=  nullptr && encryption->has_operation())
	|| (hash !=  nullptr && hash->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Default_::Client::Rekey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rekey";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Default_::Client::Rekey::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rekey' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Default_::Client::Rekey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Encryption>();
        }
        return encryption;
    }

    if(child_yang_name == "hash")
    {
        if(hash == nullptr)
        {
            hash = std::make_shared<Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Hash>();
        }
        return hash;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Default_::Client::Rekey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(encryption != nullptr)
    {
        children["encryption"] = encryption;
    }

    if(hash != nullptr)
    {
        children["hash"] = hash;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Default_::Client::Rekey::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Encryption::Encryption()
{
    yang_name = "encryption"; yang_parent_name = "rekey";
}

Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Encryption::~Encryption()
{
}

bool Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Encryption::has_data() const
{
    return false;
}

bool Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Encryption::has_operation() const
{
    return is_set(operation);
}

std::string Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Encryption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Encryption' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Encryption::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Hash::Hash()
{
    yang_name = "hash"; yang_parent_name = "rekey";
}

Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Hash::~Hash()
{
}

bool Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Hash::has_data() const
{
    return false;
}

bool Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Hash::has_operation() const
{
    return is_set(operation);
}

std::string Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Hash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hash";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Hash::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hash' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Hash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Hash::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Default_::Client::Rekey::Hash::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Gdoi::Group::Default_::Client::Status::Status()
    :
    active_sa(nullptr) // presence node
{
    yang_name = "status"; yang_parent_name = "client";
}

Native::Crypto::Gdoi::Group::Default_::Client::Status::~Status()
{
}

bool Native::Crypto::Gdoi::Group::Default_::Client::Status::has_data() const
{
    return (active_sa !=  nullptr && active_sa->has_data());
}

bool Native::Crypto::Gdoi::Group::Default_::Client::Status::has_operation() const
{
    return is_set(operation)
	|| (active_sa !=  nullptr && active_sa->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Default_::Client::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Default_::Client::Status::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Status' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Default_::Client::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-sa")
    {
        if(active_sa == nullptr)
        {
            active_sa = std::make_shared<Native::Crypto::Gdoi::Group::Default_::Client::Status::ActiveSa>();
        }
        return active_sa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Default_::Client::Status::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active_sa != nullptr)
    {
        children["active-sa"] = active_sa;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Default_::Client::Status::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Gdoi::Group::Default_::Client::Status::ActiveSa::ActiveSa()
{
    yang_name = "active-sa"; yang_parent_name = "status";
}

Native::Crypto::Gdoi::Group::Default_::Client::Status::ActiveSa::~ActiveSa()
{
}

bool Native::Crypto::Gdoi::Group::Default_::Client::Status::ActiveSa::has_data() const
{
    return false;
}

bool Native::Crypto::Gdoi::Group::Default_::Client::Status::ActiveSa::has_operation() const
{
    return is_set(operation);
}

std::string Native::Crypto::Gdoi::Group::Default_::Client::Status::ActiveSa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-sa";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Default_::Client::Status::ActiveSa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActiveSa' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Default_::Client::Status::ActiveSa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Default_::Client::Status::ActiveSa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Default_::Client::Status::ActiveSa::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Gdoi::Group::Default_::Identity::Identity()
{
    yang_name = "identity"; yang_parent_name = "default";
}

Native::Crypto::Gdoi::Group::Default_::Identity::~Identity()
{
}

bool Native::Crypto::Gdoi::Group::Default_::Identity::has_data() const
{
    return false;
}

bool Native::Crypto::Gdoi::Group::Default_::Identity::has_operation() const
{
    return is_set(operation);
}

std::string Native::Crypto::Gdoi::Group::Default_::Identity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identity";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Default_::Identity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Identity' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Default_::Identity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Default_::Identity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Default_::Identity::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Gdoi::Group::Default_::Server::Server()
    :
    local{YType::empty, "local"}
    	,
    address(std::make_shared<Native::Crypto::Gdoi::Group::Default_::Server::Address>())
	,hostname(std::make_shared<Native::Crypto::Gdoi::Group::Default_::Server::Hostname>())
{
    address->parent = this;

    hostname->parent = this;

    yang_name = "server"; yang_parent_name = "default";
}

Native::Crypto::Gdoi::Group::Default_::Server::~Server()
{
}

bool Native::Crypto::Gdoi::Group::Default_::Server::has_data() const
{
    return local.is_set
	|| (address !=  nullptr && address->has_data())
	|| (hostname !=  nullptr && hostname->has_data());
}

bool Native::Crypto::Gdoi::Group::Default_::Server::has_operation() const
{
    return is_set(operation)
	|| is_set(local.operation)
	|| (address !=  nullptr && address->has_operation())
	|| (hostname !=  nullptr && hostname->has_operation());
}

std::string Native::Crypto::Gdoi::Group::Default_::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Default_::Server::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Server' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.operation)) leaf_name_data.push_back(local.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Default_::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Gdoi::Group::Default_::Server::Address>();
        }
        return address;
    }

    if(child_yang_name == "hostname")
    {
        if(hostname == nullptr)
        {
            hostname = std::make_shared<Native::Crypto::Gdoi::Group::Default_::Server::Hostname>();
        }
        return hostname;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Default_::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(hostname != nullptr)
    {
        children["hostname"] = hostname;
    }

    return children;
}

void Native::Crypto::Gdoi::Group::Default_::Server::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local")
    {
        local = value;
    }
}

Native::Crypto::Gdoi::Group::Default_::Server::Address::Address()
    :
    ipv4{YType::str, "ipv4"}
{
    yang_name = "address"; yang_parent_name = "server";
}

Native::Crypto::Gdoi::Group::Default_::Server::Address::~Address()
{
}

bool Native::Crypto::Gdoi::Group::Default_::Server::Address::has_data() const
{
    return ipv4.is_set;
}

bool Native::Crypto::Gdoi::Group::Default_::Server::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation);
}

std::string Native::Crypto::Gdoi::Group::Default_::Server::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Default_::Server::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Default_::Server::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Default_::Server::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Default_::Server::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
}

Native::Crypto::Gdoi::Group::Default_::Server::Hostname::Hostname()
    :
    ipv4{YType::str, "ipv4"}
{
    yang_name = "hostname"; yang_parent_name = "server";
}

Native::Crypto::Gdoi::Group::Default_::Server::Hostname::~Hostname()
{
}

bool Native::Crypto::Gdoi::Group::Default_::Server::Hostname::has_data() const
{
    return ipv4.is_set;
}

bool Native::Crypto::Gdoi::Group::Default_::Server::Hostname::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation);
}

std::string Native::Crypto::Gdoi::Group::Default_::Server::Hostname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hostname";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Gdoi::Group::Default_::Server::Hostname::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hostname' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Gdoi::Group::Default_::Server::Hostname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Gdoi::Group::Default_::Server::Hostname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Gdoi::Group::Default_::Server::Hostname::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
}

Native::Crypto::Ikev2::Ikev2()
    :
    certificate_cache{YType::uint16, "certificate-cache"},
    cluster{YType::empty, "cluster"},
    cookie_challenge{YType::uint16, "cookie-challenge"},
    disconnect_revoked_peers{YType::empty, "disconnect-revoked-peers"},
    name_mangler{YType::str, "name-mangler"},
    window{YType::uint8, "window"}
    	,
    authorization(std::make_shared<Native::Crypto::Ikev2::Authorization>())
	,client(std::make_shared<Native::Crypto::Ikev2::Client>())
	,cts(std::make_shared<Native::Crypto::Ikev2::Cts>())
	,diagnose(std::make_shared<Native::Crypto::Ikev2::Diagnose>())
	,dpd_container(std::make_shared<Native::Crypto::Ikev2::DpdContainer>())
	,fragmentation(nullptr) // presence node
	,http_url(std::make_shared<Native::Crypto::Ikev2::HttpUrl>())
	,limit(std::make_shared<Native::Crypto::Ikev2::Limit>())
	,nat(std::make_shared<Native::Crypto::Ikev2::Nat>())
	,reconnect(std::make_shared<Native::Crypto::Ikev2::Reconnect>())
	,redirect(std::make_shared<Native::Crypto::Ikev2::Redirect>())
{
    authorization->parent = this;

    client->parent = this;

    cts->parent = this;

    diagnose->parent = this;

    dpd_container->parent = this;

    http_url->parent = this;

    limit->parent = this;

    nat->parent = this;

    reconnect->parent = this;

    redirect->parent = this;

    yang_name = "ikev2"; yang_parent_name = "crypto";
}

Native::Crypto::Ikev2::~Ikev2()
{
}

bool Native::Crypto::Ikev2::has_data() const
{
    for (std::size_t index=0; index<keyring.size(); index++)
    {
        if(keyring[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<policy.size(); index++)
    {
        if(policy[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<proposal.size(); index++)
    {
        if(proposal[index]->has_data())
            return true;
    }
    return certificate_cache.is_set
	|| cluster.is_set
	|| cookie_challenge.is_set
	|| disconnect_revoked_peers.is_set
	|| name_mangler.is_set
	|| window.is_set
	|| (authorization !=  nullptr && authorization->has_data())
	|| (client !=  nullptr && client->has_data())
	|| (cts !=  nullptr && cts->has_data())
	|| (diagnose !=  nullptr && diagnose->has_data())
	|| (dpd_container !=  nullptr && dpd_container->has_data())
	|| (fragmentation !=  nullptr && fragmentation->has_data())
	|| (http_url !=  nullptr && http_url->has_data())
	|| (limit !=  nullptr && limit->has_data())
	|| (nat !=  nullptr && nat->has_data())
	|| (reconnect !=  nullptr && reconnect->has_data())
	|| (redirect !=  nullptr && redirect->has_data());
}

bool Native::Crypto::Ikev2::has_operation() const
{
    for (std::size_t index=0; index<keyring.size(); index++)
    {
        if(keyring[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<policy.size(); index++)
    {
        if(policy[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<profile.size(); index++)
    {
        if(profile[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<proposal.size(); index++)
    {
        if(proposal[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(certificate_cache.operation)
	|| is_set(cluster.operation)
	|| is_set(cookie_challenge.operation)
	|| is_set(disconnect_revoked_peers.operation)
	|| is_set(name_mangler.operation)
	|| is_set(window.operation)
	|| (authorization !=  nullptr && authorization->has_operation())
	|| (client !=  nullptr && client->has_operation())
	|| (cts !=  nullptr && cts->has_operation())
	|| (diagnose !=  nullptr && diagnose->has_operation())
	|| (dpd_container !=  nullptr && dpd_container->has_operation())
	|| (fragmentation !=  nullptr && fragmentation->has_operation())
	|| (http_url !=  nullptr && http_url->has_operation())
	|| (limit !=  nullptr && limit->has_operation())
	|| (nat !=  nullptr && nat->has_operation())
	|| (reconnect !=  nullptr && reconnect->has_operation())
	|| (redirect !=  nullptr && redirect->has_operation());
}

std::string Native::Crypto::Ikev2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:ikev2";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (certificate_cache.is_set || is_set(certificate_cache.operation)) leaf_name_data.push_back(certificate_cache.get_name_leafdata());
    if (cluster.is_set || is_set(cluster.operation)) leaf_name_data.push_back(cluster.get_name_leafdata());
    if (cookie_challenge.is_set || is_set(cookie_challenge.operation)) leaf_name_data.push_back(cookie_challenge.get_name_leafdata());
    if (disconnect_revoked_peers.is_set || is_set(disconnect_revoked_peers.operation)) leaf_name_data.push_back(disconnect_revoked_peers.get_name_leafdata());
    if (name_mangler.is_set || is_set(name_mangler.operation)) leaf_name_data.push_back(name_mangler.get_name_leafdata());
    if (window.is_set || is_set(window.operation)) leaf_name_data.push_back(window.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Native::Crypto::Ikev2::Authorization>();
        }
        return authorization;
    }

    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Crypto::Ikev2::Client>();
        }
        return client;
    }

    if(child_yang_name == "cts")
    {
        if(cts == nullptr)
        {
            cts = std::make_shared<Native::Crypto::Ikev2::Cts>();
        }
        return cts;
    }

    if(child_yang_name == "diagnose")
    {
        if(diagnose == nullptr)
        {
            diagnose = std::make_shared<Native::Crypto::Ikev2::Diagnose>();
        }
        return diagnose;
    }

    if(child_yang_name == "dpd-container")
    {
        if(dpd_container == nullptr)
        {
            dpd_container = std::make_shared<Native::Crypto::Ikev2::DpdContainer>();
        }
        return dpd_container;
    }

    if(child_yang_name == "fragmentation")
    {
        if(fragmentation == nullptr)
        {
            fragmentation = std::make_shared<Native::Crypto::Ikev2::Fragmentation>();
        }
        return fragmentation;
    }

    if(child_yang_name == "http-url")
    {
        if(http_url == nullptr)
        {
            http_url = std::make_shared<Native::Crypto::Ikev2::HttpUrl>();
        }
        return http_url;
    }

    if(child_yang_name == "keyring")
    {
        for(auto const & c : keyring)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Ikev2::Keyring>();
        c->parent = this;
        keyring.push_back(c);
        return c;
    }

    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Crypto::Ikev2::Limit>();
        }
        return limit;
    }

    if(child_yang_name == "nat")
    {
        if(nat == nullptr)
        {
            nat = std::make_shared<Native::Crypto::Ikev2::Nat>();
        }
        return nat;
    }

    if(child_yang_name == "policy")
    {
        for(auto const & c : policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Ikev2::Policy>();
        c->parent = this;
        policy.push_back(c);
        return c;
    }

    if(child_yang_name == "profile")
    {
        for(auto const & c : profile)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Ikev2::Profile>();
        c->parent = this;
        profile.push_back(c);
        return c;
    }

    if(child_yang_name == "proposal")
    {
        for(auto const & c : proposal)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Ikev2::Proposal>();
        c->parent = this;
        proposal.push_back(c);
        return c;
    }

    if(child_yang_name == "reconnect")
    {
        if(reconnect == nullptr)
        {
            reconnect = std::make_shared<Native::Crypto::Ikev2::Reconnect>();
        }
        return reconnect;
    }

    if(child_yang_name == "redirect")
    {
        if(redirect == nullptr)
        {
            redirect = std::make_shared<Native::Crypto::Ikev2::Redirect>();
        }
        return redirect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authorization != nullptr)
    {
        children["authorization"] = authorization;
    }

    if(client != nullptr)
    {
        children["client"] = client;
    }

    if(cts != nullptr)
    {
        children["cts"] = cts;
    }

    if(diagnose != nullptr)
    {
        children["diagnose"] = diagnose;
    }

    if(dpd_container != nullptr)
    {
        children["dpd-container"] = dpd_container;
    }

    if(fragmentation != nullptr)
    {
        children["fragmentation"] = fragmentation;
    }

    if(http_url != nullptr)
    {
        children["http-url"] = http_url;
    }

    for (auto const & c : keyring)
    {
        children[c->get_segment_path()] = c;
    }

    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    if(nat != nullptr)
    {
        children["nat"] = nat;
    }

    for (auto const & c : policy)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : profile)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : proposal)
    {
        children[c->get_segment_path()] = c;
    }

    if(reconnect != nullptr)
    {
        children["reconnect"] = reconnect;
    }

    if(redirect != nullptr)
    {
        children["redirect"] = redirect;
    }

    return children;
}

void Native::Crypto::Ikev2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "certificate-cache")
    {
        certificate_cache = value;
    }
    if(value_path == "cluster")
    {
        cluster = value;
    }
    if(value_path == "cookie-challenge")
    {
        cookie_challenge = value;
    }
    if(value_path == "disconnect-revoked-peers")
    {
        disconnect_revoked_peers = value;
    }
    if(value_path == "name-mangler")
    {
        name_mangler = value;
    }
    if(value_path == "window")
    {
        window = value;
    }
}

Native::Crypto::Ikev2::Authorization::Authorization()
{
    yang_name = "authorization"; yang_parent_name = "ikev2";
}

Native::Crypto::Ikev2::Authorization::~Authorization()
{
}

bool Native::Crypto::Ikev2::Authorization::has_data() const
{
    for (std::size_t index=0; index<policy.size(); index++)
    {
        if(policy[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Ikev2::Authorization::has_operation() const
{
    for (std::size_t index=0; index<policy.size(); index++)
    {
        if(policy[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Crypto::Ikev2::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Authorization::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy")
    {
        for(auto const & c : policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Ikev2::Authorization::Policy>();
        c->parent = this;
        policy.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : policy)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Ikev2::Authorization::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Ikev2::Authorization::Policy::Policy()
    :
    policy_name{YType::str, "policy-name"}
    	,
    route(std::make_shared<Native::Crypto::Ikev2::Authorization::Policy::Route>())
{
    route->parent = this;

    yang_name = "policy"; yang_parent_name = "authorization";
}

Native::Crypto::Ikev2::Authorization::Policy::~Policy()
{
}

bool Native::Crypto::Ikev2::Authorization::Policy::has_data() const
{
    return policy_name.is_set
	|| (route !=  nullptr && route->has_data());
}

bool Native::Crypto::Ikev2::Authorization::Policy::has_operation() const
{
    return is_set(operation)
	|| is_set(policy_name.operation)
	|| (route !=  nullptr && route->has_operation());
}

std::string Native::Crypto::Ikev2::Authorization::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy" <<"[policy-name='" <<policy_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Authorization::Policy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/authorization/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Authorization::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        if(route == nullptr)
        {
            route = std::make_shared<Native::Crypto::Ikev2::Authorization::Policy::Route>();
        }
        return route;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Authorization::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route != nullptr)
    {
        children["route"] = route;
    }

    return children;
}

void Native::Crypto::Ikev2::Authorization::Policy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
}

Native::Crypto::Ikev2::Authorization::Policy::Route::Route()
    :
    set(std::make_shared<Native::Crypto::Ikev2::Authorization::Policy::Route::Set>())
{
    set->parent = this;

    yang_name = "route"; yang_parent_name = "policy";
}

Native::Crypto::Ikev2::Authorization::Policy::Route::~Route()
{
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::has_data() const
{
    return (set !=  nullptr && set->has_data());
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::has_operation() const
{
    return is_set(operation)
	|| (set !=  nullptr && set->has_operation());
}

std::string Native::Crypto::Ikev2::Authorization::Policy::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Authorization::Policy::Route::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Route' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Authorization::Policy::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "set")
    {
        if(set == nullptr)
        {
            set = std::make_shared<Native::Crypto::Ikev2::Authorization::Policy::Route::Set>();
        }
        return set;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Authorization::Policy::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(set != nullptr)
    {
        children["set"] = set;
    }

    return children;
}

void Native::Crypto::Ikev2::Authorization::Policy::Route::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Set()
    :
    interface(std::make_shared<Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface>())
{
    interface->parent = this;

    yang_name = "set"; yang_parent_name = "route";
}

Native::Crypto::Ikev2::Authorization::Policy::Route::Set::~Set()
{
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::Set::has_data() const
{
    return (interface !=  nullptr && interface->has_data());
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::Set::has_operation() const
{
    return is_set(operation)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::Crypto::Ikev2::Authorization::Policy::Route::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Authorization::Policy::Route::Set::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Set' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Authorization::Policy::Route::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Authorization::Policy::Route::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void Native::Crypto::Ikev2::Authorization::Policy::Route::Set::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::Interface()
    :
    interface_default{YType::empty, "interface-default"}
{
    yang_name = "interface"; yang_parent_name = "set";
}

Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::~Interface()
{
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::has_data() const
{
    for (std::size_t index=0; index<interface_list.size(); index++)
    {
        if(interface_list[index]->has_data())
            return true;
    }
    return interface_default.is_set;
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::has_operation() const
{
    for (std::size_t index=0; index<interface_list.size(); index++)
    {
        if(interface_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_default.operation);
}

std::string Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_default.is_set || is_set(interface_default.operation)) leaf_name_data.push_back(interface_default.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-list")
    {
        for(auto const & c : interface_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::InterfaceList>();
        c->parent = this;
        interface_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-default")
    {
        interface_default = value;
    }
}

Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::InterfaceList::InterfaceList()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "interface-list"; yang_parent_name = "interface";
}

Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::InterfaceList::~InterfaceList()
{
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::InterfaceList::has_data() const
{
    return interface_name.is_set;
}

bool Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::InterfaceList::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-list" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::InterfaceList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::InterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Authorization::Policy::Route::Set::Interface::InterfaceList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Native::Crypto::Ikev2::Client::Client()
{
    yang_name = "client"; yang_parent_name = "ikev2";
}

Native::Crypto::Ikev2::Client::~Client()
{
}

bool Native::Crypto::Ikev2::Client::has_data() const
{
    for (std::size_t index=0; index<flexvpn.size(); index++)
    {
        if(flexvpn[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Ikev2::Client::has_operation() const
{
    for (std::size_t index=0; index<flexvpn.size(); index++)
    {
        if(flexvpn[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Crypto::Ikev2::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Client::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flexvpn")
    {
        for(auto const & c : flexvpn)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Ikev2::Client::Flexvpn>();
        c->parent = this;
        flexvpn.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : flexvpn)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Ikev2::Client::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Ikev2::Client::Flexvpn::Flexvpn()
    :
    flexvpn_name{YType::str, "flexvpn-name"}
    	,
    client(std::make_shared<Native::Crypto::Ikev2::Client::Flexvpn::Client_>())
	,connect(std::make_shared<Native::Crypto::Ikev2::Client::Flexvpn::Connect>())
{
    client->parent = this;

    connect->parent = this;

    yang_name = "flexvpn"; yang_parent_name = "client";
}

Native::Crypto::Ikev2::Client::Flexvpn::~Flexvpn()
{
}

bool Native::Crypto::Ikev2::Client::Flexvpn::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<source.size(); index++)
    {
        if(source[index]->has_data())
            return true;
    }
    return flexvpn_name.is_set
	|| (client !=  nullptr && client->has_data())
	|| (connect !=  nullptr && connect->has_data());
}

bool Native::Crypto::Ikev2::Client::Flexvpn::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<source.size(); index++)
    {
        if(source[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(flexvpn_name.operation)
	|| (client !=  nullptr && client->has_operation())
	|| (connect !=  nullptr && connect->has_operation());
}

std::string Native::Crypto::Ikev2::Client::Flexvpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flexvpn" <<"[flexvpn-name='" <<flexvpn_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Client::Flexvpn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/client/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flexvpn_name.is_set || is_set(flexvpn_name.operation)) leaf_name_data.push_back(flexvpn_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Client::Flexvpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Crypto::Ikev2::Client::Flexvpn::Client_>();
        }
        return client;
    }

    if(child_yang_name == "connect")
    {
        if(connect == nullptr)
        {
            connect = std::make_shared<Native::Crypto::Ikev2::Client::Flexvpn::Connect>();
        }
        return connect;
    }

    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Ikev2::Client::Flexvpn::Peer>();
        c->parent = this;
        peer.push_back(c);
        return c;
    }

    if(child_yang_name == "source")
    {
        for(auto const & c : source)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Ikev2::Client::Flexvpn::Source>();
        c->parent = this;
        source.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Client::Flexvpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client != nullptr)
    {
        children["client"] = client;
    }

    if(connect != nullptr)
    {
        children["connect"] = connect;
    }

    for (auto const & c : peer)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : source)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Ikev2::Client::Flexvpn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flexvpn-name")
    {
        flexvpn_name = value;
    }
}

Native::Crypto::Ikev2::Client::Flexvpn::Peer::Peer()
    :
    peer_id{YType::uint8, "peer-id"}
    	,
    peer_id_container(std::make_shared<Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdContainer>())
{
    peer_id_container->parent = this;

    yang_name = "peer"; yang_parent_name = "flexvpn";
}

Native::Crypto::Ikev2::Client::Flexvpn::Peer::~Peer()
{
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Peer::has_data() const
{
    return peer_id.is_set
	|| (peer_id_container !=  nullptr && peer_id_container->has_data());
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(peer_id.operation)
	|| (peer_id_container !=  nullptr && peer_id_container->has_operation());
}

std::string Native::Crypto::Ikev2::Client::Flexvpn::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[peer-id='" <<peer_id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Client::Flexvpn::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_id.is_set || is_set(peer_id.operation)) leaf_name_data.push_back(peer_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Client::Flexvpn::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-id-container")
    {
        if(peer_id_container == nullptr)
        {
            peer_id_container = std::make_shared<Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdContainer>();
        }
        return peer_id_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Client::Flexvpn::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peer_id_container != nullptr)
    {
        children["peer-id-container"] = peer_id_container;
    }

    return children;
}

void Native::Crypto::Ikev2::Client::Flexvpn::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-id")
    {
        peer_id = value;
    }
}

Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdContainer::PeerIdContainer()
    :
    peer_address{YType::str, "peer-address"},
    track{YType::uint16, "track"},
    up_down{YType::enumeration, "up-down"}
{
    yang_name = "peer-id-container"; yang_parent_name = "peer";
}

Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdContainer::~PeerIdContainer()
{
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdContainer::has_data() const
{
    return peer_address.is_set
	|| track.is_set
	|| up_down.is_set;
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdContainer::has_operation() const
{
    return is_set(operation)
	|| is_set(peer_address.operation)
	|| is_set(track.operation)
	|| is_set(up_down.operation);
}

std::string Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-id-container";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerIdContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_address.is_set || is_set(peer_address.operation)) leaf_name_data.push_back(peer_address.get_name_leafdata());
    if (track.is_set || is_set(track.operation)) leaf_name_data.push_back(track.get_name_leafdata());
    if (up_down.is_set || is_set(up_down.operation)) leaf_name_data.push_back(up_down.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdContainer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-address")
    {
        peer_address = value;
    }
    if(value_path == "track")
    {
        track = value;
    }
    if(value_path == "up-down")
    {
        up_down = value;
    }
}

Native::Crypto::Ikev2::Client::Flexvpn::Connect::Connect()
    :
    track{YType::uint16, "track"},
    up_down{YType::enumeration, "up-down"}
{
    yang_name = "connect"; yang_parent_name = "flexvpn";
}

Native::Crypto::Ikev2::Client::Flexvpn::Connect::~Connect()
{
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Connect::has_data() const
{
    return track.is_set
	|| up_down.is_set;
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Connect::has_operation() const
{
    return is_set(operation)
	|| is_set(track.operation)
	|| is_set(up_down.operation);
}

std::string Native::Crypto::Ikev2::Client::Flexvpn::Connect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connect";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Client::Flexvpn::Connect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Connect' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (track.is_set || is_set(track.operation)) leaf_name_data.push_back(track.get_name_leafdata());
    if (up_down.is_set || is_set(up_down.operation)) leaf_name_data.push_back(up_down.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Client::Flexvpn::Connect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Client::Flexvpn::Connect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Client::Flexvpn::Connect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "track")
    {
        track = value;
    }
    if(value_path == "up-down")
    {
        up_down = value;
    }
}

Native::Crypto::Ikev2::Client::Flexvpn::Source::Source()
    :
    source_id{YType::uint8, "source-id"}
    	,
    source_id_container(std::make_shared<Native::Crypto::Ikev2::Client::Flexvpn::Source::SourceIdContainer>())
{
    source_id_container->parent = this;

    yang_name = "source"; yang_parent_name = "flexvpn";
}

Native::Crypto::Ikev2::Client::Flexvpn::Source::~Source()
{
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Source::has_data() const
{
    return source_id.is_set
	|| (source_id_container !=  nullptr && source_id_container->has_data());
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Source::has_operation() const
{
    return is_set(operation)
	|| is_set(source_id.operation)
	|| (source_id_container !=  nullptr && source_id_container->has_operation());
}

std::string Native::Crypto::Ikev2::Client::Flexvpn::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source" <<"[source-id='" <<source_id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Client::Flexvpn::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Source' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_id.is_set || is_set(source_id.operation)) leaf_name_data.push_back(source_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Client::Flexvpn::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-id-container")
    {
        if(source_id_container == nullptr)
        {
            source_id_container = std::make_shared<Native::Crypto::Ikev2::Client::Flexvpn::Source::SourceIdContainer>();
        }
        return source_id_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Client::Flexvpn::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source_id_container != nullptr)
    {
        children["source-id-container"] = source_id_container;
    }

    return children;
}

void Native::Crypto::Ikev2::Client::Flexvpn::Source::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "source-id")
    {
        source_id = value;
    }
}

Native::Crypto::Ikev2::Client::Flexvpn::Source::SourceIdContainer::SourceIdContainer()
    :
    interface_name{YType::str, "interface-name"},
    track{YType::uint16, "track"}
{
    yang_name = "source-id-container"; yang_parent_name = "source";
}

Native::Crypto::Ikev2::Client::Flexvpn::Source::SourceIdContainer::~SourceIdContainer()
{
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Source::SourceIdContainer::has_data() const
{
    return interface_name.is_set
	|| track.is_set;
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Source::SourceIdContainer::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(track.operation);
}

std::string Native::Crypto::Ikev2::Client::Flexvpn::Source::SourceIdContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-id-container";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Client::Flexvpn::Source::SourceIdContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourceIdContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (track.is_set || is_set(track.operation)) leaf_name_data.push_back(track.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Client::Flexvpn::Source::SourceIdContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Client::Flexvpn::Source::SourceIdContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Client::Flexvpn::Source::SourceIdContainer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "track")
    {
        track = value;
    }
}

Native::Crypto::Ikev2::Client::Flexvpn::Client_::Client_()
    :
    connect(std::make_shared<Native::Crypto::Ikev2::Client::Flexvpn::Client_::Connect>())
{
    connect->parent = this;

    yang_name = "client"; yang_parent_name = "flexvpn";
}

Native::Crypto::Ikev2::Client::Flexvpn::Client_::~Client_()
{
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Client_::has_data() const
{
    return (connect !=  nullptr && connect->has_data());
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Client_::has_operation() const
{
    return is_set(operation)
	|| (connect !=  nullptr && connect->has_operation());
}

std::string Native::Crypto::Ikev2::Client::Flexvpn::Client_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Client::Flexvpn::Client_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Client_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Client::Flexvpn::Client_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connect")
    {
        if(connect == nullptr)
        {
            connect = std::make_shared<Native::Crypto::Ikev2::Client::Flexvpn::Client_::Connect>();
        }
        return connect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Client::Flexvpn::Client_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(connect != nullptr)
    {
        children["connect"] = connect;
    }

    return children;
}

void Native::Crypto::Ikev2::Client::Flexvpn::Client_::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Ikev2::Client::Flexvpn::Client_::Connect::Connect()
    :
    tunnel{YType::uint32, "Tunnel"}
{
    yang_name = "connect"; yang_parent_name = "client";
}

Native::Crypto::Ikev2::Client::Flexvpn::Client_::Connect::~Connect()
{
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Client_::Connect::has_data() const
{
    return tunnel.is_set;
}

bool Native::Crypto::Ikev2::Client::Flexvpn::Client_::Connect::has_operation() const
{
    return is_set(operation)
	|| is_set(tunnel.operation);
}

std::string Native::Crypto::Ikev2::Client::Flexvpn::Client_::Connect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connect";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Client::Flexvpn::Client_::Connect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Connect' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel.is_set || is_set(tunnel.operation)) leaf_name_data.push_back(tunnel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Client::Flexvpn::Client_::Connect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Client::Flexvpn::Client_::Connect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Client::Flexvpn::Client_::Connect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Tunnel")
    {
        tunnel = value;
    }
}

Native::Crypto::Ikev2::Cts::Cts()
    :
    sgt{YType::empty, "sgt"}
{
    yang_name = "cts"; yang_parent_name = "ikev2";
}

Native::Crypto::Ikev2::Cts::~Cts()
{
}

bool Native::Crypto::Ikev2::Cts::has_data() const
{
    return sgt.is_set;
}

bool Native::Crypto::Ikev2::Cts::has_operation() const
{
    return is_set(operation)
	|| is_set(sgt.operation);
}

std::string Native::Crypto::Ikev2::Cts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cts";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Cts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sgt.is_set || is_set(sgt.operation)) leaf_name_data.push_back(sgt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Cts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Cts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Cts::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sgt")
    {
        sgt = value;
    }
}

Native::Crypto::Ikev2::Diagnose::Diagnose()
    :
    error{YType::uint16, "error"}
{
    yang_name = "diagnose"; yang_parent_name = "ikev2";
}

Native::Crypto::Ikev2::Diagnose::~Diagnose()
{
}

bool Native::Crypto::Ikev2::Diagnose::has_data() const
{
    return error.is_set;
}

bool Native::Crypto::Ikev2::Diagnose::has_operation() const
{
    return is_set(operation)
	|| is_set(error.operation);
}

std::string Native::Crypto::Ikev2::Diagnose::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diagnose";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Diagnose::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Diagnose::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Diagnose::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Diagnose::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "error")
    {
        error = value;
    }
}

Native::Crypto::Ikev2::DpdContainer::DpdContainer()
    :
    dpd{YType::uint16, "dpd"},
    dpd_query{YType::enumeration, "dpd-query"},
    retry_interval{YType::uint8, "retry-interval"}
{
    yang_name = "dpd-container"; yang_parent_name = "ikev2";
}

Native::Crypto::Ikev2::DpdContainer::~DpdContainer()
{
}

bool Native::Crypto::Ikev2::DpdContainer::has_data() const
{
    return dpd.is_set
	|| dpd_query.is_set
	|| retry_interval.is_set;
}

bool Native::Crypto::Ikev2::DpdContainer::has_operation() const
{
    return is_set(operation)
	|| is_set(dpd.operation)
	|| is_set(dpd_query.operation)
	|| is_set(retry_interval.operation);
}

std::string Native::Crypto::Ikev2::DpdContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dpd-container";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::DpdContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dpd.is_set || is_set(dpd.operation)) leaf_name_data.push_back(dpd.get_name_leafdata());
    if (dpd_query.is_set || is_set(dpd_query.operation)) leaf_name_data.push_back(dpd_query.get_name_leafdata());
    if (retry_interval.is_set || is_set(retry_interval.operation)) leaf_name_data.push_back(retry_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::DpdContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::DpdContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::DpdContainer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dpd")
    {
        dpd = value;
    }
    if(value_path == "dpd-query")
    {
        dpd_query = value;
    }
    if(value_path == "retry-interval")
    {
        retry_interval = value;
    }
}

Native::Crypto::Ikev2::Fragmentation::Fragmentation()
    :
    mtu{YType::uint16, "mtu"}
{
    yang_name = "fragmentation"; yang_parent_name = "ikev2";
}

Native::Crypto::Ikev2::Fragmentation::~Fragmentation()
{
}

bool Native::Crypto::Ikev2::Fragmentation::has_data() const
{
    return mtu.is_set;
}

bool Native::Crypto::Ikev2::Fragmentation::has_operation() const
{
    return is_set(operation)
	|| is_set(mtu.operation);
}

std::string Native::Crypto::Ikev2::Fragmentation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fragmentation";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Fragmentation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Fragmentation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Fragmentation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Fragmentation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mtu")
    {
        mtu = value;
    }
}

Native::Crypto::Ikev2::HttpUrl::HttpUrl()
    :
    cert{YType::empty, "cert"}
{
    yang_name = "http-url"; yang_parent_name = "ikev2";
}

Native::Crypto::Ikev2::HttpUrl::~HttpUrl()
{
}

bool Native::Crypto::Ikev2::HttpUrl::has_data() const
{
    return cert.is_set;
}

bool Native::Crypto::Ikev2::HttpUrl::has_operation() const
{
    return is_set(operation)
	|| is_set(cert.operation);
}

std::string Native::Crypto::Ikev2::HttpUrl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "http-url";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::HttpUrl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cert.is_set || is_set(cert.operation)) leaf_name_data.push_back(cert.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::HttpUrl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::HttpUrl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::HttpUrl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cert")
    {
        cert = value;
    }
}

Native::Crypto::Ikev2::Keyring::Keyring()
    :
    name{YType::str, "name"}
{
    yang_name = "keyring"; yang_parent_name = "ikev2";
}

Native::Crypto::Ikev2::Keyring::~Keyring()
{
}

bool Native::Crypto::Ikev2::Keyring::has_data() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Crypto::Ikev2::Keyring::has_operation() const
{
    for (std::size_t index=0; index<peer.size(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::Crypto::Ikev2::Keyring::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keyring" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Keyring::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/" << get_segment_path();
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

std::shared_ptr<Entity> Native::Crypto::Ikev2::Keyring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        for(auto const & c : peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Ikev2::Keyring::Peer>();
        c->parent = this;
        peer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Keyring::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : peer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Ikev2::Keyring::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Crypto::Ikev2::Keyring::Peer::Peer()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    hostname{YType::str, "hostname"}
    	,
    address(std::make_shared<Native::Crypto::Ikev2::Keyring::Peer::Address>())
	,identity(std::make_shared<Native::Crypto::Ikev2::Keyring::Peer::Identity>())
	,pre_shared_key(std::make_shared<Native::Crypto::Ikev2::Keyring::Peer::PreSharedKey>())
{
    address->parent = this;

    identity->parent = this;

    pre_shared_key->parent = this;

    yang_name = "peer"; yang_parent_name = "keyring";
}

Native::Crypto::Ikev2::Keyring::Peer::~Peer()
{
}

bool Native::Crypto::Ikev2::Keyring::Peer::has_data() const
{
    return name.is_set
	|| description.is_set
	|| hostname.is_set
	|| (address !=  nullptr && address->has_data())
	|| (identity !=  nullptr && identity->has_data())
	|| (pre_shared_key !=  nullptr && pre_shared_key->has_data());
}

bool Native::Crypto::Ikev2::Keyring::Peer::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(description.operation)
	|| is_set(hostname.operation)
	|| (address !=  nullptr && address->has_operation())
	|| (identity !=  nullptr && identity->has_operation())
	|| (pre_shared_key !=  nullptr && pre_shared_key->has_operation());
}

std::string Native::Crypto::Ikev2::Keyring::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Keyring::Peer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (hostname.is_set || is_set(hostname.operation)) leaf_name_data.push_back(hostname.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Keyring::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Ikev2::Keyring::Peer::Address>();
        }
        return address;
    }

    if(child_yang_name == "identity")
    {
        if(identity == nullptr)
        {
            identity = std::make_shared<Native::Crypto::Ikev2::Keyring::Peer::Identity>();
        }
        return identity;
    }

    if(child_yang_name == "pre-shared-key")
    {
        if(pre_shared_key == nullptr)
        {
            pre_shared_key = std::make_shared<Native::Crypto::Ikev2::Keyring::Peer::PreSharedKey>();
        }
        return pre_shared_key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Keyring::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(identity != nullptr)
    {
        children["identity"] = identity;
    }

    if(pre_shared_key != nullptr)
    {
        children["pre-shared-key"] = pre_shared_key;
    }

    return children;
}

void Native::Crypto::Ikev2::Keyring::Peer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "hostname")
    {
        hostname = value;
    }
}

Native::Crypto::Ikev2::Keyring::Peer::Address::Address()
    :
    ipv6_prefix{YType::str, "ipv6-prefix"}
    	,
    ipv4(std::make_shared<Native::Crypto::Ikev2::Keyring::Peer::Address::Ipv4>())
{
    ipv4->parent = this;

    yang_name = "address"; yang_parent_name = "peer";
}

Native::Crypto::Ikev2::Keyring::Peer::Address::~Address()
{
}

bool Native::Crypto::Ikev2::Keyring::Peer::Address::has_data() const
{
    return ipv6_prefix.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data());
}

bool Native::Crypto::Ikev2::Keyring::Peer::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_prefix.operation)
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Native::Crypto::Ikev2::Keyring::Peer::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Keyring::Peer::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_prefix.is_set || is_set(ipv6_prefix.operation)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Keyring::Peer::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Crypto::Ikev2::Keyring::Peer::Address::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Keyring::Peer::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    return children;
}

void Native::Crypto::Ikev2::Keyring::Peer::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
    }
}

Native::Crypto::Ikev2::Keyring::Peer::Address::Ipv4::Ipv4()
    :
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mask{YType::str, "ipv4-mask"}
{
    yang_name = "ipv4"; yang_parent_name = "address";
}

Native::Crypto::Ikev2::Keyring::Peer::Address::Ipv4::~Ipv4()
{
}

bool Native::Crypto::Ikev2::Keyring::Peer::Address::Ipv4::has_data() const
{
    return ipv4_address.is_set
	|| ipv4_mask.is_set;
}

bool Native::Crypto::Ikev2::Keyring::Peer::Address::Ipv4::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_mask.operation);
}

std::string Native::Crypto::Ikev2::Keyring::Peer::Address::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Keyring::Peer::Address::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mask.is_set || is_set(ipv4_mask.operation)) leaf_name_data.push_back(ipv4_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Keyring::Peer::Address::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Keyring::Peer::Address::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Keyring::Peer::Address::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-mask")
    {
        ipv4_mask = value;
    }
}

Native::Crypto::Ikev2::Keyring::Peer::Identity::Identity()
    :
    address{YType::str, "address"},
    key_id{YType::str, "key-id"}
    	,
    email(std::make_shared<Native::Crypto::Ikev2::Keyring::Peer::Identity::Email>())
	,fqdn(std::make_shared<Native::Crypto::Ikev2::Keyring::Peer::Identity::Fqdn>())
{
    email->parent = this;

    fqdn->parent = this;

    yang_name = "identity"; yang_parent_name = "peer";
}

Native::Crypto::Ikev2::Keyring::Peer::Identity::~Identity()
{
}

bool Native::Crypto::Ikev2::Keyring::Peer::Identity::has_data() const
{
    return address.is_set
	|| key_id.is_set
	|| (email !=  nullptr && email->has_data())
	|| (fqdn !=  nullptr && fqdn->has_data());
}

bool Native::Crypto::Ikev2::Keyring::Peer::Identity::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(key_id.operation)
	|| (email !=  nullptr && email->has_operation())
	|| (fqdn !=  nullptr && fqdn->has_operation());
}

std::string Native::Crypto::Ikev2::Keyring::Peer::Identity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identity";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Keyring::Peer::Identity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Identity' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (key_id.is_set || is_set(key_id.operation)) leaf_name_data.push_back(key_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Keyring::Peer::Identity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "email")
    {
        if(email == nullptr)
        {
            email = std::make_shared<Native::Crypto::Ikev2::Keyring::Peer::Identity::Email>();
        }
        return email;
    }

    if(child_yang_name == "fqdn")
    {
        if(fqdn == nullptr)
        {
            fqdn = std::make_shared<Native::Crypto::Ikev2::Keyring::Peer::Identity::Fqdn>();
        }
        return fqdn;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Keyring::Peer::Identity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(email != nullptr)
    {
        children["email"] = email;
    }

    if(fqdn != nullptr)
    {
        children["fqdn"] = fqdn;
    }

    return children;
}

void Native::Crypto::Ikev2::Keyring::Peer::Identity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "key-id")
    {
        key_id = value;
    }
}

Native::Crypto::Ikev2::Keyring::Peer::Identity::Email::Email()
    :
    domain{YType::str, "domain"},
    name{YType::str, "name"}
{
    yang_name = "email"; yang_parent_name = "identity";
}

Native::Crypto::Ikev2::Keyring::Peer::Identity::Email::~Email()
{
}

bool Native::Crypto::Ikev2::Keyring::Peer::Identity::Email::has_data() const
{
    return domain.is_set
	|| name.is_set;
}

bool Native::Crypto::Ikev2::Keyring::Peer::Identity::Email::has_operation() const
{
    return is_set(operation)
	|| is_set(domain.operation)
	|| is_set(name.operation);
}

std::string Native::Crypto::Ikev2::Keyring::Peer::Identity::Email::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "email";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Keyring::Peer::Identity::Email::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Email' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.operation)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Keyring::Peer::Identity::Email::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Keyring::Peer::Identity::Email::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Keyring::Peer::Identity::Email::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "domain")
    {
        domain = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Crypto::Ikev2::Keyring::Peer::Identity::Fqdn::Fqdn()
    :
    domain{YType::str, "domain"},
    name{YType::str, "name"}
{
    yang_name = "fqdn"; yang_parent_name = "identity";
}

Native::Crypto::Ikev2::Keyring::Peer::Identity::Fqdn::~Fqdn()
{
}

bool Native::Crypto::Ikev2::Keyring::Peer::Identity::Fqdn::has_data() const
{
    return domain.is_set
	|| name.is_set;
}

bool Native::Crypto::Ikev2::Keyring::Peer::Identity::Fqdn::has_operation() const
{
    return is_set(operation)
	|| is_set(domain.operation)
	|| is_set(name.operation);
}

std::string Native::Crypto::Ikev2::Keyring::Peer::Identity::Fqdn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fqdn";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Keyring::Peer::Identity::Fqdn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Fqdn' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain.is_set || is_set(domain.operation)) leaf_name_data.push_back(domain.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Keyring::Peer::Identity::Fqdn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Keyring::Peer::Identity::Fqdn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Keyring::Peer::Identity::Fqdn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "domain")
    {
        domain = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Crypto::Ikev2::Keyring::Peer::PreSharedKey::PreSharedKey()
    :
    encryption{YType::enumeration, "encryption"},
    hex{YType::str, "hex"},
    key{YType::str, "key"},
    local{YType::empty, "local"},
    remote{YType::empty, "remote"}
{
    yang_name = "pre-shared-key"; yang_parent_name = "peer";
}

Native::Crypto::Ikev2::Keyring::Peer::PreSharedKey::~PreSharedKey()
{
}

bool Native::Crypto::Ikev2::Keyring::Peer::PreSharedKey::has_data() const
{
    return encryption.is_set
	|| hex.is_set
	|| key.is_set
	|| local.is_set
	|| remote.is_set;
}

bool Native::Crypto::Ikev2::Keyring::Peer::PreSharedKey::has_operation() const
{
    return is_set(operation)
	|| is_set(encryption.operation)
	|| is_set(hex.operation)
	|| is_set(key.operation)
	|| is_set(local.operation)
	|| is_set(remote.operation);
}

std::string Native::Crypto::Ikev2::Keyring::Peer::PreSharedKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-shared-key";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Keyring::Peer::PreSharedKey::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PreSharedKey' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.operation)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (hex.is_set || is_set(hex.operation)) leaf_name_data.push_back(hex.get_name_leafdata());
    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());
    if (local.is_set || is_set(local.operation)) leaf_name_data.push_back(local.get_name_leafdata());
    if (remote.is_set || is_set(remote.operation)) leaf_name_data.push_back(remote.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Keyring::Peer::PreSharedKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Keyring::Peer::PreSharedKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Keyring::Peer::PreSharedKey::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encryption")
    {
        encryption = value;
    }
    if(value_path == "hex")
    {
        hex = value;
    }
    if(value_path == "key")
    {
        key = value;
    }
    if(value_path == "local")
    {
        local = value;
    }
    if(value_path == "remote")
    {
        remote = value;
    }
}

Native::Crypto::Ikev2::Limit::Limit()
    :
    max_sa{YType::uint32, "max-sa"}
    	,
    max_neg_sa(std::make_shared<Native::Crypto::Ikev2::Limit::MaxNegSa>())
{
    max_neg_sa->parent = this;

    yang_name = "limit"; yang_parent_name = "ikev2";
}

Native::Crypto::Ikev2::Limit::~Limit()
{
}

bool Native::Crypto::Ikev2::Limit::has_data() const
{
    return max_sa.is_set
	|| (max_neg_sa !=  nullptr && max_neg_sa->has_data());
}

bool Native::Crypto::Ikev2::Limit::has_operation() const
{
    return is_set(operation)
	|| is_set(max_sa.operation)
	|| (max_neg_sa !=  nullptr && max_neg_sa->has_operation());
}

std::string Native::Crypto::Ikev2::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Limit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_sa.is_set || is_set(max_sa.operation)) leaf_name_data.push_back(max_sa.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "max-neg-sa")
    {
        if(max_neg_sa == nullptr)
        {
            max_neg_sa = std::make_shared<Native::Crypto::Ikev2::Limit::MaxNegSa>();
        }
        return max_neg_sa;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(max_neg_sa != nullptr)
    {
        children["max-neg-sa"] = max_neg_sa;
    }

    return children;
}

void Native::Crypto::Ikev2::Limit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-sa")
    {
        max_sa = value;
    }
}

Native::Crypto::Ikev2::Limit::MaxNegSa::MaxNegSa()
    :
    direction{YType::enumeration, "direction"},
    max_in_negotation_sa{YType::uint32, "max-in-negotation-sa"}
{
    yang_name = "max-neg-sa"; yang_parent_name = "limit";
}

Native::Crypto::Ikev2::Limit::MaxNegSa::~MaxNegSa()
{
}

bool Native::Crypto::Ikev2::Limit::MaxNegSa::has_data() const
{
    return direction.is_set
	|| max_in_negotation_sa.is_set;
}

bool Native::Crypto::Ikev2::Limit::MaxNegSa::has_operation() const
{
    return is_set(operation)
	|| is_set(direction.operation)
	|| is_set(max_in_negotation_sa.operation);
}

std::string Native::Crypto::Ikev2::Limit::MaxNegSa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-neg-sa";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Limit::MaxNegSa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/limit/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (max_in_negotation_sa.is_set || is_set(max_in_negotation_sa.operation)) leaf_name_data.push_back(max_in_negotation_sa.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Limit::MaxNegSa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Limit::MaxNegSa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Limit::MaxNegSa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "max-in-negotation-sa")
    {
        max_in_negotation_sa = value;
    }
}

Native::Crypto::Ikev2::Nat::Nat()
    :
    keepalive{YType::uint16, "keepalive"}
{
    yang_name = "nat"; yang_parent_name = "ikev2";
}

Native::Crypto::Ikev2::Nat::~Nat()
{
}

bool Native::Crypto::Ikev2::Nat::has_data() const
{
    return keepalive.is_set;
}

bool Native::Crypto::Ikev2::Nat::has_operation() const
{
    return is_set(operation)
	|| is_set(keepalive.operation);
}

std::string Native::Crypto::Ikev2::Nat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nat";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Nat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keepalive.is_set || is_set(keepalive.operation)) leaf_name_data.push_back(keepalive.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Nat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Nat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Nat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "keepalive")
    {
        keepalive = value;
    }
}

Native::Crypto::Ikev2::Policy::Policy()
    :
    name{YType::str, "name"},
    proposal{YType::str, "proposal"}
    	,
    match(std::make_shared<Native::Crypto::Ikev2::Policy::Match>())
{
    match->parent = this;

    yang_name = "policy"; yang_parent_name = "ikev2";
}

Native::Crypto::Ikev2::Policy::~Policy()
{
}

bool Native::Crypto::Ikev2::Policy::has_data() const
{
    return name.is_set
	|| proposal.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Crypto::Ikev2::Policy::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(proposal.operation)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Crypto::Ikev2::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Policy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (proposal.is_set || is_set(proposal.operation)) leaf_name_data.push_back(proposal.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Crypto::Ikev2::Policy::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Crypto::Ikev2::Policy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "proposal")
    {
        proposal = value;
    }
}

Native::Crypto::Ikev2::Policy::Match::Match()
    :
    address(std::make_shared<Native::Crypto::Ikev2::Policy::Match::Address>())
	,fvrf(std::make_shared<Native::Crypto::Ikev2::Policy::Match::Fvrf>())
{
    address->parent = this;

    fvrf->parent = this;

    yang_name = "match"; yang_parent_name = "policy";
}

Native::Crypto::Ikev2::Policy::Match::~Match()
{
}

bool Native::Crypto::Ikev2::Policy::Match::has_data() const
{
    return (address !=  nullptr && address->has_data())
	|| (fvrf !=  nullptr && fvrf->has_data());
}

bool Native::Crypto::Ikev2::Policy::Match::has_operation() const
{
    return is_set(operation)
	|| (address !=  nullptr && address->has_operation())
	|| (fvrf !=  nullptr && fvrf->has_operation());
}

std::string Native::Crypto::Ikev2::Policy::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Policy::Match::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Match' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Policy::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Crypto::Ikev2::Policy::Match::Address>();
        }
        return address;
    }

    if(child_yang_name == "fvrf")
    {
        if(fvrf == nullptr)
        {
            fvrf = std::make_shared<Native::Crypto::Ikev2::Policy::Match::Fvrf>();
        }
        return fvrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Policy::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(fvrf != nullptr)
    {
        children["fvrf"] = fvrf;
    }

    return children;
}

void Native::Crypto::Ikev2::Policy::Match::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Ikev2::Policy::Match::Address::Address()
    :
    local{YType::str, "local"}
{
    yang_name = "address"; yang_parent_name = "match";
}

Native::Crypto::Ikev2::Policy::Match::Address::~Address()
{
}

bool Native::Crypto::Ikev2::Policy::Match::Address::has_data() const
{
    return local.is_set;
}

bool Native::Crypto::Ikev2::Policy::Match::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(local.operation);
}

std::string Native::Crypto::Ikev2::Policy::Match::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Policy::Match::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local.is_set || is_set(local.operation)) leaf_name_data.push_back(local.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Policy::Match::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Policy::Match::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Policy::Match::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local")
    {
        local = value;
    }
}

Native::Crypto::Ikev2::Policy::Match::Fvrf::Fvrf()
    :
    any{YType::empty, "any"},
    name{YType::str, "name"}
{
    yang_name = "fvrf"; yang_parent_name = "match";
}

Native::Crypto::Ikev2::Policy::Match::Fvrf::~Fvrf()
{
}

bool Native::Crypto::Ikev2::Policy::Match::Fvrf::has_data() const
{
    return any.is_set
	|| name.is_set;
}

bool Native::Crypto::Ikev2::Policy::Match::Fvrf::has_operation() const
{
    return is_set(operation)
	|| is_set(any.operation)
	|| is_set(name.operation);
}

std::string Native::Crypto::Ikev2::Policy::Match::Fvrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fvrf";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Policy::Match::Fvrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Fvrf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any.is_set || is_set(any.operation)) leaf_name_data.push_back(any.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Policy::Match::Fvrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Policy::Match::Fvrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Policy::Match::Fvrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "any")
    {
        any = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Crypto::Ikev2::Profile::Profile()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    ivrf{YType::str, "ivrf"},
    shutdown{YType::empty, "shutdown"}
    	,
    aaa(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa>())
	,authentication(std::make_shared<Native::Crypto::Ikev2::Profile::Authentication>())
	,config_exchange(std::make_shared<Native::Crypto::Ikev2::Profile::ConfigExchange>())
	,dpd(std::make_shared<Native::Crypto::Ikev2::Profile::Dpd>())
	,identity(std::make_shared<Native::Crypto::Ikev2::Profile::Identity>())
	,initial_contact(std::make_shared<Native::Crypto::Ikev2::Profile::InitialContact>())
	,keyring(std::make_shared<Native::Crypto::Ikev2::Profile::Keyring>())
	,lifetime(std::make_shared<Native::Crypto::Ikev2::Profile::Lifetime>())
	,match(std::make_shared<Native::Crypto::Ikev2::Profile::Match>())
	,nat(std::make_shared<Native::Crypto::Ikev2::Profile::Nat>())
	,pki(std::make_shared<Native::Crypto::Ikev2::Profile::Pki>())
	,reconnect(nullptr) // presence node
	,redirect(std::make_shared<Native::Crypto::Ikev2::Profile::Redirect>())
	,virtual_template(std::make_shared<Native::Crypto::Ikev2::Profile::VirtualTemplate>())
{
    aaa->parent = this;

    authentication->parent = this;

    config_exchange->parent = this;

    dpd->parent = this;

    identity->parent = this;

    initial_contact->parent = this;

    keyring->parent = this;

    lifetime->parent = this;

    match->parent = this;

    nat->parent = this;

    pki->parent = this;

    redirect->parent = this;

    virtual_template->parent = this;

    yang_name = "profile"; yang_parent_name = "ikev2";
}

Native::Crypto::Ikev2::Profile::~Profile()
{
}

bool Native::Crypto::Ikev2::Profile::has_data() const
{
    return name.is_set
	|| description.is_set
	|| ivrf.is_set
	|| shutdown.is_set
	|| (aaa !=  nullptr && aaa->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (config_exchange !=  nullptr && config_exchange->has_data())
	|| (dpd !=  nullptr && dpd->has_data())
	|| (identity !=  nullptr && identity->has_data())
	|| (initial_contact !=  nullptr && initial_contact->has_data())
	|| (keyring !=  nullptr && keyring->has_data())
	|| (lifetime !=  nullptr && lifetime->has_data())
	|| (match !=  nullptr && match->has_data())
	|| (nat !=  nullptr && nat->has_data())
	|| (pki !=  nullptr && pki->has_data())
	|| (reconnect !=  nullptr && reconnect->has_data())
	|| (redirect !=  nullptr && redirect->has_data())
	|| (virtual_template !=  nullptr && virtual_template->has_data());
}

bool Native::Crypto::Ikev2::Profile::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(description.operation)
	|| is_set(ivrf.operation)
	|| is_set(shutdown.operation)
	|| (aaa !=  nullptr && aaa->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (config_exchange !=  nullptr && config_exchange->has_operation())
	|| (dpd !=  nullptr && dpd->has_operation())
	|| (identity !=  nullptr && identity->has_operation())
	|| (initial_contact !=  nullptr && initial_contact->has_operation())
	|| (keyring !=  nullptr && keyring->has_operation())
	|| (lifetime !=  nullptr && lifetime->has_operation())
	|| (match !=  nullptr && match->has_operation())
	|| (nat !=  nullptr && nat->has_operation())
	|| (pki !=  nullptr && pki->has_operation())
	|| (reconnect !=  nullptr && reconnect->has_operation())
	|| (redirect !=  nullptr && redirect->has_operation())
	|| (virtual_template !=  nullptr && virtual_template->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "profile" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Profile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/crypto/Cisco-IOS-XE-crypto:ikev2/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (ivrf.is_set || is_set(ivrf.operation)) leaf_name_data.push_back(ivrf.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aaa")
    {
        if(aaa == nullptr)
        {
            aaa = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa>();
        }
        return aaa;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Crypto::Ikev2::Profile::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "config-exchange")
    {
        if(config_exchange == nullptr)
        {
            config_exchange = std::make_shared<Native::Crypto::Ikev2::Profile::ConfigExchange>();
        }
        return config_exchange;
    }

    if(child_yang_name == "dpd")
    {
        if(dpd == nullptr)
        {
            dpd = std::make_shared<Native::Crypto::Ikev2::Profile::Dpd>();
        }
        return dpd;
    }

    if(child_yang_name == "identity")
    {
        if(identity == nullptr)
        {
            identity = std::make_shared<Native::Crypto::Ikev2::Profile::Identity>();
        }
        return identity;
    }

    if(child_yang_name == "initial-contact")
    {
        if(initial_contact == nullptr)
        {
            initial_contact = std::make_shared<Native::Crypto::Ikev2::Profile::InitialContact>();
        }
        return initial_contact;
    }

    if(child_yang_name == "keyring")
    {
        if(keyring == nullptr)
        {
            keyring = std::make_shared<Native::Crypto::Ikev2::Profile::Keyring>();
        }
        return keyring;
    }

    if(child_yang_name == "lifetime")
    {
        if(lifetime == nullptr)
        {
            lifetime = std::make_shared<Native::Crypto::Ikev2::Profile::Lifetime>();
        }
        return lifetime;
    }

    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Crypto::Ikev2::Profile::Match>();
        }
        return match;
    }

    if(child_yang_name == "nat")
    {
        if(nat == nullptr)
        {
            nat = std::make_shared<Native::Crypto::Ikev2::Profile::Nat>();
        }
        return nat;
    }

    if(child_yang_name == "pki")
    {
        if(pki == nullptr)
        {
            pki = std::make_shared<Native::Crypto::Ikev2::Profile::Pki>();
        }
        return pki;
    }

    if(child_yang_name == "reconnect")
    {
        if(reconnect == nullptr)
        {
            reconnect = std::make_shared<Native::Crypto::Ikev2::Profile::Reconnect>();
        }
        return reconnect;
    }

    if(child_yang_name == "redirect")
    {
        if(redirect == nullptr)
        {
            redirect = std::make_shared<Native::Crypto::Ikev2::Profile::Redirect>();
        }
        return redirect;
    }

    if(child_yang_name == "virtual-template")
    {
        if(virtual_template == nullptr)
        {
            virtual_template = std::make_shared<Native::Crypto::Ikev2::Profile::VirtualTemplate>();
        }
        return virtual_template;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aaa != nullptr)
    {
        children["aaa"] = aaa;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(config_exchange != nullptr)
    {
        children["config-exchange"] = config_exchange;
    }

    if(dpd != nullptr)
    {
        children["dpd"] = dpd;
    }

    if(identity != nullptr)
    {
        children["identity"] = identity;
    }

    if(initial_contact != nullptr)
    {
        children["initial-contact"] = initial_contact;
    }

    if(keyring != nullptr)
    {
        children["keyring"] = keyring;
    }

    if(lifetime != nullptr)
    {
        children["lifetime"] = lifetime;
    }

    if(match != nullptr)
    {
        children["match"] = match;
    }

    if(nat != nullptr)
    {
        children["nat"] = nat;
    }

    if(pki != nullptr)
    {
        children["pki"] = pki;
    }

    if(reconnect != nullptr)
    {
        children["reconnect"] = reconnect;
    }

    if(redirect != nullptr)
    {
        children["redirect"] = redirect;
    }

    if(virtual_template != nullptr)
    {
        children["virtual-template"] = virtual_template;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "ivrf")
    {
        ivrf = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
}

Native::Crypto::Ikev2::Profile::Aaa::Aaa()
    :
    accounting(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Accounting>())
	,authentication(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authentication>())
	,authorization(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization>())
{
    accounting->parent = this;

    authentication->parent = this;

    authorization->parent = this;

    yang_name = "aaa"; yang_parent_name = "profile";
}

Native::Crypto::Ikev2::Profile::Aaa::~Aaa()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::has_data() const
{
    return (accounting !=  nullptr && accounting->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (authorization !=  nullptr && authorization->has_data());
}

bool Native::Crypto::Ikev2::Profile::Aaa::has_operation() const
{
    return is_set(operation)
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (authorization !=  nullptr && authorization->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Aaa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aaa";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Profile::Aaa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Aaa' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization>();
        }
        return authorization;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accounting != nullptr)
    {
        children["accounting"] = accounting;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(authorization != nullptr)
    {
        children["authorization"] = authorization;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Ikev2::Profile::Aaa::Accounting::Accounting()
    :
    anyconnect_eap{YType::str, "anyconnect-eap"},
    cert{YType::str, "cert"},
    eap{YType::str, "eap"},
    psk{YType::str, "psk"}
{
    yang_name = "accounting"; yang_parent_name = "aaa";
}

Native::Crypto::Ikev2::Profile::Aaa::Accounting::~Accounting()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Accounting::has_data() const
{
    return anyconnect_eap.is_set
	|| cert.is_set
	|| eap.is_set
	|| psk.is_set;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Accounting::has_operation() const
{
    return is_set(operation)
	|| is_set(anyconnect_eap.operation)
	|| is_set(cert.operation)
	|| is_set(eap.operation)
	|| is_set(psk.operation);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Profile::Aaa::Accounting::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Accounting' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (anyconnect_eap.is_set || is_set(anyconnect_eap.operation)) leaf_name_data.push_back(anyconnect_eap.get_name_leafdata());
    if (cert.is_set || is_set(cert.operation)) leaf_name_data.push_back(cert.get_name_leafdata());
    if (eap.is_set || is_set(eap.operation)) leaf_name_data.push_back(eap.get_name_leafdata());
    if (psk.is_set || is_set(psk.operation)) leaf_name_data.push_back(psk.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Accounting::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "anyconnect-eap")
    {
        anyconnect_eap = value;
    }
    if(value_path == "cert")
    {
        cert = value;
    }
    if(value_path == "eap")
    {
        eap = value;
    }
    if(value_path == "psk")
    {
        psk = value;
    }
}

Native::Crypto::Ikev2::Profile::Aaa::Authentication::Authentication()
    :
    anyconnect_eap{YType::str, "anyconnect-eap"},
    eap{YType::str, "eap"}
{
    yang_name = "authentication"; yang_parent_name = "aaa";
}

Native::Crypto::Ikev2::Profile::Aaa::Authentication::~Authentication()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authentication::has_data() const
{
    return anyconnect_eap.is_set
	|| eap.is_set;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authentication::has_operation() const
{
    return is_set(operation)
	|| is_set(anyconnect_eap.operation)
	|| is_set(eap.operation);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Profile::Aaa::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (anyconnect_eap.is_set || is_set(anyconnect_eap.operation)) leaf_name_data.push_back(anyconnect_eap.get_name_leafdata());
    if (eap.is_set || is_set(eap.operation)) leaf_name_data.push_back(eap.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "anyconnect-eap")
    {
        anyconnect_eap = value;
    }
    if(value_path == "eap")
    {
        eap = value;
    }
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Authorization()
    :
    group(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group>())
	,user(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User>())
{
    group->parent = this;

    user->parent = this;

    yang_name = "authorization"; yang_parent_name = "aaa";
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::~Authorization()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::has_data() const
{
    return (group !=  nullptr && group->has_data())
	|| (user !=  nullptr && user->has_data());
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::has_operation() const
{
    return is_set(operation)
	|| (group !=  nullptr && group->has_operation())
	|| (user !=  nullptr && user->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Profile::Aaa::Authorization::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authorization' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group>();
        }
        return group;
    }

    if(child_yang_name == "user")
    {
        if(user == nullptr)
        {
            user = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User>();
        }
        return user;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group != nullptr)
    {
        children["group"] = group;
    }

    if(user != nullptr)
    {
        children["user"] = user;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Group()
    :
    override{YType::empty, "override"}
    	,
    anyconnect_eap(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap>())
	,cert(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert>())
	,eap(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap>())
	,psk(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk>())
{
    anyconnect_eap->parent = this;

    cert->parent = this;

    eap->parent = this;

    psk->parent = this;

    yang_name = "group"; yang_parent_name = "authorization";
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::~Group()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::has_data() const
{
    return override.is_set
	|| (anyconnect_eap !=  nullptr && anyconnect_eap->has_data())
	|| (cert !=  nullptr && cert->has_data())
	|| (eap !=  nullptr && eap->has_data())
	|| (psk !=  nullptr && psk->has_data());
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::has_operation() const
{
    return is_set(operation)
	|| is_set(override.operation)
	|| (anyconnect_eap !=  nullptr && anyconnect_eap->has_operation())
	|| (cert !=  nullptr && cert->has_operation())
	|| (eap !=  nullptr && eap->has_operation())
	|| (psk !=  nullptr && psk->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Group' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (override.is_set || is_set(override.operation)) leaf_name_data.push_back(override.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "anyconnect-eap")
    {
        if(anyconnect_eap == nullptr)
        {
            anyconnect_eap = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap>();
        }
        return anyconnect_eap;
    }

    if(child_yang_name == "cert")
    {
        if(cert == nullptr)
        {
            cert = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert>();
        }
        return cert;
    }

    if(child_yang_name == "eap")
    {
        if(eap == nullptr)
        {
            eap = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap>();
        }
        return eap;
    }

    if(child_yang_name == "psk")
    {
        if(psk == nullptr)
        {
            psk = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk>();
        }
        return psk;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(anyconnect_eap != nullptr)
    {
        children["anyconnect-eap"] = anyconnect_eap;
    }

    if(cert != nullptr)
    {
        children["cert"] = cert;
    }

    if(eap != nullptr)
    {
        children["eap"] = eap;
    }

    if(psk != nullptr)
    {
        children["psk"] = psk;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "override")
    {
        override = value;
    }
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::AnyconnectEap()
{
    yang_name = "anyconnect-eap"; yang_parent_name = "group";
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::~AnyconnectEap()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::has_data() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::has_operation() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "anyconnect-eap";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AnyconnectEap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        for(auto const & c : list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List>();
        c->parent = this;
        list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::List()
    :
    name{YType::str, "name"},
    local{YType::empty, "local"},
    name_mangler{YType::str, "name-mangler"},
    username{YType::str, "username"}
    	,
    password(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::Password>())
{
    password->parent = this;

    yang_name = "list"; yang_parent_name = "anyconnect-eap";
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::~List()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::has_data() const
{
    return name.is_set
	|| local.is_set
	|| name_mangler.is_set
	|| username.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(local.operation)
	|| is_set(name_mangler.operation)
	|| is_set(username.operation)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'List' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (local.is_set || is_set(local.operation)) leaf_name_data.push_back(local.get_name_leafdata());
    if (name_mangler.is_set || is_set(name_mangler.operation)) leaf_name_data.push_back(name_mangler.get_name_leafdata());
    if (username.is_set || is_set(username.operation)) leaf_name_data.push_back(username.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "local")
    {
        local = value;
    }
    if(value_path == "name-mangler")
    {
        name_mangler = value;
    }
    if(value_path == "username")
    {
        username = value;
    }
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::Password::Password()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{
    yang_name = "password"; yang_parent_name = "list";
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::Password::~Password()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::Password::has_data() const
{
    return encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::Password::has_operation() const
{
    return is_set(operation)
	|| is_set(encryption.operation)
	|| is_set(key.operation);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::Password::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Password' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.operation)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::Password::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encryption")
    {
        encryption = value;
    }
    if(value_path == "key")
    {
        key = value;
    }
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::Cert()
{
    yang_name = "cert"; yang_parent_name = "group";
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::~Cert()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::has_data() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::has_operation() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cert";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cert' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        for(auto const & c : list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List>();
        c->parent = this;
        list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::List()
    :
    name{YType::str, "name"},
    local{YType::empty, "local"},
    name_mangler{YType::str, "name-mangler"},
    username{YType::str, "username"}
    	,
    password(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::Password>())
{
    password->parent = this;

    yang_name = "list"; yang_parent_name = "cert";
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::~List()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::has_data() const
{
    return name.is_set
	|| local.is_set
	|| name_mangler.is_set
	|| username.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(local.operation)
	|| is_set(name_mangler.operation)
	|| is_set(username.operation)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'List' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (local.is_set || is_set(local.operation)) leaf_name_data.push_back(local.get_name_leafdata());
    if (name_mangler.is_set || is_set(name_mangler.operation)) leaf_name_data.push_back(name_mangler.get_name_leafdata());
    if (username.is_set || is_set(username.operation)) leaf_name_data.push_back(username.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "local")
    {
        local = value;
    }
    if(value_path == "name-mangler")
    {
        name_mangler = value;
    }
    if(value_path == "username")
    {
        username = value;
    }
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::Password::Password()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{
    yang_name = "password"; yang_parent_name = "list";
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::Password::~Password()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::Password::has_data() const
{
    return encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::Password::has_operation() const
{
    return is_set(operation)
	|| is_set(encryption.operation)
	|| is_set(key.operation);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::Password::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Password' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.operation)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::Password::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encryption")
    {
        encryption = value;
    }
    if(value_path == "key")
    {
        key = value;
    }
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::Eap()
{
    yang_name = "eap"; yang_parent_name = "group";
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::~Eap()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::has_data() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::has_operation() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eap";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Eap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        for(auto const & c : list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List>();
        c->parent = this;
        list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::List()
    :
    name{YType::str, "name"},
    local{YType::empty, "local"},
    name_mangler{YType::str, "name-mangler"},
    username{YType::str, "username"}
    	,
    password(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::Password>())
{
    password->parent = this;

    yang_name = "list"; yang_parent_name = "eap";
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::~List()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::has_data() const
{
    return name.is_set
	|| local.is_set
	|| name_mangler.is_set
	|| username.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(local.operation)
	|| is_set(name_mangler.operation)
	|| is_set(username.operation)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'List' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (local.is_set || is_set(local.operation)) leaf_name_data.push_back(local.get_name_leafdata());
    if (name_mangler.is_set || is_set(name_mangler.operation)) leaf_name_data.push_back(name_mangler.get_name_leafdata());
    if (username.is_set || is_set(username.operation)) leaf_name_data.push_back(username.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "local")
    {
        local = value;
    }
    if(value_path == "name-mangler")
    {
        name_mangler = value;
    }
    if(value_path == "username")
    {
        username = value;
    }
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::Password::Password()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{
    yang_name = "password"; yang_parent_name = "list";
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::Password::~Password()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::Password::has_data() const
{
    return encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::Password::has_operation() const
{
    return is_set(operation)
	|| is_set(encryption.operation)
	|| is_set(key.operation);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::Password::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Password' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.operation)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::Password::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encryption")
    {
        encryption = value;
    }
    if(value_path == "key")
    {
        key = value;
    }
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::Psk()
{
    yang_name = "psk"; yang_parent_name = "group";
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::~Psk()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::has_data() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::has_operation() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "psk";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Psk' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        for(auto const & c : list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List>();
        c->parent = this;
        list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::List()
    :
    name{YType::str, "name"},
    local{YType::empty, "local"},
    name_mangler{YType::str, "name-mangler"},
    username{YType::str, "username"}
    	,
    password(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::Password>())
{
    password->parent = this;

    yang_name = "list"; yang_parent_name = "psk";
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::~List()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::has_data() const
{
    return name.is_set
	|| local.is_set
	|| name_mangler.is_set
	|| username.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(local.operation)
	|| is_set(name_mangler.operation)
	|| is_set(username.operation)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'List' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (local.is_set || is_set(local.operation)) leaf_name_data.push_back(local.get_name_leafdata());
    if (name_mangler.is_set || is_set(name_mangler.operation)) leaf_name_data.push_back(name_mangler.get_name_leafdata());
    if (username.is_set || is_set(username.operation)) leaf_name_data.push_back(username.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "local")
    {
        local = value;
    }
    if(value_path == "name-mangler")
    {
        name_mangler = value;
    }
    if(value_path == "username")
    {
        username = value;
    }
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::Password::Password()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{
    yang_name = "password"; yang_parent_name = "list";
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::Password::~Password()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::Password::has_data() const
{
    return encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::Password::has_operation() const
{
    return is_set(operation)
	|| is_set(encryption.operation)
	|| is_set(key.operation);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::Password::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Password' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.operation)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::Password::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encryption")
    {
        encryption = value;
    }
    if(value_path == "key")
    {
        key = value;
    }
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::User()
    :
    anyconnect_eap(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap>())
	,cert(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert>())
	,eap(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap>())
	,psk(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk>())
{
    anyconnect_eap->parent = this;

    cert->parent = this;

    eap->parent = this;

    psk->parent = this;

    yang_name = "user"; yang_parent_name = "authorization";
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::~User()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::has_data() const
{
    return (anyconnect_eap !=  nullptr && anyconnect_eap->has_data())
	|| (cert !=  nullptr && cert->has_data())
	|| (eap !=  nullptr && eap->has_data())
	|| (psk !=  nullptr && psk->has_data());
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::has_operation() const
{
    return is_set(operation)
	|| (anyconnect_eap !=  nullptr && anyconnect_eap->has_operation())
	|| (cert !=  nullptr && cert->has_operation())
	|| (eap !=  nullptr && eap->has_operation())
	|| (psk !=  nullptr && psk->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'User' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "anyconnect-eap")
    {
        if(anyconnect_eap == nullptr)
        {
            anyconnect_eap = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap>();
        }
        return anyconnect_eap;
    }

    if(child_yang_name == "cert")
    {
        if(cert == nullptr)
        {
            cert = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert>();
        }
        return cert;
    }

    if(child_yang_name == "eap")
    {
        if(eap == nullptr)
        {
            eap = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap>();
        }
        return eap;
    }

    if(child_yang_name == "psk")
    {
        if(psk == nullptr)
        {
            psk = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk>();
        }
        return psk;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(anyconnect_eap != nullptr)
    {
        children["anyconnect-eap"] = anyconnect_eap;
    }

    if(cert != nullptr)
    {
        children["cert"] = cert;
    }

    if(eap != nullptr)
    {
        children["eap"] = eap;
    }

    if(psk != nullptr)
    {
        children["psk"] = psk;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::AnyconnectEap()
    :
    cached{YType::empty, "cached"}
{
    yang_name = "anyconnect-eap"; yang_parent_name = "user";
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::~AnyconnectEap()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::has_data() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_data())
            return true;
    }
    return cached.is_set;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::has_operation() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(cached.operation);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "anyconnect-eap";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AnyconnectEap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cached.is_set || is_set(cached.operation)) leaf_name_data.push_back(cached.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        for(auto const & c : list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List>();
        c->parent = this;
        list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cached")
    {
        cached = value;
    }
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::List()
    :
    name{YType::str, "name"},
    local{YType::empty, "local"},
    name_mangler{YType::str, "name-mangler"},
    username{YType::str, "username"}
    	,
    password(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::Password>())
{
    password->parent = this;

    yang_name = "list"; yang_parent_name = "anyconnect-eap";
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::~List()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::has_data() const
{
    return name.is_set
	|| local.is_set
	|| name_mangler.is_set
	|| username.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(local.operation)
	|| is_set(name_mangler.operation)
	|| is_set(username.operation)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'List' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (local.is_set || is_set(local.operation)) leaf_name_data.push_back(local.get_name_leafdata());
    if (name_mangler.is_set || is_set(name_mangler.operation)) leaf_name_data.push_back(name_mangler.get_name_leafdata());
    if (username.is_set || is_set(username.operation)) leaf_name_data.push_back(username.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "local")
    {
        local = value;
    }
    if(value_path == "name-mangler")
    {
        name_mangler = value;
    }
    if(value_path == "username")
    {
        username = value;
    }
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::Password::Password()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{
    yang_name = "password"; yang_parent_name = "list";
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::Password::~Password()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::Password::has_data() const
{
    return encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::Password::has_operation() const
{
    return is_set(operation)
	|| is_set(encryption.operation)
	|| is_set(key.operation);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::Password::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Password' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.operation)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::Password::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encryption")
    {
        encryption = value;
    }
    if(value_path == "key")
    {
        key = value;
    }
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::Cert()
{
    yang_name = "cert"; yang_parent_name = "user";
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::~Cert()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::has_data() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::has_operation() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cert";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cert' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        for(auto const & c : list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List>();
        c->parent = this;
        list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::List()
    :
    name{YType::str, "name"},
    local{YType::empty, "local"},
    name_mangler{YType::str, "name-mangler"},
    username{YType::str, "username"}
    	,
    password(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::Password>())
{
    password->parent = this;

    yang_name = "list"; yang_parent_name = "cert";
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::~List()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::has_data() const
{
    return name.is_set
	|| local.is_set
	|| name_mangler.is_set
	|| username.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(local.operation)
	|| is_set(name_mangler.operation)
	|| is_set(username.operation)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'List' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (local.is_set || is_set(local.operation)) leaf_name_data.push_back(local.get_name_leafdata());
    if (name_mangler.is_set || is_set(name_mangler.operation)) leaf_name_data.push_back(name_mangler.get_name_leafdata());
    if (username.is_set || is_set(username.operation)) leaf_name_data.push_back(username.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "local")
    {
        local = value;
    }
    if(value_path == "name-mangler")
    {
        name_mangler = value;
    }
    if(value_path == "username")
    {
        username = value;
    }
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::Password::Password()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{
    yang_name = "password"; yang_parent_name = "list";
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::Password::~Password()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::Password::has_data() const
{
    return encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::Password::has_operation() const
{
    return is_set(operation)
	|| is_set(encryption.operation)
	|| is_set(key.operation);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::Password::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Password' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.operation)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::Password::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encryption")
    {
        encryption = value;
    }
    if(value_path == "key")
    {
        key = value;
    }
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::Eap()
    :
    cached{YType::empty, "cached"}
{
    yang_name = "eap"; yang_parent_name = "user";
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::~Eap()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::has_data() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_data())
            return true;
    }
    return cached.is_set;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::has_operation() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(cached.operation);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eap";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Eap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cached.is_set || is_set(cached.operation)) leaf_name_data.push_back(cached.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        for(auto const & c : list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List>();
        c->parent = this;
        list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cached")
    {
        cached = value;
    }
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::List()
    :
    name{YType::str, "name"},
    local{YType::empty, "local"},
    name_mangler{YType::str, "name-mangler"},
    username{YType::str, "username"}
    	,
    password(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::Password>())
{
    password->parent = this;

    yang_name = "list"; yang_parent_name = "eap";
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::~List()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::has_data() const
{
    return name.is_set
	|| local.is_set
	|| name_mangler.is_set
	|| username.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(local.operation)
	|| is_set(name_mangler.operation)
	|| is_set(username.operation)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'List' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (local.is_set || is_set(local.operation)) leaf_name_data.push_back(local.get_name_leafdata());
    if (name_mangler.is_set || is_set(name_mangler.operation)) leaf_name_data.push_back(name_mangler.get_name_leafdata());
    if (username.is_set || is_set(username.operation)) leaf_name_data.push_back(username.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "local")
    {
        local = value;
    }
    if(value_path == "name-mangler")
    {
        name_mangler = value;
    }
    if(value_path == "username")
    {
        username = value;
    }
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::Password::Password()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{
    yang_name = "password"; yang_parent_name = "list";
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::Password::~Password()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::Password::has_data() const
{
    return encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::Password::has_operation() const
{
    return is_set(operation)
	|| is_set(encryption.operation)
	|| is_set(key.operation);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::Password::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Password' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.operation)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::Password::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encryption")
    {
        encryption = value;
    }
    if(value_path == "key")
    {
        key = value;
    }
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::Psk()
    :
    cached{YType::empty, "cached"}
{
    yang_name = "psk"; yang_parent_name = "user";
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::~Psk()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::has_data() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_data())
            return true;
    }
    return cached.is_set;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::has_operation() const
{
    for (std::size_t index=0; index<list.size(); index++)
    {
        if(list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(cached.operation);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "psk";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Psk' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cached.is_set || is_set(cached.operation)) leaf_name_data.push_back(cached.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "list")
    {
        for(auto const & c : list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List>();
        c->parent = this;
        list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cached")
    {
        cached = value;
    }
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::List()
    :
    name{YType::str, "name"},
    local{YType::empty, "local"},
    name_mangler{YType::str, "name-mangler"},
    username{YType::str, "username"}
    	,
    password(std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::Password>())
{
    password->parent = this;

    yang_name = "list"; yang_parent_name = "psk";
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::~List()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::has_data() const
{
    return name.is_set
	|| local.is_set
	|| name_mangler.is_set
	|| username.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(local.operation)
	|| is_set(name_mangler.operation)
	|| is_set(username.operation)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "list" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'List' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (local.is_set || is_set(local.operation)) leaf_name_data.push_back(local.get_name_leafdata());
    if (name_mangler.is_set || is_set(name_mangler.operation)) leaf_name_data.push_back(name_mangler.get_name_leafdata());
    if (username.is_set || is_set(username.operation)) leaf_name_data.push_back(username.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "local")
    {
        local = value;
    }
    if(value_path == "name-mangler")
    {
        name_mangler = value;
    }
    if(value_path == "username")
    {
        username = value;
    }
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::Password::Password()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{
    yang_name = "password"; yang_parent_name = "list";
}

Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::Password::~Password()
{
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::Password::has_data() const
{
    return encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::Password::has_operation() const
{
    return is_set(operation)
	|| is_set(encryption.operation)
	|| is_set(key.operation);
}

std::string Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::Password::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Password' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.operation)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::Password::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encryption")
    {
        encryption = value;
    }
    if(value_path == "key")
    {
        key = value;
    }
}

Native::Crypto::Ikev2::Profile::Authentication::Authentication()
    :
    local(std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Local>())
	,remote(std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Remote>())
{
    local->parent = this;

    remote->parent = this;

    yang_name = "authentication"; yang_parent_name = "profile";
}

Native::Crypto::Ikev2::Profile::Authentication::~Authentication()
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::has_data() const
{
    return (local !=  nullptr && local->has_data())
	|| (remote !=  nullptr && remote->has_data());
}

bool Native::Crypto::Ikev2::Profile::Authentication::has_operation() const
{
    return is_set(operation)
	|| (local !=  nullptr && local->has_operation())
	|| (remote !=  nullptr && remote->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Profile::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Local>();
        }
        return local;
    }

    if(child_yang_name == "remote")
    {
        if(remote == nullptr)
        {
            remote = std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Remote>();
        }
        return remote;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local != nullptr)
    {
        children["local"] = local;
    }

    if(remote != nullptr)
    {
        children["remote"] = remote;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Authentication::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Ikev2::Profile::Authentication::Local::Local()
    :
    ecdsa_sig{YType::empty, "ecdsa-sig"},
    rsa_sig{YType::empty, "rsa-sig"}
    	,
    eap(nullptr) // presence node
	,pre_share(nullptr) // presence node
{
    yang_name = "local"; yang_parent_name = "authentication";
}

Native::Crypto::Ikev2::Profile::Authentication::Local::~Local()
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::has_data() const
{
    return ecdsa_sig.is_set
	|| rsa_sig.is_set
	|| (eap !=  nullptr && eap->has_data())
	|| (pre_share !=  nullptr && pre_share->has_data());
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::has_operation() const
{
    return is_set(operation)
	|| is_set(ecdsa_sig.operation)
	|| is_set(rsa_sig.operation)
	|| (eap !=  nullptr && eap->has_operation())
	|| (pre_share !=  nullptr && pre_share->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Authentication::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Profile::Authentication::Local::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Local' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ecdsa_sig.is_set || is_set(ecdsa_sig.operation)) leaf_name_data.push_back(ecdsa_sig.get_name_leafdata());
    if (rsa_sig.is_set || is_set(rsa_sig.operation)) leaf_name_data.push_back(rsa_sig.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Authentication::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eap")
    {
        if(eap == nullptr)
        {
            eap = std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Local::Eap>();
        }
        return eap;
    }

    if(child_yang_name == "pre-share")
    {
        if(pre_share == nullptr)
        {
            pre_share = std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare>();
        }
        return pre_share;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Authentication::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(eap != nullptr)
    {
        children["eap"] = eap;
    }

    if(pre_share != nullptr)
    {
        children["pre-share"] = pre_share;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Authentication::Local::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ecdsa-sig")
    {
        ecdsa_sig = value;
    }
    if(value_path == "rsa-sig")
    {
        rsa_sig = value;
    }
}

Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Eap()
    :
    gtc(std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc>())
	,md5(std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5>())
	,mschapv2(std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2>())
{
    gtc->parent = this;

    md5->parent = this;

    mschapv2->parent = this;

    yang_name = "eap"; yang_parent_name = "local";
}

Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::~Eap()
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::has_data() const
{
    return (gtc !=  nullptr && gtc->has_data())
	|| (md5 !=  nullptr && md5->has_data())
	|| (mschapv2 !=  nullptr && mschapv2->has_data());
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::has_operation() const
{
    return is_set(operation)
	|| (gtc !=  nullptr && gtc->has_operation())
	|| (md5 !=  nullptr && md5->has_operation())
	|| (mschapv2 !=  nullptr && mschapv2->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eap";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Eap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gtc")
    {
        if(gtc == nullptr)
        {
            gtc = std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc>();
        }
        return gtc;
    }

    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5>();
        }
        return md5;
    }

    if(child_yang_name == "mschapv2")
    {
        if(mschapv2 == nullptr)
        {
            mschapv2 = std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2>();
        }
        return mschapv2;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(gtc != nullptr)
    {
        children["gtc"] = gtc;
    }

    if(md5 != nullptr)
    {
        children["md5"] = md5;
    }

    if(mschapv2 != nullptr)
    {
        children["mschapv2"] = mschapv2;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Gtc()
    :
    username{YType::str, "username"}
    	,
    password(std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password>())
{
    password->parent = this;

    yang_name = "gtc"; yang_parent_name = "eap";
}

Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::~Gtc()
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::has_data() const
{
    return username.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::has_operation() const
{
    return is_set(operation)
	|| is_set(username.operation)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gtc";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Gtc' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (username.is_set || is_set(username.operation)) leaf_name_data.push_back(username.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "username")
    {
        username = value;
    }
}

Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password::Password()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{
    yang_name = "password"; yang_parent_name = "gtc";
}

Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password::~Password()
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password::has_data() const
{
    return encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password::has_operation() const
{
    return is_set(operation)
	|| is_set(encryption.operation)
	|| is_set(key.operation);
}

std::string Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Password' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.operation)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encryption")
    {
        encryption = value;
    }
    if(value_path == "key")
    {
        key = value;
    }
}

Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Md5()
    :
    username{YType::str, "username"}
    	,
    password(std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password>())
{
    password->parent = this;

    yang_name = "md5"; yang_parent_name = "eap";
}

Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::~Md5()
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::has_data() const
{
    return username.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::has_operation() const
{
    return is_set(operation)
	|| is_set(username.operation)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Md5' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (username.is_set || is_set(username.operation)) leaf_name_data.push_back(username.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "username")
    {
        username = value;
    }
}

Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password::Password()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{
    yang_name = "password"; yang_parent_name = "md5";
}

Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password::~Password()
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password::has_data() const
{
    return encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password::has_operation() const
{
    return is_set(operation)
	|| is_set(encryption.operation)
	|| is_set(key.operation);
}

std::string Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Password' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.operation)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encryption")
    {
        encryption = value;
    }
    if(value_path == "key")
    {
        key = value;
    }
}

Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Mschapv2()
    :
    username{YType::str, "username"}
    	,
    password(std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password>())
{
    password->parent = this;

    yang_name = "mschapv2"; yang_parent_name = "eap";
}

Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::~Mschapv2()
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::has_data() const
{
    return username.is_set
	|| (password !=  nullptr && password->has_data());
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::has_operation() const
{
    return is_set(operation)
	|| is_set(username.operation)
	|| (password !=  nullptr && password->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mschapv2";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mschapv2' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (username.is_set || is_set(username.operation)) leaf_name_data.push_back(username.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password>();
        }
        return password;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(password != nullptr)
    {
        children["password"] = password;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "username")
    {
        username = value;
    }
}

Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password::Password()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{
    yang_name = "password"; yang_parent_name = "mschapv2";
}

Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password::~Password()
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password::has_data() const
{
    return encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password::has_operation() const
{
    return is_set(operation)
	|| is_set(encryption.operation)
	|| is_set(key.operation);
}

std::string Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Password' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.operation)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encryption")
    {
        encryption = value;
    }
    if(value_path == "key")
    {
        key = value;
    }
}

Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::PreShare()
    :
    key(std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key>())
{
    key->parent = this;

    yang_name = "pre-share"; yang_parent_name = "local";
}

Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::~PreShare()
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::has_data() const
{
    return (key !=  nullptr && key->has_data());
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::has_operation() const
{
    return is_set(operation)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-share";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PreShare' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key != nullptr)
    {
        children["key"] = key;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key::Key()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{
    yang_name = "key"; yang_parent_name = "pre-share";
}

Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key::~Key()
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key::has_data() const
{
    return encryption.is_set
	|| key.is_set;
}

bool Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key::has_operation() const
{
    return is_set(operation)
	|| is_set(encryption.operation)
	|| is_set(key.operation);
}

std::string Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.operation)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encryption")
    {
        encryption = value;
    }
    if(value_path == "key")
    {
        key = value;
    }
}

Native::Crypto::Ikev2::Profile::Authentication::Remote::Remote()
    :
    ecdsa_sig{YType::empty, "ecdsa-sig"},
    rsa_sig{YType::empty, "rsa-sig"}
    	,
    anyconnect_eap(std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap>())
	,eap(nullptr) // presence node
	,pre_share(nullptr) // presence node
{
    anyconnect_eap->parent = this;

    yang_name = "remote"; yang_parent_name = "authentication";
}

Native::Crypto::Ikev2::Profile::Authentication::Remote::~Remote()
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Remote::has_data() const
{
    return ecdsa_sig.is_set
	|| rsa_sig.is_set
	|| (anyconnect_eap !=  nullptr && anyconnect_eap->has_data())
	|| (eap !=  nullptr && eap->has_data())
	|| (pre_share !=  nullptr && pre_share->has_data());
}

bool Native::Crypto::Ikev2::Profile::Authentication::Remote::has_operation() const
{
    return is_set(operation)
	|| is_set(ecdsa_sig.operation)
	|| is_set(rsa_sig.operation)
	|| (anyconnect_eap !=  nullptr && anyconnect_eap->has_operation())
	|| (eap !=  nullptr && eap->has_operation())
	|| (pre_share !=  nullptr && pre_share->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Authentication::Remote::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Profile::Authentication::Remote::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Remote' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ecdsa_sig.is_set || is_set(ecdsa_sig.operation)) leaf_name_data.push_back(ecdsa_sig.get_name_leafdata());
    if (rsa_sig.is_set || is_set(rsa_sig.operation)) leaf_name_data.push_back(rsa_sig.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Authentication::Remote::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "anyconnect-eap")
    {
        if(anyconnect_eap == nullptr)
        {
            anyconnect_eap = std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap>();
        }
        return anyconnect_eap;
    }

    if(child_yang_name == "eap")
    {
        if(eap == nullptr)
        {
            eap = std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Remote::Eap>();
        }
        return eap;
    }

    if(child_yang_name == "pre-share")
    {
        if(pre_share == nullptr)
        {
            pre_share = std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare>();
        }
        return pre_share;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Authentication::Remote::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(anyconnect_eap != nullptr)
    {
        children["anyconnect-eap"] = anyconnect_eap;
    }

    if(eap != nullptr)
    {
        children["eap"] = eap;
    }

    if(pre_share != nullptr)
    {
        children["pre-share"] = pre_share;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Authentication::Remote::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ecdsa-sig")
    {
        ecdsa_sig = value;
    }
    if(value_path == "rsa-sig")
    {
        rsa_sig = value;
    }
}

Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::AnyconnectEap()
    :
    aggregate(nullptr) // presence node
{
    yang_name = "anyconnect-eap"; yang_parent_name = "remote";
}

Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::~AnyconnectEap()
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::has_data() const
{
    return (aggregate !=  nullptr && aggregate->has_data());
}

bool Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::has_operation() const
{
    return is_set(operation)
	|| (aggregate !=  nullptr && aggregate->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "anyconnect-eap";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AnyconnectEap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggregate")
    {
        if(aggregate == nullptr)
        {
            aggregate = std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::Aggregate>();
        }
        return aggregate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aggregate != nullptr)
    {
        children["aggregate"] = aggregate;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::set_value(const std::string & value_path, std::string value)
{
}

Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::Aggregate::Aggregate()
    :
    cert_request{YType::empty, "cert-request"}
{
    yang_name = "aggregate"; yang_parent_name = "anyconnect-eap";
}

Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::Aggregate::~Aggregate()
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::Aggregate::has_data() const
{
    return cert_request.is_set;
}

bool Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::Aggregate::has_operation() const
{
    return is_set(operation)
	|| is_set(cert_request.operation);
}

std::string Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::Aggregate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregate";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::Aggregate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Aggregate' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cert_request.is_set || is_set(cert_request.operation)) leaf_name_data.push_back(cert_request.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::Aggregate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::Aggregate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Authentication::Remote::AnyconnectEap::Aggregate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cert-request")
    {
        cert_request = value;
    }
}

Native::Crypto::Ikev2::Profile::Authentication::Remote::Eap::Eap()
    :
    query_identity{YType::empty, "query-identity"},
    timeout{YType::uint8, "timeout"}
{
    yang_name = "eap"; yang_parent_name = "remote";
}

Native::Crypto::Ikev2::Profile::Authentication::Remote::Eap::~Eap()
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Remote::Eap::has_data() const
{
    return query_identity.is_set
	|| timeout.is_set;
}

bool Native::Crypto::Ikev2::Profile::Authentication::Remote::Eap::has_operation() const
{
    return is_set(operation)
	|| is_set(query_identity.operation)
	|| is_set(timeout.operation);
}

std::string Native::Crypto::Ikev2::Profile::Authentication::Remote::Eap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eap";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Profile::Authentication::Remote::Eap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Eap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (query_identity.is_set || is_set(query_identity.operation)) leaf_name_data.push_back(query_identity.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Authentication::Remote::Eap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Authentication::Remote::Eap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Crypto::Ikev2::Profile::Authentication::Remote::Eap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "query-identity")
    {
        query_identity = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::PreShare()
    :
    key(std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::Key>())
{
    key->parent = this;

    yang_name = "pre-share"; yang_parent_name = "remote";
}

Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::~PreShare()
{
}

bool Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::has_data() const
{
    return (key !=  nullptr && key->has_data());
}

bool Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::has_operation() const
{
    return is_set(operation)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-share";

    return path_buffer.str();

}

const EntityPath Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PreShare' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key != nullptr)
    {
        children["key"] = key;
    }

    return children;
}

void Native::Crypto::Ikev2::Profile::Authentication::Remote::PreShare::set_value(const std::string & value_path, std::string value)
{
}

const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol::VersionEnum::base {0, "base"};
const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Redundancy::Protocol::VersionEnum::optimize {1, "optimize"};

const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Rekey::AcknowledgementEnum::any {0, "any"};
const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Rekey::AcknowledgementEnum::cisco {1, "cisco"};
const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Rekey::AcknowledgementEnum::interoperable {2, "interoperable"};

const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::AlgorithmEnum::sha {0, "sha"};
const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::AlgorithmEnum::sha256 {1, "sha256"};
const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::AlgorithmEnum::sha384 {2, "sha384"};
const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Rekey::SigHash::AlgorithmEnum::sha512 {3, "sha512"};

const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter::WindowSizeEnum::Y_1024 {0, "1024"};
const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter::WindowSizeEnum::Y_128 {1, "128"};
const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter::WindowSizeEnum::Y_256 {2, "256"};
const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter::WindowSizeEnum::Y_512 {3, "512"};
const Enum::YLeaf Native::Crypto::Gdoi::Group::Server::Local::Sa::Ipsec::Replay::Counter::WindowSizeEnum::Y_64 {4, "64"};

const Enum::YLeaf Native::Crypto::Gdoi::Group::Default_::Client::TransportEncryptKeyEnum::group_key {0, "group-key"};
const Enum::YLeaf Native::Crypto::Gdoi::Group::Default_::Client::TransportEncryptKeyEnum::pair_wise_key {1, "pair-wise-key"};

const Enum::YLeaf Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdContainer::UpDownEnum::up {0, "up"};
const Enum::YLeaf Native::Crypto::Ikev2::Client::Flexvpn::Peer::PeerIdContainer::UpDownEnum::down {1, "down"};

const Enum::YLeaf Native::Crypto::Ikev2::Client::Flexvpn::Connect::UpDownEnum::up {0, "up"};
const Enum::YLeaf Native::Crypto::Ikev2::Client::Flexvpn::Connect::UpDownEnum::down {1, "down"};

const Enum::YLeaf Native::Crypto::Ikev2::DpdContainer::DpdQueryEnum::on_demand {0, "on-demand"};
const Enum::YLeaf Native::Crypto::Ikev2::DpdContainer::DpdQueryEnum::periodic {1, "periodic"};

const Enum::YLeaf Native::Crypto::Ikev2::Keyring::Peer::PreSharedKey::EncryptionEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Ikev2::Keyring::Peer::PreSharedKey::EncryptionEnum::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Ikev2::Limit::MaxNegSa::DirectionEnum::incoming {0, "incoming"};
const Enum::YLeaf Native::Crypto::Ikev2::Limit::MaxNegSa::DirectionEnum::outgoing {1, "outgoing"};

const Enum::YLeaf Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::Password::EncryptionEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::AnyconnectEap::List::Password::EncryptionEnum::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::Password::EncryptionEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Cert::List::Password::EncryptionEnum::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::Password::EncryptionEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Eap::List::Password::EncryptionEnum::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::Password::EncryptionEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Ikev2::Profile::Aaa::Authorization::Group::Psk::List::Password::EncryptionEnum::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::Password::EncryptionEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::AnyconnectEap::List::Password::EncryptionEnum::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::Password::EncryptionEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Cert::List::Password::EncryptionEnum::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::Password::EncryptionEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Eap::List::Password::EncryptionEnum::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::Password::EncryptionEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Ikev2::Profile::Aaa::Authorization::User::Psk::List::Password::EncryptionEnum::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password::EncryptionEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Gtc::Password::EncryptionEnum::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password::EncryptionEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Md5::Password::EncryptionEnum::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password::EncryptionEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Ikev2::Profile::Authentication::Local::Eap::Mschapv2::Password::EncryptionEnum::Y_6 {1, "6"};

const Enum::YLeaf Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key::EncryptionEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Crypto::Ikev2::Profile::Authentication::Local::PreShare::Key::EncryptionEnum::Y_6 {1, "6"};


}
}

