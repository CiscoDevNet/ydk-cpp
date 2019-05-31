
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "ntp.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace ntp {

Ntp::Ntp()
    :
    trusted_key{YType::int32, "trusted-key"},
    authenticate{YType::empty, "authenticate"}
        ,
    peer(this, {"name"})
    , server(this, {"name"})
    , authentication_key(this, {"key_number"})
    , trace(std::make_shared<Ntp::Trace>())
{
    trace->parent = this;

    yang_name = "ntp"; yang_parent_name = "ntp"; is_top_level_class = true; has_list_ancestor = false; 
}

Ntp::~Ntp()
{
}

bool Ntp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<peer.len(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<server.len(); index++)
    {
        if(server[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<authentication_key.len(); index++)
    {
        if(authentication_key[index]->has_data())
            return true;
    }
    for (auto const & leaf : trusted_key.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return authenticate.is_set
	|| (trace !=  nullptr && trace->has_data());
}

bool Ntp::has_operation() const
{
    for (std::size_t index=0; index<peer.len(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<server.len(); index++)
    {
        if(server[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<authentication_key.len(); index++)
    {
        if(authentication_key[index]->has_operation())
            return true;
    }
    for (auto const & leaf : trusted_key.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(trusted_key.yfilter)
	|| ydk::is_set(authenticate.yfilter)
	|| (trace !=  nullptr && trace->has_operation());
}

std::string Ntp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ntp:ntp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authenticate.is_set || is_set(authenticate.yfilter)) leaf_name_data.push_back(authenticate.get_name_leafdata());

    auto trusted_key_name_datas = trusted_key.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), trusted_key_name_datas.begin(), trusted_key_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ntp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer")
    {
        auto ent_ = std::make_shared<Ntp::Peer>();
        ent_->parent = this;
        peer.append(ent_);
        return ent_;
    }

    if(child_yang_name == "server")
    {
        auto ent_ = std::make_shared<Ntp::Server>();
        ent_->parent = this;
        server.append(ent_);
        return ent_;
    }

    if(child_yang_name == "authentication-key")
    {
        auto ent_ = std::make_shared<Ntp::AuthenticationKey>();
        ent_->parent = this;
        authentication_key.append(ent_);
        return ent_;
    }

    if(child_yang_name == "trace")
    {
        if(trace == nullptr)
        {
            trace = std::make_shared<Ntp::Trace>();
        }
        return trace;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ntp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : peer.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : server.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : authentication_key.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(trace != nullptr)
    {
        _children["trace"] = trace;
    }

    return _children;
}

void Ntp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trusted-key")
    {
        trusted_key.append(value);
    }
    if(value_path == "authenticate")
    {
        authenticate = value;
        authenticate.value_namespace = name_space;
        authenticate.value_namespace_prefix = name_space_prefix;
    }
}

void Ntp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trusted-key")
    {
        trusted_key.yfilter = yfilter;
    }
    if(value_path == "authenticate")
    {
        authenticate.yfilter = yfilter;
    }
}

std::shared_ptr<ydk::Entity> Ntp::clone_ptr() const
{
    return std::make_shared<Ntp>();
}

std::string Ntp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Ntp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Ntp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Ntp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Ntp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer" || name == "server" || name == "authentication-key" || name == "trace" || name == "trusted-key" || name == "authenticate")
        return true;
    return false;
}

Ntp::Peer::Peer()
    :
    name{YType::str, "name"},
    version{YType::int32, "version"},
    key_id{YType::int32, "key-id"},
    prefer{YType::empty, "prefer"}
{

    yang_name = "peer"; yang_parent_name = "ntp"; is_top_level_class = false; has_list_ancestor = false; 
}

Ntp::Peer::~Peer()
{
}

bool Ntp::Peer::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| version.is_set
	|| key_id.is_set
	|| prefer.is_set;
}

bool Ntp::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(key_id.yfilter)
	|| ydk::is_set(prefer.yfilter);
}

std::string Ntp::Peer::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ntp:ntp/" << get_segment_path();
    return path_buffer.str();
}

std::string Ntp::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (key_id.is_set || is_set(key_id.yfilter)) leaf_name_data.push_back(key_id.get_name_leafdata());
    if (prefer.is_set || is_set(prefer.yfilter)) leaf_name_data.push_back(prefer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ntp::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ntp::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ntp::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-id")
    {
        key_id = value;
        key_id.value_namespace = name_space;
        key_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefer")
    {
        prefer = value;
        prefer.value_namespace = name_space;
        prefer.value_namespace_prefix = name_space_prefix;
    }
}

void Ntp::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "key-id")
    {
        key_id.yfilter = yfilter;
    }
    if(value_path == "prefer")
    {
        prefer.yfilter = yfilter;
    }
}

