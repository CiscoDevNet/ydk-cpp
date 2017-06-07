
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_30.hpp"
#include "Cisco_IOS_XE_native_31.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {

Native::Interface::Gigabitethernet::Cts::Manual::Sap::Sap()
{
    yang_name = "sap"; yang_parent_name = "manual";
}

Native::Interface::Gigabitethernet::Cts::Manual::Sap::~Sap()
{
}

bool Native::Interface::Gigabitethernet::Cts::Manual::Sap::has_data() const
{
    for (std::size_t index=0; index<pmk.size(); index++)
    {
        if(pmk[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Gigabitethernet::Cts::Manual::Sap::has_operation() const
{
    for (std::size_t index=0; index<pmk.size(); index++)
    {
        if(pmk[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Interface::Gigabitethernet::Cts::Manual::Sap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sap";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Cts::Manual::Sap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Cts::Manual::Sap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pmk")
    {
        for(auto const & c : pmk)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk>();
        c->parent = this;
        pmk.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Cts::Manual::Sap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pmk)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Cts::Manual::Sap::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::Pmk()
    :
    word{YType::str, "word"}
    	,
    mode_list(std::make_shared<Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList>())
{
    mode_list->parent = this;

    yang_name = "pmk"; yang_parent_name = "sap";
}

Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::~Pmk()
{
}

bool Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::has_data() const
{
    return word.is_set
	|| (mode_list !=  nullptr && mode_list->has_data());
}

bool Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::has_operation() const
{
    return is_set(operation)
	|| is_set(word.operation)
	|| (mode_list !=  nullptr && mode_list->has_operation());
}

std::string Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmk" <<"[word='" <<word <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pmk' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.operation)) leaf_name_data.push_back(word.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode-list")
    {
        if(mode_list == nullptr)
        {
            mode_list = std::make_shared<Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList>();
        }
        return mode_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mode_list != nullptr)
    {
        children["mode-list"] = mode_list;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "word")
    {
        word = value;
    }
}

Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::ModeList()
    :
    gcm_encrypt(nullptr) // presence node
	,no_encap(nullptr) // presence node
{
    yang_name = "mode-list"; yang_parent_name = "pmk";
}

Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::~ModeList()
{
}

bool Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::has_data() const
{
    return (gcm_encrypt !=  nullptr && gcm_encrypt->has_data())
	|| (no_encap !=  nullptr && no_encap->has_data());
}

bool Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::has_operation() const
{
    return is_set(operation)
	|| (gcm_encrypt !=  nullptr && gcm_encrypt->has_operation())
	|| (no_encap !=  nullptr && no_encap->has_operation());
}

std::string Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode-list";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ModeList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gcm-encrypt")
    {
        if(gcm_encrypt == nullptr)
        {
            gcm_encrypt = std::make_shared<Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt>();
        }
        return gcm_encrypt;
    }

    if(child_yang_name == "no-encap")
    {
        if(no_encap == nullptr)
        {
            no_encap = std::make_shared<Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap>();
        }
        return no_encap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(gcm_encrypt != nullptr)
    {
        children["gcm-encrypt"] = gcm_encrypt;
    }

    if(no_encap != nullptr)
    {
        children["no-encap"] = no_encap;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::GcmEncrypt()
    :
    gmac(nullptr) // presence node
{
    yang_name = "gcm-encrypt"; yang_parent_name = "mode-list";
}

Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::~GcmEncrypt()
{
}

bool Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::has_data() const
{
    return (gmac !=  nullptr && gmac->has_data());
}

bool Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::has_operation() const
{
    return is_set(operation)
	|| (gmac !=  nullptr && gmac->has_operation());
}

std::string Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gcm-encrypt";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GcmEncrypt' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gmac")
    {
        if(gmac == nullptr)
        {
            gmac = std::make_shared<Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac>();
        }
        return gmac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(gmac != nullptr)
    {
        children["gmac"] = gmac;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::Gmac()
    :
    null{YType::empty, "null"}
{
    yang_name = "gmac"; yang_parent_name = "gcm-encrypt";
}

Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::~Gmac()
{
}

bool Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::has_data() const
{
    return null.is_set;
}

bool Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::has_operation() const
{
    return is_set(operation)
	|| is_set(null.operation);
}

std::string Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gmac";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Gmac' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (null.is_set || is_set(null.operation)) leaf_name_data.push_back(null.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::GcmEncrypt::Gmac::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "null")
    {
        null = value;
    }
}

Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::NoEncap()
    :
    gmac(nullptr) // presence node
{
    yang_name = "no-encap"; yang_parent_name = "mode-list";
}

Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::~NoEncap()
{
}

bool Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::has_data() const
{
    return (gmac !=  nullptr && gmac->has_data());
}

bool Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::has_operation() const
{
    return is_set(operation)
	|| (gmac !=  nullptr && gmac->has_operation());
}

std::string Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-encap";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NoEncap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gmac")
    {
        if(gmac == nullptr)
        {
            gmac = std::make_shared<Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac>();
        }
        return gmac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(gmac != nullptr)
    {
        children["gmac"] = gmac;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::Gmac()
    :
    gcm_encrypt{YType::empty, "gcm-encrypt"}
{
    yang_name = "gmac"; yang_parent_name = "no-encap";
}

Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::~Gmac()
{
}

bool Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::has_data() const
{
    return gcm_encrypt.is_set;
}

bool Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::has_operation() const
{
    return is_set(operation)
	|| is_set(gcm_encrypt.operation);
}

std::string Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gmac";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Gmac' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gcm_encrypt.is_set || is_set(gcm_encrypt.operation)) leaf_name_data.push_back(gcm_encrypt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Cts::Manual::Sap::Pmk::ModeList::NoEncap::Gmac::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "gcm-encrypt")
    {
        gcm_encrypt = value;
    }
}

Native::Interface::Gigabitethernet::Cts::Manual::Propagate::Propagate()
    :
    sgt{YType::boolean, "sgt"}
{
    yang_name = "propagate"; yang_parent_name = "manual";
}

Native::Interface::Gigabitethernet::Cts::Manual::Propagate::~Propagate()
{
}

bool Native::Interface::Gigabitethernet::Cts::Manual::Propagate::has_data() const
{
    return sgt.is_set;
}

bool Native::Interface::Gigabitethernet::Cts::Manual::Propagate::has_operation() const
{
    return is_set(operation)
	|| is_set(sgt.operation);
}

std::string Native::Interface::Gigabitethernet::Cts::Manual::Propagate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "propagate";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Cts::Manual::Propagate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Propagate' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Cts::Manual::Propagate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Cts::Manual::Propagate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Cts::Manual::Propagate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sgt")
    {
        sgt = value;
    }
}

Native::Interface::Gigabitethernet::Dot1X::Dot1X()
    :
    credentials{YType::str, "credentials"},
    max_reauth_req{YType::uint8, "max-reauth-req"},
    max_req{YType::uint8, "max-req"},
    max_start{YType::uint8, "max-start"},
    pae{YType::enumeration, "pae"}
    	,
    authenticator(std::make_shared<Native::Interface::Gigabitethernet::Dot1X::Authenticator>())
	,supplicant(std::make_shared<Native::Interface::Gigabitethernet::Dot1X::Supplicant>())
	,timeout(std::make_shared<Native::Interface::Gigabitethernet::Dot1X::Timeout>())
{
    authenticator->parent = this;

    supplicant->parent = this;

    timeout->parent = this;

    yang_name = "dot1x"; yang_parent_name = "GigabitEthernet";
}

Native::Interface::Gigabitethernet::Dot1X::~Dot1X()
{
}

bool Native::Interface::Gigabitethernet::Dot1X::has_data() const
{
    return credentials.is_set
	|| max_reauth_req.is_set
	|| max_req.is_set
	|| max_start.is_set
	|| pae.is_set
	|| (authenticator !=  nullptr && authenticator->has_data())
	|| (supplicant !=  nullptr && supplicant->has_data())
	|| (timeout !=  nullptr && timeout->has_data());
}

bool Native::Interface::Gigabitethernet::Dot1X::has_operation() const
{
    return is_set(operation)
	|| is_set(credentials.operation)
	|| is_set(max_reauth_req.operation)
	|| is_set(max_req.operation)
	|| is_set(max_start.operation)
	|| is_set(pae.operation)
	|| (authenticator !=  nullptr && authenticator->has_operation())
	|| (supplicant !=  nullptr && supplicant->has_operation())
	|| (timeout !=  nullptr && timeout->has_operation());
}

std::string Native::Interface::Gigabitethernet::Dot1X::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dot1x:dot1x";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Dot1X::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dot1X' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (credentials.is_set || is_set(credentials.operation)) leaf_name_data.push_back(credentials.get_name_leafdata());
    if (max_reauth_req.is_set || is_set(max_reauth_req.operation)) leaf_name_data.push_back(max_reauth_req.get_name_leafdata());
    if (max_req.is_set || is_set(max_req.operation)) leaf_name_data.push_back(max_req.get_name_leafdata());
    if (max_start.is_set || is_set(max_start.operation)) leaf_name_data.push_back(max_start.get_name_leafdata());
    if (pae.is_set || is_set(pae.operation)) leaf_name_data.push_back(pae.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Dot1X::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authenticator")
    {
        if(authenticator == nullptr)
        {
            authenticator = std::make_shared<Native::Interface::Gigabitethernet::Dot1X::Authenticator>();
        }
        return authenticator;
    }

    if(child_yang_name == "supplicant")
    {
        if(supplicant == nullptr)
        {
            supplicant = std::make_shared<Native::Interface::Gigabitethernet::Dot1X::Supplicant>();
        }
        return supplicant;
    }

    if(child_yang_name == "timeout")
    {
        if(timeout == nullptr)
        {
            timeout = std::make_shared<Native::Interface::Gigabitethernet::Dot1X::Timeout>();
        }
        return timeout;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Dot1X::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authenticator != nullptr)
    {
        children["authenticator"] = authenticator;
    }

    if(supplicant != nullptr)
    {
        children["supplicant"] = supplicant;
    }

    if(timeout != nullptr)
    {
        children["timeout"] = timeout;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Dot1X::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "credentials")
    {
        credentials = value;
    }
    if(value_path == "max-reauth-req")
    {
        max_reauth_req = value;
    }
    if(value_path == "max-req")
    {
        max_req = value;
    }
    if(value_path == "max-start")
    {
        max_start = value;
    }
    if(value_path == "pae")
    {
        pae = value;
    }
}

Native::Interface::Gigabitethernet::Dot1X::Authenticator::Authenticator()
    :
    eap(std::make_shared<Native::Interface::Gigabitethernet::Dot1X::Authenticator::Eap>())
{
    eap->parent = this;

    yang_name = "authenticator"; yang_parent_name = "dot1x";
}

Native::Interface::Gigabitethernet::Dot1X::Authenticator::~Authenticator()
{
}

bool Native::Interface::Gigabitethernet::Dot1X::Authenticator::has_data() const
{
    return (eap !=  nullptr && eap->has_data());
}

bool Native::Interface::Gigabitethernet::Dot1X::Authenticator::has_operation() const
{
    return is_set(operation)
	|| (eap !=  nullptr && eap->has_operation());
}

std::string Native::Interface::Gigabitethernet::Dot1X::Authenticator::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authenticator";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Dot1X::Authenticator::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authenticator' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Dot1X::Authenticator::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eap")
    {
        if(eap == nullptr)
        {
            eap = std::make_shared<Native::Interface::Gigabitethernet::Dot1X::Authenticator::Eap>();
        }
        return eap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Dot1X::Authenticator::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(eap != nullptr)
    {
        children["eap"] = eap;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Dot1X::Authenticator::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Dot1X::Authenticator::Eap::Eap()
    :
    profile{YType::str, "profile"}
{
    yang_name = "eap"; yang_parent_name = "authenticator";
}

Native::Interface::Gigabitethernet::Dot1X::Authenticator::Eap::~Eap()
{
}

bool Native::Interface::Gigabitethernet::Dot1X::Authenticator::Eap::has_data() const
{
    return profile.is_set;
}

bool Native::Interface::Gigabitethernet::Dot1X::Authenticator::Eap::has_operation() const
{
    return is_set(operation)
	|| is_set(profile.operation);
}

std::string Native::Interface::Gigabitethernet::Dot1X::Authenticator::Eap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eap";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Dot1X::Authenticator::Eap::get_entity_path(Entity* ancestor) const
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

    if (profile.is_set || is_set(profile.operation)) leaf_name_data.push_back(profile.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Dot1X::Authenticator::Eap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Dot1X::Authenticator::Eap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Dot1X::Authenticator::Eap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile")
    {
        profile = value;
    }
}

Native::Interface::Gigabitethernet::Dot1X::Supplicant::Supplicant()
    :
    eap(std::make_shared<Native::Interface::Gigabitethernet::Dot1X::Supplicant::Eap>())
{
    eap->parent = this;

    yang_name = "supplicant"; yang_parent_name = "dot1x";
}

Native::Interface::Gigabitethernet::Dot1X::Supplicant::~Supplicant()
{
}

bool Native::Interface::Gigabitethernet::Dot1X::Supplicant::has_data() const
{
    return (eap !=  nullptr && eap->has_data());
}

bool Native::Interface::Gigabitethernet::Dot1X::Supplicant::has_operation() const
{
    return is_set(operation)
	|| (eap !=  nullptr && eap->has_operation());
}

std::string Native::Interface::Gigabitethernet::Dot1X::Supplicant::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "supplicant";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Dot1X::Supplicant::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Supplicant' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Dot1X::Supplicant::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eap")
    {
        if(eap == nullptr)
        {
            eap = std::make_shared<Native::Interface::Gigabitethernet::Dot1X::Supplicant::Eap>();
        }
        return eap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Dot1X::Supplicant::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(eap != nullptr)
    {
        children["eap"] = eap;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Dot1X::Supplicant::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Dot1X::Supplicant::Eap::Eap()
    :
    profile{YType::str, "profile"}
{
    yang_name = "eap"; yang_parent_name = "supplicant";
}

Native::Interface::Gigabitethernet::Dot1X::Supplicant::Eap::~Eap()
{
}

bool Native::Interface::Gigabitethernet::Dot1X::Supplicant::Eap::has_data() const
{
    return profile.is_set;
}

bool Native::Interface::Gigabitethernet::Dot1X::Supplicant::Eap::has_operation() const
{
    return is_set(operation)
	|| is_set(profile.operation);
}

std::string Native::Interface::Gigabitethernet::Dot1X::Supplicant::Eap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eap";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Dot1X::Supplicant::Eap::get_entity_path(Entity* ancestor) const
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

    if (profile.is_set || is_set(profile.operation)) leaf_name_data.push_back(profile.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Dot1X::Supplicant::Eap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Dot1X::Supplicant::Eap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Dot1X::Supplicant::Eap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile")
    {
        profile = value;
    }
}

Native::Interface::Gigabitethernet::Dot1X::Timeout::Timeout()
    :
    auth_period{YType::uint16, "auth-period"},
    held_period{YType::uint16, "held-period"},
    quiet_period{YType::uint16, "quiet-period"},
    ratelimit_period{YType::uint16, "ratelimit-period"},
    server_timeout{YType::uint16, "server-timeout"},
    start_period{YType::uint16, "start-period"},
    supp_timeout{YType::uint16, "supp-timeout"},
    tx_period{YType::uint16, "tx-period"}
{
    yang_name = "timeout"; yang_parent_name = "dot1x";
}

Native::Interface::Gigabitethernet::Dot1X::Timeout::~Timeout()
{
}

bool Native::Interface::Gigabitethernet::Dot1X::Timeout::has_data() const
{
    return auth_period.is_set
	|| held_period.is_set
	|| quiet_period.is_set
	|| ratelimit_period.is_set
	|| server_timeout.is_set
	|| start_period.is_set
	|| supp_timeout.is_set
	|| tx_period.is_set;
}

bool Native::Interface::Gigabitethernet::Dot1X::Timeout::has_operation() const
{
    return is_set(operation)
	|| is_set(auth_period.operation)
	|| is_set(held_period.operation)
	|| is_set(quiet_period.operation)
	|| is_set(ratelimit_period.operation)
	|| is_set(server_timeout.operation)
	|| is_set(start_period.operation)
	|| is_set(supp_timeout.operation)
	|| is_set(tx_period.operation);
}

std::string Native::Interface::Gigabitethernet::Dot1X::Timeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timeout";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Dot1X::Timeout::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timeout' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_period.is_set || is_set(auth_period.operation)) leaf_name_data.push_back(auth_period.get_name_leafdata());
    if (held_period.is_set || is_set(held_period.operation)) leaf_name_data.push_back(held_period.get_name_leafdata());
    if (quiet_period.is_set || is_set(quiet_period.operation)) leaf_name_data.push_back(quiet_period.get_name_leafdata());
    if (ratelimit_period.is_set || is_set(ratelimit_period.operation)) leaf_name_data.push_back(ratelimit_period.get_name_leafdata());
    if (server_timeout.is_set || is_set(server_timeout.operation)) leaf_name_data.push_back(server_timeout.get_name_leafdata());
    if (start_period.is_set || is_set(start_period.operation)) leaf_name_data.push_back(start_period.get_name_leafdata());
    if (supp_timeout.is_set || is_set(supp_timeout.operation)) leaf_name_data.push_back(supp_timeout.get_name_leafdata());
    if (tx_period.is_set || is_set(tx_period.operation)) leaf_name_data.push_back(tx_period.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Dot1X::Timeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Dot1X::Timeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Dot1X::Timeout::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auth-period")
    {
        auth_period = value;
    }
    if(value_path == "held-period")
    {
        held_period = value;
    }
    if(value_path == "quiet-period")
    {
        quiet_period = value;
    }
    if(value_path == "ratelimit-period")
    {
        ratelimit_period = value;
    }
    if(value_path == "server-timeout")
    {
        server_timeout = value;
    }
    if(value_path == "start-period")
    {
        start_period = value;
    }
    if(value_path == "supp-timeout")
    {
        supp_timeout = value;
    }
    if(value_path == "tx-period")
    {
        tx_period = value;
    }
}

Native::Interface::Gigabitethernet::Performance::Performance()
    :
    monitor(std::make_shared<Native::Interface::Gigabitethernet::Performance::Monitor>())
{
    monitor->parent = this;

    yang_name = "performance"; yang_parent_name = "GigabitEthernet";
}

Native::Interface::Gigabitethernet::Performance::~Performance()
{
}

bool Native::Interface::Gigabitethernet::Performance::has_data() const
{
    return (monitor !=  nullptr && monitor->has_data());
}

bool Native::Interface::Gigabitethernet::Performance::has_operation() const
{
    return is_set(operation)
	|| (monitor !=  nullptr && monitor->has_operation());
}

std::string Native::Interface::Gigabitethernet::Performance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ezpm:performance";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Performance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Performance' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Performance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitor")
    {
        if(monitor == nullptr)
        {
            monitor = std::make_shared<Native::Interface::Gigabitethernet::Performance::Monitor>();
        }
        return monitor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Performance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(monitor != nullptr)
    {
        children["monitor"] = monitor;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Performance::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Performance::Monitor::Monitor()
    :
    context{YType::str, "context"}
{
    yang_name = "monitor"; yang_parent_name = "performance";
}

Native::Interface::Gigabitethernet::Performance::Monitor::~Monitor()
{
}

bool Native::Interface::Gigabitethernet::Performance::Monitor::has_data() const
{
    for (auto const & leaf : context.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Interface::Gigabitethernet::Performance::Monitor::has_operation() const
{
    for (auto const & leaf : context.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(context.operation);
}

std::string Native::Interface::Gigabitethernet::Performance::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Performance::Monitor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Monitor' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto context_name_datas = context.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), context_name_datas.begin(), context_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Performance::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Performance::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Performance::Monitor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "context")
    {
        context.append(value);
    }
}

Native::Interface::Gigabitethernet::ServicePolicy::ServicePolicy()
    :
    history{YType::empty, "history"},
    input{YType::str, "input"},
    output{YType::str, "output"}
    	,
    type(std::make_shared<Native::Interface::Gigabitethernet::ServicePolicy::Type>())
{
    type->parent = this;

    yang_name = "service-policy"; yang_parent_name = "GigabitEthernet";
}

Native::Interface::Gigabitethernet::ServicePolicy::~ServicePolicy()
{
}

bool Native::Interface::Gigabitethernet::ServicePolicy::has_data() const
{
    return history.is_set
	|| input.is_set
	|| output.is_set
	|| (type !=  nullptr && type->has_data());
}

bool Native::Interface::Gigabitethernet::ServicePolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(history.operation)
	|| is_set(input.operation)
	|| is_set(output.operation)
	|| (type !=  nullptr && type->has_operation());
}

std::string Native::Interface::Gigabitethernet::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-policy:service-policy";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicy' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history.is_set || is_set(history.operation)) leaf_name_data.push_back(history.get_name_leafdata());
    if (input.is_set || is_set(input.operation)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.operation)) leaf_name_data.push_back(output.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "type")
    {
        if(type == nullptr)
        {
            type = std::make_shared<Native::Interface::Gigabitethernet::ServicePolicy::Type>();
        }
        return type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(type != nullptr)
    {
        children["type"] = type;
    }

    return children;
}

void Native::Interface::Gigabitethernet::ServicePolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "history")
    {
        history = value;
    }
    if(value_path == "input")
    {
        input = value;
    }
    if(value_path == "output")
    {
        output = value;
    }
}

Native::Interface::Gigabitethernet::ServicePolicy::Type::Type()
    :
    control(std::make_shared<Native::Interface::Gigabitethernet::ServicePolicy::Type::Control>())
	,performance_monitor(std::make_shared<Native::Interface::Gigabitethernet::ServicePolicy::Type::PerformanceMonitor>())
	,service_chain(std::make_shared<Native::Interface::Gigabitethernet::ServicePolicy::Type::ServiceChain>())
{
    control->parent = this;

    performance_monitor->parent = this;

    service_chain->parent = this;

    yang_name = "type"; yang_parent_name = "service-policy";
}

Native::Interface::Gigabitethernet::ServicePolicy::Type::~Type()
{
}

bool Native::Interface::Gigabitethernet::ServicePolicy::Type::has_data() const
{
    return (control !=  nullptr && control->has_data())
	|| (performance_monitor !=  nullptr && performance_monitor->has_data())
	|| (service_chain !=  nullptr && service_chain->has_data());
}

bool Native::Interface::Gigabitethernet::ServicePolicy::Type::has_operation() const
{
    return is_set(operation)
	|| (control !=  nullptr && control->has_operation())
	|| (performance_monitor !=  nullptr && performance_monitor->has_operation())
	|| (service_chain !=  nullptr && service_chain->has_operation());
}

std::string Native::Interface::Gigabitethernet::ServicePolicy::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::ServicePolicy::Type::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Type' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::ServicePolicy::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "control")
    {
        if(control == nullptr)
        {
            control = std::make_shared<Native::Interface::Gigabitethernet::ServicePolicy::Type::Control>();
        }
        return control;
    }

    if(child_yang_name == "performance-monitor")
    {
        if(performance_monitor == nullptr)
        {
            performance_monitor = std::make_shared<Native::Interface::Gigabitethernet::ServicePolicy::Type::PerformanceMonitor>();
        }
        return performance_monitor;
    }

    if(child_yang_name == "service-chain")
    {
        if(service_chain == nullptr)
        {
            service_chain = std::make_shared<Native::Interface::Gigabitethernet::ServicePolicy::Type::ServiceChain>();
        }
        return service_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::ServicePolicy::Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(control != nullptr)
    {
        children["control"] = control;
    }

    if(performance_monitor != nullptr)
    {
        children["performance-monitor"] = performance_monitor;
    }

    if(service_chain != nullptr)
    {
        children["service-chain"] = service_chain;
    }

    return children;
}

void Native::Interface::Gigabitethernet::ServicePolicy::Type::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::ServicePolicy::Type::Control::Control()
    :
    subscriber{YType::str, "subscriber"}
{
    yang_name = "control"; yang_parent_name = "type";
}

Native::Interface::Gigabitethernet::ServicePolicy::Type::Control::~Control()
{
}

bool Native::Interface::Gigabitethernet::ServicePolicy::Type::Control::has_data() const
{
    return subscriber.is_set;
}

bool Native::Interface::Gigabitethernet::ServicePolicy::Type::Control::has_operation() const
{
    return is_set(operation)
	|| is_set(subscriber.operation);
}

std::string Native::Interface::Gigabitethernet::ServicePolicy::Type::Control::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "control";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::ServicePolicy::Type::Control::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Control' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber.is_set || is_set(subscriber.operation)) leaf_name_data.push_back(subscriber.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::ServicePolicy::Type::Control::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::ServicePolicy::Type::Control::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::ServicePolicy::Type::Control::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "subscriber")
    {
        subscriber = value;
    }
}

Native::Interface::Gigabitethernet::ServicePolicy::Type::PerformanceMonitor::PerformanceMonitor()
    :
    direction{YType::enumeration, "direction"},
    name{YType::str, "name"}
{
    yang_name = "performance-monitor"; yang_parent_name = "type";
}

Native::Interface::Gigabitethernet::ServicePolicy::Type::PerformanceMonitor::~PerformanceMonitor()
{
}

bool Native::Interface::Gigabitethernet::ServicePolicy::Type::PerformanceMonitor::has_data() const
{
    return direction.is_set
	|| name.is_set;
}

bool Native::Interface::Gigabitethernet::ServicePolicy::Type::PerformanceMonitor::has_operation() const
{
    return is_set(operation)
	|| is_set(direction.operation)
	|| is_set(name.operation);
}

std::string Native::Interface::Gigabitethernet::ServicePolicy::Type::PerformanceMonitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "performance-monitor";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::ServicePolicy::Type::PerformanceMonitor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerformanceMonitor' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::ServicePolicy::Type::PerformanceMonitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::ServicePolicy::Type::PerformanceMonitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::ServicePolicy::Type::PerformanceMonitor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Interface::Gigabitethernet::ServicePolicy::Type::ServiceChain::ServiceChain()
    :
    input(std::make_shared<Native::Interface::Gigabitethernet::ServicePolicy::Type::ServiceChain::Input>())
	,output(std::make_shared<Native::Interface::Gigabitethernet::ServicePolicy::Type::ServiceChain::Output>())
{
    input->parent = this;

    output->parent = this;

    yang_name = "service-chain"; yang_parent_name = "type";
}

Native::Interface::Gigabitethernet::ServicePolicy::Type::ServiceChain::~ServiceChain()
{
}

bool Native::Interface::Gigabitethernet::ServicePolicy::Type::ServiceChain::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Native::Interface::Gigabitethernet::ServicePolicy::Type::ServiceChain::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string Native::Interface::Gigabitethernet::ServicePolicy::Type::ServiceChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-chain";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::ServicePolicy::Type::ServiceChain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServiceChain' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::ServicePolicy::Type::ServiceChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<Native::Interface::Gigabitethernet::ServicePolicy::Type::ServiceChain::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<Native::Interface::Gigabitethernet::ServicePolicy::Type::ServiceChain::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::ServicePolicy::Type::ServiceChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void Native::Interface::Gigabitethernet::ServicePolicy::Type::ServiceChain::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::ServicePolicy::Type::ServiceChain::Input::Input()
    :
    name{YType::str, "name"}
{
    yang_name = "input"; yang_parent_name = "service-chain";
}

Native::Interface::Gigabitethernet::ServicePolicy::Type::ServiceChain::Input::~Input()
{
}

bool Native::Interface::Gigabitethernet::ServicePolicy::Type::ServiceChain::Input::has_data() const
{
    return name.is_set;
}

bool Native::Interface::Gigabitethernet::ServicePolicy::Type::ServiceChain::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::Interface::Gigabitethernet::ServicePolicy::Type::ServiceChain::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::ServicePolicy::Type::ServiceChain::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Input' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::ServicePolicy::Type::ServiceChain::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::ServicePolicy::Type::ServiceChain::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::ServicePolicy::Type::ServiceChain::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Interface::Gigabitethernet::ServicePolicy::Type::ServiceChain::Output::Output()
    :
    name{YType::str, "name"}
{
    yang_name = "output"; yang_parent_name = "service-chain";
}

Native::Interface::Gigabitethernet::ServicePolicy::Type::ServiceChain::Output::~Output()
{
}

bool Native::Interface::Gigabitethernet::ServicePolicy::Type::ServiceChain::Output::has_data() const
{
    return name.is_set;
}

bool Native::Interface::Gigabitethernet::ServicePolicy::Type::ServiceChain::Output::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::Interface::Gigabitethernet::ServicePolicy::Type::ServiceChain::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::ServicePolicy::Type::ServiceChain::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Output' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::ServicePolicy::Type::ServiceChain::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::ServicePolicy::Type::ServiceChain::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::ServicePolicy::Type::ServiceChain::Output::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Interface::Gigabitethernet::Snmp::Snmp()
    :
    ifindex(std::make_shared<Native::Interface::Gigabitethernet::Snmp::Ifindex>())
	,trap(std::make_shared<Native::Interface::Gigabitethernet::Snmp::Trap>())
{
    ifindex->parent = this;

    trap->parent = this;

    yang_name = "snmp"; yang_parent_name = "GigabitEthernet";
}

Native::Interface::Gigabitethernet::Snmp::~Snmp()
{
}

bool Native::Interface::Gigabitethernet::Snmp::has_data() const
{
    return (ifindex !=  nullptr && ifindex->has_data())
	|| (trap !=  nullptr && trap->has_data());
}

bool Native::Interface::Gigabitethernet::Snmp::has_operation() const
{
    return is_set(operation)
	|| (ifindex !=  nullptr && ifindex->has_operation())
	|| (trap !=  nullptr && trap->has_operation());
}

std::string Native::Interface::Gigabitethernet::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-snmp:snmp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Snmp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Snmp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ifindex")
    {
        if(ifindex == nullptr)
        {
            ifindex = std::make_shared<Native::Interface::Gigabitethernet::Snmp::Ifindex>();
        }
        return ifindex;
    }

    if(child_yang_name == "trap")
    {
        if(trap == nullptr)
        {
            trap = std::make_shared<Native::Interface::Gigabitethernet::Snmp::Trap>();
        }
        return trap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ifindex != nullptr)
    {
        children["ifindex"] = ifindex;
    }

    if(trap != nullptr)
    {
        children["trap"] = trap;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Snmp::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Snmp::Ifindex::Ifindex()
    :
    clear{YType::boolean, "clear"},
    persist{YType::empty, "persist"}
{
    yang_name = "ifindex"; yang_parent_name = "snmp";
}

Native::Interface::Gigabitethernet::Snmp::Ifindex::~Ifindex()
{
}

bool Native::Interface::Gigabitethernet::Snmp::Ifindex::has_data() const
{
    return clear.is_set
	|| persist.is_set;
}

bool Native::Interface::Gigabitethernet::Snmp::Ifindex::has_operation() const
{
    return is_set(operation)
	|| is_set(clear.operation)
	|| is_set(persist.operation);
}

std::string Native::Interface::Gigabitethernet::Snmp::Ifindex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifindex";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Snmp::Ifindex::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ifindex' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clear.is_set || is_set(clear.operation)) leaf_name_data.push_back(clear.get_name_leafdata());
    if (persist.is_set || is_set(persist.operation)) leaf_name_data.push_back(persist.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Snmp::Ifindex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Snmp::Ifindex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Snmp::Ifindex::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "clear")
    {
        clear = value;
    }
    if(value_path == "persist")
    {
        persist = value;
    }
}

Native::Interface::Gigabitethernet::Snmp::Trap::Trap()
    :
    link_status{YType::boolean, "link-status"}
    	,
    link_status_capas(std::make_shared<Native::Interface::Gigabitethernet::Snmp::Trap::LinkStatusCapas>())
{
    link_status_capas->parent = this;

    yang_name = "trap"; yang_parent_name = "snmp";
}

Native::Interface::Gigabitethernet::Snmp::Trap::~Trap()
{
}

bool Native::Interface::Gigabitethernet::Snmp::Trap::has_data() const
{
    return link_status.is_set
	|| (link_status_capas !=  nullptr && link_status_capas->has_data());
}

bool Native::Interface::Gigabitethernet::Snmp::Trap::has_operation() const
{
    return is_set(operation)
	|| is_set(link_status.operation)
	|| (link_status_capas !=  nullptr && link_status_capas->has_operation());
}

std::string Native::Interface::Gigabitethernet::Snmp::Trap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Snmp::Trap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Trap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_status.is_set || is_set(link_status.operation)) leaf_name_data.push_back(link_status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Snmp::Trap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-status-capas")
    {
        if(link_status_capas == nullptr)
        {
            link_status_capas = std::make_shared<Native::Interface::Gigabitethernet::Snmp::Trap::LinkStatusCapas>();
        }
        return link_status_capas;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Snmp::Trap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(link_status_capas != nullptr)
    {
        children["link-status-capas"] = link_status_capas;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Snmp::Trap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-status")
    {
        link_status = value;
    }
}

Native::Interface::Gigabitethernet::Snmp::Trap::LinkStatusCapas::LinkStatusCapas()
    :
    link_status(std::make_shared<Native::Interface::Gigabitethernet::Snmp::Trap::LinkStatusCapas::LinkStatus>())
{
    link_status->parent = this;

    yang_name = "link-status-capas"; yang_parent_name = "trap";
}

Native::Interface::Gigabitethernet::Snmp::Trap::LinkStatusCapas::~LinkStatusCapas()
{
}

bool Native::Interface::Gigabitethernet::Snmp::Trap::LinkStatusCapas::has_data() const
{
    return (link_status !=  nullptr && link_status->has_data());
}

bool Native::Interface::Gigabitethernet::Snmp::Trap::LinkStatusCapas::has_operation() const
{
    return is_set(operation)
	|| (link_status !=  nullptr && link_status->has_operation());
}

std::string Native::Interface::Gigabitethernet::Snmp::Trap::LinkStatusCapas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-status-capas";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Snmp::Trap::LinkStatusCapas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkStatusCapas' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Snmp::Trap::LinkStatusCapas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-status")
    {
        if(link_status == nullptr)
        {
            link_status = std::make_shared<Native::Interface::Gigabitethernet::Snmp::Trap::LinkStatusCapas::LinkStatus>();
        }
        return link_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Snmp::Trap::LinkStatusCapas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(link_status != nullptr)
    {
        children["link-status"] = link_status;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Snmp::Trap::LinkStatusCapas::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Snmp::Trap::LinkStatusCapas::LinkStatus::LinkStatus()
    :
    permit(std::make_shared<Native::Interface::Gigabitethernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit>())
{
    permit->parent = this;

    yang_name = "link-status"; yang_parent_name = "link-status-capas";
}

Native::Interface::Gigabitethernet::Snmp::Trap::LinkStatusCapas::LinkStatus::~LinkStatus()
{
}

bool Native::Interface::Gigabitethernet::Snmp::Trap::LinkStatusCapas::LinkStatus::has_data() const
{
    return (permit !=  nullptr && permit->has_data());
}

bool Native::Interface::Gigabitethernet::Snmp::Trap::LinkStatusCapas::LinkStatus::has_operation() const
{
    return is_set(operation)
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Interface::Gigabitethernet::Snmp::Trap::LinkStatusCapas::LinkStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-status";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Snmp::Trap::LinkStatusCapas::LinkStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkStatus' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Snmp::Trap::LinkStatusCapas::LinkStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Interface::Gigabitethernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Snmp::Trap::LinkStatusCapas::LinkStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Snmp::Trap::LinkStatusCapas::LinkStatus::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::Permit()
    :
    duplicates{YType::empty, "duplicates"}
{
    yang_name = "permit"; yang_parent_name = "link-status";
}

Native::Interface::Gigabitethernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::~Permit()
{
}

bool Native::Interface::Gigabitethernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::has_data() const
{
    return duplicates.is_set;
}

bool Native::Interface::Gigabitethernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::has_operation() const
{
    return is_set(operation)
	|| is_set(duplicates.operation);
}

std::string Native::Interface::Gigabitethernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Permit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duplicates.is_set || is_set(duplicates.operation)) leaf_name_data.push_back(duplicates.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Snmp::Trap::LinkStatusCapas::LinkStatus::Permit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "duplicates")
    {
        duplicates = value;
    }
}

Native::Interface::Gigabitethernet::Lisp::Lisp()
    :
    extended_subnet_mode{YType::empty, "extended-subnet-mode"}
    	,
    mobility(std::make_shared<Native::Interface::Gigabitethernet::Lisp::Mobility>())
{
    mobility->parent = this;

    yang_name = "lisp"; yang_parent_name = "GigabitEthernet";
}

Native::Interface::Gigabitethernet::Lisp::~Lisp()
{
}

bool Native::Interface::Gigabitethernet::Lisp::has_data() const
{
    return extended_subnet_mode.is_set
	|| (mobility !=  nullptr && mobility->has_data());
}

bool Native::Interface::Gigabitethernet::Lisp::has_operation() const
{
    return is_set(operation)
	|| is_set(extended_subnet_mode.operation)
	|| (mobility !=  nullptr && mobility->has_operation());
}

std::string Native::Interface::Gigabitethernet::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-lisp:lisp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Lisp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lisp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extended_subnet_mode.is_set || is_set(extended_subnet_mode.operation)) leaf_name_data.push_back(extended_subnet_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mobility")
    {
        if(mobility == nullptr)
        {
            mobility = std::make_shared<Native::Interface::Gigabitethernet::Lisp::Mobility>();
        }
        return mobility;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mobility != nullptr)
    {
        children["mobility"] = mobility;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Lisp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "extended-subnet-mode")
    {
        extended_subnet_mode = value;
    }
}

Native::Interface::Gigabitethernet::Lisp::Mobility::Mobility()
    :
    discover(std::make_shared<Native::Interface::Gigabitethernet::Lisp::Mobility::Discover>())
	,dynamic_eid(std::make_shared<Native::Interface::Gigabitethernet::Lisp::Mobility::DynamicEid>())
	,liveness(std::make_shared<Native::Interface::Gigabitethernet::Lisp::Mobility::Liveness>())
{
    discover->parent = this;

    dynamic_eid->parent = this;

    liveness->parent = this;

    yang_name = "mobility"; yang_parent_name = "lisp";
}

Native::Interface::Gigabitethernet::Lisp::Mobility::~Mobility()
{
}

bool Native::Interface::Gigabitethernet::Lisp::Mobility::has_data() const
{
    return (discover !=  nullptr && discover->has_data())
	|| (dynamic_eid !=  nullptr && dynamic_eid->has_data())
	|| (liveness !=  nullptr && liveness->has_data());
}

bool Native::Interface::Gigabitethernet::Lisp::Mobility::has_operation() const
{
    return is_set(operation)
	|| (discover !=  nullptr && discover->has_operation())
	|| (dynamic_eid !=  nullptr && dynamic_eid->has_operation())
	|| (liveness !=  nullptr && liveness->has_operation());
}

std::string Native::Interface::Gigabitethernet::Lisp::Mobility::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobility";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Lisp::Mobility::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mobility' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Lisp::Mobility::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discover")
    {
        if(discover == nullptr)
        {
            discover = std::make_shared<Native::Interface::Gigabitethernet::Lisp::Mobility::Discover>();
        }
        return discover;
    }

    if(child_yang_name == "dynamic-eid")
    {
        if(dynamic_eid == nullptr)
        {
            dynamic_eid = std::make_shared<Native::Interface::Gigabitethernet::Lisp::Mobility::DynamicEid>();
        }
        return dynamic_eid;
    }

    if(child_yang_name == "liveness")
    {
        if(liveness == nullptr)
        {
            liveness = std::make_shared<Native::Interface::Gigabitethernet::Lisp::Mobility::Liveness>();
        }
        return liveness;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Lisp::Mobility::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(discover != nullptr)
    {
        children["discover"] = discover;
    }

    if(dynamic_eid != nullptr)
    {
        children["dynamic-eid"] = dynamic_eid;
    }

    if(liveness != nullptr)
    {
        children["liveness"] = liveness;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Lisp::Mobility::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Lisp::Mobility::DynamicEid::DynamicEid()
    :
    dynamic_eid_name{YType::str, "dynamic-eid-name"},
    nbr_proxy_reply{YType::empty, "nbr-proxy-reply"},
    requests{YType::uint8, "requests"}
{
    yang_name = "dynamic-eid"; yang_parent_name = "mobility";
}

Native::Interface::Gigabitethernet::Lisp::Mobility::DynamicEid::~DynamicEid()
{
}

bool Native::Interface::Gigabitethernet::Lisp::Mobility::DynamicEid::has_data() const
{
    return dynamic_eid_name.is_set
	|| nbr_proxy_reply.is_set
	|| requests.is_set;
}

bool Native::Interface::Gigabitethernet::Lisp::Mobility::DynamicEid::has_operation() const
{
    return is_set(operation)
	|| is_set(dynamic_eid_name.operation)
	|| is_set(nbr_proxy_reply.operation)
	|| is_set(requests.operation);
}

std::string Native::Interface::Gigabitethernet::Lisp::Mobility::DynamicEid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic-eid";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Lisp::Mobility::DynamicEid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DynamicEid' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic_eid_name.is_set || is_set(dynamic_eid_name.operation)) leaf_name_data.push_back(dynamic_eid_name.get_name_leafdata());
    if (nbr_proxy_reply.is_set || is_set(nbr_proxy_reply.operation)) leaf_name_data.push_back(nbr_proxy_reply.get_name_leafdata());
    if (requests.is_set || is_set(requests.operation)) leaf_name_data.push_back(requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Lisp::Mobility::DynamicEid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Lisp::Mobility::DynamicEid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Lisp::Mobility::DynamicEid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dynamic-eid-name")
    {
        dynamic_eid_name = value;
    }
    if(value_path == "nbr-proxy-reply")
    {
        nbr_proxy_reply = value;
    }
    if(value_path == "requests")
    {
        requests = value;
    }
}

Native::Interface::Gigabitethernet::Lisp::Mobility::Discover::Discover()
    :
    arp{YType::boolean, "arp"}
{
    yang_name = "discover"; yang_parent_name = "mobility";
}

Native::Interface::Gigabitethernet::Lisp::Mobility::Discover::~Discover()
{
}

bool Native::Interface::Gigabitethernet::Lisp::Mobility::Discover::has_data() const
{
    return arp.is_set;
}

bool Native::Interface::Gigabitethernet::Lisp::Mobility::Discover::has_operation() const
{
    return is_set(operation)
	|| is_set(arp.operation);
}

std::string Native::Interface::Gigabitethernet::Lisp::Mobility::Discover::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discover";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Lisp::Mobility::Discover::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Discover' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (arp.is_set || is_set(arp.operation)) leaf_name_data.push_back(arp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Lisp::Mobility::Discover::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Lisp::Mobility::Discover::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Lisp::Mobility::Discover::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "arp")
    {
        arp = value;
    }
}

Native::Interface::Gigabitethernet::Lisp::Mobility::Liveness::Liveness()
    :
    test{YType::boolean, "test"},
    ttl{YType::uint8, "ttl"}
{
    yang_name = "liveness"; yang_parent_name = "mobility";
}

Native::Interface::Gigabitethernet::Lisp::Mobility::Liveness::~Liveness()
{
}

bool Native::Interface::Gigabitethernet::Lisp::Mobility::Liveness::has_data() const
{
    return test.is_set
	|| ttl.is_set;
}

bool Native::Interface::Gigabitethernet::Lisp::Mobility::Liveness::has_operation() const
{
    return is_set(operation)
	|| is_set(test.operation)
	|| is_set(ttl.operation);
}

std::string Native::Interface::Gigabitethernet::Lisp::Mobility::Liveness::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "liveness";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Lisp::Mobility::Liveness::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Liveness' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (test.is_set || is_set(test.operation)) leaf_name_data.push_back(test.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.operation)) leaf_name_data.push_back(ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Lisp::Mobility::Liveness::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Lisp::Mobility::Liveness::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Lisp::Mobility::Liveness::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "test")
    {
        test = value;
    }
    if(value_path == "ttl")
    {
        ttl = value;
    }
}

Native::Interface::Gigabitethernet::Mka::Mka()
    :
    pre_shared_key(std::make_shared<Native::Interface::Gigabitethernet::Mka::PreSharedKey>())
{
    pre_shared_key->parent = this;

    yang_name = "mka"; yang_parent_name = "GigabitEthernet";
}

Native::Interface::Gigabitethernet::Mka::~Mka()
{
}

bool Native::Interface::Gigabitethernet::Mka::has_data() const
{
    return (pre_shared_key !=  nullptr && pre_shared_key->has_data());
}

bool Native::Interface::Gigabitethernet::Mka::has_operation() const
{
    return is_set(operation)
	|| (pre_shared_key !=  nullptr && pre_shared_key->has_operation());
}

std::string Native::Interface::Gigabitethernet::Mka::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mka:mka";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Mka::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mka' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Mka::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pre-shared-key")
    {
        if(pre_shared_key == nullptr)
        {
            pre_shared_key = std::make_shared<Native::Interface::Gigabitethernet::Mka::PreSharedKey>();
        }
        return pre_shared_key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Mka::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pre_shared_key != nullptr)
    {
        children["pre-shared-key"] = pre_shared_key;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Mka::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Mka::PreSharedKey::PreSharedKey()
    :
    key_chain(std::make_shared<Native::Interface::Gigabitethernet::Mka::PreSharedKey::KeyChain>())
{
    key_chain->parent = this;

    yang_name = "pre-shared-key"; yang_parent_name = "mka";
}

Native::Interface::Gigabitethernet::Mka::PreSharedKey::~PreSharedKey()
{
}

bool Native::Interface::Gigabitethernet::Mka::PreSharedKey::has_data() const
{
    return (key_chain !=  nullptr && key_chain->has_data());
}

bool Native::Interface::Gigabitethernet::Mka::PreSharedKey::has_operation() const
{
    return is_set(operation)
	|| (key_chain !=  nullptr && key_chain->has_operation());
}

std::string Native::Interface::Gigabitethernet::Mka::PreSharedKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pre-shared-key";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Mka::PreSharedKey::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Mka::PreSharedKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain")
    {
        if(key_chain == nullptr)
        {
            key_chain = std::make_shared<Native::Interface::Gigabitethernet::Mka::PreSharedKey::KeyChain>();
        }
        return key_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Mka::PreSharedKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_chain != nullptr)
    {
        children["key-chain"] = key_chain;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Mka::PreSharedKey::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Mka::PreSharedKey::KeyChain::KeyChain()
    :
    name{YType::str, "name"}
{
    yang_name = "key-chain"; yang_parent_name = "pre-shared-key";
}

Native::Interface::Gigabitethernet::Mka::PreSharedKey::KeyChain::~KeyChain()
{
}

bool Native::Interface::Gigabitethernet::Mka::PreSharedKey::KeyChain::has_data() const
{
    return name.is_set;
}

bool Native::Interface::Gigabitethernet::Mka::PreSharedKey::KeyChain::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::Interface::Gigabitethernet::Mka::PreSharedKey::KeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Mka::PreSharedKey::KeyChain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyChain' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Mka::PreSharedKey::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Mka::PreSharedKey::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Mka::PreSharedKey::KeyChain::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::Ospfv3()
    :
    dead_interval{YType::uint16, "dead-interval"},
    flood_reduction{YType::empty, "flood-reduction"},
    hello_interval{YType::uint32, "hello-interval"},
    mtu_ignore{YType::empty, "mtu-ignore"},
    priority{YType::uint8, "priority"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    shutdown{YType::empty, "shutdown"},
    transmit_delay{YType::uint32, "transmit-delay"}
    	,
    authentication(std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::Authentication>())
	,bfd(nullptr) // presence node
	,cost(std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::Cost>())
	,database_filter(std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::DatabaseFilter>())
	,demand_circuit(nullptr) // presence node
	,encryption(std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::Encryption>())
	,manet(std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::Manet>())
	,multi_area(std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::MultiArea>())
	,network(std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::Network>())
	,prefix_suppression(nullptr) // presence node
{
    authentication->parent = this;

    cost->parent = this;

    database_filter->parent = this;

    encryption->parent = this;

    manet->parent = this;

    multi_area->parent = this;

    network->parent = this;

    yang_name = "ospfv3"; yang_parent_name = "GigabitEthernet";
}

Native::Interface::Gigabitethernet::Ospfv3::~Ospfv3()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<process_id.size(); index++)
    {
        if(process_id[index]->has_data())
            return true;
    }
    return dead_interval.is_set
	|| flood_reduction.is_set
	|| hello_interval.is_set
	|| mtu_ignore.is_set
	|| priority.is_set
	|| retransmit_interval.is_set
	|| shutdown.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (cost !=  nullptr && cost->has_data())
	|| (database_filter !=  nullptr && database_filter->has_data())
	|| (demand_circuit !=  nullptr && demand_circuit->has_data())
	|| (encryption !=  nullptr && encryption->has_data())
	|| (manet !=  nullptr && manet->has_data())
	|| (multi_area !=  nullptr && multi_area->has_data())
	|| (network !=  nullptr && network->has_data())
	|| (prefix_suppression !=  nullptr && prefix_suppression->has_data());
}

bool Native::Interface::Gigabitethernet::Ospfv3::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<process_id.size(); index++)
    {
        if(process_id[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(dead_interval.operation)
	|| is_set(flood_reduction.operation)
	|| is_set(hello_interval.operation)
	|| is_set(mtu_ignore.operation)
	|| is_set(priority.operation)
	|| is_set(retransmit_interval.operation)
	|| is_set(shutdown.operation)
	|| is_set(transmit_delay.operation)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (cost !=  nullptr && cost->has_operation())
	|| (database_filter !=  nullptr && database_filter->has_operation())
	|| (demand_circuit !=  nullptr && demand_circuit->has_operation())
	|| (encryption !=  nullptr && encryption->has_operation())
	|| (manet !=  nullptr && manet->has_operation())
	|| (multi_area !=  nullptr && multi_area->has_operation())
	|| (network !=  nullptr && network->has_operation())
	|| (prefix_suppression !=  nullptr && prefix_suppression->has_operation());
}

std::string Native::Interface::Gigabitethernet::Ospfv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ospfv3:ospfv3";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ospfv3' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dead_interval.is_set || is_set(dead_interval.operation)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (flood_reduction.is_set || is_set(flood_reduction.operation)) leaf_name_data.push_back(flood_reduction.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (mtu_ignore.is_set || is_set(mtu_ignore.operation)) leaf_name_data.push_back(mtu_ignore.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.operation)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.operation)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "cost")
    {
        if(cost == nullptr)
        {
            cost = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::Cost>();
        }
        return cost;
    }

    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::DatabaseFilter>();
        }
        return database_filter;
    }

    if(child_yang_name == "demand-circuit")
    {
        if(demand_circuit == nullptr)
        {
            demand_circuit = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::DemandCircuit>();
        }
        return demand_circuit;
    }

    if(child_yang_name == "encryption")
    {
        if(encryption == nullptr)
        {
            encryption = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::Encryption>();
        }
        return encryption;
    }

    if(child_yang_name == "manet")
    {
        if(manet == nullptr)
        {
            manet = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::Manet>();
        }
        return manet;
    }

    if(child_yang_name == "multi-area")
    {
        if(multi_area == nullptr)
        {
            multi_area = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::MultiArea>();
        }
        return multi_area;
    }

    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::Network>();
        }
        return network;
    }

    if(child_yang_name == "prefix-suppression")
    {
        if(prefix_suppression == nullptr)
        {
            prefix_suppression = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::PrefixSuppression>();
        }
        return prefix_suppression;
    }

    if(child_yang_name == "process-id")
    {
        for(auto const & c : process_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId>();
        c->parent = this;
        process_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(cost != nullptr)
    {
        children["cost"] = cost;
    }

    if(database_filter != nullptr)
    {
        children["database-filter"] = database_filter;
    }

    if(demand_circuit != nullptr)
    {
        children["demand-circuit"] = demand_circuit;
    }

    if(encryption != nullptr)
    {
        children["encryption"] = encryption;
    }

    if(manet != nullptr)
    {
        children["manet"] = manet;
    }

    if(multi_area != nullptr)
    {
        children["multi-area"] = multi_area;
    }

    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    if(network != nullptr)
    {
        children["network"] = network;
    }

    if(prefix_suppression != nullptr)
    {
        children["prefix-suppression"] = prefix_suppression;
    }

    for (auto const & c : process_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dead-interval")
    {
        dead_interval = value;
    }
    if(value_path == "flood-reduction")
    {
        flood_reduction = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::ProcessId()
    :
    id{YType::uint16, "id"},
    dead_interval{YType::uint16, "dead-interval"},
    hello_interval{YType::uint32, "hello-interval"},
    priority{YType::uint8, "priority"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    transmit_delay{YType::uint32, "transmit-delay"}
    	,
    authentication(std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Authentication>())
	,bfd(nullptr) // presence node
	,cost(std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost>())
	,database_filter(std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::DatabaseFilter>())
	,demand_circuit(nullptr) // presence node
	,flood_reduction(nullptr) // presence node
	,ipv4(std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4>())
	,ipv6(std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6>())
	,manet(std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Manet>())
	,mtu_ignore(nullptr) // presence node
	,multi_area(std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::MultiArea>())
	,network(std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Network>())
	,prefix_suppression(nullptr) // presence node
	,shutdown(nullptr) // presence node
{
    authentication->parent = this;

    cost->parent = this;

    database_filter->parent = this;

    ipv4->parent = this;

    ipv6->parent = this;

    manet->parent = this;

    multi_area->parent = this;

    network->parent = this;

    yang_name = "process-id"; yang_parent_name = "ospfv3";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::~ProcessId()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return id.is_set
	|| dead_interval.is_set
	|| hello_interval.is_set
	|| priority.is_set
	|| retransmit_interval.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (cost !=  nullptr && cost->has_data())
	|| (database_filter !=  nullptr && database_filter->has_data())
	|| (demand_circuit !=  nullptr && demand_circuit->has_data())
	|| (flood_reduction !=  nullptr && flood_reduction->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (manet !=  nullptr && manet->has_data())
	|| (mtu_ignore !=  nullptr && mtu_ignore->has_data())
	|| (multi_area !=  nullptr && multi_area->has_data())
	|| (network !=  nullptr && network->has_data())
	|| (prefix_suppression !=  nullptr && prefix_suppression->has_data())
	|| (shutdown !=  nullptr && shutdown->has_data());
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(dead_interval.operation)
	|| is_set(hello_interval.operation)
	|| is_set(priority.operation)
	|| is_set(retransmit_interval.operation)
	|| is_set(transmit_delay.operation)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (cost !=  nullptr && cost->has_operation())
	|| (database_filter !=  nullptr && database_filter->has_operation())
	|| (demand_circuit !=  nullptr && demand_circuit->has_operation())
	|| (flood_reduction !=  nullptr && flood_reduction->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (manet !=  nullptr && manet->has_operation())
	|| (mtu_ignore !=  nullptr && mtu_ignore->has_operation())
	|| (multi_area !=  nullptr && multi_area->has_operation())
	|| (network !=  nullptr && network->has_operation())
	|| (prefix_suppression !=  nullptr && prefix_suppression->has_operation())
	|| (shutdown !=  nullptr && shutdown->has_operation());
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-id" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProcessId' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (dead_interval.is_set || is_set(dead_interval.operation)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.operation)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.operation)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "cost")
    {
        if(cost == nullptr)
        {
            cost = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost>();
        }
        return cost;
    }

    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::DatabaseFilter>();
        }
        return database_filter;
    }

    if(child_yang_name == "demand-circuit")
    {
        if(demand_circuit == nullptr)
        {
            demand_circuit = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::DemandCircuit>();
        }
        return demand_circuit;
    }

    if(child_yang_name == "flood-reduction")
    {
        if(flood_reduction == nullptr)
        {
            flood_reduction = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::FloodReduction>();
        }
        return flood_reduction;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "manet")
    {
        if(manet == nullptr)
        {
            manet = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Manet>();
        }
        return manet;
    }

    if(child_yang_name == "mtu-ignore")
    {
        if(mtu_ignore == nullptr)
        {
            mtu_ignore = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::MtuIgnore>();
        }
        return mtu_ignore;
    }

    if(child_yang_name == "multi-area")
    {
        if(multi_area == nullptr)
        {
            multi_area = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::MultiArea>();
        }
        return multi_area;
    }

    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Network>();
        }
        return network;
    }

    if(child_yang_name == "prefix-suppression")
    {
        if(prefix_suppression == nullptr)
        {
            prefix_suppression = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::PrefixSuppression>();
        }
        return prefix_suppression;
    }

    if(child_yang_name == "shutdown")
    {
        if(shutdown == nullptr)
        {
            shutdown = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Shutdown>();
        }
        return shutdown;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(cost != nullptr)
    {
        children["cost"] = cost;
    }

    if(database_filter != nullptr)
    {
        children["database-filter"] = database_filter;
    }

    if(demand_circuit != nullptr)
    {
        children["demand-circuit"] = demand_circuit;
    }

    if(flood_reduction != nullptr)
    {
        children["flood-reduction"] = flood_reduction;
    }

    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(manet != nullptr)
    {
        children["manet"] = manet;
    }

    if(mtu_ignore != nullptr)
    {
        children["mtu-ignore"] = mtu_ignore;
    }

    if(multi_area != nullptr)
    {
        children["multi-area"] = multi_area;
    }

    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    if(network != nullptr)
    {
        children["network"] = network;
    }

    if(prefix_suppression != nullptr)
    {
        children["prefix-suppression"] = prefix_suppression;
    }

    if(shutdown != nullptr)
    {
        children["shutdown"] = shutdown;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "dead-interval")
    {
        dead_interval = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Authentication::Authentication()
    :
    key_chain{YType::str, "key-chain"},
    null{YType::empty, "null"}
{
    yang_name = "authentication"; yang_parent_name = "process-id";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Authentication::~Authentication()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Authentication::has_data() const
{
    return key_chain.is_set
	|| null.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Authentication::has_operation() const
{
    return is_set(operation)
	|| is_set(key_chain.operation)
	|| is_set(null.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Authentication::get_entity_path(Entity* ancestor) const
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

    if (key_chain.is_set || is_set(key_chain.operation)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (null.is_set || is_set(null.operation)) leaf_name_data.push_back(null.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
    }
    if(value_path == "null")
    {
        null = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Bfd::Bfd()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "bfd"; yang_parent_name = "process-id";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Bfd::~Bfd()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Bfd::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Bfd::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Bfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bfd' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Bfd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Cost()
    :
    value_{YType::uint32, "value"}
    	,
    dynamic(nullptr) // presence node
{
    yang_name = "cost"; yang_parent_name = "process-id";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::~Cost()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::has_data() const
{
    return value_.is_set
	|| (dynamic !=  nullptr && dynamic->has_data());
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::has_operation() const
{
    return is_set(operation)
	|| is_set(value_.operation)
	|| (dynamic !=  nullptr && dynamic->has_operation());
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cost' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic>();
        }
        return dynamic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dynamic != nullptr)
    {
        children["dynamic"] = dynamic;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Dynamic()
    :
    default_{YType::uint32, "default"}
    	,
    hysteresis(nullptr) // presence node
	,weight(std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight>())
{
    weight->parent = this;

    yang_name = "dynamic"; yang_parent_name = "cost";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::~Dynamic()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::has_data() const
{
    return default_.is_set
	|| (hysteresis !=  nullptr && hysteresis->has_data())
	|| (weight !=  nullptr && weight->has_data());
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::has_operation() const
{
    return is_set(operation)
	|| is_set(default_.operation)
	|| (hysteresis !=  nullptr && hysteresis->has_operation())
	|| (weight !=  nullptr && weight->has_operation());
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dynamic' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.operation)) leaf_name_data.push_back(default_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hysteresis")
    {
        if(hysteresis == nullptr)
        {
            hysteresis = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis>();
        }
        return hysteresis;
    }

    if(child_yang_name == "weight")
    {
        if(weight == nullptr)
        {
            weight = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight>();
        }
        return weight;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hysteresis != nullptr)
    {
        children["hysteresis"] = hysteresis;
    }

    if(weight != nullptr)
    {
        children["weight"] = weight;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default")
    {
        default_ = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis::Hysteresis()
    :
    percent{YType::uint8, "percent"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "hysteresis"; yang_parent_name = "dynamic";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis::~Hysteresis()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis::has_data() const
{
    return percent.is_set
	|| threshold.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis::has_operation() const
{
    return is_set(operation)
	|| is_set(percent.operation)
	|| is_set(threshold.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hysteresis";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hysteresis' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Hysteresis::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Weight()
    :
    l2_factor(nullptr) // presence node
	,latency(nullptr) // presence node
	,resources(nullptr) // presence node
	,throughput(nullptr) // presence node
{
    yang_name = "weight"; yang_parent_name = "dynamic";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::~Weight()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::has_data() const
{
    return (l2_factor !=  nullptr && l2_factor->has_data())
	|| (latency !=  nullptr && latency->has_data())
	|| (resources !=  nullptr && resources->has_data())
	|| (throughput !=  nullptr && throughput->has_data());
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::has_operation() const
{
    return is_set(operation)
	|| (l2_factor !=  nullptr && l2_factor->has_operation())
	|| (latency !=  nullptr && latency->has_operation())
	|| (resources !=  nullptr && resources->has_operation())
	|| (throughput !=  nullptr && throughput->has_operation());
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weight";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Weight' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "L2-factor")
    {
        if(l2_factor == nullptr)
        {
            l2_factor = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor>();
        }
        return l2_factor;
    }

    if(child_yang_name == "latency")
    {
        if(latency == nullptr)
        {
            latency = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency>();
        }
        return latency;
    }

    if(child_yang_name == "resources")
    {
        if(resources == nullptr)
        {
            resources = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources>();
        }
        return resources;
    }

    if(child_yang_name == "throughput")
    {
        if(throughput == nullptr)
        {
            throughput = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput>();
        }
        return throughput;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2_factor != nullptr)
    {
        children["L2-factor"] = l2_factor;
    }

    if(latency != nullptr)
    {
        children["latency"] = latency;
    }

    if(resources != nullptr)
    {
        children["resources"] = resources;
    }

    if(throughput != nullptr)
    {
        children["throughput"] = throughput;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor::L2Factor()
    :
    value_{YType::uint8, "value"}
{
    yang_name = "L2-factor"; yang_parent_name = "weight";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor::~L2Factor()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor::has_operation() const
{
    return is_set(operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "L2-factor";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2Factor' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::L2Factor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency::Latency()
    :
    value_{YType::uint8, "value"}
{
    yang_name = "latency"; yang_parent_name = "weight";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency::~Latency()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency::has_operation() const
{
    return is_set(operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "latency";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Latency' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Latency::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources::Resources()
    :
    value_{YType::uint8, "value"}
{
    yang_name = "resources"; yang_parent_name = "weight";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources::~Resources()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources::has_operation() const
{
    return is_set(operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resources";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Resources' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Resources::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::Throughput()
    :
    value_{YType::uint8, "value"}
{
    yang_name = "throughput"; yang_parent_name = "weight";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::~Throughput()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::has_operation() const
{
    return is_set(operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throughput";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Throughput' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Cost::Dynamic::Weight::Throughput::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::DatabaseFilter::DatabaseFilter()
    :
    all{YType::enumeration, "all"},
    disable{YType::empty, "disable"}
{
    yang_name = "database-filter"; yang_parent_name = "process-id";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::DatabaseFilter::~DatabaseFilter()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::DatabaseFilter::has_data() const
{
    return all.is_set
	|| disable.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::DatabaseFilter::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation)
	|| is_set(disable.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::DatabaseFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseFilter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());
    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::DatabaseFilter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::DemandCircuit::DemandCircuit()
    :
    disable{YType::empty, "disable"},
    ignore{YType::empty, "ignore"}
{
    yang_name = "demand-circuit"; yang_parent_name = "process-id";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::DemandCircuit::~DemandCircuit()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::DemandCircuit::has_data() const
{
    return disable.is_set
	|| ignore.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::DemandCircuit::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation)
	|| is_set(ignore.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::DemandCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "demand-circuit";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::DemandCircuit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DemandCircuit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (ignore.is_set || is_set(ignore.operation)) leaf_name_data.push_back(ignore.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::DemandCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::DemandCircuit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::DemandCircuit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "ignore")
    {
        ignore = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::FloodReduction::FloodReduction()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "flood-reduction"; yang_parent_name = "process-id";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::FloodReduction::~FloodReduction()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::FloodReduction::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::FloodReduction::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::FloodReduction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flood-reduction";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::FloodReduction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FloodReduction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::FloodReduction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::FloodReduction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::FloodReduction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Manet::Manet()
    :
    peering(std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Manet::Peering>())
{
    peering->parent = this;

    yang_name = "manet"; yang_parent_name = "process-id";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Manet::~Manet()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Manet::has_data() const
{
    return (peering !=  nullptr && peering->has_data());
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Manet::has_operation() const
{
    return is_set(operation)
	|| (peering !=  nullptr && peering->has_operation());
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Manet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manet";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Manet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Manet' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Manet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peering")
    {
        if(peering == nullptr)
        {
            peering = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Manet::Peering>();
        }
        return peering;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Manet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peering != nullptr)
    {
        children["peering"] = peering;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Manet::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Manet::Peering::Peering()
    :
    link_metrics{YType::uint32, "link-metrics"}
    	,
    cost(std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Manet::Peering::Cost>())
{
    cost->parent = this;

    yang_name = "peering"; yang_parent_name = "manet";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Manet::Peering::~Peering()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Manet::Peering::has_data() const
{
    return link_metrics.is_set
	|| (cost !=  nullptr && cost->has_data());
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Manet::Peering::has_operation() const
{
    return is_set(operation)
	|| is_set(link_metrics.operation)
	|| (cost !=  nullptr && cost->has_operation());
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Manet::Peering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peering";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Manet::Peering::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peering' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_metrics.is_set || is_set(link_metrics.operation)) leaf_name_data.push_back(link_metrics.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Manet::Peering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cost")
    {
        if(cost == nullptr)
        {
            cost = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Manet::Peering::Cost>();
        }
        return cost;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Manet::Peering::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cost != nullptr)
    {
        children["cost"] = cost;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Manet::Peering::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-metrics")
    {
        link_metrics = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Manet::Peering::Cost::Cost()
    :
    percent{YType::uint8, "percent"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "cost"; yang_parent_name = "peering";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Manet::Peering::Cost::~Cost()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Manet::Peering::Cost::has_data() const
{
    return percent.is_set
	|| threshold.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Manet::Peering::Cost::has_operation() const
{
    return is_set(operation)
	|| is_set(percent.operation)
	|| is_set(threshold.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Manet::Peering::Cost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Manet::Peering::Cost::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cost' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Manet::Peering::Cost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Manet::Peering::Cost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Manet::Peering::Cost::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::MtuIgnore::MtuIgnore()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "mtu-ignore"; yang_parent_name = "process-id";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::MtuIgnore::~MtuIgnore()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::MtuIgnore::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::MtuIgnore::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::MtuIgnore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mtu-ignore";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::MtuIgnore::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MtuIgnore' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::MtuIgnore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::MtuIgnore::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::MtuIgnore::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::MultiArea::MultiArea()
    :
    cost{YType::uint32, "cost"},
    disable{YType::empty, "disable"},
    id{YType::str, "id"}
{
    yang_name = "multi-area"; yang_parent_name = "process-id";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::MultiArea::~MultiArea()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::MultiArea::has_data() const
{
    return cost.is_set
	|| disable.is_set
	|| id.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::MultiArea::has_operation() const
{
    return is_set(operation)
	|| is_set(cost.operation)
	|| is_set(disable.operation)
	|| is_set(id.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::MultiArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-area";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::MultiArea::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MultiArea' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::MultiArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::MultiArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::MultiArea::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Neighbor::Neighbor()
    :
    id{YType::str, "id"},
    cost{YType::uint16, "cost"},
    poll_interval{YType::uint32, "poll-interval"},
    priority{YType::uint8, "priority"}
    	,
    database_filter(std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Neighbor::DatabaseFilter>())
{
    database_filter->parent = this;

    yang_name = "neighbor"; yang_parent_name = "process-id";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Neighbor::~Neighbor()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Neighbor::has_data() const
{
    return id.is_set
	|| cost.is_set
	|| poll_interval.is_set
	|| priority.is_set
	|| (database_filter !=  nullptr && database_filter->has_data());
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(cost.operation)
	|| is_set(poll_interval.operation)
	|| is_set(priority.operation)
	|| (database_filter !=  nullptr && database_filter->has_operation());
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.operation)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Neighbor::DatabaseFilter>();
        }
        return database_filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_filter != nullptr)
    {
        children["database-filter"] = database_filter;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Neighbor::DatabaseFilter::DatabaseFilter()
    :
    all{YType::enumeration, "all"}
{
    yang_name = "database-filter"; yang_parent_name = "neighbor";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Neighbor::DatabaseFilter::~DatabaseFilter()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Neighbor::DatabaseFilter::has_data() const
{
    return all.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Neighbor::DatabaseFilter::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Neighbor::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Neighbor::DatabaseFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseFilter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Neighbor::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Neighbor::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Neighbor::DatabaseFilter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Network::Network()
    :
    broadcast{YType::empty, "broadcast"},
    manet{YType::empty, "manet"},
    non_broadcast{YType::empty, "non-broadcast"},
    point_to_point{YType::empty, "point-to-point"}
    	,
    point_to_multipoint(nullptr) // presence node
{
    yang_name = "network"; yang_parent_name = "process-id";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Network::~Network()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Network::has_data() const
{
    return broadcast.is_set
	|| manet.is_set
	|| non_broadcast.is_set
	|| point_to_point.is_set
	|| (point_to_multipoint !=  nullptr && point_to_multipoint->has_data());
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Network::has_operation() const
{
    return is_set(operation)
	|| is_set(broadcast.operation)
	|| is_set(manet.operation)
	|| is_set(non_broadcast.operation)
	|| is_set(point_to_point.operation)
	|| (point_to_multipoint !=  nullptr && point_to_multipoint->has_operation());
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Network::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Network' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.operation)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (manet.is_set || is_set(manet.operation)) leaf_name_data.push_back(manet.get_name_leafdata());
    if (non_broadcast.is_set || is_set(non_broadcast.operation)) leaf_name_data.push_back(non_broadcast.get_name_leafdata());
    if (point_to_point.is_set || is_set(point_to_point.operation)) leaf_name_data.push_back(point_to_point.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "point-to-multipoint")
    {
        if(point_to_multipoint == nullptr)
        {
            point_to_multipoint = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Network::PointToMultipoint>();
        }
        return point_to_multipoint;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(point_to_multipoint != nullptr)
    {
        children["point-to-multipoint"] = point_to_multipoint;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Network::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
    }
    if(value_path == "manet")
    {
        manet = value;
    }
    if(value_path == "non-broadcast")
    {
        non_broadcast = value;
    }
    if(value_path == "point-to-point")
    {
        point_to_point = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Network::PointToMultipoint::PointToMultipoint()
    :
    non_broadcast{YType::empty, "non-broadcast"}
{
    yang_name = "point-to-multipoint"; yang_parent_name = "network";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Network::PointToMultipoint::~PointToMultipoint()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Network::PointToMultipoint::has_data() const
{
    return non_broadcast.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Network::PointToMultipoint::has_operation() const
{
    return is_set(operation)
	|| is_set(non_broadcast.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Network::PointToMultipoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "point-to-multipoint";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Network::PointToMultipoint::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PointToMultipoint' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_broadcast.is_set || is_set(non_broadcast.operation)) leaf_name_data.push_back(non_broadcast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Network::PointToMultipoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Network::PointToMultipoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Network::PointToMultipoint::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "non-broadcast")
    {
        non_broadcast = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::PrefixSuppression::PrefixSuppression()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "prefix-suppression"; yang_parent_name = "process-id";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::PrefixSuppression::~PrefixSuppression()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::PrefixSuppression::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::PrefixSuppression::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::PrefixSuppression::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-suppression";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::PrefixSuppression::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixSuppression' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::PrefixSuppression::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::PrefixSuppression::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::PrefixSuppression::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Shutdown::Shutdown()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "shutdown"; yang_parent_name = "process-id";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Shutdown::~Shutdown()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Shutdown::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Shutdown::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Shutdown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shutdown";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Shutdown::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Shutdown' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Shutdown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Shutdown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Shutdown::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Ipv4()
    :
    dead_interval{YType::uint16, "dead-interval"},
    hello_interval{YType::uint32, "hello-interval"},
    priority{YType::uint8, "priority"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    transmit_delay{YType::uint32, "transmit-delay"}
    	,
    authentication(std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Authentication>())
	,bfd(nullptr) // presence node
	,cost(std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost>())
	,database_filter(std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::DatabaseFilter>())
	,demand_circuit(nullptr) // presence node
	,flood_reduction(nullptr) // presence node
	,manet(std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Manet>())
	,mtu_ignore(nullptr) // presence node
	,multi_area(std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::MultiArea>())
	,network(std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Network>())
	,prefix_suppression(nullptr) // presence node
	,shutdown(nullptr) // presence node
{
    authentication->parent = this;

    cost->parent = this;

    database_filter->parent = this;

    manet->parent = this;

    multi_area->parent = this;

    network->parent = this;

    yang_name = "ipv4"; yang_parent_name = "process-id";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::~Ipv4()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::has_data() const
{
    for (std::size_t index=0; index<area.size(); index++)
    {
        if(area[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return dead_interval.is_set
	|| hello_interval.is_set
	|| priority.is_set
	|| retransmit_interval.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (cost !=  nullptr && cost->has_data())
	|| (database_filter !=  nullptr && database_filter->has_data())
	|| (demand_circuit !=  nullptr && demand_circuit->has_data())
	|| (flood_reduction !=  nullptr && flood_reduction->has_data())
	|| (manet !=  nullptr && manet->has_data())
	|| (mtu_ignore !=  nullptr && mtu_ignore->has_data())
	|| (multi_area !=  nullptr && multi_area->has_data())
	|| (network !=  nullptr && network->has_data())
	|| (prefix_suppression !=  nullptr && prefix_suppression->has_data())
	|| (shutdown !=  nullptr && shutdown->has_data());
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::has_operation() const
{
    for (std::size_t index=0; index<area.size(); index++)
    {
        if(area[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(dead_interval.operation)
	|| is_set(hello_interval.operation)
	|| is_set(priority.operation)
	|| is_set(retransmit_interval.operation)
	|| is_set(transmit_delay.operation)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (cost !=  nullptr && cost->has_operation())
	|| (database_filter !=  nullptr && database_filter->has_operation())
	|| (demand_circuit !=  nullptr && demand_circuit->has_operation())
	|| (flood_reduction !=  nullptr && flood_reduction->has_operation())
	|| (manet !=  nullptr && manet->has_operation())
	|| (mtu_ignore !=  nullptr && mtu_ignore->has_operation())
	|| (multi_area !=  nullptr && multi_area->has_operation())
	|| (network !=  nullptr && network->has_operation())
	|| (prefix_suppression !=  nullptr && prefix_suppression->has_operation())
	|| (shutdown !=  nullptr && shutdown->has_operation());
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::get_entity_path(Entity* ancestor) const
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

    if (dead_interval.is_set || is_set(dead_interval.operation)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.operation)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.operation)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area")
    {
        for(auto const & c : area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Area>();
        c->parent = this;
        area.push_back(c);
        return c;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "cost")
    {
        if(cost == nullptr)
        {
            cost = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost>();
        }
        return cost;
    }

    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::DatabaseFilter>();
        }
        return database_filter;
    }

    if(child_yang_name == "demand-circuit")
    {
        if(demand_circuit == nullptr)
        {
            demand_circuit = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::DemandCircuit>();
        }
        return demand_circuit;
    }

    if(child_yang_name == "flood-reduction")
    {
        if(flood_reduction == nullptr)
        {
            flood_reduction = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::FloodReduction>();
        }
        return flood_reduction;
    }

    if(child_yang_name == "manet")
    {
        if(manet == nullptr)
        {
            manet = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Manet>();
        }
        return manet;
    }

    if(child_yang_name == "mtu-ignore")
    {
        if(mtu_ignore == nullptr)
        {
            mtu_ignore = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::MtuIgnore>();
        }
        return mtu_ignore;
    }

    if(child_yang_name == "multi-area")
    {
        if(multi_area == nullptr)
        {
            multi_area = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::MultiArea>();
        }
        return multi_area;
    }

    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Network>();
        }
        return network;
    }

    if(child_yang_name == "prefix-suppression")
    {
        if(prefix_suppression == nullptr)
        {
            prefix_suppression = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::PrefixSuppression>();
        }
        return prefix_suppression;
    }

    if(child_yang_name == "shutdown")
    {
        if(shutdown == nullptr)
        {
            shutdown = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Shutdown>();
        }
        return shutdown;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : area)
    {
        children[c->get_segment_path()] = c;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(cost != nullptr)
    {
        children["cost"] = cost;
    }

    if(database_filter != nullptr)
    {
        children["database-filter"] = database_filter;
    }

    if(demand_circuit != nullptr)
    {
        children["demand-circuit"] = demand_circuit;
    }

    if(flood_reduction != nullptr)
    {
        children["flood-reduction"] = flood_reduction;
    }

    if(manet != nullptr)
    {
        children["manet"] = manet;
    }

    if(mtu_ignore != nullptr)
    {
        children["mtu-ignore"] = mtu_ignore;
    }

    if(multi_area != nullptr)
    {
        children["multi-area"] = multi_area;
    }

    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    if(network != nullptr)
    {
        children["network"] = network;
    }

    if(prefix_suppression != nullptr)
    {
        children["prefix-suppression"] = prefix_suppression;
    }

    if(shutdown != nullptr)
    {
        children["shutdown"] = shutdown;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dead-interval")
    {
        dead_interval = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Area::Area()
    :
    id{YType::str, "id"},
    instance{YType::uint8, "instance"}
{
    yang_name = "area"; yang_parent_name = "ipv4";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Area::~Area()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Area::has_data() const
{
    return id.is_set
	|| instance.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Area::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(instance.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Area::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Area::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Area' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Area::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Area::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Area::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Authentication::Authentication()
    :
    key_chain{YType::str, "key-chain"},
    null{YType::empty, "null"}
{
    yang_name = "authentication"; yang_parent_name = "ipv4";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Authentication::~Authentication()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Authentication::has_data() const
{
    return key_chain.is_set
	|| null.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Authentication::has_operation() const
{
    return is_set(operation)
	|| is_set(key_chain.operation)
	|| is_set(null.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Authentication::get_entity_path(Entity* ancestor) const
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

    if (key_chain.is_set || is_set(key_chain.operation)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (null.is_set || is_set(null.operation)) leaf_name_data.push_back(null.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
    }
    if(value_path == "null")
    {
        null = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Bfd::Bfd()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "bfd"; yang_parent_name = "ipv4";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Bfd::~Bfd()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Bfd::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Bfd::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Bfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bfd' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Bfd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Cost()
    :
    value_{YType::uint32, "value"}
    	,
    dynamic(nullptr) // presence node
{
    yang_name = "cost"; yang_parent_name = "ipv4";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::~Cost()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::has_data() const
{
    return value_.is_set
	|| (dynamic !=  nullptr && dynamic->has_data());
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::has_operation() const
{
    return is_set(operation)
	|| is_set(value_.operation)
	|| (dynamic !=  nullptr && dynamic->has_operation());
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cost' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic>();
        }
        return dynamic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dynamic != nullptr)
    {
        children["dynamic"] = dynamic;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Dynamic()
    :
    default_{YType::uint32, "default"}
    	,
    hysteresis(nullptr) // presence node
	,weight(std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight>())
{
    weight->parent = this;

    yang_name = "dynamic"; yang_parent_name = "cost";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::~Dynamic()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::has_data() const
{
    return default_.is_set
	|| (hysteresis !=  nullptr && hysteresis->has_data())
	|| (weight !=  nullptr && weight->has_data());
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::has_operation() const
{
    return is_set(operation)
	|| is_set(default_.operation)
	|| (hysteresis !=  nullptr && hysteresis->has_operation())
	|| (weight !=  nullptr && weight->has_operation());
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dynamic' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.operation)) leaf_name_data.push_back(default_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hysteresis")
    {
        if(hysteresis == nullptr)
        {
            hysteresis = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis>();
        }
        return hysteresis;
    }

    if(child_yang_name == "weight")
    {
        if(weight == nullptr)
        {
            weight = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight>();
        }
        return weight;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hysteresis != nullptr)
    {
        children["hysteresis"] = hysteresis;
    }

    if(weight != nullptr)
    {
        children["weight"] = weight;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default")
    {
        default_ = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::Hysteresis()
    :
    percent{YType::uint8, "percent"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "hysteresis"; yang_parent_name = "dynamic";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::~Hysteresis()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::has_data() const
{
    return percent.is_set
	|| threshold.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::has_operation() const
{
    return is_set(operation)
	|| is_set(percent.operation)
	|| is_set(threshold.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hysteresis";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hysteresis' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Hysteresis::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Weight()
    :
    l2_factor(nullptr) // presence node
	,latency(nullptr) // presence node
	,resources(nullptr) // presence node
	,throughput(nullptr) // presence node
{
    yang_name = "weight"; yang_parent_name = "dynamic";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::~Weight()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::has_data() const
{
    return (l2_factor !=  nullptr && l2_factor->has_data())
	|| (latency !=  nullptr && latency->has_data())
	|| (resources !=  nullptr && resources->has_data())
	|| (throughput !=  nullptr && throughput->has_data());
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::has_operation() const
{
    return is_set(operation)
	|| (l2_factor !=  nullptr && l2_factor->has_operation())
	|| (latency !=  nullptr && latency->has_operation())
	|| (resources !=  nullptr && resources->has_operation())
	|| (throughput !=  nullptr && throughput->has_operation());
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weight";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Weight' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "L2-factor")
    {
        if(l2_factor == nullptr)
        {
            l2_factor = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor>();
        }
        return l2_factor;
    }

    if(child_yang_name == "latency")
    {
        if(latency == nullptr)
        {
            latency = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency>();
        }
        return latency;
    }

    if(child_yang_name == "resources")
    {
        if(resources == nullptr)
        {
            resources = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources>();
        }
        return resources;
    }

    if(child_yang_name == "throughput")
    {
        if(throughput == nullptr)
        {
            throughput = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput>();
        }
        return throughput;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2_factor != nullptr)
    {
        children["L2-factor"] = l2_factor;
    }

    if(latency != nullptr)
    {
        children["latency"] = latency;
    }

    if(resources != nullptr)
    {
        children["resources"] = resources;
    }

    if(throughput != nullptr)
    {
        children["throughput"] = throughput;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::L2Factor()
    :
    value_{YType::uint8, "value"}
{
    yang_name = "L2-factor"; yang_parent_name = "weight";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::~L2Factor()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::has_operation() const
{
    return is_set(operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "L2-factor";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2Factor' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::L2Factor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::Latency()
    :
    value_{YType::uint8, "value"}
{
    yang_name = "latency"; yang_parent_name = "weight";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::~Latency()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::has_operation() const
{
    return is_set(operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "latency";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Latency' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Latency::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::Resources()
    :
    value_{YType::uint8, "value"}
{
    yang_name = "resources"; yang_parent_name = "weight";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::~Resources()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::has_operation() const
{
    return is_set(operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resources";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Resources' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Resources::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::Throughput()
    :
    value_{YType::uint8, "value"}
{
    yang_name = "throughput"; yang_parent_name = "weight";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::~Throughput()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::has_operation() const
{
    return is_set(operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throughput";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Throughput' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Cost::Dynamic::Weight::Throughput::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::DatabaseFilter::DatabaseFilter()
    :
    all{YType::enumeration, "all"},
    disable{YType::empty, "disable"}
{
    yang_name = "database-filter"; yang_parent_name = "ipv4";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::DatabaseFilter::~DatabaseFilter()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::DatabaseFilter::has_data() const
{
    return all.is_set
	|| disable.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::DatabaseFilter::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation)
	|| is_set(disable.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::DatabaseFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseFilter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());
    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::DatabaseFilter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::DemandCircuit::DemandCircuit()
    :
    disable{YType::empty, "disable"},
    ignore{YType::empty, "ignore"}
{
    yang_name = "demand-circuit"; yang_parent_name = "ipv4";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::DemandCircuit::~DemandCircuit()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::DemandCircuit::has_data() const
{
    return disable.is_set
	|| ignore.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::DemandCircuit::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation)
	|| is_set(ignore.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::DemandCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "demand-circuit";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::DemandCircuit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DemandCircuit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (ignore.is_set || is_set(ignore.operation)) leaf_name_data.push_back(ignore.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::DemandCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::DemandCircuit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::DemandCircuit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "ignore")
    {
        ignore = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::FloodReduction::FloodReduction()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "flood-reduction"; yang_parent_name = "ipv4";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::FloodReduction::~FloodReduction()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::FloodReduction::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::FloodReduction::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::FloodReduction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flood-reduction";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::FloodReduction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FloodReduction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::FloodReduction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::FloodReduction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::FloodReduction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Manet::Manet()
    :
    peering(std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering>())
{
    peering->parent = this;

    yang_name = "manet"; yang_parent_name = "ipv4";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Manet::~Manet()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Manet::has_data() const
{
    return (peering !=  nullptr && peering->has_data());
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Manet::has_operation() const
{
    return is_set(operation)
	|| (peering !=  nullptr && peering->has_operation());
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Manet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manet";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Manet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Manet' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Manet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peering")
    {
        if(peering == nullptr)
        {
            peering = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering>();
        }
        return peering;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Manet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peering != nullptr)
    {
        children["peering"] = peering;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Manet::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::Peering()
    :
    link_metrics{YType::uint32, "link-metrics"}
    	,
    cost(std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost>())
{
    cost->parent = this;

    yang_name = "peering"; yang_parent_name = "manet";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::~Peering()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::has_data() const
{
    return link_metrics.is_set
	|| (cost !=  nullptr && cost->has_data());
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::has_operation() const
{
    return is_set(operation)
	|| is_set(link_metrics.operation)
	|| (cost !=  nullptr && cost->has_operation());
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peering";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peering' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_metrics.is_set || is_set(link_metrics.operation)) leaf_name_data.push_back(link_metrics.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cost")
    {
        if(cost == nullptr)
        {
            cost = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost>();
        }
        return cost;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cost != nullptr)
    {
        children["cost"] = cost;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-metrics")
    {
        link_metrics = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost::Cost()
    :
    percent{YType::uint8, "percent"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "cost"; yang_parent_name = "peering";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost::~Cost()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost::has_data() const
{
    return percent.is_set
	|| threshold.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost::has_operation() const
{
    return is_set(operation)
	|| is_set(percent.operation)
	|| is_set(threshold.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cost' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Manet::Peering::Cost::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::MtuIgnore::MtuIgnore()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "mtu-ignore"; yang_parent_name = "ipv4";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::MtuIgnore::~MtuIgnore()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::MtuIgnore::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::MtuIgnore::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::MtuIgnore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mtu-ignore";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::MtuIgnore::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MtuIgnore' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::MtuIgnore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::MtuIgnore::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::MtuIgnore::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::MultiArea::MultiArea()
    :
    cost{YType::uint32, "cost"},
    disable{YType::empty, "disable"},
    id{YType::str, "id"}
{
    yang_name = "multi-area"; yang_parent_name = "ipv4";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::MultiArea::~MultiArea()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::MultiArea::has_data() const
{
    return cost.is_set
	|| disable.is_set
	|| id.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::MultiArea::has_operation() const
{
    return is_set(operation)
	|| is_set(cost.operation)
	|| is_set(disable.operation)
	|| is_set(id.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::MultiArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-area";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::MultiArea::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MultiArea' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::MultiArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::MultiArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::MultiArea::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Neighbor::Neighbor()
    :
    id{YType::str, "id"},
    cost{YType::uint16, "cost"},
    poll_interval{YType::uint32, "poll-interval"},
    priority{YType::uint8, "priority"}
    	,
    database_filter(std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter>())
{
    database_filter->parent = this;

    yang_name = "neighbor"; yang_parent_name = "ipv4";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Neighbor::~Neighbor()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Neighbor::has_data() const
{
    return id.is_set
	|| cost.is_set
	|| poll_interval.is_set
	|| priority.is_set
	|| (database_filter !=  nullptr && database_filter->has_data());
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(cost.operation)
	|| is_set(poll_interval.operation)
	|| is_set(priority.operation)
	|| (database_filter !=  nullptr && database_filter->has_operation());
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.operation)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter>();
        }
        return database_filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_filter != nullptr)
    {
        children["database-filter"] = database_filter;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter::DatabaseFilter()
    :
    all{YType::enumeration, "all"}
{
    yang_name = "database-filter"; yang_parent_name = "neighbor";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter::~DatabaseFilter()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter::has_data() const
{
    return all.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseFilter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Network::Network()
    :
    broadcast{YType::empty, "broadcast"},
    manet{YType::empty, "manet"},
    non_broadcast{YType::empty, "non-broadcast"},
    point_to_point{YType::empty, "point-to-point"}
    	,
    point_to_multipoint(nullptr) // presence node
{
    yang_name = "network"; yang_parent_name = "ipv4";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Network::~Network()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Network::has_data() const
{
    return broadcast.is_set
	|| manet.is_set
	|| non_broadcast.is_set
	|| point_to_point.is_set
	|| (point_to_multipoint !=  nullptr && point_to_multipoint->has_data());
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Network::has_operation() const
{
    return is_set(operation)
	|| is_set(broadcast.operation)
	|| is_set(manet.operation)
	|| is_set(non_broadcast.operation)
	|| is_set(point_to_point.operation)
	|| (point_to_multipoint !=  nullptr && point_to_multipoint->has_operation());
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Network::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Network' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.operation)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (manet.is_set || is_set(manet.operation)) leaf_name_data.push_back(manet.get_name_leafdata());
    if (non_broadcast.is_set || is_set(non_broadcast.operation)) leaf_name_data.push_back(non_broadcast.get_name_leafdata());
    if (point_to_point.is_set || is_set(point_to_point.operation)) leaf_name_data.push_back(point_to_point.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "point-to-multipoint")
    {
        if(point_to_multipoint == nullptr)
        {
            point_to_multipoint = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint>();
        }
        return point_to_multipoint;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(point_to_multipoint != nullptr)
    {
        children["point-to-multipoint"] = point_to_multipoint;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Network::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
    }
    if(value_path == "manet")
    {
        manet = value;
    }
    if(value_path == "non-broadcast")
    {
        non_broadcast = value;
    }
    if(value_path == "point-to-point")
    {
        point_to_point = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint::PointToMultipoint()
    :
    non_broadcast{YType::empty, "non-broadcast"}
{
    yang_name = "point-to-multipoint"; yang_parent_name = "network";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint::~PointToMultipoint()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint::has_data() const
{
    return non_broadcast.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint::has_operation() const
{
    return is_set(operation)
	|| is_set(non_broadcast.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "point-to-multipoint";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PointToMultipoint' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_broadcast.is_set || is_set(non_broadcast.operation)) leaf_name_data.push_back(non_broadcast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Network::PointToMultipoint::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "non-broadcast")
    {
        non_broadcast = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::PrefixSuppression::PrefixSuppression()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "prefix-suppression"; yang_parent_name = "ipv4";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::PrefixSuppression::~PrefixSuppression()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::PrefixSuppression::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::PrefixSuppression::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::PrefixSuppression::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-suppression";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::PrefixSuppression::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixSuppression' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::PrefixSuppression::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::PrefixSuppression::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::PrefixSuppression::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Shutdown::Shutdown()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "shutdown"; yang_parent_name = "ipv4";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Shutdown::~Shutdown()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Shutdown::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Shutdown::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Shutdown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shutdown";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Shutdown::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Shutdown' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Shutdown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Shutdown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Shutdown::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Ipv6()
    :
    dead_interval{YType::uint16, "dead-interval"},
    hello_interval{YType::uint32, "hello-interval"},
    priority{YType::uint8, "priority"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    transmit_delay{YType::uint32, "transmit-delay"}
    	,
    authentication(std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Authentication>())
	,bfd(nullptr) // presence node
	,cost(std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost>())
	,database_filter(std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::DatabaseFilter>())
	,demand_circuit(nullptr) // presence node
	,flood_reduction(nullptr) // presence node
	,manet(std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Manet>())
	,mtu_ignore(nullptr) // presence node
	,multi_area(std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::MultiArea>())
	,network(std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Network>())
	,prefix_suppression(nullptr) // presence node
	,shutdown(nullptr) // presence node
{
    authentication->parent = this;

    cost->parent = this;

    database_filter->parent = this;

    manet->parent = this;

    multi_area->parent = this;

    network->parent = this;

    yang_name = "ipv6"; yang_parent_name = "process-id";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::~Ipv6()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::has_data() const
{
    for (std::size_t index=0; index<area.size(); index++)
    {
        if(area[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return dead_interval.is_set
	|| hello_interval.is_set
	|| priority.is_set
	|| retransmit_interval.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (cost !=  nullptr && cost->has_data())
	|| (database_filter !=  nullptr && database_filter->has_data())
	|| (demand_circuit !=  nullptr && demand_circuit->has_data())
	|| (flood_reduction !=  nullptr && flood_reduction->has_data())
	|| (manet !=  nullptr && manet->has_data())
	|| (mtu_ignore !=  nullptr && mtu_ignore->has_data())
	|| (multi_area !=  nullptr && multi_area->has_data())
	|| (network !=  nullptr && network->has_data())
	|| (prefix_suppression !=  nullptr && prefix_suppression->has_data())
	|| (shutdown !=  nullptr && shutdown->has_data());
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<area.size(); index++)
    {
        if(area[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(dead_interval.operation)
	|| is_set(hello_interval.operation)
	|| is_set(priority.operation)
	|| is_set(retransmit_interval.operation)
	|| is_set(transmit_delay.operation)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (cost !=  nullptr && cost->has_operation())
	|| (database_filter !=  nullptr && database_filter->has_operation())
	|| (demand_circuit !=  nullptr && demand_circuit->has_operation())
	|| (flood_reduction !=  nullptr && flood_reduction->has_operation())
	|| (manet !=  nullptr && manet->has_operation())
	|| (mtu_ignore !=  nullptr && mtu_ignore->has_operation())
	|| (multi_area !=  nullptr && multi_area->has_operation())
	|| (network !=  nullptr && network->has_operation())
	|| (prefix_suppression !=  nullptr && prefix_suppression->has_operation())
	|| (shutdown !=  nullptr && shutdown->has_operation());
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dead_interval.is_set || is_set(dead_interval.operation)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.operation)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.operation)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area")
    {
        for(auto const & c : area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Area>();
        c->parent = this;
        area.push_back(c);
        return c;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "cost")
    {
        if(cost == nullptr)
        {
            cost = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost>();
        }
        return cost;
    }

    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::DatabaseFilter>();
        }
        return database_filter;
    }

    if(child_yang_name == "demand-circuit")
    {
        if(demand_circuit == nullptr)
        {
            demand_circuit = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::DemandCircuit>();
        }
        return demand_circuit;
    }

    if(child_yang_name == "flood-reduction")
    {
        if(flood_reduction == nullptr)
        {
            flood_reduction = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::FloodReduction>();
        }
        return flood_reduction;
    }

    if(child_yang_name == "manet")
    {
        if(manet == nullptr)
        {
            manet = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Manet>();
        }
        return manet;
    }

    if(child_yang_name == "mtu-ignore")
    {
        if(mtu_ignore == nullptr)
        {
            mtu_ignore = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::MtuIgnore>();
        }
        return mtu_ignore;
    }

    if(child_yang_name == "multi-area")
    {
        if(multi_area == nullptr)
        {
            multi_area = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::MultiArea>();
        }
        return multi_area;
    }

    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Network>();
        }
        return network;
    }

    if(child_yang_name == "prefix-suppression")
    {
        if(prefix_suppression == nullptr)
        {
            prefix_suppression = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::PrefixSuppression>();
        }
        return prefix_suppression;
    }

    if(child_yang_name == "shutdown")
    {
        if(shutdown == nullptr)
        {
            shutdown = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Shutdown>();
        }
        return shutdown;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : area)
    {
        children[c->get_segment_path()] = c;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(cost != nullptr)
    {
        children["cost"] = cost;
    }

    if(database_filter != nullptr)
    {
        children["database-filter"] = database_filter;
    }

    if(demand_circuit != nullptr)
    {
        children["demand-circuit"] = demand_circuit;
    }

    if(flood_reduction != nullptr)
    {
        children["flood-reduction"] = flood_reduction;
    }

    if(manet != nullptr)
    {
        children["manet"] = manet;
    }

    if(mtu_ignore != nullptr)
    {
        children["mtu-ignore"] = mtu_ignore;
    }

    if(multi_area != nullptr)
    {
        children["multi-area"] = multi_area;
    }

    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    if(network != nullptr)
    {
        children["network"] = network;
    }

    if(prefix_suppression != nullptr)
    {
        children["prefix-suppression"] = prefix_suppression;
    }

    if(shutdown != nullptr)
    {
        children["shutdown"] = shutdown;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dead-interval")
    {
        dead_interval = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Area::Area()
    :
    id{YType::str, "id"},
    instance{YType::uint8, "instance"}
{
    yang_name = "area"; yang_parent_name = "ipv6";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Area::~Area()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Area::has_data() const
{
    return id.is_set
	|| instance.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Area::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(instance.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Area::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Area::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Area' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Area::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Area::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Area::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Authentication::Authentication()
    :
    key_chain{YType::str, "key-chain"},
    null{YType::empty, "null"}
{
    yang_name = "authentication"; yang_parent_name = "ipv6";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Authentication::~Authentication()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Authentication::has_data() const
{
    return key_chain.is_set
	|| null.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Authentication::has_operation() const
{
    return is_set(operation)
	|| is_set(key_chain.operation)
	|| is_set(null.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Authentication::get_entity_path(Entity* ancestor) const
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

    if (key_chain.is_set || is_set(key_chain.operation)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (null.is_set || is_set(null.operation)) leaf_name_data.push_back(null.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
    }
    if(value_path == "null")
    {
        null = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Bfd::Bfd()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "bfd"; yang_parent_name = "ipv6";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Bfd::~Bfd()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Bfd::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Bfd::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Bfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bfd' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Bfd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Cost()
    :
    value_{YType::uint32, "value"}
    	,
    dynamic(nullptr) // presence node
{
    yang_name = "cost"; yang_parent_name = "ipv6";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::~Cost()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::has_data() const
{
    return value_.is_set
	|| (dynamic !=  nullptr && dynamic->has_data());
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::has_operation() const
{
    return is_set(operation)
	|| is_set(value_.operation)
	|| (dynamic !=  nullptr && dynamic->has_operation());
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cost' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic>();
        }
        return dynamic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dynamic != nullptr)
    {
        children["dynamic"] = dynamic;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Dynamic()
    :
    default_{YType::uint32, "default"}
    	,
    hysteresis(nullptr) // presence node
	,weight(std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight>())
{
    weight->parent = this;

    yang_name = "dynamic"; yang_parent_name = "cost";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::~Dynamic()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::has_data() const
{
    return default_.is_set
	|| (hysteresis !=  nullptr && hysteresis->has_data())
	|| (weight !=  nullptr && weight->has_data());
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::has_operation() const
{
    return is_set(operation)
	|| is_set(default_.operation)
	|| (hysteresis !=  nullptr && hysteresis->has_operation())
	|| (weight !=  nullptr && weight->has_operation());
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dynamic' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.operation)) leaf_name_data.push_back(default_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hysteresis")
    {
        if(hysteresis == nullptr)
        {
            hysteresis = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis>();
        }
        return hysteresis;
    }

    if(child_yang_name == "weight")
    {
        if(weight == nullptr)
        {
            weight = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight>();
        }
        return weight;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hysteresis != nullptr)
    {
        children["hysteresis"] = hysteresis;
    }

    if(weight != nullptr)
    {
        children["weight"] = weight;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default")
    {
        default_ = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis::Hysteresis()
    :
    percent{YType::uint8, "percent"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "hysteresis"; yang_parent_name = "dynamic";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis::~Hysteresis()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis::has_data() const
{
    return percent.is_set
	|| threshold.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis::has_operation() const
{
    return is_set(operation)
	|| is_set(percent.operation)
	|| is_set(threshold.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hysteresis";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hysteresis' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Hysteresis::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Weight()
    :
    l2_factor(nullptr) // presence node
	,latency(nullptr) // presence node
	,resources(nullptr) // presence node
	,throughput(nullptr) // presence node
{
    yang_name = "weight"; yang_parent_name = "dynamic";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::~Weight()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::has_data() const
{
    return (l2_factor !=  nullptr && l2_factor->has_data())
	|| (latency !=  nullptr && latency->has_data())
	|| (resources !=  nullptr && resources->has_data())
	|| (throughput !=  nullptr && throughput->has_data());
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::has_operation() const
{
    return is_set(operation)
	|| (l2_factor !=  nullptr && l2_factor->has_operation())
	|| (latency !=  nullptr && latency->has_operation())
	|| (resources !=  nullptr && resources->has_operation())
	|| (throughput !=  nullptr && throughput->has_operation());
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weight";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Weight' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "L2-factor")
    {
        if(l2_factor == nullptr)
        {
            l2_factor = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor>();
        }
        return l2_factor;
    }

    if(child_yang_name == "latency")
    {
        if(latency == nullptr)
        {
            latency = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency>();
        }
        return latency;
    }

    if(child_yang_name == "resources")
    {
        if(resources == nullptr)
        {
            resources = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources>();
        }
        return resources;
    }

    if(child_yang_name == "throughput")
    {
        if(throughput == nullptr)
        {
            throughput = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput>();
        }
        return throughput;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2_factor != nullptr)
    {
        children["L2-factor"] = l2_factor;
    }

    if(latency != nullptr)
    {
        children["latency"] = latency;
    }

    if(resources != nullptr)
    {
        children["resources"] = resources;
    }

    if(throughput != nullptr)
    {
        children["throughput"] = throughput;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor::L2Factor()
    :
    value_{YType::uint8, "value"}
{
    yang_name = "L2-factor"; yang_parent_name = "weight";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor::~L2Factor()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor::has_operation() const
{
    return is_set(operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "L2-factor";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2Factor' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::L2Factor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency::Latency()
    :
    value_{YType::uint8, "value"}
{
    yang_name = "latency"; yang_parent_name = "weight";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency::~Latency()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency::has_operation() const
{
    return is_set(operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "latency";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Latency' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Latency::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources::Resources()
    :
    value_{YType::uint8, "value"}
{
    yang_name = "resources"; yang_parent_name = "weight";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources::~Resources()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources::has_operation() const
{
    return is_set(operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resources";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Resources' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Resources::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput::Throughput()
    :
    value_{YType::uint8, "value"}
{
    yang_name = "throughput"; yang_parent_name = "weight";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput::~Throughput()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput::has_operation() const
{
    return is_set(operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throughput";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Throughput' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Cost::Dynamic::Weight::Throughput::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::DatabaseFilter::DatabaseFilter()
    :
    all{YType::enumeration, "all"},
    disable{YType::empty, "disable"}
{
    yang_name = "database-filter"; yang_parent_name = "ipv6";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::DatabaseFilter::~DatabaseFilter()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::DatabaseFilter::has_data() const
{
    return all.is_set
	|| disable.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::DatabaseFilter::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation)
	|| is_set(disable.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::DatabaseFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseFilter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());
    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::DatabaseFilter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::DemandCircuit::DemandCircuit()
    :
    disable{YType::empty, "disable"},
    ignore{YType::empty, "ignore"}
{
    yang_name = "demand-circuit"; yang_parent_name = "ipv6";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::DemandCircuit::~DemandCircuit()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::DemandCircuit::has_data() const
{
    return disable.is_set
	|| ignore.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::DemandCircuit::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation)
	|| is_set(ignore.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::DemandCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "demand-circuit";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::DemandCircuit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DemandCircuit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (ignore.is_set || is_set(ignore.operation)) leaf_name_data.push_back(ignore.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::DemandCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::DemandCircuit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::DemandCircuit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "ignore")
    {
        ignore = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::FloodReduction::FloodReduction()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "flood-reduction"; yang_parent_name = "ipv6";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::FloodReduction::~FloodReduction()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::FloodReduction::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::FloodReduction::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::FloodReduction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flood-reduction";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::FloodReduction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FloodReduction' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::FloodReduction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::FloodReduction::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::FloodReduction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Manet::Manet()
    :
    peering(std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Manet::Peering>())
{
    peering->parent = this;

    yang_name = "manet"; yang_parent_name = "ipv6";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Manet::~Manet()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Manet::has_data() const
{
    return (peering !=  nullptr && peering->has_data());
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Manet::has_operation() const
{
    return is_set(operation)
	|| (peering !=  nullptr && peering->has_operation());
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Manet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manet";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Manet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Manet' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Manet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peering")
    {
        if(peering == nullptr)
        {
            peering = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Manet::Peering>();
        }
        return peering;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Manet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peering != nullptr)
    {
        children["peering"] = peering;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Manet::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Manet::Peering::Peering()
    :
    link_metrics{YType::uint32, "link-metrics"}
    	,
    cost(std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost>())
{
    cost->parent = this;

    yang_name = "peering"; yang_parent_name = "manet";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Manet::Peering::~Peering()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Manet::Peering::has_data() const
{
    return link_metrics.is_set
	|| (cost !=  nullptr && cost->has_data());
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Manet::Peering::has_operation() const
{
    return is_set(operation)
	|| is_set(link_metrics.operation)
	|| (cost !=  nullptr && cost->has_operation());
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Manet::Peering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peering";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Manet::Peering::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peering' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_metrics.is_set || is_set(link_metrics.operation)) leaf_name_data.push_back(link_metrics.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Manet::Peering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cost")
    {
        if(cost == nullptr)
        {
            cost = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost>();
        }
        return cost;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Manet::Peering::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cost != nullptr)
    {
        children["cost"] = cost;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Manet::Peering::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-metrics")
    {
        link_metrics = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost::Cost()
    :
    percent{YType::uint8, "percent"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "cost"; yang_parent_name = "peering";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost::~Cost()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost::has_data() const
{
    return percent.is_set
	|| threshold.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost::has_operation() const
{
    return is_set(operation)
	|| is_set(percent.operation)
	|| is_set(threshold.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cost' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Manet::Peering::Cost::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::MtuIgnore::MtuIgnore()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "mtu-ignore"; yang_parent_name = "ipv6";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::MtuIgnore::~MtuIgnore()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::MtuIgnore::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::MtuIgnore::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::MtuIgnore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mtu-ignore";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::MtuIgnore::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MtuIgnore' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::MtuIgnore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::MtuIgnore::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::MtuIgnore::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::MultiArea::MultiArea()
    :
    cost{YType::uint32, "cost"},
    disable{YType::empty, "disable"},
    id{YType::str, "id"}
{
    yang_name = "multi-area"; yang_parent_name = "ipv6";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::MultiArea::~MultiArea()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::MultiArea::has_data() const
{
    return cost.is_set
	|| disable.is_set
	|| id.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::MultiArea::has_operation() const
{
    return is_set(operation)
	|| is_set(cost.operation)
	|| is_set(disable.operation)
	|| is_set(id.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::MultiArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-area";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::MultiArea::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MultiArea' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::MultiArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::MultiArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::MultiArea::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Neighbor::Neighbor()
    :
    id{YType::str, "id"},
    cost{YType::uint16, "cost"},
    poll_interval{YType::uint32, "poll-interval"},
    priority{YType::uint8, "priority"}
    	,
    database_filter(std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter>())
{
    database_filter->parent = this;

    yang_name = "neighbor"; yang_parent_name = "ipv6";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Neighbor::~Neighbor()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Neighbor::has_data() const
{
    return id.is_set
	|| cost.is_set
	|| poll_interval.is_set
	|| priority.is_set
	|| (database_filter !=  nullptr && database_filter->has_data());
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(cost.operation)
	|| is_set(poll_interval.operation)
	|| is_set(priority.operation)
	|| (database_filter !=  nullptr && database_filter->has_operation());
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.operation)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter>();
        }
        return database_filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_filter != nullptr)
    {
        children["database-filter"] = database_filter;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::DatabaseFilter()
    :
    all{YType::enumeration, "all"}
{
    yang_name = "database-filter"; yang_parent_name = "neighbor";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::~DatabaseFilter()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::has_data() const
{
    return all.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseFilter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Network::Network()
    :
    broadcast{YType::empty, "broadcast"},
    manet{YType::empty, "manet"},
    non_broadcast{YType::empty, "non-broadcast"},
    point_to_point{YType::empty, "point-to-point"}
    	,
    point_to_multipoint(nullptr) // presence node
{
    yang_name = "network"; yang_parent_name = "ipv6";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Network::~Network()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Network::has_data() const
{
    return broadcast.is_set
	|| manet.is_set
	|| non_broadcast.is_set
	|| point_to_point.is_set
	|| (point_to_multipoint !=  nullptr && point_to_multipoint->has_data());
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Network::has_operation() const
{
    return is_set(operation)
	|| is_set(broadcast.operation)
	|| is_set(manet.operation)
	|| is_set(non_broadcast.operation)
	|| is_set(point_to_point.operation)
	|| (point_to_multipoint !=  nullptr && point_to_multipoint->has_operation());
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Network::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Network' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.operation)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (manet.is_set || is_set(manet.operation)) leaf_name_data.push_back(manet.get_name_leafdata());
    if (non_broadcast.is_set || is_set(non_broadcast.operation)) leaf_name_data.push_back(non_broadcast.get_name_leafdata());
    if (point_to_point.is_set || is_set(point_to_point.operation)) leaf_name_data.push_back(point_to_point.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "point-to-multipoint")
    {
        if(point_to_multipoint == nullptr)
        {
            point_to_multipoint = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint>();
        }
        return point_to_multipoint;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(point_to_multipoint != nullptr)
    {
        children["point-to-multipoint"] = point_to_multipoint;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Network::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
    }
    if(value_path == "manet")
    {
        manet = value;
    }
    if(value_path == "non-broadcast")
    {
        non_broadcast = value;
    }
    if(value_path == "point-to-point")
    {
        point_to_point = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint::PointToMultipoint()
    :
    non_broadcast{YType::empty, "non-broadcast"}
{
    yang_name = "point-to-multipoint"; yang_parent_name = "network";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint::~PointToMultipoint()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint::has_data() const
{
    return non_broadcast.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint::has_operation() const
{
    return is_set(operation)
	|| is_set(non_broadcast.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "point-to-multipoint";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PointToMultipoint' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_broadcast.is_set || is_set(non_broadcast.operation)) leaf_name_data.push_back(non_broadcast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Network::PointToMultipoint::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "non-broadcast")
    {
        non_broadcast = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::PrefixSuppression::PrefixSuppression()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "prefix-suppression"; yang_parent_name = "ipv6";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::PrefixSuppression::~PrefixSuppression()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::PrefixSuppression::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::PrefixSuppression::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::PrefixSuppression::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-suppression";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::PrefixSuppression::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixSuppression' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::PrefixSuppression::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::PrefixSuppression::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::PrefixSuppression::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Shutdown::Shutdown()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "shutdown"; yang_parent_name = "ipv6";
}

Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Shutdown::~Shutdown()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Shutdown::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Shutdown::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Shutdown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shutdown";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Shutdown::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Shutdown' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Shutdown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Shutdown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Shutdown::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::Authentication::Authentication()
    :
    key_chain{YType::str, "key-chain"},
    null{YType::empty, "null"}
    	,
    ipsec(std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec>())
{
    ipsec->parent = this;

    yang_name = "authentication"; yang_parent_name = "ospfv3";
}

Native::Interface::Gigabitethernet::Ospfv3::Authentication::~Authentication()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::Authentication::has_data() const
{
    return key_chain.is_set
	|| null.is_set
	|| (ipsec !=  nullptr && ipsec->has_data());
}

bool Native::Interface::Gigabitethernet::Ospfv3::Authentication::has_operation() const
{
    return is_set(operation)
	|| is_set(key_chain.operation)
	|| is_set(null.operation)
	|| (ipsec !=  nullptr && ipsec->has_operation());
}

std::string Native::Interface::Gigabitethernet::Ospfv3::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::Authentication::get_entity_path(Entity* ancestor) const
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

    if (key_chain.is_set || is_set(key_chain.operation)) leaf_name_data.push_back(key_chain.get_name_leafdata());
    if (null.is_set || is_set(null.operation)) leaf_name_data.push_back(null.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipsec")
    {
        if(ipsec == nullptr)
        {
            ipsec = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec>();
        }
        return ipsec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipsec != nullptr)
    {
        children["ipsec"] = ipsec;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
    }
    if(value_path == "null")
    {
        null = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Ipsec()
    :
    spi{YType::uint64, "spi"}
    	,
    md5(std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Md5>())
	,sha1(std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Sha1>())
{
    md5->parent = this;

    sha1->parent = this;

    yang_name = "ipsec"; yang_parent_name = "authentication";
}

Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::~Ipsec()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::has_data() const
{
    return spi.is_set
	|| (md5 !=  nullptr && md5->has_data())
	|| (sha1 !=  nullptr && sha1->has_data());
}

bool Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::has_operation() const
{
    return is_set(operation)
	|| is_set(spi.operation)
	|| (md5 !=  nullptr && md5->has_operation())
	|| (sha1 !=  nullptr && sha1->has_operation());
}

std::string Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::get_entity_path(Entity* ancestor) const
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

    if (spi.is_set || is_set(spi.operation)) leaf_name_data.push_back(spi.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Md5>();
        }
        return md5;
    }

    if(child_yang_name == "sha1")
    {
        if(sha1 == nullptr)
        {
            sha1 = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Sha1>();
        }
        return sha1;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(md5 != nullptr)
    {
        children["md5"] = md5;
    }

    if(sha1 != nullptr)
    {
        children["sha1"] = sha1;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "spi")
    {
        spi = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Md5::Md5()
    :
    key_string(std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Md5::KeyString>())
{
    key_string->parent = this;

    yang_name = "md5"; yang_parent_name = "ipsec";
}

Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Md5::~Md5()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Md5::has_data() const
{
    return (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Md5::has_operation() const
{
    return is_set(operation)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Md5::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Md5::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Md5::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Md5::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"}
{
    yang_name = "key-string"; yang_parent_name = "md5";
}

Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Md5::KeyString::~KeyString()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Md5::KeyString::has_data() const
{
    return encrypt.is_set
	|| string.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Md5::KeyString::has_operation() const
{
    return is_set(operation)
	|| is_set(encrypt.operation)
	|| is_set(string.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Md5::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Md5::KeyString::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyString' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.operation)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.operation)) leaf_name_data.push_back(string.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Md5::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Md5::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Md5::KeyString::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encrypt")
    {
        encrypt = value;
    }
    if(value_path == "string")
    {
        string = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Sha1::Sha1()
    :
    key_string(std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString>())
{
    key_string->parent = this;

    yang_name = "sha1"; yang_parent_name = "ipsec";
}

Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Sha1::~Sha1()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Sha1::has_data() const
{
    return (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Sha1::has_operation() const
{
    return is_set(operation)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Sha1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sha1";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Sha1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sha1' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Sha1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Sha1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Sha1::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"}
{
    yang_name = "key-string"; yang_parent_name = "sha1";
}

Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString::~KeyString()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString::has_data() const
{
    return encrypt.is_set
	|| string.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString::has_operation() const
{
    return is_set(operation)
	|| is_set(encrypt.operation)
	|| is_set(string.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyString' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.operation)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.operation)) leaf_name_data.push_back(string.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encrypt")
    {
        encrypt = value;
    }
    if(value_path == "string")
    {
        string = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::Bfd::Bfd()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "bfd"; yang_parent_name = "ospfv3";
}

Native::Interface::Gigabitethernet::Ospfv3::Bfd::~Bfd()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::Bfd::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::Bfd::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::Bfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bfd' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::Bfd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::Cost::Cost()
    :
    value_{YType::uint32, "value"}
    	,
    dynamic(nullptr) // presence node
{
    yang_name = "cost"; yang_parent_name = "ospfv3";
}

Native::Interface::Gigabitethernet::Ospfv3::Cost::~Cost()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::Cost::has_data() const
{
    return value_.is_set
	|| (dynamic !=  nullptr && dynamic->has_data());
}

bool Native::Interface::Gigabitethernet::Ospfv3::Cost::has_operation() const
{
    return is_set(operation)
	|| is_set(value_.operation)
	|| (dynamic !=  nullptr && dynamic->has_operation());
}

std::string Native::Interface::Gigabitethernet::Ospfv3::Cost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::Cost::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cost' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::Cost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic>();
        }
        return dynamic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::Cost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dynamic != nullptr)
    {
        children["dynamic"] = dynamic;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::Cost::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Dynamic()
    :
    default_{YType::uint32, "default"}
    	,
    hysteresis(nullptr) // presence node
	,weight(std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight>())
{
    weight->parent = this;

    yang_name = "dynamic"; yang_parent_name = "cost";
}

Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::~Dynamic()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::has_data() const
{
    return default_.is_set
	|| (hysteresis !=  nullptr && hysteresis->has_data())
	|| (weight !=  nullptr && weight->has_data());
}

bool Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::has_operation() const
{
    return is_set(operation)
	|| is_set(default_.operation)
	|| (hysteresis !=  nullptr && hysteresis->has_operation())
	|| (weight !=  nullptr && weight->has_operation());
}

std::string Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dynamic' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.operation)) leaf_name_data.push_back(default_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hysteresis")
    {
        if(hysteresis == nullptr)
        {
            hysteresis = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Hysteresis>();
        }
        return hysteresis;
    }

    if(child_yang_name == "weight")
    {
        if(weight == nullptr)
        {
            weight = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight>();
        }
        return weight;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hysteresis != nullptr)
    {
        children["hysteresis"] = hysteresis;
    }

    if(weight != nullptr)
    {
        children["weight"] = weight;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default")
    {
        default_ = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Hysteresis::Hysteresis()
    :
    percent{YType::uint8, "percent"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "hysteresis"; yang_parent_name = "dynamic";
}

Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Hysteresis::~Hysteresis()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Hysteresis::has_data() const
{
    return percent.is_set
	|| threshold.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Hysteresis::has_operation() const
{
    return is_set(operation)
	|| is_set(percent.operation)
	|| is_set(threshold.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Hysteresis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hysteresis";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Hysteresis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hysteresis' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Hysteresis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Hysteresis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Hysteresis::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::Weight()
    :
    l2_factor(nullptr) // presence node
	,latency(nullptr) // presence node
	,resources(nullptr) // presence node
	,throughput(nullptr) // presence node
{
    yang_name = "weight"; yang_parent_name = "dynamic";
}

Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::~Weight()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::has_data() const
{
    return (l2_factor !=  nullptr && l2_factor->has_data())
	|| (latency !=  nullptr && latency->has_data())
	|| (resources !=  nullptr && resources->has_data())
	|| (throughput !=  nullptr && throughput->has_data());
}

bool Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::has_operation() const
{
    return is_set(operation)
	|| (l2_factor !=  nullptr && l2_factor->has_operation())
	|| (latency !=  nullptr && latency->has_operation())
	|| (resources !=  nullptr && resources->has_operation())
	|| (throughput !=  nullptr && throughput->has_operation());
}

std::string Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "weight";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Weight' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "L2-factor")
    {
        if(l2_factor == nullptr)
        {
            l2_factor = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::L2Factor>();
        }
        return l2_factor;
    }

    if(child_yang_name == "latency")
    {
        if(latency == nullptr)
        {
            latency = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::Latency>();
        }
        return latency;
    }

    if(child_yang_name == "resources")
    {
        if(resources == nullptr)
        {
            resources = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::Resources>();
        }
        return resources;
    }

    if(child_yang_name == "throughput")
    {
        if(throughput == nullptr)
        {
            throughput = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::Throughput>();
        }
        return throughput;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(l2_factor != nullptr)
    {
        children["L2-factor"] = l2_factor;
    }

    if(latency != nullptr)
    {
        children["latency"] = latency;
    }

    if(resources != nullptr)
    {
        children["resources"] = resources;
    }

    if(throughput != nullptr)
    {
        children["throughput"] = throughput;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::L2Factor::L2Factor()
    :
    value_{YType::uint8, "value"}
{
    yang_name = "L2-factor"; yang_parent_name = "weight";
}

Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::L2Factor::~L2Factor()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::L2Factor::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::L2Factor::has_operation() const
{
    return is_set(operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::L2Factor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "L2-factor";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::L2Factor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2Factor' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::L2Factor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::L2Factor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::L2Factor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::Latency::Latency()
    :
    value_{YType::uint8, "value"}
{
    yang_name = "latency"; yang_parent_name = "weight";
}

Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::Latency::~Latency()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::Latency::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::Latency::has_operation() const
{
    return is_set(operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::Latency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "latency";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::Latency::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Latency' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::Latency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::Latency::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::Latency::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::Resources::Resources()
    :
    value_{YType::uint8, "value"}
{
    yang_name = "resources"; yang_parent_name = "weight";
}

Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::Resources::~Resources()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::Resources::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::Resources::has_operation() const
{
    return is_set(operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::Resources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resources";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::Resources::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Resources' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::Resources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::Resources::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::Resources::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::Throughput::Throughput()
    :
    value_{YType::uint8, "value"}
{
    yang_name = "throughput"; yang_parent_name = "weight";
}

Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::Throughput::~Throughput()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::Throughput::has_data() const
{
    return value_.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::Throughput::has_operation() const
{
    return is_set(operation)
	|| is_set(value_.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::Throughput::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throughput";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::Throughput::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Throughput' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::Throughput::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::Throughput::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::Cost::Dynamic::Weight::Throughput::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::DatabaseFilter::DatabaseFilter()
    :
    all{YType::enumeration, "all"}
{
    yang_name = "database-filter"; yang_parent_name = "ospfv3";
}

Native::Interface::Gigabitethernet::Ospfv3::DatabaseFilter::~DatabaseFilter()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::DatabaseFilter::has_data() const
{
    return all.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::DatabaseFilter::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::DatabaseFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseFilter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::DatabaseFilter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::DemandCircuit::DemandCircuit()
    :
    ignore{YType::empty, "ignore"}
{
    yang_name = "demand-circuit"; yang_parent_name = "ospfv3";
}

Native::Interface::Gigabitethernet::Ospfv3::DemandCircuit::~DemandCircuit()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::DemandCircuit::has_data() const
{
    return ignore.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::DemandCircuit::has_operation() const
{
    return is_set(operation)
	|| is_set(ignore.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::DemandCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "demand-circuit";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::DemandCircuit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DemandCircuit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.operation)) leaf_name_data.push_back(ignore.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::DemandCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::DemandCircuit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::DemandCircuit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ignore")
    {
        ignore = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::Encryption::Encryption()
    :
    null{YType::empty, "null"}
    	,
    ipsec(std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec>())
{
    ipsec->parent = this;

    yang_name = "encryption"; yang_parent_name = "ospfv3";
}

Native::Interface::Gigabitethernet::Ospfv3::Encryption::~Encryption()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::Encryption::has_data() const
{
    return null.is_set
	|| (ipsec !=  nullptr && ipsec->has_data());
}

bool Native::Interface::Gigabitethernet::Ospfv3::Encryption::has_operation() const
{
    return is_set(operation)
	|| is_set(null.operation)
	|| (ipsec !=  nullptr && ipsec->has_operation());
}

std::string Native::Interface::Gigabitethernet::Ospfv3::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::Encryption::get_entity_path(Entity* ancestor) const
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

    if (null.is_set || is_set(null.operation)) leaf_name_data.push_back(null.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipsec")
    {
        if(ipsec == nullptr)
        {
            ipsec = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec>();
        }
        return ipsec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::Encryption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipsec != nullptr)
    {
        children["ipsec"] = ipsec;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::Encryption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "null")
    {
        null = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::Ipsec()
    :
    esp{YType::empty, "esp"},
    spi{YType::uint64, "spi"}
    	,
    aes_cbc(std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc>())
	,ipsec_3des(std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::Ipsec_3Des>())
{
    aes_cbc->parent = this;

    ipsec_3des->parent = this;

    yang_name = "ipsec"; yang_parent_name = "encryption";
}

Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::~Ipsec()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::has_data() const
{
    return esp.is_set
	|| spi.is_set
	|| (aes_cbc !=  nullptr && aes_cbc->has_data())
	|| (ipsec_3des !=  nullptr && ipsec_3des->has_data());
}

bool Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::has_operation() const
{
    return is_set(operation)
	|| is_set(esp.operation)
	|| is_set(spi.operation)
	|| (aes_cbc !=  nullptr && aes_cbc->has_operation())
	|| (ipsec_3des !=  nullptr && ipsec_3des->has_operation());
}

std::string Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::get_entity_path(Entity* ancestor) const
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

    if (esp.is_set || is_set(esp.operation)) leaf_name_data.push_back(esp.get_name_leafdata());
    if (spi.is_set || is_set(spi.operation)) leaf_name_data.push_back(spi.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aes-cbc")
    {
        if(aes_cbc == nullptr)
        {
            aes_cbc = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc>();
        }
        return aes_cbc;
    }

    if(child_yang_name == "ipsec_3des")
    {
        if(ipsec_3des == nullptr)
        {
            ipsec_3des = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::Ipsec_3Des>();
        }
        return ipsec_3des;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aes_cbc != nullptr)
    {
        children["aes-cbc"] = aes_cbc;
    }

    if(ipsec_3des != nullptr)
    {
        children["ipsec_3des"] = ipsec_3des;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "esp")
    {
        esp = value;
    }
    if(value_path == "spi")
    {
        spi = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::Ipsec_3Des::Ipsec_3Des()
    :
    key_string(std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::Ipsec_3Des::KeyString>())
{
    key_string->parent = this;

    yang_name = "ipsec_3des"; yang_parent_name = "ipsec";
}

Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::Ipsec_3Des::~Ipsec_3Des()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::Ipsec_3Des::has_data() const
{
    return (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::Ipsec_3Des::has_operation() const
{
    return is_set(operation)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::Ipsec_3Des::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsec_3des";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::Ipsec_3Des::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipsec_3Des' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::Ipsec_3Des::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::Ipsec_3Des::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::Ipsec_3Des::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::Ipsec_3Des::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::Ipsec_3Des::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"}
{
    yang_name = "key-string"; yang_parent_name = "ipsec_3des";
}

Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::Ipsec_3Des::KeyString::~KeyString()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::Ipsec_3Des::KeyString::has_data() const
{
    return encrypt.is_set
	|| string.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::Ipsec_3Des::KeyString::has_operation() const
{
    return is_set(operation)
	|| is_set(encrypt.operation)
	|| is_set(string.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::Ipsec_3Des::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::Ipsec_3Des::KeyString::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyString' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.operation)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.operation)) leaf_name_data.push_back(string.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::Ipsec_3Des::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::Ipsec_3Des::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::Ipsec_3Des::KeyString::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encrypt")
    {
        encrypt = value;
    }
    if(value_path == "string")
    {
        string = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc()
    :
    aes_192(std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192>())
	,aes_256(std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256>())
	,aes_cbc_128(std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128>())
{
    aes_192->parent = this;

    aes_256->parent = this;

    aes_cbc_128->parent = this;

    yang_name = "aes-cbc"; yang_parent_name = "ipsec";
}

Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::~AesCbc()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::has_data() const
{
    return (aes_192 !=  nullptr && aes_192->has_data())
	|| (aes_256 !=  nullptr && aes_256->has_data())
	|| (aes_cbc_128 !=  nullptr && aes_cbc_128->has_data());
}

bool Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::has_operation() const
{
    return is_set(operation)
	|| (aes_192 !=  nullptr && aes_192->has_operation())
	|| (aes_256 !=  nullptr && aes_256->has_operation())
	|| (aes_cbc_128 !=  nullptr && aes_cbc_128->has_operation());
}

std::string Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aes-cbc";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AesCbc' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aes-192")
    {
        if(aes_192 == nullptr)
        {
            aes_192 = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192>();
        }
        return aes_192;
    }

    if(child_yang_name == "aes-256")
    {
        if(aes_256 == nullptr)
        {
            aes_256 = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256>();
        }
        return aes_256;
    }

    if(child_yang_name == "aes-cbc-128")
    {
        if(aes_cbc_128 == nullptr)
        {
            aes_cbc_128 = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128>();
        }
        return aes_cbc_128;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aes_192 != nullptr)
    {
        children["aes-192"] = aes_192;
    }

    if(aes_256 != nullptr)
    {
        children["aes-256"] = aes_256;
    }

    if(aes_cbc_128 != nullptr)
    {
        children["aes-cbc-128"] = aes_cbc_128;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::AesCbc128()
    :
    key_string(std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString>())
{
    key_string->parent = this;

    yang_name = "aes-cbc-128"; yang_parent_name = "aes-cbc";
}

Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::~AesCbc128()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::has_data() const
{
    return (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::has_operation() const
{
    return is_set(operation)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aes-cbc-128";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AesCbc128' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"}
{
    yang_name = "key-string"; yang_parent_name = "aes-cbc-128";
}

Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::~KeyString()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::has_data() const
{
    return encrypt.is_set
	|| string.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::has_operation() const
{
    return is_set(operation)
	|| is_set(encrypt.operation)
	|| is_set(string.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyString' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.operation)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.operation)) leaf_name_data.push_back(string.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encrypt")
    {
        encrypt = value;
    }
    if(value_path == "string")
    {
        string = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::Aes192()
    :
    key_string(std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString>())
{
    key_string->parent = this;

    yang_name = "aes-192"; yang_parent_name = "aes-cbc";
}

Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::~Aes192()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::has_data() const
{
    return (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::has_operation() const
{
    return is_set(operation)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aes-192";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Aes192' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"}
{
    yang_name = "key-string"; yang_parent_name = "aes-192";
}

Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::~KeyString()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::has_data() const
{
    return encrypt.is_set
	|| string.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::has_operation() const
{
    return is_set(operation)
	|| is_set(encrypt.operation)
	|| is_set(string.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyString' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.operation)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.operation)) leaf_name_data.push_back(string.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encrypt")
    {
        encrypt = value;
    }
    if(value_path == "string")
    {
        string = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::Aes256()
    :
    key_string(std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString>())
{
    key_string->parent = this;

    yang_name = "aes-256"; yang_parent_name = "aes-cbc";
}

Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::~Aes256()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::has_data() const
{
    return (key_string !=  nullptr && key_string->has_data());
}

bool Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::has_operation() const
{
    return is_set(operation)
	|| (key_string !=  nullptr && key_string->has_operation());
}

std::string Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aes-256";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Aes256' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-string")
    {
        if(key_string == nullptr)
        {
            key_string = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString>();
        }
        return key_string;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_string != nullptr)
    {
        children["key-string"] = key_string;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::KeyString()
    :
    encrypt{YType::enumeration, "encrypt"},
    string{YType::str, "string"}
{
    yang_name = "key-string"; yang_parent_name = "aes-256";
}

Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::~KeyString()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::has_data() const
{
    return encrypt.is_set
	|| string.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::has_operation() const
{
    return is_set(operation)
	|| is_set(encrypt.operation)
	|| is_set(string.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-string";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyString' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encrypt.is_set || is_set(encrypt.operation)) leaf_name_data.push_back(encrypt.get_name_leafdata());
    if (string.is_set || is_set(string.operation)) leaf_name_data.push_back(string.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encrypt")
    {
        encrypt = value;
    }
    if(value_path == "string")
    {
        string = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::Manet::Manet()
    :
    peering(std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::Manet::Peering>())
{
    peering->parent = this;

    yang_name = "manet"; yang_parent_name = "ospfv3";
}

Native::Interface::Gigabitethernet::Ospfv3::Manet::~Manet()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::Manet::has_data() const
{
    return (peering !=  nullptr && peering->has_data());
}

bool Native::Interface::Gigabitethernet::Ospfv3::Manet::has_operation() const
{
    return is_set(operation)
	|| (peering !=  nullptr && peering->has_operation());
}

std::string Native::Interface::Gigabitethernet::Ospfv3::Manet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manet";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::Manet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Manet' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::Manet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peering")
    {
        if(peering == nullptr)
        {
            peering = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::Manet::Peering>();
        }
        return peering;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::Manet::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(peering != nullptr)
    {
        children["peering"] = peering;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::Manet::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Gigabitethernet::Ospfv3::Manet::Peering::Peering()
    :
    link_metrics{YType::uint32, "link-metrics"}
    	,
    cost(std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::Manet::Peering::Cost>())
{
    cost->parent = this;

    yang_name = "peering"; yang_parent_name = "manet";
}

Native::Interface::Gigabitethernet::Ospfv3::Manet::Peering::~Peering()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::Manet::Peering::has_data() const
{
    return link_metrics.is_set
	|| (cost !=  nullptr && cost->has_data());
}

bool Native::Interface::Gigabitethernet::Ospfv3::Manet::Peering::has_operation() const
{
    return is_set(operation)
	|| is_set(link_metrics.operation)
	|| (cost !=  nullptr && cost->has_operation());
}

std::string Native::Interface::Gigabitethernet::Ospfv3::Manet::Peering::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peering";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::Manet::Peering::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peering' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_metrics.is_set || is_set(link_metrics.operation)) leaf_name_data.push_back(link_metrics.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::Manet::Peering::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cost")
    {
        if(cost == nullptr)
        {
            cost = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::Manet::Peering::Cost>();
        }
        return cost;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::Manet::Peering::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cost != nullptr)
    {
        children["cost"] = cost;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::Manet::Peering::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-metrics")
    {
        link_metrics = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::Manet::Peering::Cost::Cost()
    :
    percent{YType::uint8, "percent"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "cost"; yang_parent_name = "peering";
}

Native::Interface::Gigabitethernet::Ospfv3::Manet::Peering::Cost::~Cost()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::Manet::Peering::Cost::has_data() const
{
    return percent.is_set
	|| threshold.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::Manet::Peering::Cost::has_operation() const
{
    return is_set(operation)
	|| is_set(percent.operation)
	|| is_set(threshold.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::Manet::Peering::Cost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cost";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::Manet::Peering::Cost::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cost' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (percent.is_set || is_set(percent.operation)) leaf_name_data.push_back(percent.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.operation)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::Manet::Peering::Cost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::Manet::Peering::Cost::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::Manet::Peering::Cost::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "percent")
    {
        percent = value;
    }
    if(value_path == "threshold")
    {
        threshold = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::MultiArea::MultiArea()
    :
    cost{YType::uint32, "cost"},
    id{YType::str, "id"}
{
    yang_name = "multi-area"; yang_parent_name = "ospfv3";
}

Native::Interface::Gigabitethernet::Ospfv3::MultiArea::~MultiArea()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::MultiArea::has_data() const
{
    return cost.is_set
	|| id.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::MultiArea::has_operation() const
{
    return is_set(operation)
	|| is_set(cost.operation)
	|| is_set(id.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::MultiArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-area";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::MultiArea::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MultiArea' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::MultiArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::MultiArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::MultiArea::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::Neighbor::Neighbor()
    :
    id{YType::str, "id"},
    cost{YType::uint16, "cost"},
    poll_interval{YType::uint32, "poll-interval"},
    priority{YType::uint8, "priority"}
    	,
    database_filter(std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::Neighbor::DatabaseFilter>())
{
    database_filter->parent = this;

    yang_name = "neighbor"; yang_parent_name = "ospfv3";
}

Native::Interface::Gigabitethernet::Ospfv3::Neighbor::~Neighbor()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::Neighbor::has_data() const
{
    return id.is_set
	|| cost.is_set
	|| poll_interval.is_set
	|| priority.is_set
	|| (database_filter !=  nullptr && database_filter->has_data());
}

bool Native::Interface::Gigabitethernet::Ospfv3::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(cost.operation)
	|| is_set(poll_interval.operation)
	|| is_set(priority.operation)
	|| (database_filter !=  nullptr && database_filter->has_operation());
}

std::string Native::Interface::Gigabitethernet::Ospfv3::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.operation)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::Neighbor::DatabaseFilter>();
        }
        return database_filter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(database_filter != nullptr)
    {
        children["database-filter"] = database_filter;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::Neighbor::DatabaseFilter::DatabaseFilter()
    :
    all{YType::enumeration, "all"}
{
    yang_name = "database-filter"; yang_parent_name = "neighbor";
}

Native::Interface::Gigabitethernet::Ospfv3::Neighbor::DatabaseFilter::~DatabaseFilter()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::Neighbor::DatabaseFilter::has_data() const
{
    return all.is_set;
}

bool Native::Interface::Gigabitethernet::Ospfv3::Neighbor::DatabaseFilter::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation);
}

std::string Native::Interface::Gigabitethernet::Ospfv3::Neighbor::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::Neighbor::DatabaseFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseFilter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::Neighbor::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::Neighbor::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::Neighbor::DatabaseFilter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
}

Native::Interface::Gigabitethernet::Ospfv3::Network::Network()
    :
    broadcast{YType::empty, "broadcast"},
    manet{YType::empty, "manet"},
    non_broadcast{YType::empty, "non-broadcast"},
    point_to_point{YType::empty, "point-to-point"}
    	,
    point_to_multipoint(nullptr) // presence node
{
    yang_name = "network"; yang_parent_name = "ospfv3";
}

Native::Interface::Gigabitethernet::Ospfv3::Network::~Network()
{
}

bool Native::Interface::Gigabitethernet::Ospfv3::Network::has_data() const
{
    return broadcast.is_set
	|| manet.is_set
	|| non_broadcast.is_set
	|| point_to_point.is_set
	|| (point_to_multipoint !=  nullptr && point_to_multipoint->has_data());
}

bool Native::Interface::Gigabitethernet::Ospfv3::Network::has_operation() const
{
    return is_set(operation)
	|| is_set(broadcast.operation)
	|| is_set(manet.operation)
	|| is_set(non_broadcast.operation)
	|| is_set(point_to_point.operation)
	|| (point_to_multipoint !=  nullptr && point_to_multipoint->has_operation());
}

std::string Native::Interface::Gigabitethernet::Ospfv3::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";

    return path_buffer.str();

}

const EntityPath Native::Interface::Gigabitethernet::Ospfv3::Network::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Network' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.operation)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (manet.is_set || is_set(manet.operation)) leaf_name_data.push_back(manet.get_name_leafdata());
    if (non_broadcast.is_set || is_set(non_broadcast.operation)) leaf_name_data.push_back(non_broadcast.get_name_leafdata());
    if (point_to_point.is_set || is_set(point_to_point.operation)) leaf_name_data.push_back(point_to_point.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Gigabitethernet::Ospfv3::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "point-to-multipoint")
    {
        if(point_to_multipoint == nullptr)
        {
            point_to_multipoint = std::make_shared<Native::Interface::Gigabitethernet::Ospfv3::Network::PointToMultipoint>();
        }
        return point_to_multipoint;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Gigabitethernet::Ospfv3::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(point_to_multipoint != nullptr)
    {
        children["point-to-multipoint"] = point_to_multipoint;
    }

    return children;
}

void Native::Interface::Gigabitethernet::Ospfv3::Network::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
    }
    if(value_path == "manet")
    {
        manet = value;
    }
    if(value_path == "non-broadcast")
    {
        non_broadcast = value;
    }
    if(value_path == "point-to-point")
    {
        point_to_point = value;
    }
}

const Enum::YLeaf Native::Interface::Gigabitethernet::Dot1X::PaeEnum::authenticator {0, "authenticator"};
const Enum::YLeaf Native::Interface::Gigabitethernet::Dot1X::PaeEnum::supplicant {1, "supplicant"};
const Enum::YLeaf Native::Interface::Gigabitethernet::Dot1X::PaeEnum::both {2, "both"};

const Enum::YLeaf Native::Interface::Gigabitethernet::ServicePolicy::Type::PerformanceMonitor::DirectionEnum::input {0, "input"};
const Enum::YLeaf Native::Interface::Gigabitethernet::ServicePolicy::Type::PerformanceMonitor::DirectionEnum::output {1, "output"};

const Enum::YLeaf Native::Interface::Gigabitethernet::Ospfv3::ProcessId::DatabaseFilter::AllEnum::out {0, "out"};

const Enum::YLeaf Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Neighbor::DatabaseFilter::AllEnum::out {0, "out"};

const Enum::YLeaf Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::DatabaseFilter::AllEnum::out {0, "out"};

const Enum::YLeaf Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv4::Neighbor::DatabaseFilter::AllEnum::out {0, "out"};

const Enum::YLeaf Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::DatabaseFilter::AllEnum::out {0, "out"};

const Enum::YLeaf Native::Interface::Gigabitethernet::Ospfv3::ProcessId::Ipv6::Neighbor::DatabaseFilter::AllEnum::out {0, "out"};

const Enum::YLeaf Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Md5::KeyString::EncryptEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Md5::KeyString::EncryptEnum::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString::EncryptEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::Gigabitethernet::Ospfv3::Authentication::Ipsec::Sha1::KeyString::EncryptEnum::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::Gigabitethernet::Ospfv3::DatabaseFilter::AllEnum::out {0, "out"};

const Enum::YLeaf Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::Ipsec_3Des::KeyString::EncryptEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::Ipsec_3Des::KeyString::EncryptEnum::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::EncryptEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::AesCbc128::KeyString::EncryptEnum::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::EncryptEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes192::KeyString::EncryptEnum::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::EncryptEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Interface::Gigabitethernet::Ospfv3::Encryption::Ipsec::AesCbc::Aes256::KeyString::EncryptEnum::Y_7 {1, "7"};

const Enum::YLeaf Native::Interface::Gigabitethernet::Ospfv3::Neighbor::DatabaseFilter::AllEnum::out {0, "out"};


}
}

