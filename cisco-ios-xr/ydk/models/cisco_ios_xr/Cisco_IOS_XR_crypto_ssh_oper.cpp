
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_crypto_ssh_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_crypto_ssh_oper {

Ssh::Ssh()
    :
    session(std::make_shared<Ssh::Session>())
{
    session->parent = this;

    yang_name = "ssh"; yang_parent_name = "Cisco-IOS-XR-crypto-ssh-oper"; is_top_level_class = true; has_list_ancestor = false;
}

Ssh::~Ssh()
{
}

bool Ssh::has_data() const
{
    return (session !=  nullptr && session->has_data());
}

bool Ssh::has_operation() const
{
    return is_set(yfilter)
	|| (session !=  nullptr && session->has_operation());
}

std::string Ssh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ssh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<Ssh::Session>();
        }
        return session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ssh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(session != nullptr)
    {
        children["session"] = session;
    }

    return children;
}

void Ssh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssh::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Ssh::clone_ptr() const
{
    return std::make_shared<Ssh>();
}

std::string Ssh::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Ssh::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Ssh::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Ssh::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Ssh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session")
        return true;
    return false;
}

Ssh::Session::Session()
    :
    brief(std::make_shared<Ssh::Session::Brief>())
	,detail(std::make_shared<Ssh::Session::Detail>())
	,rekey(std::make_shared<Ssh::Session::Rekey>())
{
    brief->parent = this;
    detail->parent = this;
    rekey->parent = this;

    yang_name = "session"; yang_parent_name = "ssh"; is_top_level_class = false; has_list_ancestor = false;
}

Ssh::Session::~Session()
{
}

bool Ssh::Session::has_data() const
{
    return (brief !=  nullptr && brief->has_data())
	|| (detail !=  nullptr && detail->has_data())
	|| (rekey !=  nullptr && rekey->has_data());
}

bool Ssh::Session::has_operation() const
{
    return is_set(yfilter)
	|| (brief !=  nullptr && brief->has_operation())
	|| (detail !=  nullptr && detail->has_operation())
	|| (rekey !=  nullptr && rekey->has_operation());
}

std::string Ssh::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ssh::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief")
    {
        if(brief == nullptr)
        {
            brief = std::make_shared<Ssh::Session::Brief>();
        }
        return brief;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Ssh::Session::Detail>();
        }
        return detail;
    }

    if(child_yang_name == "rekey")
    {
        if(rekey == nullptr)
        {
            rekey = std::make_shared<Ssh::Session::Rekey>();
        }
        return rekey;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ssh::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(brief != nullptr)
    {
        children["brief"] = brief;
    }

    if(detail != nullptr)
    {
        children["detail"] = detail;
    }

    if(rekey != nullptr)
    {
        children["rekey"] = rekey;
    }

    return children;
}

void Ssh::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssh::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ssh::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief" || name == "detail" || name == "rekey")
        return true;
    return false;
}

Ssh::Session::Brief::Brief()
    :
    incoming_sessions(std::make_shared<Ssh::Session::Brief::IncomingSessions>())
	,outgoing_sessions(std::make_shared<Ssh::Session::Brief::OutgoingSessions>())
{
    incoming_sessions->parent = this;
    outgoing_sessions->parent = this;

    yang_name = "brief"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = false;
}

Ssh::Session::Brief::~Brief()
{
}

bool Ssh::Session::Brief::has_data() const
{
    return (incoming_sessions !=  nullptr && incoming_sessions->has_data())
	|| (outgoing_sessions !=  nullptr && outgoing_sessions->has_data());
}

bool Ssh::Session::Brief::has_operation() const
{
    return is_set(yfilter)
	|| (incoming_sessions !=  nullptr && incoming_sessions->has_operation())
	|| (outgoing_sessions !=  nullptr && outgoing_sessions->has_operation());
}

std::string Ssh::Session::Brief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Session::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Session::Brief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ssh::Session::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "incoming-sessions")
    {
        if(incoming_sessions == nullptr)
        {
            incoming_sessions = std::make_shared<Ssh::Session::Brief::IncomingSessions>();
        }
        return incoming_sessions;
    }

    if(child_yang_name == "outgoing-sessions")
    {
        if(outgoing_sessions == nullptr)
        {
            outgoing_sessions = std::make_shared<Ssh::Session::Brief::OutgoingSessions>();
        }
        return outgoing_sessions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ssh::Session::Brief::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(incoming_sessions != nullptr)
    {
        children["incoming-sessions"] = incoming_sessions;
    }

    if(outgoing_sessions != nullptr)
    {
        children["outgoing-sessions"] = outgoing_sessions;
    }

    return children;
}

void Ssh::Session::Brief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssh::Session::Brief::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ssh::Session::Brief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "incoming-sessions" || name == "outgoing-sessions")
        return true;
    return false;
}

Ssh::Session::Brief::IncomingSessions::IncomingSessions()
{

    yang_name = "incoming-sessions"; yang_parent_name = "brief"; is_top_level_class = false; has_list_ancestor = false;
}

Ssh::Session::Brief::IncomingSessions::~IncomingSessions()
{
}

bool Ssh::Session::Brief::IncomingSessions::has_data() const
{
    for (std::size_t index=0; index<session_brief_info.size(); index++)
    {
        if(session_brief_info[index]->has_data())
            return true;
    }
    return false;
}