bool Ntp::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "version" || name == "key-id" || name == "prefer")
        return true;
    return false;
}

Ntp::Server::Server()
    :
    name{YType::str, "name"},
    version{YType::int32, "version"},
    key_id{YType::int32, "key-id"},
    prefer{YType::empty, "prefer"}
{

    yang_name = "server"; yang_parent_name = "ntp"; is_top_level_class = false; has_list_ancestor = false; 
}

Ntp::Server::~Server()
{
}

bool Ntp::Server::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| version.is_set
	|| key_id.is_set
	|| prefer.is_set;
}

bool Ntp::Server::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(key_id.yfilter)
	|| ydk::is_set(prefer.yfilter);
}

std::string Ntp::Server::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ntp:ntp/" << get_segment_path();
    return path_buffer.str();
}

std::string Ntp::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (key_id.is_set || is_set(key_id.yfilter)) leaf_name_data.push_back(key_id.get_name_leafdata());
    if (prefer.is_set || is_set(prefer.yfilter)) leaf_name_data.push_back(prefer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ntp::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ntp::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ntp::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-id")
    {
        key_id = value;
        key_id.value_namespace = name_space;
        key_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefer")
    {
        prefer = value;
        prefer.value_namespace = name_space;
        prefer.value_namespace_prefix = name_space_prefix;
    }
}

void Ntp::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "key-id")
    {
        key_id.yfilter = yfilter;
    }
    if(value_path == "prefer")
    {
        prefer.yfilter = yfilter;
    }
}

bool Ntp::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "version" || name == "key-id" || name == "prefer")
        return true;
    return false;
}

Ntp::AuthenticationKey::AuthenticationKey()
    :
    key_number{YType::int32, "key-number"},
    md5_keyword{YType::enumeration, "md5-keyword"},
    encryption{YType::enumeration, "encryption"},
    keyname{YType::str, "keyname"}
{

    yang_name = "authentication-key"; yang_parent_name = "ntp"; is_top_level_class = false; has_list_ancestor = false; 
}

Ntp::AuthenticationKey::~AuthenticationKey()
{
}

bool Ntp::AuthenticationKey::has_data() const
{
    if (is_presence_container) return true;
    return key_number.is_set
	|| md5_keyword.is_set
	|| encryption.is_set
	|| keyname.is_set;
}

bool Ntp::AuthenticationKey::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_number.yfilter)
	|| ydk::is_set(md5_keyword.yfilter)
	|| ydk::is_set(encryption.yfilter)
	|| ydk::is_set(keyname.yfilter);
}

std::string Ntp::AuthenticationKey::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ntp:ntp/" << get_segment_path();
    return path_buffer.str();
}

std::string Ntp::AuthenticationKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-key";
    ADD_KEY_TOKEN(key_number, "key-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::AuthenticationKey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_number.is_set || is_set(key_number.yfilter)) leaf_name_data.push_back(key_number.get_name_leafdata());
    if (md5_keyword.is_set || is_set(md5_keyword.yfilter)) leaf_name_data.push_back(md5_keyword.get_name_leafdata());
    if (encryption.is_set || is_set(encryption.yfilter)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (keyname.is_set || is_set(keyname.yfilter)) leaf_name_data.push_back(keyname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ntp::AuthenticationKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ntp::AuthenticationKey::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ntp::AuthenticationKey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-number")
    {
        key_number = value;
        key_number.value_namespace = name_space;
        key_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "md5-keyword")
    {
        md5_keyword = value;
        md5_keyword.value_namespace = name_space;
        md5_keyword.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encryption")
    {
        encryption = value;
        encryption.value_namespace = name_space;
        encryption.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keyname")
    {
        keyname = value;
        keyname.value_namespace = name_space;
        keyname.value_namespace_prefix = name_space_prefix;
    }
}

void Ntp::AuthenticationKey::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-number")
    {
        key_number.yfilter = yfilter;
    }
    if(value_path == "md5-keyword")
    {
        md5_keyword.yfilter = yfilter;
    }
    if(value_path == "encryption")
    {
        encryption.yfilter = yfilter;
    }
    if(value_path == "keyname")
    {
        keyname.yfilter = yfilter;
    }
}

bool Ntp::AuthenticationKey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-number" || name == "md5-keyword" || name == "encryption" || name == "keyname")
        return true;
    return false;
}

Ntp::Trace::Trace()
    :
    ntp_helper(std::make_shared<Ntp::Trace::NtpHelper>())
{
    ntp_helper->parent = this;

    yang_name = "trace"; yang_parent_name = "ntp"; is_top_level_class = false; has_list_ancestor = false; 
}

Ntp::Trace::~Trace()
{
}

bool Ntp::Trace::has_data() const
{
    if (is_presence_container) return true;
    return (ntp_helper !=  nullptr && ntp_helper->has_data());
}

bool Ntp::Trace::has_operation() const
{
    return is_set(yfilter)
	|| (ntp_helper !=  nullptr && ntp_helper->has_operation());
}

std::string Ntp::Trace::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ntp:ntp/" << get_segment_path();
    return path_buffer.str();
}

std::string Ntp::Trace::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::Trace::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ntp::Trace::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ntp_helper")
    {
        if(ntp_helper == nullptr)
        {
            ntp_helper = std::make_shared<Ntp::Trace::NtpHelper>();
        }
        return ntp_helper;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ntp::Trace::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ntp_helper != nullptr)
    {
        _children["ntp_helper"] = ntp_helper;
    }

    return _children;
}

void Ntp::Trace::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ntp::Trace::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ntp::Trace::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ntp_helper")
        return true;
    return false;
}

Ntp::Trace::NtpHelper::NtpHelper()
    :
    trace(this, {"buffer"})
{

    yang_name = "ntp_helper"; yang_parent_name = "trace"; is_top_level_class = false; has_list_ancestor = false; 
}

Ntp::Trace::NtpHelper::~NtpHelper()
{
}

bool Ntp::Trace::NtpHelper::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trace.len(); index++)
    {
        if(trace[index]->has_data())
            return true;
    }
    return false;
}

bool Ntp::Trace::NtpHelper::has_operation() const
{
    for (std::size_t index=0; index<trace.len(); index++)
    {
        if(trace[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ntp::Trace::NtpHelper::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ntp:ntp/trace/" << get_segment_path();
    return path_buffer.str();
}

std::string Ntp::Trace::NtpHelper::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ntp_helper";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::Trace::NtpHelper::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ntp::Trace::NtpHelper::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace")
    {
        auto ent_ = std::make_shared<Ntp::Trace::NtpHelper::Trace_>();
        ent_->parent = this;
        trace.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ntp::Trace::NtpHelper::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : trace.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ntp::Trace::NtpHelper::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ntp::Trace::NtpHelper::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ntp::Trace::NtpHelper::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace")
        return true;
    return false;
}

Ntp::Trace::NtpHelper::Trace_::Trace_()
    :
    buffer{YType::str, "buffer"}
        ,
    location(this, {"location_name"})
{

    yang_name = "trace"; yang_parent_name = "ntp_helper"; is_top_level_class = false; has_list_ancestor = false; 
}

Ntp::Trace::NtpHelper::Trace_::~Trace_()
{
}

bool Ntp::Trace::NtpHelper::Trace_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_data())
            return true;
    }
    return buffer.is_set;
}

bool Ntp::Trace::NtpHelper::Trace_::has_operation() const
{
    for (std::size_t index=0; index<location.len(); index++)
    {
        if(location[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(buffer.yfilter);
}

std::string Ntp::Trace::NtpHelper::Trace_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ntp:ntp/trace/ntp_helper/" << get_segment_path();
    return path_buffer.str();
}

std::string Ntp::Trace::NtpHelper::Trace_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace";
    ADD_KEY_TOKEN(buffer, "buffer");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::Trace::NtpHelper::Trace_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffer.is_set || is_set(buffer.yfilter)) leaf_name_data.push_back(buffer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ntp::Trace::NtpHelper::Trace_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "location")
    {
        auto ent_ = std::make_shared<Ntp::Trace::NtpHelper::Trace_::Location>();
        ent_->parent = this;
        location.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ntp::Trace::NtpHelper::Trace_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : location.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ntp::Trace::NtpHelper::Trace_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "buffer")
    {
        buffer = value;
        buffer.value_namespace = name_space;
        buffer.value_namespace_prefix = name_space_prefix;
    }
}

void Ntp::Trace::NtpHelper::Trace_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "buffer")
    {
        buffer.yfilter = yfilter;
    }
}