bool Ssh::Session::Brief::IncomingSessions::has_operation() const
{
    for (std::size_t index=0; index<session_brief_info.size(); index++)
    {
        if(session_brief_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ssh::Session::Brief::IncomingSessions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Session::Brief::IncomingSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "incoming-sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Session::Brief::IncomingSessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ssh::Session::Brief::IncomingSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-brief-info")
    {
        for(auto const & c : session_brief_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ssh::Session::Brief::IncomingSessions::SessionBriefInfo>();
        c->parent = this;
        session_brief_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ssh::Session::Brief::IncomingSessions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : session_brief_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ssh::Session::Brief::IncomingSessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssh::Session::Brief::IncomingSessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ssh::Session::Brief::IncomingSessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-brief-info")
        return true;
    return false;
}

Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::SessionBriefInfo()
    :
    authentication_type{YType::enumeration, "authentication-type"},
    channel_id{YType::uint32, "channel-id"},
    connection_type{YType::enumeration, "connection-type"},
    host_address{YType::str, "host-address"},
    node_name{YType::str, "node-name"},
    session_id{YType::uint32, "session-id"},
    session_state{YType::enumeration, "session-state"},
    user_id{YType::str, "user-id"},
    version{YType::enumeration, "version"},
    vty_assigned{YType::boolean, "vty-assigned"},
    vty_line_number{YType::uint32, "vty-line-number"}
{

    yang_name = "session-brief-info"; yang_parent_name = "incoming-sessions"; is_top_level_class = false; has_list_ancestor = false;
}

Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::~SessionBriefInfo()
{
}

bool Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::has_data() const
{
    return authentication_type.is_set
	|| channel_id.is_set
	|| connection_type.is_set
	|| host_address.is_set
	|| node_name.is_set
	|| session_id.is_set
	|| session_state.is_set
	|| user_id.is_set
	|| version.is_set
	|| vty_assigned.is_set
	|| vty_line_number.is_set;
}

bool Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authentication_type.yfilter)
	|| ydk::is_set(channel_id.yfilter)
	|| ydk::is_set(connection_type.yfilter)
	|| ydk::is_set(host_address.yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(session_state.yfilter)
	|| ydk::is_set(user_id.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(vty_assigned.yfilter)
	|| ydk::is_set(vty_line_number.yfilter);
}

std::string Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/brief/incoming-sessions/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-brief-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_type.is_set || is_set(authentication_type.yfilter)) leaf_name_data.push_back(authentication_type.get_name_leafdata());
    if (channel_id.is_set || is_set(channel_id.yfilter)) leaf_name_data.push_back(channel_id.get_name_leafdata());
    if (connection_type.is_set || is_set(connection_type.yfilter)) leaf_name_data.push_back(connection_type.get_name_leafdata());
    if (host_address.is_set || is_set(host_address.yfilter)) leaf_name_data.push_back(host_address.get_name_leafdata());
    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (session_state.is_set || is_set(session_state.yfilter)) leaf_name_data.push_back(session_state.get_name_leafdata());
    if (user_id.is_set || is_set(user_id.yfilter)) leaf_name_data.push_back(user_id.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (vty_assigned.is_set || is_set(vty_assigned.yfilter)) leaf_name_data.push_back(vty_assigned.get_name_leafdata());
    if (vty_line_number.is_set || is_set(vty_line_number.yfilter)) leaf_name_data.push_back(vty_line_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authentication-type")
    {
        authentication_type = value;
        authentication_type.value_namespace = name_space;
        authentication_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel-id")
    {
        channel_id = value;
        channel_id.value_namespace = name_space;
        channel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-type")
    {
        connection_type = value;
        connection_type.value_namespace = name_space;
        connection_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-address")
    {
        host_address = value;
        host_address.value_namespace = name_space;
        host_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-state")
    {
        session_state = value;
        session_state.value_namespace = name_space;
        session_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-id")
    {
        user_id = value;
        user_id.value_namespace = name_space;
        user_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vty-assigned")
    {
        vty_assigned = value;
        vty_assigned.value_namespace = name_space;
        vty_assigned.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vty-line-number")
    {
        vty_line_number = value;
        vty_line_number.value_namespace = name_space;
        vty_line_number.value_namespace_prefix = name_space_prefix;
    }
}

void Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authentication-type")
    {
        authentication_type.yfilter = yfilter;
    }
    if(value_path == "channel-id")
    {
        channel_id.yfilter = yfilter;
    }
    if(value_path == "connection-type")
    {
        connection_type.yfilter = yfilter;
    }
    if(value_path == "host-address")
    {
        host_address.yfilter = yfilter;
    }
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "session-state")
    {
        session_state.yfilter = yfilter;
    }
    if(value_path == "user-id")
    {
        user_id.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "vty-assigned")
    {
        vty_assigned.yfilter = yfilter;
    }
    if(value_path == "vty-line-number")
    {
        vty_line_number.yfilter = yfilter;
    }
}

bool Ssh::Session::Brief::IncomingSessions::SessionBriefInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-type" || name == "channel-id" || name == "connection-type" || name == "host-address" || name == "node-name" || name == "session-id" || name == "session-state" || name == "user-id" || name == "version" || name == "vty-assigned" || name == "vty-line-number")
        return true;
    return false;
}

Ssh::Session::Brief::OutgoingSessions::OutgoingSessions()
{

    yang_name = "outgoing-sessions"; yang_parent_name = "brief"; is_top_level_class = false; has_list_ancestor = false;
}

Ssh::Session::Brief::OutgoingSessions::~OutgoingSessions()
{
}

bool Ssh::Session::Brief::OutgoingSessions::has_data() const
{
    for (std::size_t index=0; index<session_brief_info.size(); index++)
    {
        if(session_brief_info[index]->has_data())
            return true;
    }
    return false;
}

bool Ssh::Session::Brief::OutgoingSessions::has_operation() const
{
    for (std::size_t index=0; index<session_brief_info.size(); index++)
    {
        if(session_brief_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ssh::Session::Brief::OutgoingSessions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/brief/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Session::Brief::OutgoingSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outgoing-sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Session::Brief::OutgoingSessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ssh::Session::Brief::OutgoingSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-brief-info")
    {
        for(auto const & c : session_brief_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo>();
        c->parent = this;
        session_brief_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ssh::Session::Brief::OutgoingSessions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : session_brief_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ssh::Session::Brief::OutgoingSessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssh::Session::Brief::OutgoingSessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ssh::Session::Brief::OutgoingSessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-brief-info")
        return true;
    return false;
}

Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::SessionBriefInfo()
    :
    authentication_type{YType::enumeration, "authentication-type"},
    channel_id{YType::uint32, "channel-id"},
    connection_type{YType::enumeration, "connection-type"},
    host_address{YType::str, "host-address"},
    node_name{YType::str, "node-name"},
    session_id{YType::uint32, "session-id"},
    session_state{YType::enumeration, "session-state"},
    user_id{YType::str, "user-id"},
    version{YType::enumeration, "version"},
    vty_assigned{YType::boolean, "vty-assigned"},
    vty_line_number{YType::uint32, "vty-line-number"}
{

    yang_name = "session-brief-info"; yang_parent_name = "outgoing-sessions"; is_top_level_class = false; has_list_ancestor = false;
}

Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::~SessionBriefInfo()
{
}

bool Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::has_data() const
{
    return authentication_type.is_set
	|| channel_id.is_set
	|| connection_type.is_set
	|| host_address.is_set
	|| node_name.is_set
	|| session_id.is_set
	|| session_state.is_set
	|| user_id.is_set
	|| version.is_set
	|| vty_assigned.is_set
	|| vty_line_number.is_set;
}

bool Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authentication_type.yfilter)
	|| ydk::is_set(channel_id.yfilter)
	|| ydk::is_set(connection_type.yfilter)
	|| ydk::is_set(host_address.yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(session_state.yfilter)
	|| ydk::is_set(user_id.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(vty_assigned.yfilter)
	|| ydk::is_set(vty_line_number.yfilter);
}

std::string Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/brief/outgoing-sessions/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-brief-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_type.is_set || is_set(authentication_type.yfilter)) leaf_name_data.push_back(authentication_type.get_name_leafdata());
    if (channel_id.is_set || is_set(channel_id.yfilter)) leaf_name_data.push_back(channel_id.get_name_leafdata());
    if (connection_type.is_set || is_set(connection_type.yfilter)) leaf_name_data.push_back(connection_type.get_name_leafdata());
    if (host_address.is_set || is_set(host_address.yfilter)) leaf_name_data.push_back(host_address.get_name_leafdata());
    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (session_state.is_set || is_set(session_state.yfilter)) leaf_name_data.push_back(session_state.get_name_leafdata());
    if (user_id.is_set || is_set(user_id.yfilter)) leaf_name_data.push_back(user_id.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (vty_assigned.is_set || is_set(vty_assigned.yfilter)) leaf_name_data.push_back(vty_assigned.get_name_leafdata());
    if (vty_line_number.is_set || is_set(vty_line_number.yfilter)) leaf_name_data.push_back(vty_line_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authentication-type")
    {
        authentication_type = value;
        authentication_type.value_namespace = name_space;
        authentication_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "channel-id")
    {
        channel_id = value;
        channel_id.value_namespace = name_space;
        channel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-type")
    {
        connection_type = value;
        connection_type.value_namespace = name_space;
        connection_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-address")
    {
        host_address = value;
        host_address.value_namespace = name_space;
        host_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-state")
    {
        session_state = value;
        session_state.value_namespace = name_space;
        session_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-id")
    {
        user_id = value;
        user_id.value_namespace = name_space;
        user_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vty-assigned")
    {
        vty_assigned = value;
        vty_assigned.value_namespace = name_space;
        vty_assigned.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vty-line-number")
    {
        vty_line_number = value;
        vty_line_number.value_namespace = name_space;
        vty_line_number.value_namespace_prefix = name_space_prefix;
    }
}

void Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authentication-type")
    {
        authentication_type.yfilter = yfilter;
    }
    if(value_path == "channel-id")
    {
        channel_id.yfilter = yfilter;
    }
    if(value_path == "connection-type")
    {
        connection_type.yfilter = yfilter;
    }
    if(value_path == "host-address")
    {
        host_address.yfilter = yfilter;
    }
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "session-state")
    {
        session_state.yfilter = yfilter;
    }
    if(value_path == "user-id")
    {
        user_id.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "vty-assigned")
    {
        vty_assigned.yfilter = yfilter;
    }
    if(value_path == "vty-line-number")
    {
        vty_line_number.yfilter = yfilter;
    }
}

bool Ssh::Session::Brief::OutgoingSessions::SessionBriefInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-type" || name == "channel-id" || name == "connection-type" || name == "host-address" || name == "node-name" || name == "session-id" || name == "session-state" || name == "user-id" || name == "version" || name == "vty-assigned" || name == "vty-line-number")
        return true;
    return false;
}

Ssh::Session::Detail::Detail()
    :
    incoming_sessions(std::make_shared<Ssh::Session::Detail::IncomingSessions>())
	,outgoing_connections(std::make_shared<Ssh::Session::Detail::OutgoingConnections>())
{
    incoming_sessions->parent = this;
    outgoing_connections->parent = this;

    yang_name = "detail"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = false;
}

Ssh::Session::Detail::~Detail()
{
}

bool Ssh::Session::Detail::has_data() const
{
    return (incoming_sessions !=  nullptr && incoming_sessions->has_data())
	|| (outgoing_connections !=  nullptr && outgoing_connections->has_data());
}

bool Ssh::Session::Detail::has_operation() const
{
    return is_set(yfilter)
	|| (incoming_sessions !=  nullptr && incoming_sessions->has_operation())
	|| (outgoing_connections !=  nullptr && outgoing_connections->has_operation());
}

std::string Ssh::Session::Detail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Session::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Session::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ssh::Session::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "incoming-sessions")
    {
        if(incoming_sessions == nullptr)
        {
            incoming_sessions = std::make_shared<Ssh::Session::Detail::IncomingSessions>();
        }
        return incoming_sessions;
    }

    if(child_yang_name == "outgoing-connections")
    {
        if(outgoing_connections == nullptr)
        {
            outgoing_connections = std::make_shared<Ssh::Session::Detail::OutgoingConnections>();
        }
        return outgoing_connections;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ssh::Session::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(incoming_sessions != nullptr)
    {
        children["incoming-sessions"] = incoming_sessions;
    }

    if(outgoing_connections != nullptr)
    {
        children["outgoing-connections"] = outgoing_connections;
    }

    return children;
}

void Ssh::Session::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssh::Session::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ssh::Session::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "incoming-sessions" || name == "outgoing-connections")
        return true;
    return false;
}

Ssh::Session::Detail::IncomingSessions::IncomingSessions()
{

    yang_name = "incoming-sessions"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = false;
}

Ssh::Session::Detail::IncomingSessions::~IncomingSessions()
{
}

bool Ssh::Session::Detail::IncomingSessions::has_data() const
{
    for (std::size_t index=0; index<session_detail_info.size(); index++)
    {
        if(session_detail_info[index]->has_data())
            return true;
    }
    return false;
}

bool Ssh::Session::Detail::IncomingSessions::has_operation() const
{
    for (std::size_t index=0; index<session_detail_info.size(); index++)
    {
        if(session_detail_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ssh::Session::Detail::IncomingSessions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Session::Detail::IncomingSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "incoming-sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Session::Detail::IncomingSessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ssh::Session::Detail::IncomingSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-detail-info")
    {
        for(auto const & c : session_detail_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ssh::Session::Detail::IncomingSessions::SessionDetailInfo>();
        c->parent = this;
        session_detail_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ssh::Session::Detail::IncomingSessions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : session_detail_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ssh::Session::Detail::IncomingSessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssh::Session::Detail::IncomingSessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ssh::Session::Detail::IncomingSessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-detail-info")
        return true;
    return false;
}

Ssh::Session::Detail::IncomingSessions::SessionDetailInfo::SessionDetailInfo()
    :
    in_cipher{YType::enumeration, "in-cipher"},
    in_mac{YType::enumeration, "in-mac"},
    key_exchange{YType::enumeration, "key-exchange"},
    out_cipher{YType::enumeration, "out-cipher"},
    out_mac{YType::enumeration, "out-mac"},
    public_key{YType::enumeration, "public-key"},
    session_id{YType::uint32, "session-id"}
{

    yang_name = "session-detail-info"; yang_parent_name = "incoming-sessions"; is_top_level_class = false; has_list_ancestor = false;
}

Ssh::Session::Detail::IncomingSessions::SessionDetailInfo::~SessionDetailInfo()
{
}

bool Ssh::Session::Detail::IncomingSessions::SessionDetailInfo::has_data() const
{
    return in_cipher.is_set
	|| in_mac.is_set
	|| key_exchange.is_set
	|| out_cipher.is_set
	|| out_mac.is_set
	|| public_key.is_set
	|| session_id.is_set;
}

bool Ssh::Session::Detail::IncomingSessions::SessionDetailInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_cipher.yfilter)
	|| ydk::is_set(in_mac.yfilter)
	|| ydk::is_set(key_exchange.yfilter)
	|| ydk::is_set(out_cipher.yfilter)
	|| ydk::is_set(out_mac.yfilter)
	|| ydk::is_set(public_key.yfilter)
	|| ydk::is_set(session_id.yfilter);
}

std::string Ssh::Session::Detail::IncomingSessions::SessionDetailInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/detail/incoming-sessions/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Session::Detail::IncomingSessions::SessionDetailInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-detail-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Session::Detail::IncomingSessions::SessionDetailInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_cipher.is_set || is_set(in_cipher.yfilter)) leaf_name_data.push_back(in_cipher.get_name_leafdata());
    if (in_mac.is_set || is_set(in_mac.yfilter)) leaf_name_data.push_back(in_mac.get_name_leafdata());
    if (key_exchange.is_set || is_set(key_exchange.yfilter)) leaf_name_data.push_back(key_exchange.get_name_leafdata());
    if (out_cipher.is_set || is_set(out_cipher.yfilter)) leaf_name_data.push_back(out_cipher.get_name_leafdata());
    if (out_mac.is_set || is_set(out_mac.yfilter)) leaf_name_data.push_back(out_mac.get_name_leafdata());
    if (public_key.is_set || is_set(public_key.yfilter)) leaf_name_data.push_back(public_key.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ssh::Session::Detail::IncomingSessions::SessionDetailInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ssh::Session::Detail::IncomingSessions::SessionDetailInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ssh::Session::Detail::IncomingSessions::SessionDetailInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-cipher")
    {
        in_cipher = value;
        in_cipher.value_namespace = name_space;
        in_cipher.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-mac")
    {
        in_mac = value;
        in_mac.value_namespace = name_space;
        in_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-exchange")
    {
        key_exchange = value;
        key_exchange.value_namespace = name_space;
        key_exchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-cipher")
    {
        out_cipher = value;
        out_cipher.value_namespace = name_space;
        out_cipher.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-mac")
    {
        out_mac = value;
        out_mac.value_namespace = name_space;
        out_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "public-key")
    {
        public_key = value;
        public_key.value_namespace = name_space;
        public_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ssh::Session::Detail::IncomingSessions::SessionDetailInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-cipher")
    {
        in_cipher.yfilter = yfilter;
    }
    if(value_path == "in-mac")
    {
        in_mac.yfilter = yfilter;
    }
    if(value_path == "key-exchange")
    {
        key_exchange.yfilter = yfilter;
    }
    if(value_path == "out-cipher")
    {
        out_cipher.yfilter = yfilter;
    }
    if(value_path == "out-mac")
    {
        out_mac.yfilter = yfilter;
    }
    if(value_path == "public-key")
    {
        public_key.yfilter = yfilter;
    }
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
}

bool Ssh::Session::Detail::IncomingSessions::SessionDetailInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-cipher" || name == "in-mac" || name == "key-exchange" || name == "out-cipher" || name == "out-mac" || name == "public-key" || name == "session-id")
        return true;
    return false;
}

Ssh::Session::Detail::OutgoingConnections::OutgoingConnections()
{

    yang_name = "outgoing-connections"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = false;
}

Ssh::Session::Detail::OutgoingConnections::~OutgoingConnections()
{
}

bool Ssh::Session::Detail::OutgoingConnections::has_data() const
{
    for (std::size_t index=0; index<session_detail_info.size(); index++)
    {
        if(session_detail_info[index]->has_data())
            return true;
    }
    return false;
}

bool Ssh::Session::Detail::OutgoingConnections::has_operation() const
{
    for (std::size_t index=0; index<session_detail_info.size(); index++)
    {
        if(session_detail_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ssh::Session::Detail::OutgoingConnections::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Session::Detail::OutgoingConnections::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outgoing-connections";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Session::Detail::OutgoingConnections::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ssh::Session::Detail::OutgoingConnections::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-detail-info")
    {
        for(auto const & c : session_detail_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ssh::Session::Detail::OutgoingConnections::SessionDetailInfo>();
        c->parent = this;
        session_detail_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ssh::Session::Detail::OutgoingConnections::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : session_detail_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ssh::Session::Detail::OutgoingConnections::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssh::Session::Detail::OutgoingConnections::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ssh::Session::Detail::OutgoingConnections::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-detail-info")
        return true;
    return false;
}

Ssh::Session::Detail::OutgoingConnections::SessionDetailInfo::SessionDetailInfo()
    :
    in_cipher{YType::enumeration, "in-cipher"},
    in_mac{YType::enumeration, "in-mac"},
    key_exchange{YType::enumeration, "key-exchange"},
    out_cipher{YType::enumeration, "out-cipher"},
    out_mac{YType::enumeration, "out-mac"},
    public_key{YType::enumeration, "public-key"},
    session_id{YType::uint32, "session-id"}
{

    yang_name = "session-detail-info"; yang_parent_name = "outgoing-connections"; is_top_level_class = false; has_list_ancestor = false;
}

Ssh::Session::Detail::OutgoingConnections::SessionDetailInfo::~SessionDetailInfo()
{
}

bool Ssh::Session::Detail::OutgoingConnections::SessionDetailInfo::has_data() const
{
    return in_cipher.is_set
	|| in_mac.is_set
	|| key_exchange.is_set
	|| out_cipher.is_set
	|| out_mac.is_set
	|| public_key.is_set
	|| session_id.is_set;
}

bool Ssh::Session::Detail::OutgoingConnections::SessionDetailInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_cipher.yfilter)
	|| ydk::is_set(in_mac.yfilter)
	|| ydk::is_set(key_exchange.yfilter)
	|| ydk::is_set(out_cipher.yfilter)
	|| ydk::is_set(out_mac.yfilter)
	|| ydk::is_set(public_key.yfilter)
	|| ydk::is_set(session_id.yfilter);
}

std::string Ssh::Session::Detail::OutgoingConnections::SessionDetailInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/detail/outgoing-connections/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Session::Detail::OutgoingConnections::SessionDetailInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-detail-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Session::Detail::OutgoingConnections::SessionDetailInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_cipher.is_set || is_set(in_cipher.yfilter)) leaf_name_data.push_back(in_cipher.get_name_leafdata());
    if (in_mac.is_set || is_set(in_mac.yfilter)) leaf_name_data.push_back(in_mac.get_name_leafdata());
    if (key_exchange.is_set || is_set(key_exchange.yfilter)) leaf_name_data.push_back(key_exchange.get_name_leafdata());
    if (out_cipher.is_set || is_set(out_cipher.yfilter)) leaf_name_data.push_back(out_cipher.get_name_leafdata());
    if (out_mac.is_set || is_set(out_mac.yfilter)) leaf_name_data.push_back(out_mac.get_name_leafdata());
    if (public_key.is_set || is_set(public_key.yfilter)) leaf_name_data.push_back(public_key.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ssh::Session::Detail::OutgoingConnections::SessionDetailInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ssh::Session::Detail::OutgoingConnections::SessionDetailInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ssh::Session::Detail::OutgoingConnections::SessionDetailInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-cipher")
    {
        in_cipher = value;
        in_cipher.value_namespace = name_space;
        in_cipher.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-mac")
    {
        in_mac = value;
        in_mac.value_namespace = name_space;
        in_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-exchange")
    {
        key_exchange = value;
        key_exchange.value_namespace = name_space;
        key_exchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-cipher")
    {
        out_cipher = value;
        out_cipher.value_namespace = name_space;
        out_cipher.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-mac")
    {
        out_mac = value;
        out_mac.value_namespace = name_space;
        out_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "public-key")
    {
        public_key = value;
        public_key.value_namespace = name_space;
        public_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ssh::Session::Detail::OutgoingConnections::SessionDetailInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-cipher")
    {
        in_cipher.yfilter = yfilter;
    }
    if(value_path == "in-mac")
    {
        in_mac.yfilter = yfilter;
    }
    if(value_path == "key-exchange")
    {
        key_exchange.yfilter = yfilter;
    }
    if(value_path == "out-cipher")
    {
        out_cipher.yfilter = yfilter;
    }
    if(value_path == "out-mac")
    {
        out_mac.yfilter = yfilter;
    }
    if(value_path == "public-key")
    {
        public_key.yfilter = yfilter;
    }
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
}

bool Ssh::Session::Detail::OutgoingConnections::SessionDetailInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-cipher" || name == "in-mac" || name == "key-exchange" || name == "out-cipher" || name == "out-mac" || name == "public-key" || name == "session-id")
        return true;
    return false;
}

Ssh::Session::Rekey::Rekey()
    :
    incoming_sessions(std::make_shared<Ssh::Session::Rekey::IncomingSessions>())
	,outgoing_connections(std::make_shared<Ssh::Session::Rekey::OutgoingConnections>())
{
    incoming_sessions->parent = this;
    outgoing_connections->parent = this;

    yang_name = "rekey"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = false;
}

Ssh::Session::Rekey::~Rekey()
{
}

bool Ssh::Session::Rekey::has_data() const
{
    return (incoming_sessions !=  nullptr && incoming_sessions->has_data())
	|| (outgoing_connections !=  nullptr && outgoing_connections->has_data());
}

bool Ssh::Session::Rekey::has_operation() const
{
    return is_set(yfilter)
	|| (incoming_sessions !=  nullptr && incoming_sessions->has_operation())
	|| (outgoing_connections !=  nullptr && outgoing_connections->has_operation());
}

std::string Ssh::Session::Rekey::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Session::Rekey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rekey";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Session::Rekey::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ssh::Session::Rekey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "incoming-sessions")
    {
        if(incoming_sessions == nullptr)
        {
            incoming_sessions = std::make_shared<Ssh::Session::Rekey::IncomingSessions>();
        }
        return incoming_sessions;
    }

    if(child_yang_name == "outgoing-connections")
    {
        if(outgoing_connections == nullptr)
        {
            outgoing_connections = std::make_shared<Ssh::Session::Rekey::OutgoingConnections>();
        }
        return outgoing_connections;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ssh::Session::Rekey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(incoming_sessions != nullptr)
    {
        children["incoming-sessions"] = incoming_sessions;
    }

    if(outgoing_connections != nullptr)
    {
        children["outgoing-connections"] = outgoing_connections;
    }

    return children;
}

void Ssh::Session::Rekey::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssh::Session::Rekey::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ssh::Session::Rekey::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "incoming-sessions" || name == "outgoing-connections")
        return true;
    return false;
}

Ssh::Session::Rekey::IncomingSessions::IncomingSessions()
{

    yang_name = "incoming-sessions"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = false;
}

Ssh::Session::Rekey::IncomingSessions::~IncomingSessions()
{
}

bool Ssh::Session::Rekey::IncomingSessions::has_data() const
{
    for (std::size_t index=0; index<session_rekey_info.size(); index++)
    {
        if(session_rekey_info[index]->has_data())
            return true;
    }
    return false;
}

bool Ssh::Session::Rekey::IncomingSessions::has_operation() const
{
    for (std::size_t index=0; index<session_rekey_info.size(); index++)
    {
        if(session_rekey_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ssh::Session::Rekey::IncomingSessions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/rekey/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Session::Rekey::IncomingSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "incoming-sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Session::Rekey::IncomingSessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ssh::Session::Rekey::IncomingSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-rekey-info")
    {
        for(auto const & c : session_rekey_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ssh::Session::Rekey::IncomingSessions::SessionRekeyInfo>();
        c->parent = this;
        session_rekey_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ssh::Session::Rekey::IncomingSessions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : session_rekey_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ssh::Session::Rekey::IncomingSessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssh::Session::Rekey::IncomingSessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ssh::Session::Rekey::IncomingSessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-rekey-info")
        return true;
    return false;
}

Ssh::Session::Rekey::IncomingSessions::SessionRekeyInfo::SessionRekeyInfo()
    :
    session_id{YType::uint32, "session-id"},
    session_rekey_count{YType::uint32, "session-rekey-count"},
    time_to_rekey{YType::str, "time-to-rekey"},
    volume_to_rekey{YType::str, "volume-to-rekey"}
{

    yang_name = "session-rekey-info"; yang_parent_name = "incoming-sessions"; is_top_level_class = false; has_list_ancestor = false;
}

Ssh::Session::Rekey::IncomingSessions::SessionRekeyInfo::~SessionRekeyInfo()
{
}

bool Ssh::Session::Rekey::IncomingSessions::SessionRekeyInfo::has_data() const
{
    return session_id.is_set
	|| session_rekey_count.is_set
	|| time_to_rekey.is_set
	|| volume_to_rekey.is_set;
}

bool Ssh::Session::Rekey::IncomingSessions::SessionRekeyInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(session_rekey_count.yfilter)
	|| ydk::is_set(time_to_rekey.yfilter)
	|| ydk::is_set(volume_to_rekey.yfilter);
}

std::string Ssh::Session::Rekey::IncomingSessions::SessionRekeyInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/rekey/incoming-sessions/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Session::Rekey::IncomingSessions::SessionRekeyInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-rekey-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Session::Rekey::IncomingSessions::SessionRekeyInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (session_rekey_count.is_set || is_set(session_rekey_count.yfilter)) leaf_name_data.push_back(session_rekey_count.get_name_leafdata());
    if (time_to_rekey.is_set || is_set(time_to_rekey.yfilter)) leaf_name_data.push_back(time_to_rekey.get_name_leafdata());
    if (volume_to_rekey.is_set || is_set(volume_to_rekey.yfilter)) leaf_name_data.push_back(volume_to_rekey.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ssh::Session::Rekey::IncomingSessions::SessionRekeyInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ssh::Session::Rekey::IncomingSessions::SessionRekeyInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ssh::Session::Rekey::IncomingSessions::SessionRekeyInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-rekey-count")
    {
        session_rekey_count = value;
        session_rekey_count.value_namespace = name_space;
        session_rekey_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-to-rekey")
    {
        time_to_rekey = value;
        time_to_rekey.value_namespace = name_space;
        time_to_rekey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "volume-to-rekey")
    {
        volume_to_rekey = value;
        volume_to_rekey.value_namespace = name_space;
        volume_to_rekey.value_namespace_prefix = name_space_prefix;
    }
}

void Ssh::Session::Rekey::IncomingSessions::SessionRekeyInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "session-rekey-count")
    {
        session_rekey_count.yfilter = yfilter;
    }
    if(value_path == "time-to-rekey")
    {
        time_to_rekey.yfilter = yfilter;
    }
    if(value_path == "volume-to-rekey")
    {
        volume_to_rekey.yfilter = yfilter;
    }
}

bool Ssh::Session::Rekey::IncomingSessions::SessionRekeyInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-id" || name == "session-rekey-count" || name == "time-to-rekey" || name == "volume-to-rekey")
        return true;
    return false;
}

Ssh::Session::Rekey::OutgoingConnections::OutgoingConnections()
{

    yang_name = "outgoing-connections"; yang_parent_name = "rekey"; is_top_level_class = false; has_list_ancestor = false;
}

Ssh::Session::Rekey::OutgoingConnections::~OutgoingConnections()
{
}

bool Ssh::Session::Rekey::OutgoingConnections::has_data() const
{
    for (std::size_t index=0; index<session_rekey_info.size(); index++)
    {
        if(session_rekey_info[index]->has_data())
            return true;
    }
    return false;
}

bool Ssh::Session::Rekey::OutgoingConnections::has_operation() const
{
    for (std::size_t index=0; index<session_rekey_info.size(); index++)
    {
        if(session_rekey_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ssh::Session::Rekey::OutgoingConnections::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/rekey/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Session::Rekey::OutgoingConnections::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outgoing-connections";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Session::Rekey::OutgoingConnections::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ssh::Session::Rekey::OutgoingConnections::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-rekey-info")
    {
        for(auto const & c : session_rekey_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ssh::Session::Rekey::OutgoingConnections::SessionRekeyInfo>();
        c->parent = this;
        session_rekey_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ssh::Session::Rekey::OutgoingConnections::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : session_rekey_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ssh::Session::Rekey::OutgoingConnections::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssh::Session::Rekey::OutgoingConnections::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ssh::Session::Rekey::OutgoingConnections::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-rekey-info")
        return true;
    return false;
}

Ssh::Session::Rekey::OutgoingConnections::SessionRekeyInfo::SessionRekeyInfo()
    :
    session_id{YType::uint32, "session-id"},
    session_rekey_count{YType::uint32, "session-rekey-count"},
    time_to_rekey{YType::str, "time-to-rekey"},
    volume_to_rekey{YType::str, "volume-to-rekey"}
{

    yang_name = "session-rekey-info"; yang_parent_name = "outgoing-connections"; is_top_level_class = false; has_list_ancestor = false;
}

Ssh::Session::Rekey::OutgoingConnections::SessionRekeyInfo::~SessionRekeyInfo()
{
}

bool Ssh::Session::Rekey::OutgoingConnections::SessionRekeyInfo::has_data() const
{
    return session_id.is_set
	|| session_rekey_count.is_set
	|| time_to_rekey.is_set
	|| volume_to_rekey.is_set;
}

bool Ssh::Session::Rekey::OutgoingConnections::SessionRekeyInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(session_rekey_count.yfilter)
	|| ydk::is_set(time_to_rekey.yfilter)
	|| ydk::is_set(volume_to_rekey.yfilter);
}

std::string Ssh::Session::Rekey::OutgoingConnections::SessionRekeyInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh/session/rekey/outgoing-connections/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh::Session::Rekey::OutgoingConnections::SessionRekeyInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-rekey-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh::Session::Rekey::OutgoingConnections::SessionRekeyInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (session_rekey_count.is_set || is_set(session_rekey_count.yfilter)) leaf_name_data.push_back(session_rekey_count.get_name_leafdata());
    if (time_to_rekey.is_set || is_set(time_to_rekey.yfilter)) leaf_name_data.push_back(time_to_rekey.get_name_leafdata());
    if (volume_to_rekey.is_set || is_set(volume_to_rekey.yfilter)) leaf_name_data.push_back(volume_to_rekey.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ssh::Session::Rekey::OutgoingConnections::SessionRekeyInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ssh::Session::Rekey::OutgoingConnections::SessionRekeyInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ssh::Session::Rekey::OutgoingConnections::SessionRekeyInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-rekey-count")
    {
        session_rekey_count = value;
        session_rekey_count.value_namespace = name_space;
        session_rekey_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-to-rekey")
    {
        time_to_rekey = value;
        time_to_rekey.value_namespace = name_space;
        time_to_rekey.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "volume-to-rekey")
    {
        volume_to_rekey = value;
        volume_to_rekey.value_namespace = name_space;
        volume_to_rekey.value_namespace_prefix = name_space_prefix;
    }
}

void Ssh::Session::Rekey::OutgoingConnections::SessionRekeyInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "session-rekey-count")
    {
        session_rekey_count.yfilter = yfilter;
    }
    if(value_path == "time-to-rekey")
    {
        time_to_rekey.yfilter = yfilter;
    }
    if(value_path == "volume-to-rekey")
    {
        volume_to_rekey.yfilter = yfilter;
    }
}

bool Ssh::Session::Rekey::OutgoingConnections::SessionRekeyInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-id" || name == "session-rekey-count" || name == "time-to-rekey" || name == "volume-to-rekey")
        return true;
    return false;
}

Ssh1::Ssh1()
    :
    kex(std::make_shared<Ssh1::Kex>())
{
    kex->parent = this;

    yang_name = "ssh1"; yang_parent_name = "Cisco-IOS-XR-crypto-ssh-oper"; is_top_level_class = true; has_list_ancestor = false;
}

Ssh1::~Ssh1()
{
}

bool Ssh1::has_data() const
{
    return (kex !=  nullptr && kex->has_data());
}

bool Ssh1::has_operation() const
{
    return is_set(yfilter)
	|| (kex !=  nullptr && kex->has_operation());
}

std::string Ssh1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ssh1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "kex")
    {
        if(kex == nullptr)
        {
            kex = std::make_shared<Ssh1::Kex>();
        }
        return kex;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ssh1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(kex != nullptr)
    {
        children["kex"] = kex;
    }

    return children;
}

void Ssh1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssh1::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Ssh1::clone_ptr() const
{
    return std::make_shared<Ssh1>();
}

std::string Ssh1::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Ssh1::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Ssh1::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Ssh1::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Ssh1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "kex")
        return true;
    return false;
}

Ssh1::Kex::Kex()
    :
    nodes(std::make_shared<Ssh1::Kex::Nodes>())
{
    nodes->parent = this;

    yang_name = "kex"; yang_parent_name = "ssh1"; is_top_level_class = false; has_list_ancestor = false;
}

Ssh1::Kex::~Kex()
{
}

bool Ssh1::Kex::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool Ssh1::Kex::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Ssh1::Kex::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh1/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh1::Kex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "kex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh1::Kex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ssh1::Kex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<Ssh1::Kex::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ssh1::Kex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void Ssh1::Kex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssh1::Kex::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ssh1::Kex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

Ssh1::Kex::Nodes::Nodes()
{

    yang_name = "nodes"; yang_parent_name = "kex"; is_top_level_class = false; has_list_ancestor = false;
}

Ssh1::Kex::Nodes::~Nodes()
{
}

bool Ssh1::Kex::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Ssh1::Kex::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ssh1::Kex::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh1/kex/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh1::Kex::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh1::Kex::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ssh1::Kex::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ssh1::Kex::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ssh1::Kex::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ssh1::Kex::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssh1::Kex::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ssh1::Kex::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

Ssh1::Kex::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    incoming_sessions(std::make_shared<Ssh1::Kex::Nodes::Node::IncomingSessions>())
	,outgoing_connections(std::make_shared<Ssh1::Kex::Nodes::Node::OutgoingConnections>())
{
    incoming_sessions->parent = this;
    outgoing_connections->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false;
}

Ssh1::Kex::Nodes::Node::~Node()
{
}

bool Ssh1::Kex::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (incoming_sessions !=  nullptr && incoming_sessions->has_data())
	|| (outgoing_connections !=  nullptr && outgoing_connections->has_data());
}

bool Ssh1::Kex::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (incoming_sessions !=  nullptr && incoming_sessions->has_operation())
	|| (outgoing_connections !=  nullptr && outgoing_connections->has_operation());
}

std::string Ssh1::Kex::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-crypto-ssh-oper:ssh1/kex/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string Ssh1::Kex::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh1::Kex::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ssh1::Kex::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "incoming-sessions")
    {
        if(incoming_sessions == nullptr)
        {
            incoming_sessions = std::make_shared<Ssh1::Kex::Nodes::Node::IncomingSessions>();
        }
        return incoming_sessions;
    }

    if(child_yang_name == "outgoing-connections")
    {
        if(outgoing_connections == nullptr)
        {
            outgoing_connections = std::make_shared<Ssh1::Kex::Nodes::Node::OutgoingConnections>();
        }
        return outgoing_connections;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ssh1::Kex::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(incoming_sessions != nullptr)
    {
        children["incoming-sessions"] = incoming_sessions;
    }

    if(outgoing_connections != nullptr)
    {
        children["outgoing-connections"] = outgoing_connections;
    }

    return children;
}

void Ssh1::Kex::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ssh1::Kex::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool Ssh1::Kex::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "incoming-sessions" || name == "outgoing-connections" || name == "node-name")
        return true;
    return false;
}

Ssh1::Kex::Nodes::Node::IncomingSessions::IncomingSessions()
{

    yang_name = "incoming-sessions"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Ssh1::Kex::Nodes::Node::IncomingSessions::~IncomingSessions()
{
}

bool Ssh1::Kex::Nodes::Node::IncomingSessions::has_data() const
{
    for (std::size_t index=0; index<session_detail_info.size(); index++)
    {
        if(session_detail_info[index]->has_data())
            return true;
    }
    return false;
}

bool Ssh1::Kex::Nodes::Node::IncomingSessions::has_operation() const
{
    for (std::size_t index=0; index<session_detail_info.size(); index++)
    {
        if(session_detail_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ssh1::Kex::Nodes::Node::IncomingSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "incoming-sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh1::Kex::Nodes::Node::IncomingSessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ssh1::Kex::Nodes::Node::IncomingSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-detail-info")
    {
        for(auto const & c : session_detail_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ssh1::Kex::Nodes::Node::IncomingSessions::SessionDetailInfo>();
        c->parent = this;
        session_detail_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ssh1::Kex::Nodes::Node::IncomingSessions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : session_detail_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ssh1::Kex::Nodes::Node::IncomingSessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssh1::Kex::Nodes::Node::IncomingSessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ssh1::Kex::Nodes::Node::IncomingSessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-detail-info")
        return true;
    return false;
}

Ssh1::Kex::Nodes::Node::IncomingSessions::SessionDetailInfo::SessionDetailInfo()
    :
    in_cipher{YType::enumeration, "in-cipher"},
    in_mac{YType::enumeration, "in-mac"},
    key_exchange{YType::enumeration, "key-exchange"},
    out_cipher{YType::enumeration, "out-cipher"},
    out_mac{YType::enumeration, "out-mac"},
    public_key{YType::enumeration, "public-key"},
    session_id{YType::uint32, "session-id"}
{

    yang_name = "session-detail-info"; yang_parent_name = "incoming-sessions"; is_top_level_class = false; has_list_ancestor = true;
}

Ssh1::Kex::Nodes::Node::IncomingSessions::SessionDetailInfo::~SessionDetailInfo()
{
}

bool Ssh1::Kex::Nodes::Node::IncomingSessions::SessionDetailInfo::has_data() const
{
    return in_cipher.is_set
	|| in_mac.is_set
	|| key_exchange.is_set
	|| out_cipher.is_set
	|| out_mac.is_set
	|| public_key.is_set
	|| session_id.is_set;
}

bool Ssh1::Kex::Nodes::Node::IncomingSessions::SessionDetailInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_cipher.yfilter)
	|| ydk::is_set(in_mac.yfilter)
	|| ydk::is_set(key_exchange.yfilter)
	|| ydk::is_set(out_cipher.yfilter)
	|| ydk::is_set(out_mac.yfilter)
	|| ydk::is_set(public_key.yfilter)
	|| ydk::is_set(session_id.yfilter);
}

std::string Ssh1::Kex::Nodes::Node::IncomingSessions::SessionDetailInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-detail-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh1::Kex::Nodes::Node::IncomingSessions::SessionDetailInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_cipher.is_set || is_set(in_cipher.yfilter)) leaf_name_data.push_back(in_cipher.get_name_leafdata());
    if (in_mac.is_set || is_set(in_mac.yfilter)) leaf_name_data.push_back(in_mac.get_name_leafdata());
    if (key_exchange.is_set || is_set(key_exchange.yfilter)) leaf_name_data.push_back(key_exchange.get_name_leafdata());
    if (out_cipher.is_set || is_set(out_cipher.yfilter)) leaf_name_data.push_back(out_cipher.get_name_leafdata());
    if (out_mac.is_set || is_set(out_mac.yfilter)) leaf_name_data.push_back(out_mac.get_name_leafdata());
    if (public_key.is_set || is_set(public_key.yfilter)) leaf_name_data.push_back(public_key.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ssh1::Kex::Nodes::Node::IncomingSessions::SessionDetailInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ssh1::Kex::Nodes::Node::IncomingSessions::SessionDetailInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ssh1::Kex::Nodes::Node::IncomingSessions::SessionDetailInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-cipher")
    {
        in_cipher = value;
        in_cipher.value_namespace = name_space;
        in_cipher.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-mac")
    {
        in_mac = value;
        in_mac.value_namespace = name_space;
        in_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-exchange")
    {
        key_exchange = value;
        key_exchange.value_namespace = name_space;
        key_exchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-cipher")
    {
        out_cipher = value;
        out_cipher.value_namespace = name_space;
        out_cipher.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-mac")
    {
        out_mac = value;
        out_mac.value_namespace = name_space;
        out_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "public-key")
    {
        public_key = value;
        public_key.value_namespace = name_space;
        public_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ssh1::Kex::Nodes::Node::IncomingSessions::SessionDetailInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-cipher")
    {
        in_cipher.yfilter = yfilter;
    }
    if(value_path == "in-mac")
    {
        in_mac.yfilter = yfilter;
    }
    if(value_path == "key-exchange")
    {
        key_exchange.yfilter = yfilter;
    }
    if(value_path == "out-cipher")
    {
        out_cipher.yfilter = yfilter;
    }
    if(value_path == "out-mac")
    {
        out_mac.yfilter = yfilter;
    }
    if(value_path == "public-key")
    {
        public_key.yfilter = yfilter;
    }
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
}

bool Ssh1::Kex::Nodes::Node::IncomingSessions::SessionDetailInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-cipher" || name == "in-mac" || name == "key-exchange" || name == "out-cipher" || name == "out-mac" || name == "public-key" || name == "session-id")
        return true;
    return false;
}

Ssh1::Kex::Nodes::Node::OutgoingConnections::OutgoingConnections()
{

    yang_name = "outgoing-connections"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Ssh1::Kex::Nodes::Node::OutgoingConnections::~OutgoingConnections()
{
}

bool Ssh1::Kex::Nodes::Node::OutgoingConnections::has_data() const
{
    for (std::size_t index=0; index<session_detail_info.size(); index++)
    {
        if(session_detail_info[index]->has_data())
            return true;
    }
    return false;
}

bool Ssh1::Kex::Nodes::Node::OutgoingConnections::has_operation() const
{
    for (std::size_t index=0; index<session_detail_info.size(); index++)
    {
        if(session_detail_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ssh1::Kex::Nodes::Node::OutgoingConnections::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outgoing-connections";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh1::Kex::Nodes::Node::OutgoingConnections::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ssh1::Kex::Nodes::Node::OutgoingConnections::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-detail-info")
    {
        for(auto const & c : session_detail_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ssh1::Kex::Nodes::Node::OutgoingConnections::SessionDetailInfo>();
        c->parent = this;
        session_detail_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ssh1::Kex::Nodes::Node::OutgoingConnections::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : session_detail_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ssh1::Kex::Nodes::Node::OutgoingConnections::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ssh1::Kex::Nodes::Node::OutgoingConnections::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ssh1::Kex::Nodes::Node::OutgoingConnections::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-detail-info")
        return true;
    return false;
}

Ssh1::Kex::Nodes::Node::OutgoingConnections::SessionDetailInfo::SessionDetailInfo()
    :
    in_cipher{YType::enumeration, "in-cipher"},
    in_mac{YType::enumeration, "in-mac"},
    key_exchange{YType::enumeration, "key-exchange"},
    out_cipher{YType::enumeration, "out-cipher"},
    out_mac{YType::enumeration, "out-mac"},
    public_key{YType::enumeration, "public-key"},
    session_id{YType::uint32, "session-id"}
{

    yang_name = "session-detail-info"; yang_parent_name = "outgoing-connections"; is_top_level_class = false; has_list_ancestor = true;
}

Ssh1::Kex::Nodes::Node::OutgoingConnections::SessionDetailInfo::~SessionDetailInfo()
{
}

bool Ssh1::Kex::Nodes::Node::OutgoingConnections::SessionDetailInfo::has_data() const
{
    return in_cipher.is_set
	|| in_mac.is_set
	|| key_exchange.is_set
	|| out_cipher.is_set
	|| out_mac.is_set
	|| public_key.is_set
	|| session_id.is_set;
}

bool Ssh1::Kex::Nodes::Node::OutgoingConnections::SessionDetailInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_cipher.yfilter)
	|| ydk::is_set(in_mac.yfilter)
	|| ydk::is_set(key_exchange.yfilter)
	|| ydk::is_set(out_cipher.yfilter)
	|| ydk::is_set(out_mac.yfilter)
	|| ydk::is_set(public_key.yfilter)
	|| ydk::is_set(session_id.yfilter);
}

std::string Ssh1::Kex::Nodes::Node::OutgoingConnections::SessionDetailInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-detail-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ssh1::Kex::Nodes::Node::OutgoingConnections::SessionDetailInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_cipher.is_set || is_set(in_cipher.yfilter)) leaf_name_data.push_back(in_cipher.get_name_leafdata());
    if (in_mac.is_set || is_set(in_mac.yfilter)) leaf_name_data.push_back(in_mac.get_name_leafdata());
    if (key_exchange.is_set || is_set(key_exchange.yfilter)) leaf_name_data.push_back(key_exchange.get_name_leafdata());
    if (out_cipher.is_set || is_set(out_cipher.yfilter)) leaf_name_data.push_back(out_cipher.get_name_leafdata());
    if (out_mac.is_set || is_set(out_mac.yfilter)) leaf_name_data.push_back(out_mac.get_name_leafdata());
    if (public_key.is_set || is_set(public_key.yfilter)) leaf_name_data.push_back(public_key.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ssh1::Kex::Nodes::Node::OutgoingConnections::SessionDetailInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ssh1::Kex::Nodes::Node::OutgoingConnections::SessionDetailInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ssh1::Kex::Nodes::Node::OutgoingConnections::SessionDetailInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-cipher")
    {
        in_cipher = value;
        in_cipher.value_namespace = name_space;
        in_cipher.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-mac")
    {
        in_mac = value;
        in_mac.value_namespace = name_space;
        in_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-exchange")
    {
        key_exchange = value;
        key_exchange.value_namespace = name_space;
        key_exchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-cipher")
    {
        out_cipher = value;
        out_cipher.value_namespace = name_space;
        out_cipher.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-mac")
    {
        out_mac = value;
        out_mac.value_namespace = name_space;
        out_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "public-key")
    {
        public_key = value;
        public_key.value_namespace = name_space;
        public_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
}

void Ssh1::Kex::Nodes::Node::OutgoingConnections::SessionDetailInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-cipher")
    {
        in_cipher.yfilter = yfilter;
    }
    if(value_path == "in-mac")
    {
        in_mac.yfilter = yfilter;
    }
    if(value_path == "key-exchange")
    {
        key_exchange.yfilter = yfilter;
    }
    if(value_path == "out-cipher")
    {
        out_cipher.yfilter = yfilter;
    }
    if(value_path == "out-mac")
    {
        out_mac.yfilter = yfilter;
    }
    if(value_path == "public-key")
    {
        public_key.yfilter = yfilter;
    }
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
}

bool Ssh1::Kex::Nodes::Node::OutgoingConnections::SessionDetailInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-cipher" || name == "in-mac" || name == "key-exchange" || name == "out-cipher" || name == "out-mac" || name == "public-key" || name == "session-id")
        return true;
    return false;
}

const Enum::YLeaf States::open {1, "open"};
const Enum::YLeaf States::version_ok {2, "version-ok"};
const Enum::YLeaf States::key_exchange_initialize {3, "key-exchange-initialize"};
const Enum::YLeaf States::key_exchange_dh {4, "key-exchange-dh"};
const Enum::YLeaf States::new_keys {5, "new-keys"};
const Enum::YLeaf States::authenticate_information {6, "authenticate-information"};
const Enum::YLeaf States::authenticated {7, "authenticated"};
const Enum::YLeaf States::channel_open {8, "channel-open"};
const Enum::YLeaf States::pty_open {9, "pty-open"};
const Enum::YLeaf States::session_open {10, "session-open"};
const Enum::YLeaf States::rekey {11, "rekey"};
const Enum::YLeaf States::suspended {12, "suspended"};
const Enum::YLeaf States::session_closed {13, "session-closed"};

const Enum::YLeaf Connection::undefined {0, "undefined"};
const Enum::YLeaf Connection::shell {1, "shell"};
const Enum::YLeaf Connection::exec {2, "exec"};
const Enum::YLeaf Connection::scp {3, "scp"};
const Enum::YLeaf Connection::sftp_subsystem {4, "sftp-subsystem"};
const Enum::YLeaf Connection::netconf_subsystem {5, "netconf-subsystem"};
const Enum::YLeaf Connection::tl1_subsystem {6, "tl1-subsystem"};
const Enum::YLeaf Connection::netconf_xml_subsystem {7, "netconf-xml-subsystem"};

const Enum::YLeaf Mac::hmac_md5 {0, "hmac-md5"};
const Enum::YLeaf Mac::hmac_sha1 {1, "hmac-sha1"};
const Enum::YLeaf Mac::hmac_sha2_256 {2, "hmac-sha2-256"};
const Enum::YLeaf Mac::hmac_sha2_512 {3, "hmac-sha2-512"};
const Enum::YLeaf Mac::aes_gcm {4, "aes-gcm"};

const Enum::YLeaf Hostkey::ssh_dss {0, "ssh-dss"};
const Enum::YLeaf Hostkey::ssh_rsa {1, "ssh-rsa"};

const Enum::YLeaf Authen::password {0, "password"};
const Enum::YLeaf Authen::rsa_public_key {1, "rsa-public-key"};
const Enum::YLeaf Authen::keyboard_interactive {2, "keyboard-interactive"};

const Enum::YLeaf Cipher::aes128_cbc {0, "aes128-cbc"};
const Enum::YLeaf Cipher::aes192_cbc {1, "aes192-cbc"};
const Enum::YLeaf Cipher::aes256_cbc {2, "aes256-cbc"};
const Enum::YLeaf Cipher::triple_des_cbc {3, "triple-des-cbc"};
const Enum::YLeaf Cipher::aes128_ctr {4, "aes128-ctr"};
const Enum::YLeaf Cipher::aes192_ctr {5, "aes192-ctr"};
const Enum::YLeaf Cipher::aes256_ctr {6, "aes256-ctr"};
const Enum::YLeaf Cipher::aes128_gcm {7, "aes128-gcm"};
const Enum::YLeaf Cipher::aes256_gcm {8, "aes256-gcm"};

const Enum::YLeaf KexName::diffie_hellman_group1 {0, "diffie-hellman-group1"};
const Enum::YLeaf KexName::diffie_hellman_group14 {1, "diffie-hellman-group14"};
const Enum::YLeaf KexName::diffie_hellman_group15 {2, "diffie-hellman-group15"};
const Enum::YLeaf KexName::diffie_hellman_group16 {3, "diffie-hellman-group16"};
const Enum::YLeaf KexName::diffie_hellman_group17 {4, "diffie-hellman-group17"};
const Enum::YLeaf KexName::diffie_hellman_group18 {5, "diffie-hellman-group18"};
const Enum::YLeaf KexName::ecdh_nistp256 {6, "ecdh-nistp256"};
const Enum::YLeaf KexName::ecdh_nistp384 {7, "ecdh-nistp384"};
const Enum::YLeaf KexName::ecdh_nistp521 {8, "ecdh-nistp521"};
const Enum::YLeaf KexName::password_authenticated {9, "password-authenticated"};

const Enum::YLeaf Version::v2 {0, "v2"};
const Enum::YLeaf Version::v1 {1, "v1"};


}
}