bool Ntp::Trace::NtpHelper::Trace_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "location" || name == "buffer")
        return true;
    return false;
}

Ntp::Trace::NtpHelper::Trace_::Location::Location()
    :
    location_name{YType::str, "location_name"}
        ,
    all_options(this, {"option"})
{

    yang_name = "location"; yang_parent_name = "trace"; is_top_level_class = false; has_list_ancestor = true; 
}

Ntp::Trace::NtpHelper::Trace_::Location::~Location()
{
}

bool Ntp::Trace::NtpHelper::Trace_::Location::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<all_options.len(); index++)
    {
        if(all_options[index]->has_data())
            return true;
    }
    return location_name.is_set;
}

bool Ntp::Trace::NtpHelper::Trace_::Location::has_operation() const
{
    for (std::size_t index=0; index<all_options.len(); index++)
    {
        if(all_options[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(location_name.yfilter);
}

std::string Ntp::Trace::NtpHelper::Trace_::Location::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "location";
    ADD_KEY_TOKEN(location_name, "location_name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::Trace::NtpHelper::Trace_::Location::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (location_name.is_set || is_set(location_name.yfilter)) leaf_name_data.push_back(location_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ntp::Trace::NtpHelper::Trace_::Location::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-options")
    {
        auto ent_ = std::make_shared<Ntp::Trace::NtpHelper::Trace_::Location::AllOptions>();
        ent_->parent = this;
        all_options.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ntp::Trace::NtpHelper::Trace_::Location::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : all_options.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ntp::Trace::NtpHelper::Trace_::Location::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "location_name")
    {
        location_name = value;
        location_name.value_namespace = name_space;
        location_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ntp::Trace::NtpHelper::Trace_::Location::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "location_name")
    {
        location_name.yfilter = yfilter;
    }
}

bool Ntp::Trace::NtpHelper::Trace_::Location::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-options" || name == "location_name")
        return true;
    return false;
}

Ntp::Trace::NtpHelper::Trace_::Location::AllOptions::AllOptions()
    :
    option{YType::str, "option"}
        ,
    trace_blocks(this, {})
{

    yang_name = "all-options"; yang_parent_name = "location"; is_top_level_class = false; has_list_ancestor = true; 
}

Ntp::Trace::NtpHelper::Trace_::Location::AllOptions::~AllOptions()
{
}

bool Ntp::Trace::NtpHelper::Trace_::Location::AllOptions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trace_blocks.len(); index++)
    {
        if(trace_blocks[index]->has_data())
            return true;
    }
    return option.is_set;
}

bool Ntp::Trace::NtpHelper::Trace_::Location::AllOptions::has_operation() const
{
    for (std::size_t index=0; index<trace_blocks.len(); index++)
    {
        if(trace_blocks[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(option.yfilter);
}

std::string Ntp::Trace::NtpHelper::Trace_::Location::AllOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-options";
    ADD_KEY_TOKEN(option, "option");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::Trace::NtpHelper::Trace_::Location::AllOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ntp::Trace::NtpHelper::Trace_::Location::AllOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace-blocks")
    {
        auto ent_ = std::make_shared<Ntp::Trace::NtpHelper::Trace_::Location::AllOptions::TraceBlocks>();
        ent_->parent = this;
        trace_blocks.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ntp::Trace::NtpHelper::Trace_::Location::AllOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : trace_blocks.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Ntp::Trace::NtpHelper::Trace_::Location::AllOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
}

void Ntp::Trace::NtpHelper::Trace_::Location::AllOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
}

bool Ntp::Trace::NtpHelper::Trace_::Location::AllOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace-blocks" || name == "option")
        return true;
    return false;
}

Ntp::Trace::NtpHelper::Trace_::Location::AllOptions::TraceBlocks::TraceBlocks()
    :
    data{YType::str, "data"}
{

    yang_name = "trace-blocks"; yang_parent_name = "all-options"; is_top_level_class = false; has_list_ancestor = true; 
}

Ntp::Trace::NtpHelper::Trace_::Location::AllOptions::TraceBlocks::~TraceBlocks()
{
}

bool Ntp::Trace::NtpHelper::Trace_::Location::AllOptions::TraceBlocks::has_data() const
{
    if (is_presence_container) return true;
    return data.is_set;
}

bool Ntp::Trace::NtpHelper::Trace_::Location::AllOptions::TraceBlocks::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data.yfilter);
}

std::string Ntp::Trace::NtpHelper::Trace_::Location::AllOptions::TraceBlocks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace-blocks";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ntp::Trace::NtpHelper::Trace_::Location::AllOptions::TraceBlocks::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data.is_set || is_set(data.yfilter)) leaf_name_data.push_back(data.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Ntp::Trace::NtpHelper::Trace_::Location::AllOptions::TraceBlocks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Ntp::Trace::NtpHelper::Trace_::Location::AllOptions::TraceBlocks::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Ntp::Trace::NtpHelper::Trace_::Location::AllOptions::TraceBlocks::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data")
    {
        data = value;
        data.value_namespace = name_space;
        data.value_namespace_prefix = name_space_prefix;
    }
}

void Ntp::Trace::NtpHelper::Trace_::Location::AllOptions::TraceBlocks::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data")
    {
        data.yfilter = yfilter;
    }
}

bool Ntp::Trace::NtpHelper::Trace_::Location::AllOptions::TraceBlocks::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data")
        return true;
    return false;
}

ClockAction::ClockAction()
    :
    clock_(std::make_shared<ClockAction::Clock>())
{
    clock_->parent = this;

    yang_name = "clock-action"; yang_parent_name = "ntp"; is_top_level_class = true; has_list_ancestor = false; 
}

ClockAction::~ClockAction()
{
}

bool ClockAction::has_data() const
{
    if (is_presence_container) return true;
    return (clock_ !=  nullptr && clock_->has_data());
}

bool ClockAction::has_operation() const
{
    return is_set(yfilter)
	|| (clock_ !=  nullptr && clock_->has_operation());
}

std::string ClockAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ntp:clock-action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClockAction::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClockAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clock")
    {
        if(clock_ == nullptr)
        {
            clock_ = std::make_shared<ClockAction::Clock>();
        }
        return clock_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClockAction::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(clock_ != nullptr)
    {
        _children["clock"] = clock_;
    }

    return _children;
}

void ClockAction::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClockAction::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> ClockAction::clone_ptr() const
{
    return std::make_shared<ClockAction>();
}

std::string ClockAction::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string ClockAction::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function ClockAction::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClockAction::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool ClockAction::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clock")
        return true;
    return false;
}

ClockAction::Clock::Clock()
    :
    action(std::make_shared<ClockAction::Clock::Action>())
{
    action->parent = this;

    yang_name = "clock"; yang_parent_name = "clock-action"; is_top_level_class = false; has_list_ancestor = false; 
}

ClockAction::Clock::~Clock()
{
}

bool ClockAction::Clock::has_data() const
{
    if (is_presence_container) return true;
    return (action !=  nullptr && action->has_data());
}

bool ClockAction::Clock::has_operation() const
{
    return is_set(yfilter)
	|| (action !=  nullptr && action->has_operation());
}

std::string ClockAction::Clock::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ntp:clock-action/" << get_segment_path();
    return path_buffer.str();
}

std::string ClockAction::Clock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clock";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClockAction::Clock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClockAction::Clock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Action")
    {
        if(action == nullptr)
        {
            action = std::make_shared<ClockAction::Clock::Action>();
        }
        return action;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClockAction::Clock::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(action != nullptr)
    {
        _children["Action"] = action;
    }

    return _children;
}

void ClockAction::Clock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClockAction::Clock::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ClockAction::Clock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Action")
        return true;
    return false;
}

ClockAction::Clock::Action::Action()
{

    yang_name = "Action"; yang_parent_name = "clock"; is_top_level_class = false; has_list_ancestor = false; 
}

ClockAction::Clock::Action::~Action()
{
}

bool ClockAction::Clock::Action::has_data() const
{
    if (is_presence_container) return true;
    return false;
}

bool ClockAction::Clock::Action::has_operation() const
{
    return is_set(yfilter);
}

std::string ClockAction::Clock::Action::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ntp:clock-action/clock/" << get_segment_path();
    return path_buffer.str();
}

std::string ClockAction::Clock::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Action";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClockAction::Clock::Action::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> ClockAction::Clock::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> ClockAction::Clock::Action::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void ClockAction::Clock::Action::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClockAction::Clock::Action::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool ClockAction::Clock::Action::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

const Enum::YLeaf Ntp::AuthenticationKey::Md5Keyword::md5 {0, "md5"};

const Enum::YLeaf Ntp::AuthenticationKey::Encryption::clear {0, "clear"};
const Enum::YLeaf Ntp::AuthenticationKey::Encryption::encrypted {1, "encrypted"};


}
}

