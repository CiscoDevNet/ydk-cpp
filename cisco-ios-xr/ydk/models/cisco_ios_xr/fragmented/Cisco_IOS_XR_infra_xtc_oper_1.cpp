
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_xtc_oper_1.hpp"
#include "Cisco_IOS_XR_infra_xtc_oper_2.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_xtc_oper {

Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::Hops()
    :
    sid_type{YType::enumeration, "sid-type"},
    mpls_label{YType::uint32, "mpls-label"}
        ,
    local_addr(std::make_shared<Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::LocalAddr>())
    , remote_addr(std::make_shared<Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::RemoteAddr>())
{
    local_addr->parent = this;
    remote_addr->parent = this;

    yang_name = "hops"; yang_parent_name = "output-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::~Hops()
{
}

bool Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::has_data() const
{
    if (is_presence_container) return true;
    return sid_type.is_set
	|| mpls_label.is_set
	|| (local_addr !=  nullptr && local_addr->has_data())
	|| (remote_addr !=  nullptr && remote_addr->has_data());
}

bool Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid_type.yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| (local_addr !=  nullptr && local_addr->has_operation())
	|| (remote_addr !=  nullptr && remote_addr->has_operation());
}

std::string Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/cspf-sr-mpls/cspf-sr-mpls-paths/cspf-sr-mpls-path/output-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hops";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid_type.is_set || is_set(sid_type.yfilter)) leaf_name_data.push_back(sid_type.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-addr")
    {
        if(local_addr == nullptr)
        {
            local_addr = std::make_shared<Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::LocalAddr>();
        }
        return local_addr;
    }

    if(child_yang_name == "remote-addr")
    {
        if(remote_addr == nullptr)
        {
            remote_addr = std::make_shared<Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::RemoteAddr>();
        }
        return remote_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local_addr != nullptr)
    {
        _children["local-addr"] = local_addr;
    }

    if(remote_addr != nullptr)
    {
        _children["remote-addr"] = remote_addr;
    }

    return _children;
}

void Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid-type")
    {
        sid_type = value;
        sid_type.value_namespace = name_space;
        sid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid-type")
    {
        sid_type.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
}

bool Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-addr" || name == "remote-addr" || name == "sid-type" || name == "mpls-label")
        return true;
    return false;
}

Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::LocalAddr::LocalAddr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "local-addr"; yang_parent_name = "hops"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::LocalAddr::~LocalAddr()
{
}

bool Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::LocalAddr::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::LocalAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::LocalAddr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/cspf-sr-mpls/cspf-sr-mpls-paths/cspf-sr-mpls-path/output-path/hops/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::LocalAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::LocalAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::LocalAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::LocalAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::LocalAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::LocalAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::LocalAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::RemoteAddr::RemoteAddr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "remote-addr"; yang_parent_name = "hops"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::RemoteAddr::~RemoteAddr()
{
}

bool Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::RemoteAddr::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::RemoteAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::RemoteAddr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/cspf-sr-mpls/cspf-sr-mpls-paths/cspf-sr-mpls-path/output-path/hops/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::RemoteAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::RemoteAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::RemoteAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::RemoteAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::RemoteAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::RemoteAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Pce::CspfSrMpls::CspfSrMplsPaths::CspfSrMplsPath::OutputPath::Hops::RemoteAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Pce::VerificationEvents::VerificationEvents()
    :
    verification_event(this, {"event_idx"})
{

    yang_name = "verification-events"; yang_parent_name = "pce"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::VerificationEvents::~VerificationEvents()
{
}

bool Pce::VerificationEvents::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<verification_event.len(); index++)
    {
        if(verification_event[index]->has_data())
            return true;
    }
    return false;
}

bool Pce::VerificationEvents::has_operation() const
{
    for (std::size_t index=0; index<verification_event.len(); index++)
    {
        if(verification_event[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pce::VerificationEvents::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::VerificationEvents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "verification-events";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::VerificationEvents::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::VerificationEvents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "verification-event")
    {
        auto ent_ = std::make_shared<Pce::VerificationEvents::VerificationEvent>();
        ent_->parent = this;
        verification_event.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::VerificationEvents::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : verification_event.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pce::VerificationEvents::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pce::VerificationEvents::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pce::VerificationEvents::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "verification-event")
        return true;
    return false;
}

Pce::VerificationEvents::VerificationEvent::VerificationEvent()
    :
    event_idx{YType::uint32, "event-idx"},
    event_id{YType::uint32, "event-id"},
    event_message{YType::str, "event-message"},
    time_stamp{YType::uint32, "time-stamp"}
{

    yang_name = "verification-event"; yang_parent_name = "verification-events"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::VerificationEvents::VerificationEvent::~VerificationEvent()
{
}

bool Pce::VerificationEvents::VerificationEvent::has_data() const
{
    if (is_presence_container) return true;
    return event_idx.is_set
	|| event_id.is_set
	|| event_message.is_set
	|| time_stamp.is_set;
}

bool Pce::VerificationEvents::VerificationEvent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_idx.yfilter)
	|| ydk::is_set(event_id.yfilter)
	|| ydk::is_set(event_message.yfilter)
	|| ydk::is_set(time_stamp.yfilter);
}

std::string Pce::VerificationEvents::VerificationEvent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/verification-events/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::VerificationEvents::VerificationEvent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "verification-event";
    ADD_KEY_TOKEN(event_idx, "event-idx");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::VerificationEvents::VerificationEvent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_idx.is_set || is_set(event_idx.yfilter)) leaf_name_data.push_back(event_idx.get_name_leafdata());
    if (event_id.is_set || is_set(event_id.yfilter)) leaf_name_data.push_back(event_id.get_name_leafdata());
    if (event_message.is_set || is_set(event_message.yfilter)) leaf_name_data.push_back(event_message.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::VerificationEvents::VerificationEvent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::VerificationEvents::VerificationEvent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::VerificationEvents::VerificationEvent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-idx")
    {
        event_idx = value;
        event_idx.value_namespace = name_space;
        event_idx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-id")
    {
        event_id = value;
        event_id.value_namespace = name_space;
        event_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-message")
    {
        event_message = value;
        event_message.value_namespace = name_space;
        event_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::VerificationEvents::VerificationEvent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-idx")
    {
        event_idx.yfilter = yfilter;
    }
    if(value_path == "event-id")
    {
        event_id.yfilter = yfilter;
    }
    if(value_path == "event-message")
    {
        event_message.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool Pce::VerificationEvents::VerificationEvent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-idx" || name == "event-id" || name == "event-message" || name == "time-stamp")
        return true;
    return false;
}

Pce::PeerSummaries::PeerSummaries()
    :
    peer_summary(this, {"af"})
{

    yang_name = "peer-summaries"; yang_parent_name = "pce"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::PeerSummaries::~PeerSummaries()
{
}

bool Pce::PeerSummaries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<peer_summary.len(); index++)
    {
        if(peer_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Pce::PeerSummaries::has_operation() const
{
    for (std::size_t index=0; index<peer_summary.len(); index++)
    {
        if(peer_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pce::PeerSummaries::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::PeerSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::PeerSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::PeerSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-summary")
    {
        auto ent_ = std::make_shared<Pce::PeerSummaries::PeerSummary>();
        ent_->parent = this;
        peer_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::PeerSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : peer_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pce::PeerSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pce::PeerSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pce::PeerSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-summary")
        return true;
    return false;
}

Pce::PeerSummaries::PeerSummary::PeerSummary()
    :
    af{YType::enumeration, "af"}
        ,
    pcep_peers(std::make_shared<Pce::PeerSummaries::PeerSummary::PcepPeers>())
{
    pcep_peers->parent = this;

    yang_name = "peer-summary"; yang_parent_name = "peer-summaries"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::PeerSummaries::PeerSummary::~PeerSummary()
{
}

bool Pce::PeerSummaries::PeerSummary::has_data() const
{
    if (is_presence_container) return true;
    return af.is_set
	|| (pcep_peers !=  nullptr && pcep_peers->has_data());
}

bool Pce::PeerSummaries::PeerSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| (pcep_peers !=  nullptr && pcep_peers->has_operation());
}

std::string Pce::PeerSummaries::PeerSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/peer-summaries/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::PeerSummaries::PeerSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-summary";
    ADD_KEY_TOKEN(af, "af");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::PeerSummaries::PeerSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::PeerSummaries::PeerSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pcep-peers")
    {
        if(pcep_peers == nullptr)
        {
            pcep_peers = std::make_shared<Pce::PeerSummaries::PeerSummary::PcepPeers>();
        }
        return pcep_peers;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::PeerSummaries::PeerSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pcep_peers != nullptr)
    {
        _children["pcep-peers"] = pcep_peers;
    }

    return _children;
}

void Pce::PeerSummaries::PeerSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::PeerSummaries::PeerSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
}

bool Pce::PeerSummaries::PeerSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pcep-peers" || name == "af")
        return true;
    return false;
}

Pce::PeerSummaries::PeerSummary::PcepPeers::PcepPeers()
    :
    peer_count_up{YType::uint32, "peer-count-up"},
    peer_count_down{YType::uint32, "peer-count-down"},
    peer_count_all{YType::uint32, "peer-count-all"}
{

    yang_name = "pcep-peers"; yang_parent_name = "peer-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::PeerSummaries::PeerSummary::PcepPeers::~PcepPeers()
{
}

bool Pce::PeerSummaries::PeerSummary::PcepPeers::has_data() const
{
    if (is_presence_container) return true;
    return peer_count_up.is_set
	|| peer_count_down.is_set
	|| peer_count_all.is_set;
}

bool Pce::PeerSummaries::PeerSummary::PcepPeers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_count_up.yfilter)
	|| ydk::is_set(peer_count_down.yfilter)
	|| ydk::is_set(peer_count_all.yfilter);
}

std::string Pce::PeerSummaries::PeerSummary::PcepPeers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcep-peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::PeerSummaries::PeerSummary::PcepPeers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_count_up.is_set || is_set(peer_count_up.yfilter)) leaf_name_data.push_back(peer_count_up.get_name_leafdata());
    if (peer_count_down.is_set || is_set(peer_count_down.yfilter)) leaf_name_data.push_back(peer_count_down.get_name_leafdata());
    if (peer_count_all.is_set || is_set(peer_count_all.yfilter)) leaf_name_data.push_back(peer_count_all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::PeerSummaries::PeerSummary::PcepPeers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::PeerSummaries::PeerSummary::PcepPeers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::PeerSummaries::PeerSummary::PcepPeers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-count-up")
    {
        peer_count_up = value;
        peer_count_up.value_namespace = name_space;
        peer_count_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-count-down")
    {
        peer_count_down = value;
        peer_count_down.value_namespace = name_space;
        peer_count_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-count-all")
    {
        peer_count_all = value;
        peer_count_all.value_namespace = name_space;
        peer_count_all.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::PeerSummaries::PeerSummary::PcepPeers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-count-up")
    {
        peer_count_up.yfilter = yfilter;
    }
    if(value_path == "peer-count-down")
    {
        peer_count_down.yfilter = yfilter;
    }
    if(value_path == "peer-count-all")
    {
        peer_count_all.yfilter = yfilter;
    }
}

bool Pce::PeerSummaries::PeerSummary::PcepPeers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-count-up" || name == "peer-count-down" || name == "peer-count-all")
        return true;
    return false;
}

Pce::AssociationInfos::AssociationInfos()
    :
    association_info(this, {"group_id"})
{

    yang_name = "association-infos"; yang_parent_name = "pce"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::AssociationInfos::~AssociationInfos()
{
}

bool Pce::AssociationInfos::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<association_info.len(); index++)
    {
        if(association_info[index]->has_data())
            return true;
    }
    return false;
}

bool Pce::AssociationInfos::has_operation() const
{
    for (std::size_t index=0; index<association_info.len(); index++)
    {
        if(association_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pce::AssociationInfos::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::AssociationInfos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association-infos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::AssociationInfos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::AssociationInfos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "association-info")
    {
        auto ent_ = std::make_shared<Pce::AssociationInfos::AssociationInfo>();
        ent_->parent = this;
        association_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::AssociationInfos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : association_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pce::AssociationInfos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pce::AssociationInfos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pce::AssociationInfos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "association-info")
        return true;
    return false;
}

Pce::AssociationInfos::AssociationInfo::AssociationInfo()
    :
    group_id{YType::uint32, "group-id"},
    type{YType::enumeration, "type"},
    sub_id{YType::str, "sub-id"},
    association_type{YType::uint32, "association-type"},
    association_id{YType::uint32, "association-id"},
    strict{YType::boolean, "strict"},
    status{YType::uint32, "status"},
    headends_swapped{YType::uint32, "headends-swapped"}
        ,
    association_source(std::make_shared<Pce::AssociationInfos::AssociationInfo::AssociationSource>())
    , association_lsp(this, {})
{
    association_source->parent = this;

    yang_name = "association-info"; yang_parent_name = "association-infos"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::AssociationInfos::AssociationInfo::~AssociationInfo()
{
}

bool Pce::AssociationInfos::AssociationInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<association_lsp.len(); index++)
    {
        if(association_lsp[index]->has_data())
            return true;
    }
    return group_id.is_set
	|| type.is_set
	|| sub_id.is_set
	|| association_type.is_set
	|| association_id.is_set
	|| strict.is_set
	|| status.is_set
	|| headends_swapped.is_set
	|| (association_source !=  nullptr && association_source->has_data());
}

bool Pce::AssociationInfos::AssociationInfo::has_operation() const
{
    for (std::size_t index=0; index<association_lsp.len(); index++)
    {
        if(association_lsp[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(sub_id.yfilter)
	|| ydk::is_set(association_type.yfilter)
	|| ydk::is_set(association_id.yfilter)
	|| ydk::is_set(strict.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(headends_swapped.yfilter)
	|| (association_source !=  nullptr && association_source->has_operation());
}

std::string Pce::AssociationInfos::AssociationInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/association-infos/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::AssociationInfos::AssociationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association-info";
    ADD_KEY_TOKEN(group_id, "group-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::AssociationInfos::AssociationInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (sub_id.is_set || is_set(sub_id.yfilter)) leaf_name_data.push_back(sub_id.get_name_leafdata());
    if (association_type.is_set || is_set(association_type.yfilter)) leaf_name_data.push_back(association_type.get_name_leafdata());
    if (association_id.is_set || is_set(association_id.yfilter)) leaf_name_data.push_back(association_id.get_name_leafdata());
    if (strict.is_set || is_set(strict.yfilter)) leaf_name_data.push_back(strict.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (headends_swapped.is_set || is_set(headends_swapped.yfilter)) leaf_name_data.push_back(headends_swapped.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::AssociationInfos::AssociationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "association-source")
    {
        if(association_source == nullptr)
        {
            association_source = std::make_shared<Pce::AssociationInfos::AssociationInfo::AssociationSource>();
        }
        return association_source;
    }

    if(child_yang_name == "association-lsp")
    {
        auto ent_ = std::make_shared<Pce::AssociationInfos::AssociationInfo::AssociationLsp>();
        ent_->parent = this;
        association_lsp.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::AssociationInfos::AssociationInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(association_source != nullptr)
    {
        _children["association-source"] = association_source;
    }

    count_ = 0;
    for (auto ent_ : association_lsp.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pce::AssociationInfos::AssociationInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-id")
    {
        sub_id = value;
        sub_id.value_namespace = name_space;
        sub_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "association-type")
    {
        association_type = value;
        association_type.value_namespace = name_space;
        association_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "association-id")
    {
        association_id = value;
        association_id.value_namespace = name_space;
        association_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "strict")
    {
        strict = value;
        strict.value_namespace = name_space;
        strict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "headends-swapped")
    {
        headends_swapped = value;
        headends_swapped.value_namespace = name_space;
        headends_swapped.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::AssociationInfos::AssociationInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "sub-id")
    {
        sub_id.yfilter = yfilter;
    }
    if(value_path == "association-type")
    {
        association_type.yfilter = yfilter;
    }
    if(value_path == "association-id")
    {
        association_id.yfilter = yfilter;
    }
    if(value_path == "strict")
    {
        strict.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "headends-swapped")
    {
        headends_swapped.yfilter = yfilter;
    }
}

bool Pce::AssociationInfos::AssociationInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "association-source" || name == "association-lsp" || name == "group-id" || name == "type" || name == "sub-id" || name == "association-type" || name == "association-id" || name == "strict" || name == "status" || name == "headends-swapped")
        return true;
    return false;
}

Pce::AssociationInfos::AssociationInfo::AssociationSource::AssociationSource()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "association-source"; yang_parent_name = "association-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::AssociationInfos::AssociationInfo::AssociationSource::~AssociationSource()
{
}

bool Pce::AssociationInfos::AssociationInfo::AssociationSource::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Pce::AssociationInfos::AssociationInfo::AssociationSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Pce::AssociationInfos::AssociationInfo::AssociationSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::AssociationInfos::AssociationInfo::AssociationSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::AssociationInfos::AssociationInfo::AssociationSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::AssociationInfos::AssociationInfo::AssociationSource::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::AssociationInfos::AssociationInfo::AssociationSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::AssociationInfos::AssociationInfo::AssociationSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Pce::AssociationInfos::AssociationInfo::AssociationSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Pce::AssociationInfos::AssociationInfo::AssociationLsp::AssociationLsp()
    :
    tunnel_id{YType::uint32, "tunnel-id"},
    lspid{YType::uint32, "lspid"},
    tunnel_name{YType::str, "tunnel-name"},
    pce_based{YType::boolean, "pce-based"},
    plsp_id{YType::uint32, "plsp-id"}
        ,
    pcc_address(std::make_shared<Pce::AssociationInfos::AssociationInfo::AssociationLsp::PccAddress>())
{
    pcc_address->parent = this;

    yang_name = "association-lsp"; yang_parent_name = "association-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::AssociationInfos::AssociationInfo::AssociationLsp::~AssociationLsp()
{
}

bool Pce::AssociationInfos::AssociationInfo::AssociationLsp::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_id.is_set
	|| lspid.is_set
	|| tunnel_name.is_set
	|| pce_based.is_set
	|| plsp_id.is_set
	|| (pcc_address !=  nullptr && pcc_address->has_data());
}

bool Pce::AssociationInfos::AssociationInfo::AssociationLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(lspid.yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(pce_based.yfilter)
	|| ydk::is_set(plsp_id.yfilter)
	|| (pcc_address !=  nullptr && pcc_address->has_operation());
}

std::string Pce::AssociationInfos::AssociationInfo::AssociationLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "association-lsp";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::AssociationInfos::AssociationInfo::AssociationLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (lspid.is_set || is_set(lspid.yfilter)) leaf_name_data.push_back(lspid.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (pce_based.is_set || is_set(pce_based.yfilter)) leaf_name_data.push_back(pce_based.get_name_leafdata());
    if (plsp_id.is_set || is_set(plsp_id.yfilter)) leaf_name_data.push_back(plsp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::AssociationInfos::AssociationInfo::AssociationLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pcc-address")
    {
        if(pcc_address == nullptr)
        {
            pcc_address = std::make_shared<Pce::AssociationInfos::AssociationInfo::AssociationLsp::PccAddress>();
        }
        return pcc_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::AssociationInfos::AssociationInfo::AssociationLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pcc_address != nullptr)
    {
        _children["pcc-address"] = pcc_address;
    }

    return _children;
}

void Pce::AssociationInfos::AssociationInfo::AssociationLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lspid")
    {
        lspid = value;
        lspid.value_namespace = name_space;
        lspid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-based")
    {
        pce_based = value;
        pce_based.value_namespace = name_space;
        pce_based.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plsp-id")
    {
        plsp_id = value;
        plsp_id.value_namespace = name_space;
        plsp_id.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::AssociationInfos::AssociationInfo::AssociationLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "lspid")
    {
        lspid.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "pce-based")
    {
        pce_based.yfilter = yfilter;
    }
    if(value_path == "plsp-id")
    {
        plsp_id.yfilter = yfilter;
    }
}

bool Pce::AssociationInfos::AssociationInfo::AssociationLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pcc-address" || name == "tunnel-id" || name == "lspid" || name == "tunnel-name" || name == "pce-based" || name == "plsp-id")
        return true;
    return false;
}

Pce::AssociationInfos::AssociationInfo::AssociationLsp::PccAddress::PccAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "pcc-address"; yang_parent_name = "association-lsp"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::AssociationInfos::AssociationInfo::AssociationLsp::PccAddress::~PccAddress()
{
}

bool Pce::AssociationInfos::AssociationInfo::AssociationLsp::PccAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Pce::AssociationInfos::AssociationInfo::AssociationLsp::PccAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Pce::AssociationInfos::AssociationInfo::AssociationLsp::PccAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcc-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::AssociationInfos::AssociationInfo::AssociationLsp::PccAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::AssociationInfos::AssociationInfo::AssociationLsp::PccAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::AssociationInfos::AssociationInfo::AssociationLsp::PccAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::AssociationInfos::AssociationInfo::AssociationLsp::PccAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::AssociationInfos::AssociationInfo::AssociationLsp::PccAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Pce::AssociationInfos::AssociationInfo::AssociationLsp::PccAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Pce::Paths::Paths()
    :
    path(this, {"af", "source", "destination"})
{

    yang_name = "paths"; yang_parent_name = "pce"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::Paths::~Paths()
{
}

bool Pce::Paths::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path.len(); index++)
    {
        if(path[index]->has_data())
            return true;
    }
    return false;
}

bool Pce::Paths::has_operation() const
{
    for (std::size_t index=0; index<path.len(); index++)
    {
        if(path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pce::Paths::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::Paths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path")
    {
        auto ent_ = std::make_shared<Pce::Paths::Path>();
        ent_->parent = this;
        path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::Paths::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pce::Paths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pce::Paths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pce::Paths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path")
        return true;
    return false;
}

Pce::Paths::Path::Path()
    :
    af{YType::uint32, "af"},
    source{YType::str, "source"},
    destination{YType::str, "destination"},
    cost{YType::uint64, "cost"}
        ,
    source_xr(std::make_shared<Pce::Paths::Path::SourceXr>())
    , destination_xr(std::make_shared<Pce::Paths::Path::DestinationXr>())
    , hops(this, {})
{
    source_xr->parent = this;
    destination_xr->parent = this;

    yang_name = "path"; yang_parent_name = "paths"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::Paths::Path::~Path()
{
}

bool Pce::Paths::Path::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hops.len(); index++)
    {
        if(hops[index]->has_data())
            return true;
    }
    return af.is_set
	|| source.is_set
	|| destination.is_set
	|| cost.is_set
	|| (source_xr !=  nullptr && source_xr->has_data())
	|| (destination_xr !=  nullptr && destination_xr->has_data());
}

bool Pce::Paths::Path::has_operation() const
{
    for (std::size_t index=0; index<hops.len(); index++)
    {
        if(hops[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(destination.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| (source_xr !=  nullptr && source_xr->has_operation())
	|| (destination_xr !=  nullptr && destination_xr->has_operation());
}

std::string Pce::Paths::Path::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/paths/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::Paths::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";
    ADD_KEY_TOKEN(af, "af");
    ADD_KEY_TOKEN(source, "source");
    ADD_KEY_TOKEN(destination, "destination");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::Paths::Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (destination.is_set || is_set(destination.yfilter)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::Paths::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-xr")
    {
        if(source_xr == nullptr)
        {
            source_xr = std::make_shared<Pce::Paths::Path::SourceXr>();
        }
        return source_xr;
    }

    if(child_yang_name == "destination-xr")
    {
        if(destination_xr == nullptr)
        {
            destination_xr = std::make_shared<Pce::Paths::Path::DestinationXr>();
        }
        return destination_xr;
    }

    if(child_yang_name == "hops")
    {
        auto ent_ = std::make_shared<Pce::Paths::Path::Hops>();
        ent_->parent = this;
        hops.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::Paths::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source_xr != nullptr)
    {
        _children["source-xr"] = source_xr;
    }

    if(destination_xr != nullptr)
    {
        _children["destination-xr"] = destination_xr;
    }

    count_ = 0;
    for (auto ent_ : hops.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pce::Paths::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination")
    {
        destination = value;
        destination.value_namespace = name_space;
        destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::Paths::Path::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "destination")
    {
        destination.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
}

bool Pce::Paths::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-xr" || name == "destination-xr" || name == "hops" || name == "af" || name == "source" || name == "destination" || name == "cost")
        return true;
    return false;
}

Pce::Paths::Path::SourceXr::SourceXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "source-xr"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::Paths::Path::SourceXr::~SourceXr()
{
}

bool Pce::Paths::Path::SourceXr::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Pce::Paths::Path::SourceXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Pce::Paths::Path::SourceXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::Paths::Path::SourceXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::Paths::Path::SourceXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::Paths::Path::SourceXr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::Paths::Path::SourceXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::Paths::Path::SourceXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Pce::Paths::Path::SourceXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Pce::Paths::Path::DestinationXr::DestinationXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "destination-xr"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::Paths::Path::DestinationXr::~DestinationXr()
{
}

bool Pce::Paths::Path::DestinationXr::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Pce::Paths::Path::DestinationXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Pce::Paths::Path::DestinationXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::Paths::Path::DestinationXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::Paths::Path::DestinationXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::Paths::Path::DestinationXr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::Paths::Path::DestinationXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::Paths::Path::DestinationXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Pce::Paths::Path::DestinationXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Pce::Paths::Path::Hops::Hops()
    :
    address_family{YType::uint8, "address-family"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{

    yang_name = "hops"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::Paths::Path::Hops::~Hops()
{
}

bool Pce::Paths::Path::Hops::has_data() const
{
    if (is_presence_container) return true;
    return address_family.is_set
	|| ipv4_prefix.is_set
	|| ipv6_prefix.is_set;
}

bool Pce::Paths::Path::Hops::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter)
	|| ydk::is_set(ipv6_prefix.yfilter);
}

std::string Pce::Paths::Path::Hops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hops";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::Paths::Path::Hops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.yfilter)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::Paths::Path::Hops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::Paths::Path::Hops::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::Paths::Path::Hops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
        ipv4_prefix.value_namespace = name_space;
        ipv4_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
        ipv6_prefix.value_namespace = name_space;
        ipv6_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::Paths::Path::Hops::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix.yfilter = yfilter;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix.yfilter = yfilter;
    }
}

bool Pce::Paths::Path::Hops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family" || name == "ipv4-prefix" || name == "ipv6-prefix")
        return true;
    return false;
}

Pce::Cspf::Cspf()
    :
    cspf_paths(std::make_shared<Pce::Cspf::CspfPaths>())
{
    cspf_paths->parent = this;

    yang_name = "cspf"; yang_parent_name = "pce"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::Cspf::~Cspf()
{
}

bool Pce::Cspf::has_data() const
{
    if (is_presence_container) return true;
    return (cspf_paths !=  nullptr && cspf_paths->has_data());
}

bool Pce::Cspf::has_operation() const
{
    return is_set(yfilter)
	|| (cspf_paths !=  nullptr && cspf_paths->has_operation());
}

std::string Pce::Cspf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::Cspf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cspf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::Cspf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::Cspf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cspf-paths")
    {
        if(cspf_paths == nullptr)
        {
            cspf_paths = std::make_shared<Pce::Cspf::CspfPaths>();
        }
        return cspf_paths;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::Cspf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cspf_paths != nullptr)
    {
        _children["cspf-paths"] = cspf_paths;
    }

    return _children;
}

void Pce::Cspf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pce::Cspf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pce::Cspf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cspf-paths")
        return true;
    return false;
}

Pce::Cspf::CspfPaths::CspfPaths()
    :
    cspf_path(this, {})
{

    yang_name = "cspf-paths"; yang_parent_name = "cspf"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::Cspf::CspfPaths::~CspfPaths()
{
}

bool Pce::Cspf::CspfPaths::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cspf_path.len(); index++)
    {
        if(cspf_path[index]->has_data())
            return true;
    }
    return false;
}

bool Pce::Cspf::CspfPaths::has_operation() const
{
    for (std::size_t index=0; index<cspf_path.len(); index++)
    {
        if(cspf_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pce::Cspf::CspfPaths::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/cspf/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::Cspf::CspfPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cspf-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::Cspf::CspfPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::Cspf::CspfPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cspf-path")
    {
        auto ent_ = std::make_shared<Pce::Cspf::CspfPaths::CspfPath>();
        ent_->parent = this;
        cspf_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::Cspf::CspfPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cspf_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pce::Cspf::CspfPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pce::Cspf::CspfPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pce::Cspf::CspfPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cspf-path")
        return true;
    return false;
}

Pce::Cspf::CspfPaths::CspfPath::CspfPath()
    :
    af{YType::uint32, "af"},
    source1{YType::str, "source1"},
    destination1{YType::str, "destination1"},
    metric_type{YType::uint32, "metric-type"},
    source2{YType::str, "source2"},
    destination2{YType::str, "destination2"},
    disjoint_level{YType::uint32, "disjoint-level"},
    disjoint_strict{YType::uint32, "disjoint-strict"},
    shortest_path{YType::uint32, "shortest-path"},
    headends_swapped{YType::enumeration, "headends-swapped"},
    cspf_result{YType::enumeration, "cspf-result"},
    iterations_done{YType::uint32, "iterations-done"}
        ,
    output_path(this, {})
{

    yang_name = "cspf-path"; yang_parent_name = "cspf-paths"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::Cspf::CspfPaths::CspfPath::~CspfPath()
{
}

bool Pce::Cspf::CspfPaths::CspfPath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<output_path.len(); index++)
    {
        if(output_path[index]->has_data())
            return true;
    }
    return af.is_set
	|| source1.is_set
	|| destination1.is_set
	|| metric_type.is_set
	|| source2.is_set
	|| destination2.is_set
	|| disjoint_level.is_set
	|| disjoint_strict.is_set
	|| shortest_path.is_set
	|| headends_swapped.is_set
	|| cspf_result.is_set
	|| iterations_done.is_set;
}

bool Pce::Cspf::CspfPaths::CspfPath::has_operation() const
{
    for (std::size_t index=0; index<output_path.len(); index++)
    {
        if(output_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(source1.yfilter)
	|| ydk::is_set(destination1.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(source2.yfilter)
	|| ydk::is_set(destination2.yfilter)
	|| ydk::is_set(disjoint_level.yfilter)
	|| ydk::is_set(disjoint_strict.yfilter)
	|| ydk::is_set(shortest_path.yfilter)
	|| ydk::is_set(headends_swapped.yfilter)
	|| ydk::is_set(cspf_result.yfilter)
	|| ydk::is_set(iterations_done.yfilter);
}

std::string Pce::Cspf::CspfPaths::CspfPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/cspf/cspf-paths/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::Cspf::CspfPaths::CspfPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cspf-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::Cspf::CspfPaths::CspfPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (source1.is_set || is_set(source1.yfilter)) leaf_name_data.push_back(source1.get_name_leafdata());
    if (destination1.is_set || is_set(destination1.yfilter)) leaf_name_data.push_back(destination1.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (source2.is_set || is_set(source2.yfilter)) leaf_name_data.push_back(source2.get_name_leafdata());
    if (destination2.is_set || is_set(destination2.yfilter)) leaf_name_data.push_back(destination2.get_name_leafdata());
    if (disjoint_level.is_set || is_set(disjoint_level.yfilter)) leaf_name_data.push_back(disjoint_level.get_name_leafdata());
    if (disjoint_strict.is_set || is_set(disjoint_strict.yfilter)) leaf_name_data.push_back(disjoint_strict.get_name_leafdata());
    if (shortest_path.is_set || is_set(shortest_path.yfilter)) leaf_name_data.push_back(shortest_path.get_name_leafdata());
    if (headends_swapped.is_set || is_set(headends_swapped.yfilter)) leaf_name_data.push_back(headends_swapped.get_name_leafdata());
    if (cspf_result.is_set || is_set(cspf_result.yfilter)) leaf_name_data.push_back(cspf_result.get_name_leafdata());
    if (iterations_done.is_set || is_set(iterations_done.yfilter)) leaf_name_data.push_back(iterations_done.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::Cspf::CspfPaths::CspfPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "output-path")
    {
        auto ent_ = std::make_shared<Pce::Cspf::CspfPaths::CspfPath::OutputPath>();
        ent_->parent = this;
        output_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::Cspf::CspfPaths::CspfPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : output_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pce::Cspf::CspfPaths::CspfPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source1")
    {
        source1 = value;
        source1.value_namespace = name_space;
        source1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination1")
    {
        destination1 = value;
        destination1.value_namespace = name_space;
        destination1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source2")
    {
        source2 = value;
        source2.value_namespace = name_space;
        source2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination2")
    {
        destination2 = value;
        destination2.value_namespace = name_space;
        destination2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disjoint-level")
    {
        disjoint_level = value;
        disjoint_level.value_namespace = name_space;
        disjoint_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disjoint-strict")
    {
        disjoint_strict = value;
        disjoint_strict.value_namespace = name_space;
        disjoint_strict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shortest-path")
    {
        shortest_path = value;
        shortest_path.value_namespace = name_space;
        shortest_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "headends-swapped")
    {
        headends_swapped = value;
        headends_swapped.value_namespace = name_space;
        headends_swapped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cspf-result")
    {
        cspf_result = value;
        cspf_result.value_namespace = name_space;
        cspf_result.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iterations-done")
    {
        iterations_done = value;
        iterations_done.value_namespace = name_space;
        iterations_done.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::Cspf::CspfPaths::CspfPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "source1")
    {
        source1.yfilter = yfilter;
    }
    if(value_path == "destination1")
    {
        destination1.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "source2")
    {
        source2.yfilter = yfilter;
    }
    if(value_path == "destination2")
    {
        destination2.yfilter = yfilter;
    }
    if(value_path == "disjoint-level")
    {
        disjoint_level.yfilter = yfilter;
    }
    if(value_path == "disjoint-strict")
    {
        disjoint_strict.yfilter = yfilter;
    }
    if(value_path == "shortest-path")
    {
        shortest_path.yfilter = yfilter;
    }
    if(value_path == "headends-swapped")
    {
        headends_swapped.yfilter = yfilter;
    }
    if(value_path == "cspf-result")
    {
        cspf_result.yfilter = yfilter;
    }
    if(value_path == "iterations-done")
    {
        iterations_done.yfilter = yfilter;
    }
}

bool Pce::Cspf::CspfPaths::CspfPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "output-path" || name == "af" || name == "source1" || name == "destination1" || name == "metric-type" || name == "source2" || name == "destination2" || name == "disjoint-level" || name == "disjoint-strict" || name == "shortest-path" || name == "headends-swapped" || name == "cspf-result" || name == "iterations-done")
        return true;
    return false;
}

Pce::Cspf::CspfPaths::CspfPath::OutputPath::OutputPath()
    :
    cost{YType::uint64, "cost"}
        ,
    source_xr(std::make_shared<Pce::Cspf::CspfPaths::CspfPath::OutputPath::SourceXr>())
    , destination_xr(std::make_shared<Pce::Cspf::CspfPaths::CspfPath::OutputPath::DestinationXr>())
    , hops(this, {})
{
    source_xr->parent = this;
    destination_xr->parent = this;

    yang_name = "output-path"; yang_parent_name = "cspf-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::Cspf::CspfPaths::CspfPath::OutputPath::~OutputPath()
{
}

bool Pce::Cspf::CspfPaths::CspfPath::OutputPath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hops.len(); index++)
    {
        if(hops[index]->has_data())
            return true;
    }
    return cost.is_set
	|| (source_xr !=  nullptr && source_xr->has_data())
	|| (destination_xr !=  nullptr && destination_xr->has_data());
}

bool Pce::Cspf::CspfPaths::CspfPath::OutputPath::has_operation() const
{
    for (std::size_t index=0; index<hops.len(); index++)
    {
        if(hops[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(cost.yfilter)
	|| (source_xr !=  nullptr && source_xr->has_operation())
	|| (destination_xr !=  nullptr && destination_xr->has_operation());
}

std::string Pce::Cspf::CspfPaths::CspfPath::OutputPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/cspf/cspf-paths/cspf-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::Cspf::CspfPaths::CspfPath::OutputPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::Cspf::CspfPaths::CspfPath::OutputPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::Cspf::CspfPaths::CspfPath::OutputPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-xr")
    {
        if(source_xr == nullptr)
        {
            source_xr = std::make_shared<Pce::Cspf::CspfPaths::CspfPath::OutputPath::SourceXr>();
        }
        return source_xr;
    }

    if(child_yang_name == "destination-xr")
    {
        if(destination_xr == nullptr)
        {
            destination_xr = std::make_shared<Pce::Cspf::CspfPaths::CspfPath::OutputPath::DestinationXr>();
        }
        return destination_xr;
    }

    if(child_yang_name == "hops")
    {
        auto ent_ = std::make_shared<Pce::Cspf::CspfPaths::CspfPath::OutputPath::Hops>();
        ent_->parent = this;
        hops.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::Cspf::CspfPaths::CspfPath::OutputPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source_xr != nullptr)
    {
        _children["source-xr"] = source_xr;
    }

    if(destination_xr != nullptr)
    {
        _children["destination-xr"] = destination_xr;
    }

    count_ = 0;
    for (auto ent_ : hops.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pce::Cspf::CspfPaths::CspfPath::OutputPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::Cspf::CspfPaths::CspfPath::OutputPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
}

bool Pce::Cspf::CspfPaths::CspfPath::OutputPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-xr" || name == "destination-xr" || name == "hops" || name == "cost")
        return true;
    return false;
}

Pce::Cspf::CspfPaths::CspfPath::OutputPath::SourceXr::SourceXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "source-xr"; yang_parent_name = "output-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::Cspf::CspfPaths::CspfPath::OutputPath::SourceXr::~SourceXr()
{
}

bool Pce::Cspf::CspfPaths::CspfPath::OutputPath::SourceXr::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Pce::Cspf::CspfPaths::CspfPath::OutputPath::SourceXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Pce::Cspf::CspfPaths::CspfPath::OutputPath::SourceXr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/cspf/cspf-paths/cspf-path/output-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::Cspf::CspfPaths::CspfPath::OutputPath::SourceXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::Cspf::CspfPaths::CspfPath::OutputPath::SourceXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::Cspf::CspfPaths::CspfPath::OutputPath::SourceXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::Cspf::CspfPaths::CspfPath::OutputPath::SourceXr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::Cspf::CspfPaths::CspfPath::OutputPath::SourceXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::Cspf::CspfPaths::CspfPath::OutputPath::SourceXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Pce::Cspf::CspfPaths::CspfPath::OutputPath::SourceXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Pce::Cspf::CspfPaths::CspfPath::OutputPath::DestinationXr::DestinationXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "destination-xr"; yang_parent_name = "output-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::Cspf::CspfPaths::CspfPath::OutputPath::DestinationXr::~DestinationXr()
{
}

bool Pce::Cspf::CspfPaths::CspfPath::OutputPath::DestinationXr::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Pce::Cspf::CspfPaths::CspfPath::OutputPath::DestinationXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Pce::Cspf::CspfPaths::CspfPath::OutputPath::DestinationXr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/cspf/cspf-paths/cspf-path/output-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::Cspf::CspfPaths::CspfPath::OutputPath::DestinationXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::Cspf::CspfPaths::CspfPath::OutputPath::DestinationXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::Cspf::CspfPaths::CspfPath::OutputPath::DestinationXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::Cspf::CspfPaths::CspfPath::OutputPath::DestinationXr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::Cspf::CspfPaths::CspfPath::OutputPath::DestinationXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::Cspf::CspfPaths::CspfPath::OutputPath::DestinationXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Pce::Cspf::CspfPaths::CspfPath::OutputPath::DestinationXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Pce::Cspf::CspfPaths::CspfPath::OutputPath::Hops::Hops()
    :
    address_family{YType::uint8, "address-family"},
    ipv4_prefix{YType::str, "ipv4-prefix"},
    ipv6_prefix{YType::str, "ipv6-prefix"}
{

    yang_name = "hops"; yang_parent_name = "output-path"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::Cspf::CspfPaths::CspfPath::OutputPath::Hops::~Hops()
{
}

bool Pce::Cspf::CspfPaths::CspfPath::OutputPath::Hops::has_data() const
{
    if (is_presence_container) return true;
    return address_family.is_set
	|| ipv4_prefix.is_set
	|| ipv6_prefix.is_set;
}

bool Pce::Cspf::CspfPaths::CspfPath::OutputPath::Hops::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(ipv4_prefix.yfilter)
	|| ydk::is_set(ipv6_prefix.yfilter);
}

std::string Pce::Cspf::CspfPaths::CspfPath::OutputPath::Hops::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/cspf/cspf-paths/cspf-path/output-path/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::Cspf::CspfPaths::CspfPath::OutputPath::Hops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hops";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::Cspf::CspfPaths::CspfPath::OutputPath::Hops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (ipv4_prefix.is_set || is_set(ipv4_prefix.yfilter)) leaf_name_data.push_back(ipv4_prefix.get_name_leafdata());
    if (ipv6_prefix.is_set || is_set(ipv6_prefix.yfilter)) leaf_name_data.push_back(ipv6_prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::Cspf::CspfPaths::CspfPath::OutputPath::Hops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::Cspf::CspfPaths::CspfPath::OutputPath::Hops::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::Cspf::CspfPaths::CspfPath::OutputPath::Hops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix = value;
        ipv4_prefix.value_namespace = name_space;
        ipv4_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix = value;
        ipv6_prefix.value_namespace = name_space;
        ipv6_prefix.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::Cspf::CspfPaths::CspfPath::OutputPath::Hops::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "ipv4-prefix")
    {
        ipv4_prefix.yfilter = yfilter;
    }
    if(value_path == "ipv6-prefix")
    {
        ipv6_prefix.yfilter = yfilter;
    }
}

bool Pce::Cspf::CspfPaths::CspfPath::OutputPath::Hops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family" || name == "ipv4-prefix" || name == "ipv6-prefix")
        return true;
    return false;
}

Pce::TunnelInfos::TunnelInfos()
    :
    tunnel_info(this, {"peer_address", "plsp_id", "tunnel_name"})
{

    yang_name = "tunnel-infos"; yang_parent_name = "pce"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::TunnelInfos::~TunnelInfos()
{
}

bool Pce::TunnelInfos::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tunnel_info.len(); index++)
    {
        if(tunnel_info[index]->has_data())
            return true;
    }
    return false;
}

bool Pce::TunnelInfos::has_operation() const
{
    for (std::size_t index=0; index<tunnel_info.len(); index++)
    {
        if(tunnel_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pce::TunnelInfos::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::TunnelInfos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-infos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TunnelInfos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TunnelInfos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-info")
    {
        auto ent_ = std::make_shared<Pce::TunnelInfos::TunnelInfo>();
        ent_->parent = this;
        tunnel_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TunnelInfos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tunnel_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pce::TunnelInfos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pce::TunnelInfos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pce::TunnelInfos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-info")
        return true;
    return false;
}

Pce::TunnelInfos::TunnelInfo::TunnelInfo()
    :
    peer_address{YType::str, "peer-address"},
    plsp_id{YType::uint32, "plsp-id"},
    tunnel_name{YType::str, "tunnel-name"},
    tunnel_name_xr{YType::str, "tunnel-name-xr"}
        ,
    pcc_address(std::make_shared<Pce::TunnelInfos::TunnelInfo::PccAddress>())
    , brief_lsp_information(this, {})
{
    pcc_address->parent = this;

    yang_name = "tunnel-info"; yang_parent_name = "tunnel-infos"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::TunnelInfos::TunnelInfo::~TunnelInfo()
{
}

bool Pce::TunnelInfos::TunnelInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<brief_lsp_information.len(); index++)
    {
        if(brief_lsp_information[index]->has_data())
            return true;
    }
    return peer_address.is_set
	|| plsp_id.is_set
	|| tunnel_name.is_set
	|| tunnel_name_xr.is_set
	|| (pcc_address !=  nullptr && pcc_address->has_data());
}

bool Pce::TunnelInfos::TunnelInfo::has_operation() const
{
    for (std::size_t index=0; index<brief_lsp_information.len(); index++)
    {
        if(brief_lsp_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(peer_address.yfilter)
	|| ydk::is_set(plsp_id.yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(tunnel_name_xr.yfilter)
	|| (pcc_address !=  nullptr && pcc_address->has_operation());
}

std::string Pce::TunnelInfos::TunnelInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/tunnel-infos/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::TunnelInfos::TunnelInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-info";
    ADD_KEY_TOKEN(peer_address, "peer-address");
    ADD_KEY_TOKEN(plsp_id, "plsp-id");
    ADD_KEY_TOKEN(tunnel_name, "tunnel-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TunnelInfos::TunnelInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_address.is_set || is_set(peer_address.yfilter)) leaf_name_data.push_back(peer_address.get_name_leafdata());
    if (plsp_id.is_set || is_set(plsp_id.yfilter)) leaf_name_data.push_back(plsp_id.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (tunnel_name_xr.is_set || is_set(tunnel_name_xr.yfilter)) leaf_name_data.push_back(tunnel_name_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TunnelInfos::TunnelInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pcc-address")
    {
        if(pcc_address == nullptr)
        {
            pcc_address = std::make_shared<Pce::TunnelInfos::TunnelInfo::PccAddress>();
        }
        return pcc_address;
    }

    if(child_yang_name == "brief-lsp-information")
    {
        auto ent_ = std::make_shared<Pce::TunnelInfos::TunnelInfo::BriefLspInformation>();
        ent_->parent = this;
        brief_lsp_information.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TunnelInfos::TunnelInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pcc_address != nullptr)
    {
        _children["pcc-address"] = pcc_address;
    }

    count_ = 0;
    for (auto ent_ : brief_lsp_information.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pce::TunnelInfos::TunnelInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-address")
    {
        peer_address = value;
        peer_address.value_namespace = name_space;
        peer_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plsp-id")
    {
        plsp_id = value;
        plsp_id.value_namespace = name_space;
        plsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name-xr")
    {
        tunnel_name_xr = value;
        tunnel_name_xr.value_namespace = name_space;
        tunnel_name_xr.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TunnelInfos::TunnelInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-address")
    {
        peer_address.yfilter = yfilter;
    }
    if(value_path == "plsp-id")
    {
        plsp_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-name-xr")
    {
        tunnel_name_xr.yfilter = yfilter;
    }
}

bool Pce::TunnelInfos::TunnelInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pcc-address" || name == "brief-lsp-information" || name == "peer-address" || name == "plsp-id" || name == "tunnel-name" || name == "tunnel-name-xr")
        return true;
    return false;
}

Pce::TunnelInfos::TunnelInfo::PccAddress::PccAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "pcc-address"; yang_parent_name = "tunnel-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TunnelInfos::TunnelInfo::PccAddress::~PccAddress()
{
}

bool Pce::TunnelInfos::TunnelInfo::PccAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Pce::TunnelInfos::TunnelInfo::PccAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Pce::TunnelInfos::TunnelInfo::PccAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcc-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TunnelInfos::TunnelInfo::PccAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TunnelInfos::TunnelInfo::PccAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TunnelInfos::TunnelInfo::PccAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::TunnelInfos::TunnelInfo::PccAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TunnelInfos::TunnelInfo::PccAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Pce::TunnelInfos::TunnelInfo::PccAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Pce::TunnelInfos::TunnelInfo::BriefLspInformation::BriefLspInformation()
    :
    tunnel_id{YType::uint32, "tunnel-id"},
    lspid{YType::uint32, "lspid"},
    binding_sid{YType::uint32, "binding-sid"},
    lsp_setup_type{YType::enumeration, "lsp-setup-type"},
    operational_state{YType::enumeration, "operational-state"},
    administrative_state{YType::enumeration, "administrative-state"},
    msd{YType::uint32, "msd"},
    absolute_margin{YType::uint32, "absolute-margin"},
    relative_margin{YType::uint32, "relative-margin"}
        ,
    source_address(std::make_shared<Pce::TunnelInfos::TunnelInfo::BriefLspInformation::SourceAddress>())
    , destination_address(std::make_shared<Pce::TunnelInfos::TunnelInfo::BriefLspInformation::DestinationAddress>())
{
    source_address->parent = this;
    destination_address->parent = this;

    yang_name = "brief-lsp-information"; yang_parent_name = "tunnel-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TunnelInfos::TunnelInfo::BriefLspInformation::~BriefLspInformation()
{
}

bool Pce::TunnelInfos::TunnelInfo::BriefLspInformation::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_id.is_set
	|| lspid.is_set
	|| binding_sid.is_set
	|| lsp_setup_type.is_set
	|| operational_state.is_set
	|| administrative_state.is_set
	|| msd.is_set
	|| absolute_margin.is_set
	|| relative_margin.is_set
	|| (source_address !=  nullptr && source_address->has_data())
	|| (destination_address !=  nullptr && destination_address->has_data());
}

bool Pce::TunnelInfos::TunnelInfo::BriefLspInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(lspid.yfilter)
	|| ydk::is_set(binding_sid.yfilter)
	|| ydk::is_set(lsp_setup_type.yfilter)
	|| ydk::is_set(operational_state.yfilter)
	|| ydk::is_set(administrative_state.yfilter)
	|| ydk::is_set(msd.yfilter)
	|| ydk::is_set(absolute_margin.yfilter)
	|| ydk::is_set(relative_margin.yfilter)
	|| (source_address !=  nullptr && source_address->has_operation())
	|| (destination_address !=  nullptr && destination_address->has_operation());
}

std::string Pce::TunnelInfos::TunnelInfo::BriefLspInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief-lsp-information";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TunnelInfos::TunnelInfo::BriefLspInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (lspid.is_set || is_set(lspid.yfilter)) leaf_name_data.push_back(lspid.get_name_leafdata());
    if (binding_sid.is_set || is_set(binding_sid.yfilter)) leaf_name_data.push_back(binding_sid.get_name_leafdata());
    if (lsp_setup_type.is_set || is_set(lsp_setup_type.yfilter)) leaf_name_data.push_back(lsp_setup_type.get_name_leafdata());
    if (operational_state.is_set || is_set(operational_state.yfilter)) leaf_name_data.push_back(operational_state.get_name_leafdata());
    if (administrative_state.is_set || is_set(administrative_state.yfilter)) leaf_name_data.push_back(administrative_state.get_name_leafdata());
    if (msd.is_set || is_set(msd.yfilter)) leaf_name_data.push_back(msd.get_name_leafdata());
    if (absolute_margin.is_set || is_set(absolute_margin.yfilter)) leaf_name_data.push_back(absolute_margin.get_name_leafdata());
    if (relative_margin.is_set || is_set(relative_margin.yfilter)) leaf_name_data.push_back(relative_margin.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TunnelInfos::TunnelInfo::BriefLspInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Pce::TunnelInfos::TunnelInfo::BriefLspInformation::SourceAddress>();
        }
        return source_address;
    }

    if(child_yang_name == "destination-address")
    {
        if(destination_address == nullptr)
        {
            destination_address = std::make_shared<Pce::TunnelInfos::TunnelInfo::BriefLspInformation::DestinationAddress>();
        }
        return destination_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TunnelInfos::TunnelInfo::BriefLspInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source_address != nullptr)
    {
        _children["source-address"] = source_address;
    }

    if(destination_address != nullptr)
    {
        _children["destination-address"] = destination_address;
    }

    return _children;
}

void Pce::TunnelInfos::TunnelInfo::BriefLspInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lspid")
    {
        lspid = value;
        lspid.value_namespace = name_space;
        lspid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-sid")
    {
        binding_sid = value;
        binding_sid.value_namespace = name_space;
        binding_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-setup-type")
    {
        lsp_setup_type = value;
        lsp_setup_type.value_namespace = name_space;
        lsp_setup_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operational-state")
    {
        operational_state = value;
        operational_state.value_namespace = name_space;
        operational_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "administrative-state")
    {
        administrative_state = value;
        administrative_state.value_namespace = name_space;
        administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msd")
    {
        msd = value;
        msd.value_namespace = name_space;
        msd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "absolute-margin")
    {
        absolute_margin = value;
        absolute_margin.value_namespace = name_space;
        absolute_margin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "relative-margin")
    {
        relative_margin = value;
        relative_margin.value_namespace = name_space;
        relative_margin.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TunnelInfos::TunnelInfo::BriefLspInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "lspid")
    {
        lspid.yfilter = yfilter;
    }
    if(value_path == "binding-sid")
    {
        binding_sid.yfilter = yfilter;
    }
    if(value_path == "lsp-setup-type")
    {
        lsp_setup_type.yfilter = yfilter;
    }
    if(value_path == "operational-state")
    {
        operational_state.yfilter = yfilter;
    }
    if(value_path == "administrative-state")
    {
        administrative_state.yfilter = yfilter;
    }
    if(value_path == "msd")
    {
        msd.yfilter = yfilter;
    }
    if(value_path == "absolute-margin")
    {
        absolute_margin.yfilter = yfilter;
    }
    if(value_path == "relative-margin")
    {
        relative_margin.yfilter = yfilter;
    }
}

bool Pce::TunnelInfos::TunnelInfo::BriefLspInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "destination-address" || name == "tunnel-id" || name == "lspid" || name == "binding-sid" || name == "lsp-setup-type" || name == "operational-state" || name == "administrative-state" || name == "msd" || name == "absolute-margin" || name == "relative-margin")
        return true;
    return false;
}

Pce::TunnelInfos::TunnelInfo::BriefLspInformation::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "source-address"; yang_parent_name = "brief-lsp-information"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TunnelInfos::TunnelInfo::BriefLspInformation::SourceAddress::~SourceAddress()
{
}

bool Pce::TunnelInfos::TunnelInfo::BriefLspInformation::SourceAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Pce::TunnelInfos::TunnelInfo::BriefLspInformation::SourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Pce::TunnelInfos::TunnelInfo::BriefLspInformation::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TunnelInfos::TunnelInfo::BriefLspInformation::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TunnelInfos::TunnelInfo::BriefLspInformation::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TunnelInfos::TunnelInfo::BriefLspInformation::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::TunnelInfos::TunnelInfo::BriefLspInformation::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TunnelInfos::TunnelInfo::BriefLspInformation::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Pce::TunnelInfos::TunnelInfo::BriefLspInformation::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Pce::TunnelInfos::TunnelInfo::BriefLspInformation::DestinationAddress::DestinationAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "destination-address"; yang_parent_name = "brief-lsp-information"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TunnelInfos::TunnelInfo::BriefLspInformation::DestinationAddress::~DestinationAddress()
{
}

bool Pce::TunnelInfos::TunnelInfo::BriefLspInformation::DestinationAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Pce::TunnelInfos::TunnelInfo::BriefLspInformation::DestinationAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Pce::TunnelInfos::TunnelInfo::BriefLspInformation::DestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TunnelInfos::TunnelInfo::BriefLspInformation::DestinationAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TunnelInfos::TunnelInfo::BriefLspInformation::DestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TunnelInfos::TunnelInfo::BriefLspInformation::DestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::TunnelInfos::TunnelInfo::BriefLspInformation::DestinationAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TunnelInfos::TunnelInfo::BriefLspInformation::DestinationAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Pce::TunnelInfos::TunnelInfo::BriefLspInformation::DestinationAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Pce::PeerDetailInfos::PeerDetailInfos()
    :
    peer_detail_info(this, {"peer_address"})
{

    yang_name = "peer-detail-infos"; yang_parent_name = "pce"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::PeerDetailInfos::~PeerDetailInfos()
{
}

bool Pce::PeerDetailInfos::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<peer_detail_info.len(); index++)
    {
        if(peer_detail_info[index]->has_data())
            return true;
    }
    return false;
}

bool Pce::PeerDetailInfos::has_operation() const
{
    for (std::size_t index=0; index<peer_detail_info.len(); index++)
    {
        if(peer_detail_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pce::PeerDetailInfos::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::PeerDetailInfos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-detail-infos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::PeerDetailInfos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::PeerDetailInfos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-detail-info")
    {
        auto ent_ = std::make_shared<Pce::PeerDetailInfos::PeerDetailInfo>();
        ent_->parent = this;
        peer_detail_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::PeerDetailInfos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : peer_detail_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pce::PeerDetailInfos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pce::PeerDetailInfos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pce::PeerDetailInfos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-detail-info")
        return true;
    return false;
}

Pce::PeerDetailInfos::PeerDetailInfo::PeerDetailInfo()
    :
    peer_address{YType::str, "peer-address"},
    peer_protocol{YType::enumeration, "peer-protocol"},
    max_sid_depth{YType::uint32, "max-sid-depth"}
        ,
    peer_address_xr(std::make_shared<Pce::PeerDetailInfos::PeerDetailInfo::PeerAddressXr>())
    , detail_pcep_information(std::make_shared<Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation>())
{
    peer_address_xr->parent = this;
    detail_pcep_information->parent = this;

    yang_name = "peer-detail-info"; yang_parent_name = "peer-detail-infos"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::PeerDetailInfos::PeerDetailInfo::~PeerDetailInfo()
{
}

bool Pce::PeerDetailInfos::PeerDetailInfo::has_data() const
{
    if (is_presence_container) return true;
    return peer_address.is_set
	|| peer_protocol.is_set
	|| max_sid_depth.is_set
	|| (peer_address_xr !=  nullptr && peer_address_xr->has_data())
	|| (detail_pcep_information !=  nullptr && detail_pcep_information->has_data());
}

bool Pce::PeerDetailInfos::PeerDetailInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_address.yfilter)
	|| ydk::is_set(peer_protocol.yfilter)
	|| ydk::is_set(max_sid_depth.yfilter)
	|| (peer_address_xr !=  nullptr && peer_address_xr->has_operation())
	|| (detail_pcep_information !=  nullptr && detail_pcep_information->has_operation());
}

std::string Pce::PeerDetailInfos::PeerDetailInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/peer-detail-infos/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::PeerDetailInfos::PeerDetailInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-detail-info";
    ADD_KEY_TOKEN(peer_address, "peer-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::PeerDetailInfos::PeerDetailInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_address.is_set || is_set(peer_address.yfilter)) leaf_name_data.push_back(peer_address.get_name_leafdata());
    if (peer_protocol.is_set || is_set(peer_protocol.yfilter)) leaf_name_data.push_back(peer_protocol.get_name_leafdata());
    if (max_sid_depth.is_set || is_set(max_sid_depth.yfilter)) leaf_name_data.push_back(max_sid_depth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::PeerDetailInfos::PeerDetailInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-address-xr")
    {
        if(peer_address_xr == nullptr)
        {
            peer_address_xr = std::make_shared<Pce::PeerDetailInfos::PeerDetailInfo::PeerAddressXr>();
        }
        return peer_address_xr;
    }

    if(child_yang_name == "detail-pcep-information")
    {
        if(detail_pcep_information == nullptr)
        {
            detail_pcep_information = std::make_shared<Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation>();
        }
        return detail_pcep_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::PeerDetailInfos::PeerDetailInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peer_address_xr != nullptr)
    {
        _children["peer-address-xr"] = peer_address_xr;
    }

    if(detail_pcep_information != nullptr)
    {
        _children["detail-pcep-information"] = detail_pcep_information;
    }

    return _children;
}

void Pce::PeerDetailInfos::PeerDetailInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-address")
    {
        peer_address = value;
        peer_address.value_namespace = name_space;
        peer_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-protocol")
    {
        peer_protocol = value;
        peer_protocol.value_namespace = name_space;
        peer_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-sid-depth")
    {
        max_sid_depth = value;
        max_sid_depth.value_namespace = name_space;
        max_sid_depth.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::PeerDetailInfos::PeerDetailInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-address")
    {
        peer_address.yfilter = yfilter;
    }
    if(value_path == "peer-protocol")
    {
        peer_protocol.yfilter = yfilter;
    }
    if(value_path == "max-sid-depth")
    {
        max_sid_depth.yfilter = yfilter;
    }
}

bool Pce::PeerDetailInfos::PeerDetailInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-address-xr" || name == "detail-pcep-information" || name == "peer-address" || name == "peer-protocol" || name == "max-sid-depth")
        return true;
    return false;
}

Pce::PeerDetailInfos::PeerDetailInfo::PeerAddressXr::PeerAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "peer-address-xr"; yang_parent_name = "peer-detail-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::PeerDetailInfos::PeerDetailInfo::PeerAddressXr::~PeerAddressXr()
{
}

bool Pce::PeerDetailInfos::PeerDetailInfo::PeerAddressXr::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Pce::PeerDetailInfos::PeerDetailInfo::PeerAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Pce::PeerDetailInfos::PeerDetailInfo::PeerAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::PeerDetailInfos::PeerDetailInfo::PeerAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::PeerDetailInfos::PeerDetailInfo::PeerAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::PeerDetailInfos::PeerDetailInfo::PeerAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::PeerDetailInfos::PeerDetailInfo::PeerAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::PeerDetailInfos::PeerDetailInfo::PeerAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Pce::PeerDetailInfos::PeerDetailInfo::PeerAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::DetailPcepInformation()
    :
    error{YType::str, "error"},
    speaker_id{YType::str, "speaker-id"},
    pcep_up_time{YType::uint32, "pcep-up-time"},
    keepalives{YType::uint32, "keepalives"},
    md5_enabled{YType::boolean, "md5-enabled"},
    keychain_enabled{YType::boolean, "keychain-enabled"},
    negotiated_local_keepalive{YType::uint32, "negotiated-local-keepalive"},
    negotiated_remote_keepalive{YType::uint32, "negotiated-remote-keepalive"},
    negotiated_dead_time{YType::uint32, "negotiated-dead-time"},
    pce_request_rx{YType::uint32, "pce-request-rx"},
    pce_request_tx{YType::uint32, "pce-request-tx"},
    pce_reply_rx{YType::uint32, "pce-reply-rx"},
    pce_reply_tx{YType::uint32, "pce-reply-tx"},
    pce_error_rx{YType::uint32, "pce-error-rx"},
    pce_error_tx{YType::uint32, "pce-error-tx"},
    pce_open_tx{YType::uint32, "pce-open-tx"},
    pce_open_rx{YType::uint32, "pce-open-rx"},
    pce_report_rx{YType::uint32, "pce-report-rx"},
    pce_report_tx{YType::uint32, "pce-report-tx"},
    pce_update_rx{YType::uint32, "pce-update-rx"},
    pce_update_tx{YType::uint32, "pce-update-tx"},
    pce_initiate_rx{YType::uint32, "pce-initiate-rx"},
    pce_initiate_tx{YType::uint32, "pce-initiate-tx"},
    pce_keepalive_tx{YType::uint64, "pce-keepalive-tx"},
    pce_keepalive_rx{YType::uint64, "pce-keepalive-rx"},
    local_session_id{YType::uint8, "local-session-id"},
    remote_session_id{YType::uint8, "remote-session-id"},
    minimum_keepalive_interval{YType::uint8, "minimum-keepalive-interval"},
    maximum_dead_interval{YType::uint8, "maximum-dead-interval"},
    max_sid_depth{YType::uint8, "max-sid-depth"}
        ,
    brief_pcep_information(std::make_shared<Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation>())
    , last_error_rx(std::make_shared<Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx>())
    , last_error_tx(std::make_shared<Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx>())
{
    brief_pcep_information->parent = this;
    last_error_rx->parent = this;
    last_error_tx->parent = this;

    yang_name = "detail-pcep-information"; yang_parent_name = "peer-detail-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::~DetailPcepInformation()
{
}

bool Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::has_data() const
{
    if (is_presence_container) return true;
    return error.is_set
	|| speaker_id.is_set
	|| pcep_up_time.is_set
	|| keepalives.is_set
	|| md5_enabled.is_set
	|| keychain_enabled.is_set
	|| negotiated_local_keepalive.is_set
	|| negotiated_remote_keepalive.is_set
	|| negotiated_dead_time.is_set
	|| pce_request_rx.is_set
	|| pce_request_tx.is_set
	|| pce_reply_rx.is_set
	|| pce_reply_tx.is_set
	|| pce_error_rx.is_set
	|| pce_error_tx.is_set
	|| pce_open_tx.is_set
	|| pce_open_rx.is_set
	|| pce_report_rx.is_set
	|| pce_report_tx.is_set
	|| pce_update_rx.is_set
	|| pce_update_tx.is_set
	|| pce_initiate_rx.is_set
	|| pce_initiate_tx.is_set
	|| pce_keepalive_tx.is_set
	|| pce_keepalive_rx.is_set
	|| local_session_id.is_set
	|| remote_session_id.is_set
	|| minimum_keepalive_interval.is_set
	|| maximum_dead_interval.is_set
	|| max_sid_depth.is_set
	|| (brief_pcep_information !=  nullptr && brief_pcep_information->has_data())
	|| (last_error_rx !=  nullptr && last_error_rx->has_data())
	|| (last_error_tx !=  nullptr && last_error_tx->has_data());
}

bool Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error.yfilter)
	|| ydk::is_set(speaker_id.yfilter)
	|| ydk::is_set(pcep_up_time.yfilter)
	|| ydk::is_set(keepalives.yfilter)
	|| ydk::is_set(md5_enabled.yfilter)
	|| ydk::is_set(keychain_enabled.yfilter)
	|| ydk::is_set(negotiated_local_keepalive.yfilter)
	|| ydk::is_set(negotiated_remote_keepalive.yfilter)
	|| ydk::is_set(negotiated_dead_time.yfilter)
	|| ydk::is_set(pce_request_rx.yfilter)
	|| ydk::is_set(pce_request_tx.yfilter)
	|| ydk::is_set(pce_reply_rx.yfilter)
	|| ydk::is_set(pce_reply_tx.yfilter)
	|| ydk::is_set(pce_error_rx.yfilter)
	|| ydk::is_set(pce_error_tx.yfilter)
	|| ydk::is_set(pce_open_tx.yfilter)
	|| ydk::is_set(pce_open_rx.yfilter)
	|| ydk::is_set(pce_report_rx.yfilter)
	|| ydk::is_set(pce_report_tx.yfilter)
	|| ydk::is_set(pce_update_rx.yfilter)
	|| ydk::is_set(pce_update_tx.yfilter)
	|| ydk::is_set(pce_initiate_rx.yfilter)
	|| ydk::is_set(pce_initiate_tx.yfilter)
	|| ydk::is_set(pce_keepalive_tx.yfilter)
	|| ydk::is_set(pce_keepalive_rx.yfilter)
	|| ydk::is_set(local_session_id.yfilter)
	|| ydk::is_set(remote_session_id.yfilter)
	|| ydk::is_set(minimum_keepalive_interval.yfilter)
	|| ydk::is_set(maximum_dead_interval.yfilter)
	|| ydk::is_set(max_sid_depth.yfilter)
	|| (brief_pcep_information !=  nullptr && brief_pcep_information->has_operation())
	|| (last_error_rx !=  nullptr && last_error_rx->has_operation())
	|| (last_error_tx !=  nullptr && last_error_tx->has_operation());
}

std::string Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-pcep-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error.is_set || is_set(error.yfilter)) leaf_name_data.push_back(error.get_name_leafdata());
    if (speaker_id.is_set || is_set(speaker_id.yfilter)) leaf_name_data.push_back(speaker_id.get_name_leafdata());
    if (pcep_up_time.is_set || is_set(pcep_up_time.yfilter)) leaf_name_data.push_back(pcep_up_time.get_name_leafdata());
    if (keepalives.is_set || is_set(keepalives.yfilter)) leaf_name_data.push_back(keepalives.get_name_leafdata());
    if (md5_enabled.is_set || is_set(md5_enabled.yfilter)) leaf_name_data.push_back(md5_enabled.get_name_leafdata());
    if (keychain_enabled.is_set || is_set(keychain_enabled.yfilter)) leaf_name_data.push_back(keychain_enabled.get_name_leafdata());
    if (negotiated_local_keepalive.is_set || is_set(negotiated_local_keepalive.yfilter)) leaf_name_data.push_back(negotiated_local_keepalive.get_name_leafdata());
    if (negotiated_remote_keepalive.is_set || is_set(negotiated_remote_keepalive.yfilter)) leaf_name_data.push_back(negotiated_remote_keepalive.get_name_leafdata());
    if (negotiated_dead_time.is_set || is_set(negotiated_dead_time.yfilter)) leaf_name_data.push_back(negotiated_dead_time.get_name_leafdata());
    if (pce_request_rx.is_set || is_set(pce_request_rx.yfilter)) leaf_name_data.push_back(pce_request_rx.get_name_leafdata());
    if (pce_request_tx.is_set || is_set(pce_request_tx.yfilter)) leaf_name_data.push_back(pce_request_tx.get_name_leafdata());
    if (pce_reply_rx.is_set || is_set(pce_reply_rx.yfilter)) leaf_name_data.push_back(pce_reply_rx.get_name_leafdata());
    if (pce_reply_tx.is_set || is_set(pce_reply_tx.yfilter)) leaf_name_data.push_back(pce_reply_tx.get_name_leafdata());
    if (pce_error_rx.is_set || is_set(pce_error_rx.yfilter)) leaf_name_data.push_back(pce_error_rx.get_name_leafdata());
    if (pce_error_tx.is_set || is_set(pce_error_tx.yfilter)) leaf_name_data.push_back(pce_error_tx.get_name_leafdata());
    if (pce_open_tx.is_set || is_set(pce_open_tx.yfilter)) leaf_name_data.push_back(pce_open_tx.get_name_leafdata());
    if (pce_open_rx.is_set || is_set(pce_open_rx.yfilter)) leaf_name_data.push_back(pce_open_rx.get_name_leafdata());
    if (pce_report_rx.is_set || is_set(pce_report_rx.yfilter)) leaf_name_data.push_back(pce_report_rx.get_name_leafdata());
    if (pce_report_tx.is_set || is_set(pce_report_tx.yfilter)) leaf_name_data.push_back(pce_report_tx.get_name_leafdata());
    if (pce_update_rx.is_set || is_set(pce_update_rx.yfilter)) leaf_name_data.push_back(pce_update_rx.get_name_leafdata());
    if (pce_update_tx.is_set || is_set(pce_update_tx.yfilter)) leaf_name_data.push_back(pce_update_tx.get_name_leafdata());
    if (pce_initiate_rx.is_set || is_set(pce_initiate_rx.yfilter)) leaf_name_data.push_back(pce_initiate_rx.get_name_leafdata());
    if (pce_initiate_tx.is_set || is_set(pce_initiate_tx.yfilter)) leaf_name_data.push_back(pce_initiate_tx.get_name_leafdata());
    if (pce_keepalive_tx.is_set || is_set(pce_keepalive_tx.yfilter)) leaf_name_data.push_back(pce_keepalive_tx.get_name_leafdata());
    if (pce_keepalive_rx.is_set || is_set(pce_keepalive_rx.yfilter)) leaf_name_data.push_back(pce_keepalive_rx.get_name_leafdata());
    if (local_session_id.is_set || is_set(local_session_id.yfilter)) leaf_name_data.push_back(local_session_id.get_name_leafdata());
    if (remote_session_id.is_set || is_set(remote_session_id.yfilter)) leaf_name_data.push_back(remote_session_id.get_name_leafdata());
    if (minimum_keepalive_interval.is_set || is_set(minimum_keepalive_interval.yfilter)) leaf_name_data.push_back(minimum_keepalive_interval.get_name_leafdata());
    if (maximum_dead_interval.is_set || is_set(maximum_dead_interval.yfilter)) leaf_name_data.push_back(maximum_dead_interval.get_name_leafdata());
    if (max_sid_depth.is_set || is_set(max_sid_depth.yfilter)) leaf_name_data.push_back(max_sid_depth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief-pcep-information")
    {
        if(brief_pcep_information == nullptr)
        {
            brief_pcep_information = std::make_shared<Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation>();
        }
        return brief_pcep_information;
    }

    if(child_yang_name == "last-error-rx")
    {
        if(last_error_rx == nullptr)
        {
            last_error_rx = std::make_shared<Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx>();
        }
        return last_error_rx;
    }

    if(child_yang_name == "last-error-tx")
    {
        if(last_error_tx == nullptr)
        {
            last_error_tx = std::make_shared<Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx>();
        }
        return last_error_tx;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(brief_pcep_information != nullptr)
    {
        _children["brief-pcep-information"] = brief_pcep_information;
    }

    if(last_error_rx != nullptr)
    {
        _children["last-error-rx"] = last_error_rx;
    }

    if(last_error_tx != nullptr)
    {
        _children["last-error-tx"] = last_error_tx;
    }

    return _children;
}

void Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error")
    {
        error = value;
        error.value_namespace = name_space;
        error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speaker-id")
    {
        speaker_id = value;
        speaker_id.value_namespace = name_space;
        speaker_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcep-up-time")
    {
        pcep_up_time = value;
        pcep_up_time.value_namespace = name_space;
        pcep_up_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalives")
    {
        keepalives = value;
        keepalives.value_namespace = name_space;
        keepalives.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "md5-enabled")
    {
        md5_enabled = value;
        md5_enabled.value_namespace = name_space;
        md5_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keychain-enabled")
    {
        keychain_enabled = value;
        keychain_enabled.value_namespace = name_space;
        keychain_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-local-keepalive")
    {
        negotiated_local_keepalive = value;
        negotiated_local_keepalive.value_namespace = name_space;
        negotiated_local_keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-remote-keepalive")
    {
        negotiated_remote_keepalive = value;
        negotiated_remote_keepalive.value_namespace = name_space;
        negotiated_remote_keepalive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-dead-time")
    {
        negotiated_dead_time = value;
        negotiated_dead_time.value_namespace = name_space;
        negotiated_dead_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-request-rx")
    {
        pce_request_rx = value;
        pce_request_rx.value_namespace = name_space;
        pce_request_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-request-tx")
    {
        pce_request_tx = value;
        pce_request_tx.value_namespace = name_space;
        pce_request_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-reply-rx")
    {
        pce_reply_rx = value;
        pce_reply_rx.value_namespace = name_space;
        pce_reply_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-reply-tx")
    {
        pce_reply_tx = value;
        pce_reply_tx.value_namespace = name_space;
        pce_reply_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-error-rx")
    {
        pce_error_rx = value;
        pce_error_rx.value_namespace = name_space;
        pce_error_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-error-tx")
    {
        pce_error_tx = value;
        pce_error_tx.value_namespace = name_space;
        pce_error_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-open-tx")
    {
        pce_open_tx = value;
        pce_open_tx.value_namespace = name_space;
        pce_open_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-open-rx")
    {
        pce_open_rx = value;
        pce_open_rx.value_namespace = name_space;
        pce_open_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-report-rx")
    {
        pce_report_rx = value;
        pce_report_rx.value_namespace = name_space;
        pce_report_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-report-tx")
    {
        pce_report_tx = value;
        pce_report_tx.value_namespace = name_space;
        pce_report_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-update-rx")
    {
        pce_update_rx = value;
        pce_update_rx.value_namespace = name_space;
        pce_update_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-update-tx")
    {
        pce_update_tx = value;
        pce_update_tx.value_namespace = name_space;
        pce_update_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-initiate-rx")
    {
        pce_initiate_rx = value;
        pce_initiate_rx.value_namespace = name_space;
        pce_initiate_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-initiate-tx")
    {
        pce_initiate_tx = value;
        pce_initiate_tx.value_namespace = name_space;
        pce_initiate_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-keepalive-tx")
    {
        pce_keepalive_tx = value;
        pce_keepalive_tx.value_namespace = name_space;
        pce_keepalive_tx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pce-keepalive-rx")
    {
        pce_keepalive_rx = value;
        pce_keepalive_rx.value_namespace = name_space;
        pce_keepalive_rx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-session-id")
    {
        local_session_id = value;
        local_session_id.value_namespace = name_space;
        local_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-session-id")
    {
        remote_session_id = value;
        remote_session_id.value_namespace = name_space;
        remote_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-keepalive-interval")
    {
        minimum_keepalive_interval = value;
        minimum_keepalive_interval.value_namespace = name_space;
        minimum_keepalive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-dead-interval")
    {
        maximum_dead_interval = value;
        maximum_dead_interval.value_namespace = name_space;
        maximum_dead_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-sid-depth")
    {
        max_sid_depth = value;
        max_sid_depth.value_namespace = name_space;
        max_sid_depth.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error")
    {
        error.yfilter = yfilter;
    }
    if(value_path == "speaker-id")
    {
        speaker_id.yfilter = yfilter;
    }
    if(value_path == "pcep-up-time")
    {
        pcep_up_time.yfilter = yfilter;
    }
    if(value_path == "keepalives")
    {
        keepalives.yfilter = yfilter;
    }
    if(value_path == "md5-enabled")
    {
        md5_enabled.yfilter = yfilter;
    }
    if(value_path == "keychain-enabled")
    {
        keychain_enabled.yfilter = yfilter;
    }
    if(value_path == "negotiated-local-keepalive")
    {
        negotiated_local_keepalive.yfilter = yfilter;
    }
    if(value_path == "negotiated-remote-keepalive")
    {
        negotiated_remote_keepalive.yfilter = yfilter;
    }
    if(value_path == "negotiated-dead-time")
    {
        negotiated_dead_time.yfilter = yfilter;
    }
    if(value_path == "pce-request-rx")
    {
        pce_request_rx.yfilter = yfilter;
    }
    if(value_path == "pce-request-tx")
    {
        pce_request_tx.yfilter = yfilter;
    }
    if(value_path == "pce-reply-rx")
    {
        pce_reply_rx.yfilter = yfilter;
    }
    if(value_path == "pce-reply-tx")
    {
        pce_reply_tx.yfilter = yfilter;
    }
    if(value_path == "pce-error-rx")
    {
        pce_error_rx.yfilter = yfilter;
    }
    if(value_path == "pce-error-tx")
    {
        pce_error_tx.yfilter = yfilter;
    }
    if(value_path == "pce-open-tx")
    {
        pce_open_tx.yfilter = yfilter;
    }
    if(value_path == "pce-open-rx")
    {
        pce_open_rx.yfilter = yfilter;
    }
    if(value_path == "pce-report-rx")
    {
        pce_report_rx.yfilter = yfilter;
    }
    if(value_path == "pce-report-tx")
    {
        pce_report_tx.yfilter = yfilter;
    }
    if(value_path == "pce-update-rx")
    {
        pce_update_rx.yfilter = yfilter;
    }
    if(value_path == "pce-update-tx")
    {
        pce_update_tx.yfilter = yfilter;
    }
    if(value_path == "pce-initiate-rx")
    {
        pce_initiate_rx.yfilter = yfilter;
    }
    if(value_path == "pce-initiate-tx")
    {
        pce_initiate_tx.yfilter = yfilter;
    }
    if(value_path == "pce-keepalive-tx")
    {
        pce_keepalive_tx.yfilter = yfilter;
    }
    if(value_path == "pce-keepalive-rx")
    {
        pce_keepalive_rx.yfilter = yfilter;
    }
    if(value_path == "local-session-id")
    {
        local_session_id.yfilter = yfilter;
    }
    if(value_path == "remote-session-id")
    {
        remote_session_id.yfilter = yfilter;
    }
    if(value_path == "minimum-keepalive-interval")
    {
        minimum_keepalive_interval.yfilter = yfilter;
    }
    if(value_path == "maximum-dead-interval")
    {
        maximum_dead_interval.yfilter = yfilter;
    }
    if(value_path == "max-sid-depth")
    {
        max_sid_depth.yfilter = yfilter;
    }
}

bool Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief-pcep-information" || name == "last-error-rx" || name == "last-error-tx" || name == "error" || name == "speaker-id" || name == "pcep-up-time" || name == "keepalives" || name == "md5-enabled" || name == "keychain-enabled" || name == "negotiated-local-keepalive" || name == "negotiated-remote-keepalive" || name == "negotiated-dead-time" || name == "pce-request-rx" || name == "pce-request-tx" || name == "pce-reply-rx" || name == "pce-reply-tx" || name == "pce-error-rx" || name == "pce-error-tx" || name == "pce-open-tx" || name == "pce-open-rx" || name == "pce-report-rx" || name == "pce-report-tx" || name == "pce-update-rx" || name == "pce-update-tx" || name == "pce-initiate-rx" || name == "pce-initiate-tx" || name == "pce-keepalive-tx" || name == "pce-keepalive-rx" || name == "local-session-id" || name == "remote-session-id" || name == "minimum-keepalive-interval" || name == "maximum-dead-interval" || name == "max-sid-depth")
        return true;
    return false;
}

Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation::BriefPcepInformation()
    :
    pcep_state{YType::enumeration, "pcep-state"},
    stateful{YType::boolean, "stateful"},
    capability_update{YType::boolean, "capability-update"},
    capability_instantiate{YType::boolean, "capability-instantiate"},
    capability_segment_routing{YType::boolean, "capability-segment-routing"},
    capability_triggered_sync{YType::boolean, "capability-triggered-sync"},
    capability_db_version{YType::boolean, "capability-db-version"},
    capability_delta_sync{YType::boolean, "capability-delta-sync"}
{

    yang_name = "brief-pcep-information"; yang_parent_name = "detail-pcep-information"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation::~BriefPcepInformation()
{
}

bool Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation::has_data() const
{
    if (is_presence_container) return true;
    return pcep_state.is_set
	|| stateful.is_set
	|| capability_update.is_set
	|| capability_instantiate.is_set
	|| capability_segment_routing.is_set
	|| capability_triggered_sync.is_set
	|| capability_db_version.is_set
	|| capability_delta_sync.is_set;
}

bool Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pcep_state.yfilter)
	|| ydk::is_set(stateful.yfilter)
	|| ydk::is_set(capability_update.yfilter)
	|| ydk::is_set(capability_instantiate.yfilter)
	|| ydk::is_set(capability_segment_routing.yfilter)
	|| ydk::is_set(capability_triggered_sync.yfilter)
	|| ydk::is_set(capability_db_version.yfilter)
	|| ydk::is_set(capability_delta_sync.yfilter);
}

std::string Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief-pcep-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pcep_state.is_set || is_set(pcep_state.yfilter)) leaf_name_data.push_back(pcep_state.get_name_leafdata());
    if (stateful.is_set || is_set(stateful.yfilter)) leaf_name_data.push_back(stateful.get_name_leafdata());
    if (capability_update.is_set || is_set(capability_update.yfilter)) leaf_name_data.push_back(capability_update.get_name_leafdata());
    if (capability_instantiate.is_set || is_set(capability_instantiate.yfilter)) leaf_name_data.push_back(capability_instantiate.get_name_leafdata());
    if (capability_segment_routing.is_set || is_set(capability_segment_routing.yfilter)) leaf_name_data.push_back(capability_segment_routing.get_name_leafdata());
    if (capability_triggered_sync.is_set || is_set(capability_triggered_sync.yfilter)) leaf_name_data.push_back(capability_triggered_sync.get_name_leafdata());
    if (capability_db_version.is_set || is_set(capability_db_version.yfilter)) leaf_name_data.push_back(capability_db_version.get_name_leafdata());
    if (capability_delta_sync.is_set || is_set(capability_delta_sync.yfilter)) leaf_name_data.push_back(capability_delta_sync.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pcep-state")
    {
        pcep_state = value;
        pcep_state.value_namespace = name_space;
        pcep_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateful")
    {
        stateful = value;
        stateful.value_namespace = name_space;
        stateful.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-update")
    {
        capability_update = value;
        capability_update.value_namespace = name_space;
        capability_update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-instantiate")
    {
        capability_instantiate = value;
        capability_instantiate.value_namespace = name_space;
        capability_instantiate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-segment-routing")
    {
        capability_segment_routing = value;
        capability_segment_routing.value_namespace = name_space;
        capability_segment_routing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-triggered-sync")
    {
        capability_triggered_sync = value;
        capability_triggered_sync.value_namespace = name_space;
        capability_triggered_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-db-version")
    {
        capability_db_version = value;
        capability_db_version.value_namespace = name_space;
        capability_db_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-delta-sync")
    {
        capability_delta_sync = value;
        capability_delta_sync.value_namespace = name_space;
        capability_delta_sync.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pcep-state")
    {
        pcep_state.yfilter = yfilter;
    }
    if(value_path == "stateful")
    {
        stateful.yfilter = yfilter;
    }
    if(value_path == "capability-update")
    {
        capability_update.yfilter = yfilter;
    }
    if(value_path == "capability-instantiate")
    {
        capability_instantiate.yfilter = yfilter;
    }
    if(value_path == "capability-segment-routing")
    {
        capability_segment_routing.yfilter = yfilter;
    }
    if(value_path == "capability-triggered-sync")
    {
        capability_triggered_sync.yfilter = yfilter;
    }
    if(value_path == "capability-db-version")
    {
        capability_db_version.yfilter = yfilter;
    }
    if(value_path == "capability-delta-sync")
    {
        capability_delta_sync.yfilter = yfilter;
    }
}

bool Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::BriefPcepInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pcep-state" || name == "stateful" || name == "capability-update" || name == "capability-instantiate" || name == "capability-segment-routing" || name == "capability-triggered-sync" || name == "capability-db-version" || name == "capability-delta-sync")
        return true;
    return false;
}

Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx::LastErrorRx()
    :
    pc_error_type{YType::uint8, "pc-error-type"},
    pc_error_value{YType::uint8, "pc-error-value"}
{

    yang_name = "last-error-rx"; yang_parent_name = "detail-pcep-information"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx::~LastErrorRx()
{
}

bool Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx::has_data() const
{
    if (is_presence_container) return true;
    return pc_error_type.is_set
	|| pc_error_value.is_set;
}

bool Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pc_error_type.yfilter)
	|| ydk::is_set(pc_error_value.yfilter);
}

std::string Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-error-rx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pc_error_type.is_set || is_set(pc_error_type.yfilter)) leaf_name_data.push_back(pc_error_type.get_name_leafdata());
    if (pc_error_value.is_set || is_set(pc_error_value.yfilter)) leaf_name_data.push_back(pc_error_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pc-error-type")
    {
        pc_error_type = value;
        pc_error_type.value_namespace = name_space;
        pc_error_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pc-error-value")
    {
        pc_error_value = value;
        pc_error_value.value_namespace = name_space;
        pc_error_value.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pc-error-type")
    {
        pc_error_type.yfilter = yfilter;
    }
    if(value_path == "pc-error-value")
    {
        pc_error_value.yfilter = yfilter;
    }
}

bool Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorRx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pc-error-type" || name == "pc-error-value")
        return true;
    return false;
}

Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx::LastErrorTx()
    :
    pc_error_type{YType::uint8, "pc-error-type"},
    pc_error_value{YType::uint8, "pc-error-value"}
{

    yang_name = "last-error-tx"; yang_parent_name = "detail-pcep-information"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx::~LastErrorTx()
{
}

bool Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx::has_data() const
{
    if (is_presence_container) return true;
    return pc_error_type.is_set
	|| pc_error_value.is_set;
}

bool Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pc_error_type.yfilter)
	|| ydk::is_set(pc_error_value.yfilter);
}

std::string Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-error-tx";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pc_error_type.is_set || is_set(pc_error_type.yfilter)) leaf_name_data.push_back(pc_error_type.get_name_leafdata());
    if (pc_error_value.is_set || is_set(pc_error_value.yfilter)) leaf_name_data.push_back(pc_error_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pc-error-type")
    {
        pc_error_type = value;
        pc_error_type.value_namespace = name_space;
        pc_error_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pc-error-value")
    {
        pc_error_value = value;
        pc_error_value.value_namespace = name_space;
        pc_error_value.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pc-error-type")
    {
        pc_error_type.yfilter = yfilter;
    }
    if(value_path == "pc-error-value")
    {
        pc_error_value.yfilter = yfilter;
    }
}

bool Pce::PeerDetailInfos::PeerDetailInfo::DetailPcepInformation::LastErrorTx::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pc-error-type" || name == "pc-error-value")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNodes()
    :
    topology_node(this, {"node_identifier"})
{

    yang_name = "topology-nodes"; yang_parent_name = "pce"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::TopologyNodes::~TopologyNodes()
{
}

bool Pce::TopologyNodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<topology_node.len(); index++)
    {
        if(topology_node[index]->has_data())
            return true;
    }
    return false;
}

bool Pce::TopologyNodes::has_operation() const
{
    for (std::size_t index=0; index<topology_node.len(); index++)
    {
        if(topology_node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pce::TopologyNodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::TopologyNodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology-node")
    {
        auto ent_ = std::make_shared<Pce::TopologyNodes::TopologyNode>();
        ent_->parent = this;
        topology_node.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : topology_node.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pce::TopologyNodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pce::TopologyNodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pce::TopologyNodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology-node")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::TopologyNode()
    :
    node_identifier{YType::uint32, "node-identifier"},
    node_identifier_xr{YType::uint32, "node-identifier-xr"},
    overload{YType::boolean, "overload"}
        ,
    node_protocol_identifier(std::make_shared<Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier>())
    , prefixe(this, {})
    , ipv4_link(this, {})
    , ipv6_link(this, {})
{
    node_protocol_identifier->parent = this;

    yang_name = "topology-node"; yang_parent_name = "topology-nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::TopologyNodes::TopologyNode::~TopologyNode()
{
}

bool Pce::TopologyNodes::TopologyNode::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefixe.len(); index++)
    {
        if(prefixe[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv4_link.len(); index++)
    {
        if(ipv4_link[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6_link.len(); index++)
    {
        if(ipv6_link[index]->has_data())
            return true;
    }
    return node_identifier.is_set
	|| node_identifier_xr.is_set
	|| overload.is_set
	|| (node_protocol_identifier !=  nullptr && node_protocol_identifier->has_data());
}

bool Pce::TopologyNodes::TopologyNode::has_operation() const
{
    for (std::size_t index=0; index<prefixe.len(); index++)
    {
        if(prefixe[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv4_link.len(); index++)
    {
        if(ipv4_link[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6_link.len(); index++)
    {
        if(ipv6_link[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node_identifier.yfilter)
	|| ydk::is_set(node_identifier_xr.yfilter)
	|| ydk::is_set(overload.yfilter)
	|| (node_protocol_identifier !=  nullptr && node_protocol_identifier->has_operation());
}

std::string Pce::TopologyNodes::TopologyNode::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/topology-nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::TopologyNodes::TopologyNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-node";
    ADD_KEY_TOKEN(node_identifier, "node-identifier");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_identifier.is_set || is_set(node_identifier.yfilter)) leaf_name_data.push_back(node_identifier.get_name_leafdata());
    if (node_identifier_xr.is_set || is_set(node_identifier_xr.yfilter)) leaf_name_data.push_back(node_identifier_xr.get_name_leafdata());
    if (overload.is_set || is_set(overload.yfilter)) leaf_name_data.push_back(overload.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-protocol-identifier")
    {
        if(node_protocol_identifier == nullptr)
        {
            node_protocol_identifier = std::make_shared<Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier>();
        }
        return node_protocol_identifier;
    }

    if(child_yang_name == "prefixe")
    {
        auto ent_ = std::make_shared<Pce::TopologyNodes::TopologyNode::Prefixe>();
        ent_->parent = this;
        prefixe.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ipv4-link")
    {
        auto ent_ = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link>();
        ent_->parent = this;
        ipv4_link.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ipv6-link")
    {
        auto ent_ = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link>();
        ent_->parent = this;
        ipv6_link.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(node_protocol_identifier != nullptr)
    {
        _children["node-protocol-identifier"] = node_protocol_identifier;
    }

    count_ = 0;
    for (auto ent_ : prefixe.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ipv4_link.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ipv6_link.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pce::TopologyNodes::TopologyNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-identifier")
    {
        node_identifier = value;
        node_identifier.value_namespace = name_space;
        node_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-identifier-xr")
    {
        node_identifier_xr = value;
        node_identifier_xr.value_namespace = name_space;
        node_identifier_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overload")
    {
        overload = value;
        overload.value_namespace = name_space;
        overload.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-identifier")
    {
        node_identifier.yfilter = yfilter;
    }
    if(value_path == "node-identifier-xr")
    {
        node_identifier_xr.yfilter = yfilter;
    }
    if(value_path == "overload")
    {
        overload.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-protocol-identifier" || name == "prefixe" || name == "ipv4-link" || name == "ipv6-link" || name == "node-identifier" || name == "node-identifier-xr" || name == "overload")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::NodeProtocolIdentifier()
    :
    node_name{YType::str, "node-name"},
    ipv4_bgp_router_id_set{YType::boolean, "ipv4-bgp-router-id-set"},
    ipv4_bgp_router_id{YType::str, "ipv4-bgp-router-id"},
    ipv4te_router_id_set{YType::boolean, "ipv4te-router-id-set"},
    ipv4te_router_id{YType::str, "ipv4te-router-id"}
        ,
    igp_information(this, {})
    , srgb_information(this, {})
{

    yang_name = "node-protocol-identifier"; yang_parent_name = "topology-node"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::~NodeProtocolIdentifier()
{
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<igp_information.len(); index++)
    {
        if(igp_information[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<srgb_information.len(); index++)
    {
        if(srgb_information[index]->has_data())
            return true;
    }
    return node_name.is_set
	|| ipv4_bgp_router_id_set.is_set
	|| ipv4_bgp_router_id.is_set
	|| ipv4te_router_id_set.is_set
	|| ipv4te_router_id.is_set;
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::has_operation() const
{
    for (std::size_t index=0; index<igp_information.len(); index++)
    {
        if(igp_information[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<srgb_information.len(); index++)
    {
        if(srgb_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(ipv4_bgp_router_id_set.yfilter)
	|| ydk::is_set(ipv4_bgp_router_id.yfilter)
	|| ydk::is_set(ipv4te_router_id_set.yfilter)
	|| ydk::is_set(ipv4te_router_id.yfilter);
}

std::string Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-protocol-identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (ipv4_bgp_router_id_set.is_set || is_set(ipv4_bgp_router_id_set.yfilter)) leaf_name_data.push_back(ipv4_bgp_router_id_set.get_name_leafdata());
    if (ipv4_bgp_router_id.is_set || is_set(ipv4_bgp_router_id.yfilter)) leaf_name_data.push_back(ipv4_bgp_router_id.get_name_leafdata());
    if (ipv4te_router_id_set.is_set || is_set(ipv4te_router_id_set.yfilter)) leaf_name_data.push_back(ipv4te_router_id_set.get_name_leafdata());
    if (ipv4te_router_id.is_set || is_set(ipv4te_router_id.yfilter)) leaf_name_data.push_back(ipv4te_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp-information")
    {
        auto ent_ = std::make_shared<Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation>();
        ent_->parent = this;
        igp_information.append(ent_);
        return ent_;
    }

    if(child_yang_name == "srgb-information")
    {
        auto ent_ = std::make_shared<Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation>();
        ent_->parent = this;
        srgb_information.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : igp_information.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : srgb_information.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-bgp-router-id-set")
    {
        ipv4_bgp_router_id_set = value;
        ipv4_bgp_router_id_set.value_namespace = name_space;
        ipv4_bgp_router_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-bgp-router-id")
    {
        ipv4_bgp_router_id = value;
        ipv4_bgp_router_id.value_namespace = name_space;
        ipv4_bgp_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4te-router-id-set")
    {
        ipv4te_router_id_set = value;
        ipv4te_router_id_set.value_namespace = name_space;
        ipv4te_router_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4te-router-id")
    {
        ipv4te_router_id = value;
        ipv4te_router_id.value_namespace = name_space;
        ipv4te_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-bgp-router-id-set")
    {
        ipv4_bgp_router_id_set.yfilter = yfilter;
    }
    if(value_path == "ipv4-bgp-router-id")
    {
        ipv4_bgp_router_id.yfilter = yfilter;
    }
    if(value_path == "ipv4te-router-id-set")
    {
        ipv4te_router_id_set.yfilter = yfilter;
    }
    if(value_path == "ipv4te-router-id")
    {
        ipv4te_router_id.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-information" || name == "srgb-information" || name == "node-name" || name == "ipv4-bgp-router-id-set" || name == "ipv4-bgp-router-id" || name == "ipv4te-router-id-set" || name == "ipv4te-router-id")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::IgpInformation()
    :
    domain_identifier{YType::uint64, "domain-identifier"}
        ,
    node_id(std::make_shared<Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId>())
{
    node_id->parent = this;

    yang_name = "igp-information"; yang_parent_name = "node-protocol-identifier"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::~IgpInformation()
{
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::has_data() const
{
    if (is_presence_container) return true;
    return domain_identifier.is_set
	|| (node_id !=  nullptr && node_id->has_data());
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_identifier.yfilter)
	|| (node_id !=  nullptr && node_id->has_operation());
}

std::string Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-information";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_identifier.is_set || is_set(domain_identifier.yfilter)) leaf_name_data.push_back(domain_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-id")
    {
        if(node_id == nullptr)
        {
            node_id = std::make_shared<Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId>();
        }
        return node_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(node_id != nullptr)
    {
        _children["node-id"] = node_id;
    }

    return _children;
}

void Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier = value;
        domain_identifier.value_namespace = name_space;
        domain_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-id" || name == "domain-identifier")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::NodeId()
    :
    autonomous_system_number{YType::uint32, "autonomous-system-number"},
    ls_identifier{YType::uint32, "ls-identifier"}
        ,
    igp(std::make_shared<Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp>())
{
    igp->parent = this;

    yang_name = "node-id"; yang_parent_name = "igp-information"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::~NodeId()
{
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::has_data() const
{
    if (is_presence_container) return true;
    return autonomous_system_number.is_set
	|| ls_identifier.is_set
	|| (igp !=  nullptr && igp->has_data());
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(autonomous_system_number.yfilter)
	|| ydk::is_set(ls_identifier.yfilter)
	|| (igp !=  nullptr && igp->has_operation());
}

std::string Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (autonomous_system_number.is_set || is_set(autonomous_system_number.yfilter)) leaf_name_data.push_back(autonomous_system_number.get_name_leafdata());
    if (ls_identifier.is_set || is_set(ls_identifier.yfilter)) leaf_name_data.push_back(ls_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp")
    {
        if(igp == nullptr)
        {
            igp = std::make_shared<Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp>();
        }
        return igp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(igp != nullptr)
    {
        _children["igp"] = igp;
    }

    return _children;
}

void Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number = value;
        autonomous_system_number.value_namespace = name_space;
        autonomous_system_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-identifier")
    {
        ls_identifier = value;
        ls_identifier.value_namespace = name_space;
        ls_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number.yfilter = yfilter;
    }
    if(value_path == "ls-identifier")
    {
        ls_identifier.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp" || name == "autonomous-system-number" || name == "ls-identifier")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Igp()
    :
    igp_id{YType::enumeration, "igp-id"}
        ,
    isis(std::make_shared<Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis>())
    , ospf(std::make_shared<Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf>())
    , bgp(std::make_shared<Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp>())
{
    isis->parent = this;
    ospf->parent = this;
    bgp->parent = this;

    yang_name = "igp"; yang_parent_name = "node-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::~Igp()
{
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::has_data() const
{
    if (is_presence_container) return true;
    return igp_id.is_set
	|| (isis !=  nullptr && isis->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (bgp !=  nullptr && bgp->has_data());
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_id.yfilter)
	|| (isis !=  nullptr && isis->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation());
}

std::string Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_id.is_set || is_set(igp_id.yfilter)) leaf_name_data.push_back(igp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp>();
        }
        return bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(isis != nullptr)
    {
        _children["isis"] = isis;
    }

    if(ospf != nullptr)
    {
        _children["ospf"] = ospf;
    }

    if(bgp != nullptr)
    {
        _children["bgp"] = bgp;
    }

    return _children;
}

void Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-id")
    {
        igp_id = value;
        igp_id.value_namespace = name_space;
        igp_id.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-id")
    {
        igp_id.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis" || name == "ospf" || name == "bgp" || name == "igp-id")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::Isis()
    :
    system_id{YType::str, "system-id"},
    level{YType::uint32, "level"}
{

    yang_name = "isis"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::~Isis()
{
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::has_data() const
{
    if (is_presence_container) return true;
    return system_id.is_set
	|| level.is_set;
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "level")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::Ospf()
    :
    router_id{YType::str, "router-id"},
    area{YType::uint32, "area"}
{

    yang_name = "ospf"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::~Ospf()
{
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| area.is_set;
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(area.yfilter);
}

std::string Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "area")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::Bgp()
    :
    router_id{YType::str, "router-id"},
    confed_asn{YType::uint32, "confed-asn"}
{

    yang_name = "bgp"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::~Bgp()
{
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| confed_asn.is_set;
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(confed_asn.yfilter);
}

std::string Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (confed_asn.is_set || is_set(confed_asn.yfilter)) leaf_name_data.push_back(confed_asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "confed-asn")
    {
        confed_asn = value;
        confed_asn.value_namespace = name_space;
        confed_asn.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "confed-asn")
    {
        confed_asn.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "confed-asn")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::SrgbInformation()
    :
    start{YType::uint32, "start"},
    size{YType::uint32, "size"},
    domain_identifier{YType::uint64, "domain-identifier"}
        ,
    node_id(std::make_shared<Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId>())
{
    node_id->parent = this;

    yang_name = "srgb-information"; yang_parent_name = "node-protocol-identifier"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::~SrgbInformation()
{
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::has_data() const
{
    if (is_presence_container) return true;
    return start.is_set
	|| size.is_set
	|| domain_identifier.is_set
	|| (node_id !=  nullptr && node_id->has_data());
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start.yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(domain_identifier.yfilter)
	|| (node_id !=  nullptr && node_id->has_operation());
}

std::string Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srgb-information";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (domain_identifier.is_set || is_set(domain_identifier.yfilter)) leaf_name_data.push_back(domain_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-id")
    {
        if(node_id == nullptr)
        {
            node_id = std::make_shared<Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId>();
        }
        return node_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(node_id != nullptr)
    {
        _children["node-id"] = node_id;
    }

    return _children;
}

void Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-identifier")
    {
        domain_identifier = value;
        domain_identifier.value_namespace = name_space;
        domain_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "domain-identifier")
    {
        domain_identifier.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-id" || name == "start" || name == "size" || name == "domain-identifier")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::NodeId()
    :
    autonomous_system_number{YType::uint32, "autonomous-system-number"},
    ls_identifier{YType::uint32, "ls-identifier"}
        ,
    igp(std::make_shared<Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp>())
{
    igp->parent = this;

    yang_name = "node-id"; yang_parent_name = "srgb-information"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::~NodeId()
{
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::has_data() const
{
    if (is_presence_container) return true;
    return autonomous_system_number.is_set
	|| ls_identifier.is_set
	|| (igp !=  nullptr && igp->has_data());
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(autonomous_system_number.yfilter)
	|| ydk::is_set(ls_identifier.yfilter)
	|| (igp !=  nullptr && igp->has_operation());
}

std::string Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (autonomous_system_number.is_set || is_set(autonomous_system_number.yfilter)) leaf_name_data.push_back(autonomous_system_number.get_name_leafdata());
    if (ls_identifier.is_set || is_set(ls_identifier.yfilter)) leaf_name_data.push_back(ls_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp")
    {
        if(igp == nullptr)
        {
            igp = std::make_shared<Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp>();
        }
        return igp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(igp != nullptr)
    {
        _children["igp"] = igp;
    }

    return _children;
}

void Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number = value;
        autonomous_system_number.value_namespace = name_space;
        autonomous_system_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-identifier")
    {
        ls_identifier = value;
        ls_identifier.value_namespace = name_space;
        ls_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number.yfilter = yfilter;
    }
    if(value_path == "ls-identifier")
    {
        ls_identifier.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp" || name == "autonomous-system-number" || name == "ls-identifier")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Igp()
    :
    igp_id{YType::enumeration, "igp-id"}
        ,
    isis(std::make_shared<Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis>())
    , ospf(std::make_shared<Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf>())
    , bgp(std::make_shared<Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp>())
{
    isis->parent = this;
    ospf->parent = this;
    bgp->parent = this;

    yang_name = "igp"; yang_parent_name = "node-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::~Igp()
{
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::has_data() const
{
    if (is_presence_container) return true;
    return igp_id.is_set
	|| (isis !=  nullptr && isis->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (bgp !=  nullptr && bgp->has_data());
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_id.yfilter)
	|| (isis !=  nullptr && isis->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation());
}

std::string Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_id.is_set || is_set(igp_id.yfilter)) leaf_name_data.push_back(igp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp>();
        }
        return bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(isis != nullptr)
    {
        _children["isis"] = isis;
    }

    if(ospf != nullptr)
    {
        _children["ospf"] = ospf;
    }

    if(bgp != nullptr)
    {
        _children["bgp"] = bgp;
    }

    return _children;
}

void Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-id")
    {
        igp_id = value;
        igp_id.value_namespace = name_space;
        igp_id.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-id")
    {
        igp_id.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis" || name == "ospf" || name == "bgp" || name == "igp-id")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::Isis()
    :
    system_id{YType::str, "system-id"},
    level{YType::uint32, "level"}
{

    yang_name = "isis"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::~Isis()
{
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::has_data() const
{
    if (is_presence_container) return true;
    return system_id.is_set
	|| level.is_set;
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "level")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::Ospf()
    :
    router_id{YType::str, "router-id"},
    area{YType::uint32, "area"}
{

    yang_name = "ospf"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::~Ospf()
{
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| area.is_set;
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(area.yfilter);
}

std::string Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "area")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::Bgp()
    :
    router_id{YType::str, "router-id"},
    confed_asn{YType::uint32, "confed-asn"}
{

    yang_name = "bgp"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::~Bgp()
{
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| confed_asn.is_set;
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(confed_asn.yfilter);
}

std::string Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (confed_asn.is_set || is_set(confed_asn.yfilter)) leaf_name_data.push_back(confed_asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "confed-asn")
    {
        confed_asn = value;
        confed_asn.value_namespace = name_space;
        confed_asn.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "confed-asn")
    {
        confed_asn.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "confed-asn")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Prefixe::Prefixe()
    :
    domain_identifier{YType::uint64, "domain-identifier"}
        ,
    pfx_sid(std::make_shared<Pce::TopologyNodes::TopologyNode::Prefixe::PfxSid>())
    , node_id(std::make_shared<Pce::TopologyNodes::TopologyNode::Prefixe::NodeId>())
{
    pfx_sid->parent = this;
    node_id->parent = this;

    yang_name = "prefixe"; yang_parent_name = "topology-node"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::Prefixe::~Prefixe()
{
}

bool Pce::TopologyNodes::TopologyNode::Prefixe::has_data() const
{
    if (is_presence_container) return true;
    return domain_identifier.is_set
	|| (pfx_sid !=  nullptr && pfx_sid->has_data())
	|| (node_id !=  nullptr && node_id->has_data());
}

bool Pce::TopologyNodes::TopologyNode::Prefixe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_identifier.yfilter)
	|| (pfx_sid !=  nullptr && pfx_sid->has_operation())
	|| (node_id !=  nullptr && node_id->has_operation());
}

std::string Pce::TopologyNodes::TopologyNode::Prefixe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixe";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Prefixe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_identifier.is_set || is_set(domain_identifier.yfilter)) leaf_name_data.push_back(domain_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::Prefixe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pfx-sid")
    {
        if(pfx_sid == nullptr)
        {
            pfx_sid = std::make_shared<Pce::TopologyNodes::TopologyNode::Prefixe::PfxSid>();
        }
        return pfx_sid;
    }

    if(child_yang_name == "node-id")
    {
        if(node_id == nullptr)
        {
            node_id = std::make_shared<Pce::TopologyNodes::TopologyNode::Prefixe::NodeId>();
        }
        return node_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::Prefixe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pfx_sid != nullptr)
    {
        _children["pfx-sid"] = pfx_sid;
    }

    if(node_id != nullptr)
    {
        _children["node-id"] = node_id;
    }

    return _children;
}

void Pce::TopologyNodes::TopologyNode::Prefixe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier = value;
        domain_identifier.value_namespace = name_space;
        domain_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::Prefixe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Prefixe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pfx-sid" || name == "node-id" || name == "domain-identifier")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Prefixe::PfxSid::PfxSid()
    :
    sid_type{YType::enumeration, "sid-type"},
    mpls_label{YType::uint32, "mpls-label"},
    rflag{YType::boolean, "rflag"},
    nflag{YType::boolean, "nflag"},
    pflag{YType::boolean, "pflag"},
    eflag{YType::boolean, "eflag"},
    vflag{YType::boolean, "vflag"},
    lflag{YType::boolean, "lflag"}
        ,
    sid_prefix(std::make_shared<Pce::TopologyNodes::TopologyNode::Prefixe::PfxSid::SidPrefix>())
{
    sid_prefix->parent = this;

    yang_name = "pfx-sid"; yang_parent_name = "prefixe"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::Prefixe::PfxSid::~PfxSid()
{
}

bool Pce::TopologyNodes::TopologyNode::Prefixe::PfxSid::has_data() const
{
    if (is_presence_container) return true;
    return sid_type.is_set
	|| mpls_label.is_set
	|| rflag.is_set
	|| nflag.is_set
	|| pflag.is_set
	|| eflag.is_set
	|| vflag.is_set
	|| lflag.is_set
	|| (sid_prefix !=  nullptr && sid_prefix->has_data());
}

bool Pce::TopologyNodes::TopologyNode::Prefixe::PfxSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid_type.yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| ydk::is_set(rflag.yfilter)
	|| ydk::is_set(nflag.yfilter)
	|| ydk::is_set(pflag.yfilter)
	|| ydk::is_set(eflag.yfilter)
	|| ydk::is_set(vflag.yfilter)
	|| ydk::is_set(lflag.yfilter)
	|| (sid_prefix !=  nullptr && sid_prefix->has_operation());
}

std::string Pce::TopologyNodes::TopologyNode::Prefixe::PfxSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfx-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Prefixe::PfxSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid_type.is_set || is_set(sid_type.yfilter)) leaf_name_data.push_back(sid_type.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (rflag.is_set || is_set(rflag.yfilter)) leaf_name_data.push_back(rflag.get_name_leafdata());
    if (nflag.is_set || is_set(nflag.yfilter)) leaf_name_data.push_back(nflag.get_name_leafdata());
    if (pflag.is_set || is_set(pflag.yfilter)) leaf_name_data.push_back(pflag.get_name_leafdata());
    if (eflag.is_set || is_set(eflag.yfilter)) leaf_name_data.push_back(eflag.get_name_leafdata());
    if (vflag.is_set || is_set(vflag.yfilter)) leaf_name_data.push_back(vflag.get_name_leafdata());
    if (lflag.is_set || is_set(lflag.yfilter)) leaf_name_data.push_back(lflag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::Prefixe::PfxSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sid-prefix")
    {
        if(sid_prefix == nullptr)
        {
            sid_prefix = std::make_shared<Pce::TopologyNodes::TopologyNode::Prefixe::PfxSid::SidPrefix>();
        }
        return sid_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::Prefixe::PfxSid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sid_prefix != nullptr)
    {
        _children["sid-prefix"] = sid_prefix;
    }

    return _children;
}

void Pce::TopologyNodes::TopologyNode::Prefixe::PfxSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid-type")
    {
        sid_type = value;
        sid_type.value_namespace = name_space;
        sid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rflag")
    {
        rflag = value;
        rflag.value_namespace = name_space;
        rflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nflag")
    {
        nflag = value;
        nflag.value_namespace = name_space;
        nflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pflag")
    {
        pflag = value;
        pflag.value_namespace = name_space;
        pflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eflag")
    {
        eflag = value;
        eflag.value_namespace = name_space;
        eflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vflag")
    {
        vflag = value;
        vflag.value_namespace = name_space;
        vflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lflag")
    {
        lflag = value;
        lflag.value_namespace = name_space;
        lflag.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::Prefixe::PfxSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid-type")
    {
        sid_type.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
    if(value_path == "rflag")
    {
        rflag.yfilter = yfilter;
    }
    if(value_path == "nflag")
    {
        nflag.yfilter = yfilter;
    }
    if(value_path == "pflag")
    {
        pflag.yfilter = yfilter;
    }
    if(value_path == "eflag")
    {
        eflag.yfilter = yfilter;
    }
    if(value_path == "vflag")
    {
        vflag.yfilter = yfilter;
    }
    if(value_path == "lflag")
    {
        lflag.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Prefixe::PfxSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-prefix" || name == "sid-type" || name == "mpls-label" || name == "rflag" || name == "nflag" || name == "pflag" || name == "eflag" || name == "vflag" || name == "lflag")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Prefixe::PfxSid::SidPrefix::SidPrefix()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "sid-prefix"; yang_parent_name = "pfx-sid"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::Prefixe::PfxSid::SidPrefix::~SidPrefix()
{
}

bool Pce::TopologyNodes::TopologyNode::Prefixe::PfxSid::SidPrefix::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Pce::TopologyNodes::TopologyNode::Prefixe::PfxSid::SidPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Pce::TopologyNodes::TopologyNode::Prefixe::PfxSid::SidPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sid-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Prefixe::PfxSid::SidPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::Prefixe::PfxSid::SidPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::Prefixe::PfxSid::SidPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::TopologyNodes::TopologyNode::Prefixe::PfxSid::SidPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::Prefixe::PfxSid::SidPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Prefixe::PfxSid::SidPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::NodeId()
    :
    autonomous_system_number{YType::uint32, "autonomous-system-number"},
    ls_identifier{YType::uint32, "ls-identifier"}
        ,
    igp(std::make_shared<Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp>())
{
    igp->parent = this;

    yang_name = "node-id"; yang_parent_name = "prefixe"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::~NodeId()
{
}

bool Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::has_data() const
{
    if (is_presence_container) return true;
    return autonomous_system_number.is_set
	|| ls_identifier.is_set
	|| (igp !=  nullptr && igp->has_data());
}

bool Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(autonomous_system_number.yfilter)
	|| ydk::is_set(ls_identifier.yfilter)
	|| (igp !=  nullptr && igp->has_operation());
}

std::string Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (autonomous_system_number.is_set || is_set(autonomous_system_number.yfilter)) leaf_name_data.push_back(autonomous_system_number.get_name_leafdata());
    if (ls_identifier.is_set || is_set(ls_identifier.yfilter)) leaf_name_data.push_back(ls_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp")
    {
        if(igp == nullptr)
        {
            igp = std::make_shared<Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp>();
        }
        return igp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(igp != nullptr)
    {
        _children["igp"] = igp;
    }

    return _children;
}

void Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number = value;
        autonomous_system_number.value_namespace = name_space;
        autonomous_system_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-identifier")
    {
        ls_identifier = value;
        ls_identifier.value_namespace = name_space;
        ls_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number.yfilter = yfilter;
    }
    if(value_path == "ls-identifier")
    {
        ls_identifier.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp" || name == "autonomous-system-number" || name == "ls-identifier")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Igp()
    :
    igp_id{YType::enumeration, "igp-id"}
        ,
    isis(std::make_shared<Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Isis>())
    , ospf(std::make_shared<Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Ospf>())
    , bgp(std::make_shared<Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Bgp>())
{
    isis->parent = this;
    ospf->parent = this;
    bgp->parent = this;

    yang_name = "igp"; yang_parent_name = "node-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::~Igp()
{
}

bool Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::has_data() const
{
    if (is_presence_container) return true;
    return igp_id.is_set
	|| (isis !=  nullptr && isis->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (bgp !=  nullptr && bgp->has_data());
}

bool Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_id.yfilter)
	|| (isis !=  nullptr && isis->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation());
}

std::string Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_id.is_set || is_set(igp_id.yfilter)) leaf_name_data.push_back(igp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Bgp>();
        }
        return bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(isis != nullptr)
    {
        _children["isis"] = isis;
    }

    if(ospf != nullptr)
    {
        _children["ospf"] = ospf;
    }

    if(bgp != nullptr)
    {
        _children["bgp"] = bgp;
    }

    return _children;
}

void Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-id")
    {
        igp_id = value;
        igp_id.value_namespace = name_space;
        igp_id.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-id")
    {
        igp_id.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis" || name == "ospf" || name == "bgp" || name == "igp-id")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Isis::Isis()
    :
    system_id{YType::str, "system-id"},
    level{YType::uint32, "level"}
{

    yang_name = "isis"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Isis::~Isis()
{
}

bool Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Isis::has_data() const
{
    if (is_presence_container) return true;
    return system_id.is_set
	|| level.is_set;
}

bool Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "level")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Ospf::Ospf()
    :
    router_id{YType::str, "router-id"},
    area{YType::uint32, "area"}
{

    yang_name = "ospf"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Ospf::~Ospf()
{
}

bool Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Ospf::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| area.is_set;
}

bool Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(area.yfilter);
}

std::string Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "area")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Bgp::Bgp()
    :
    router_id{YType::str, "router-id"},
    confed_asn{YType::uint32, "confed-asn"}
{

    yang_name = "bgp"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Bgp::~Bgp()
{
}

bool Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Bgp::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| confed_asn.is_set;
}

bool Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(confed_asn.yfilter);
}

std::string Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (confed_asn.is_set || is_set(confed_asn.yfilter)) leaf_name_data.push_back(confed_asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "confed-asn")
    {
        confed_asn = value;
        confed_asn.value_namespace = name_space;
        confed_asn.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "confed-asn")
    {
        confed_asn.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Prefixe::NodeId::Igp::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "confed-asn")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::Ipv4Link()
    :
    local_ipv4_address{YType::str, "local-ipv4-address"},
    remote_ipv4_address{YType::str, "remote-ipv4-address"},
    igp_metric{YType::uint32, "igp-metric"},
    te_metric{YType::uint32, "te-metric"},
    maximum_link_bandwidth{YType::uint64, "maximum-link-bandwidth"},
    max_reservable_bandwidth{YType::uint64, "max-reservable-bandwidth"},
    administrative_groups{YType::uint32, "administrative-groups"},
    srlgs{YType::uint32, "srlgs"}
        ,
    local_igp_information(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation>())
    , remote_node_protocol_identifier(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier>())
    , performance_metrics(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link::PerformanceMetrics>())
    , adjacency_sid(this, {})
{
    local_igp_information->parent = this;
    remote_node_protocol_identifier->parent = this;
    performance_metrics->parent = this;

    yang_name = "ipv4-link"; yang_parent_name = "topology-node"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::~Ipv4Link()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<adjacency_sid.len(); index++)
    {
        if(adjacency_sid[index]->has_data())
            return true;
    }
    for (auto const & leaf : srlgs.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return local_ipv4_address.is_set
	|| remote_ipv4_address.is_set
	|| igp_metric.is_set
	|| te_metric.is_set
	|| maximum_link_bandwidth.is_set
	|| max_reservable_bandwidth.is_set
	|| administrative_groups.is_set
	|| (local_igp_information !=  nullptr && local_igp_information->has_data())
	|| (remote_node_protocol_identifier !=  nullptr && remote_node_protocol_identifier->has_data())
	|| (performance_metrics !=  nullptr && performance_metrics->has_data());
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::has_operation() const
{
    for (std::size_t index=0; index<adjacency_sid.len(); index++)
    {
        if(adjacency_sid[index]->has_operation())
            return true;
    }
    for (auto const & leaf : srlgs.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(local_ipv4_address.yfilter)
	|| ydk::is_set(remote_ipv4_address.yfilter)
	|| ydk::is_set(igp_metric.yfilter)
	|| ydk::is_set(te_metric.yfilter)
	|| ydk::is_set(maximum_link_bandwidth.yfilter)
	|| ydk::is_set(max_reservable_bandwidth.yfilter)
	|| ydk::is_set(administrative_groups.yfilter)
	|| ydk::is_set(srlgs.yfilter)
	|| (local_igp_information !=  nullptr && local_igp_information->has_operation())
	|| (remote_node_protocol_identifier !=  nullptr && remote_node_protocol_identifier->has_operation())
	|| (performance_metrics !=  nullptr && performance_metrics->has_operation());
}

std::string Pce::TopologyNodes::TopologyNode::Ipv4Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-link";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Ipv4Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_ipv4_address.is_set || is_set(local_ipv4_address.yfilter)) leaf_name_data.push_back(local_ipv4_address.get_name_leafdata());
    if (remote_ipv4_address.is_set || is_set(remote_ipv4_address.yfilter)) leaf_name_data.push_back(remote_ipv4_address.get_name_leafdata());
    if (igp_metric.is_set || is_set(igp_metric.yfilter)) leaf_name_data.push_back(igp_metric.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.yfilter)) leaf_name_data.push_back(te_metric.get_name_leafdata());
    if (maximum_link_bandwidth.is_set || is_set(maximum_link_bandwidth.yfilter)) leaf_name_data.push_back(maximum_link_bandwidth.get_name_leafdata());
    if (max_reservable_bandwidth.is_set || is_set(max_reservable_bandwidth.yfilter)) leaf_name_data.push_back(max_reservable_bandwidth.get_name_leafdata());
    if (administrative_groups.is_set || is_set(administrative_groups.yfilter)) leaf_name_data.push_back(administrative_groups.get_name_leafdata());

    auto srlgs_name_datas = srlgs.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), srlgs_name_datas.begin(), srlgs_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::Ipv4Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-igp-information")
    {
        if(local_igp_information == nullptr)
        {
            local_igp_information = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation>();
        }
        return local_igp_information;
    }

    if(child_yang_name == "remote-node-protocol-identifier")
    {
        if(remote_node_protocol_identifier == nullptr)
        {
            remote_node_protocol_identifier = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier>();
        }
        return remote_node_protocol_identifier;
    }

    if(child_yang_name == "performance-metrics")
    {
        if(performance_metrics == nullptr)
        {
            performance_metrics = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link::PerformanceMetrics>();
        }
        return performance_metrics;
    }

    if(child_yang_name == "adjacency-sid")
    {
        auto ent_ = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid>();
        ent_->parent = this;
        adjacency_sid.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::Ipv4Link::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local_igp_information != nullptr)
    {
        _children["local-igp-information"] = local_igp_information;
    }

    if(remote_node_protocol_identifier != nullptr)
    {
        _children["remote-node-protocol-identifier"] = remote_node_protocol_identifier;
    }

    if(performance_metrics != nullptr)
    {
        _children["performance-metrics"] = performance_metrics;
    }

    count_ = 0;
    for (auto ent_ : adjacency_sid.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-ipv4-address")
    {
        local_ipv4_address = value;
        local_ipv4_address.value_namespace = name_space;
        local_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-ipv4-address")
    {
        remote_ipv4_address = value;
        remote_ipv4_address.value_namespace = name_space;
        remote_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-metric")
    {
        igp_metric = value;
        igp_metric.value_namespace = name_space;
        igp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-metric")
    {
        te_metric = value;
        te_metric.value_namespace = name_space;
        te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-link-bandwidth")
    {
        maximum_link_bandwidth = value;
        maximum_link_bandwidth.value_namespace = name_space;
        maximum_link_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-reservable-bandwidth")
    {
        max_reservable_bandwidth = value;
        max_reservable_bandwidth.value_namespace = name_space;
        max_reservable_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "administrative-groups")
    {
        administrative_groups = value;
        administrative_groups.value_namespace = name_space;
        administrative_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlgs")
    {
        srlgs.append(value);
    }
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-ipv4-address")
    {
        local_ipv4_address.yfilter = yfilter;
    }
    if(value_path == "remote-ipv4-address")
    {
        remote_ipv4_address.yfilter = yfilter;
    }
    if(value_path == "igp-metric")
    {
        igp_metric.yfilter = yfilter;
    }
    if(value_path == "te-metric")
    {
        te_metric.yfilter = yfilter;
    }
    if(value_path == "maximum-link-bandwidth")
    {
        maximum_link_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-reservable-bandwidth")
    {
        max_reservable_bandwidth.yfilter = yfilter;
    }
    if(value_path == "administrative-groups")
    {
        administrative_groups.yfilter = yfilter;
    }
    if(value_path == "srlgs")
    {
        srlgs.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-igp-information" || name == "remote-node-protocol-identifier" || name == "performance-metrics" || name == "adjacency-sid" || name == "local-ipv4-address" || name == "remote-ipv4-address" || name == "igp-metric" || name == "te-metric" || name == "maximum-link-bandwidth" || name == "max-reservable-bandwidth" || name == "administrative-groups" || name == "srlgs")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::LocalIgpInformation()
    :
    domain_identifier{YType::uint64, "domain-identifier"}
        ,
    node_id(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId>())
{
    node_id->parent = this;

    yang_name = "local-igp-information"; yang_parent_name = "ipv4-link"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::~LocalIgpInformation()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::has_data() const
{
    if (is_presence_container) return true;
    return domain_identifier.is_set
	|| (node_id !=  nullptr && node_id->has_data());
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_identifier.yfilter)
	|| (node_id !=  nullptr && node_id->has_operation());
}

std::string Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-igp-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_identifier.is_set || is_set(domain_identifier.yfilter)) leaf_name_data.push_back(domain_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-id")
    {
        if(node_id == nullptr)
        {
            node_id = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId>();
        }
        return node_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(node_id != nullptr)
    {
        _children["node-id"] = node_id;
    }

    return _children;
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier = value;
        domain_identifier.value_namespace = name_space;
        domain_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-id" || name == "domain-identifier")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::NodeId()
    :
    autonomous_system_number{YType::uint32, "autonomous-system-number"},
    ls_identifier{YType::uint32, "ls-identifier"}
        ,
    igp(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp>())
{
    igp->parent = this;

    yang_name = "node-id"; yang_parent_name = "local-igp-information"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::~NodeId()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::has_data() const
{
    if (is_presence_container) return true;
    return autonomous_system_number.is_set
	|| ls_identifier.is_set
	|| (igp !=  nullptr && igp->has_data());
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(autonomous_system_number.yfilter)
	|| ydk::is_set(ls_identifier.yfilter)
	|| (igp !=  nullptr && igp->has_operation());
}

std::string Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (autonomous_system_number.is_set || is_set(autonomous_system_number.yfilter)) leaf_name_data.push_back(autonomous_system_number.get_name_leafdata());
    if (ls_identifier.is_set || is_set(ls_identifier.yfilter)) leaf_name_data.push_back(ls_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp")
    {
        if(igp == nullptr)
        {
            igp = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp>();
        }
        return igp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(igp != nullptr)
    {
        _children["igp"] = igp;
    }

    return _children;
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number = value;
        autonomous_system_number.value_namespace = name_space;
        autonomous_system_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-identifier")
    {
        ls_identifier = value;
        ls_identifier.value_namespace = name_space;
        ls_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number.yfilter = yfilter;
    }
    if(value_path == "ls-identifier")
    {
        ls_identifier.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp" || name == "autonomous-system-number" || name == "ls-identifier")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Igp()
    :
    igp_id{YType::enumeration, "igp-id"}
        ,
    isis(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Isis>())
    , ospf(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Ospf>())
    , bgp(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Bgp>())
{
    isis->parent = this;
    ospf->parent = this;
    bgp->parent = this;

    yang_name = "igp"; yang_parent_name = "node-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::~Igp()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::has_data() const
{
    if (is_presence_container) return true;
    return igp_id.is_set
	|| (isis !=  nullptr && isis->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (bgp !=  nullptr && bgp->has_data());
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_id.yfilter)
	|| (isis !=  nullptr && isis->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation());
}

std::string Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_id.is_set || is_set(igp_id.yfilter)) leaf_name_data.push_back(igp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Bgp>();
        }
        return bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(isis != nullptr)
    {
        _children["isis"] = isis;
    }

    if(ospf != nullptr)
    {
        _children["ospf"] = ospf;
    }

    if(bgp != nullptr)
    {
        _children["bgp"] = bgp;
    }

    return _children;
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-id")
    {
        igp_id = value;
        igp_id.value_namespace = name_space;
        igp_id.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-id")
    {
        igp_id.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis" || name == "ospf" || name == "bgp" || name == "igp-id")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Isis::Isis()
    :
    system_id{YType::str, "system-id"},
    level{YType::uint32, "level"}
{

    yang_name = "isis"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Isis::~Isis()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Isis::has_data() const
{
    if (is_presence_container) return true;
    return system_id.is_set
	|| level.is_set;
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "level")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Ospf::Ospf()
    :
    router_id{YType::str, "router-id"},
    area{YType::uint32, "area"}
{

    yang_name = "ospf"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Ospf::~Ospf()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Ospf::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| area.is_set;
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(area.yfilter);
}

std::string Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "area")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Bgp::Bgp()
    :
    router_id{YType::str, "router-id"},
    confed_asn{YType::uint32, "confed-asn"}
{

    yang_name = "bgp"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Bgp::~Bgp()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Bgp::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| confed_asn.is_set;
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(confed_asn.yfilter);
}

std::string Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (confed_asn.is_set || is_set(confed_asn.yfilter)) leaf_name_data.push_back(confed_asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "confed-asn")
    {
        confed_asn = value;
        confed_asn.value_namespace = name_space;
        confed_asn.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "confed-asn")
    {
        confed_asn.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::LocalIgpInformation::NodeId::Igp::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "confed-asn")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::RemoteNodeProtocolIdentifier()
    :
    node_name{YType::str, "node-name"},
    ipv4_bgp_router_id_set{YType::boolean, "ipv4-bgp-router-id-set"},
    ipv4_bgp_router_id{YType::str, "ipv4-bgp-router-id"},
    ipv4te_router_id_set{YType::boolean, "ipv4te-router-id-set"},
    ipv4te_router_id{YType::str, "ipv4te-router-id"}
        ,
    igp_information(this, {})
    , srgb_information(this, {})
{

    yang_name = "remote-node-protocol-identifier"; yang_parent_name = "ipv4-link"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::~RemoteNodeProtocolIdentifier()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<igp_information.len(); index++)
    {
        if(igp_information[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<srgb_information.len(); index++)
    {
        if(srgb_information[index]->has_data())
            return true;
    }
    return node_name.is_set
	|| ipv4_bgp_router_id_set.is_set
	|| ipv4_bgp_router_id.is_set
	|| ipv4te_router_id_set.is_set
	|| ipv4te_router_id.is_set;
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::has_operation() const
{
    for (std::size_t index=0; index<igp_information.len(); index++)
    {
        if(igp_information[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<srgb_information.len(); index++)
    {
        if(srgb_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(ipv4_bgp_router_id_set.yfilter)
	|| ydk::is_set(ipv4_bgp_router_id.yfilter)
	|| ydk::is_set(ipv4te_router_id_set.yfilter)
	|| ydk::is_set(ipv4te_router_id.yfilter);
}

std::string Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-node-protocol-identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (ipv4_bgp_router_id_set.is_set || is_set(ipv4_bgp_router_id_set.yfilter)) leaf_name_data.push_back(ipv4_bgp_router_id_set.get_name_leafdata());
    if (ipv4_bgp_router_id.is_set || is_set(ipv4_bgp_router_id.yfilter)) leaf_name_data.push_back(ipv4_bgp_router_id.get_name_leafdata());
    if (ipv4te_router_id_set.is_set || is_set(ipv4te_router_id_set.yfilter)) leaf_name_data.push_back(ipv4te_router_id_set.get_name_leafdata());
    if (ipv4te_router_id.is_set || is_set(ipv4te_router_id.yfilter)) leaf_name_data.push_back(ipv4te_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp-information")
    {
        auto ent_ = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation>();
        ent_->parent = this;
        igp_information.append(ent_);
        return ent_;
    }

    if(child_yang_name == "srgb-information")
    {
        auto ent_ = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation>();
        ent_->parent = this;
        srgb_information.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : igp_information.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : srgb_information.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-bgp-router-id-set")
    {
        ipv4_bgp_router_id_set = value;
        ipv4_bgp_router_id_set.value_namespace = name_space;
        ipv4_bgp_router_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-bgp-router-id")
    {
        ipv4_bgp_router_id = value;
        ipv4_bgp_router_id.value_namespace = name_space;
        ipv4_bgp_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4te-router-id-set")
    {
        ipv4te_router_id_set = value;
        ipv4te_router_id_set.value_namespace = name_space;
        ipv4te_router_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4te-router-id")
    {
        ipv4te_router_id = value;
        ipv4te_router_id.value_namespace = name_space;
        ipv4te_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-bgp-router-id-set")
    {
        ipv4_bgp_router_id_set.yfilter = yfilter;
    }
    if(value_path == "ipv4-bgp-router-id")
    {
        ipv4_bgp_router_id.yfilter = yfilter;
    }
    if(value_path == "ipv4te-router-id-set")
    {
        ipv4te_router_id_set.yfilter = yfilter;
    }
    if(value_path == "ipv4te-router-id")
    {
        ipv4te_router_id.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-information" || name == "srgb-information" || name == "node-name" || name == "ipv4-bgp-router-id-set" || name == "ipv4-bgp-router-id" || name == "ipv4te-router-id-set" || name == "ipv4te-router-id")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::IgpInformation()
    :
    domain_identifier{YType::uint64, "domain-identifier"}
        ,
    node_id(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId>())
{
    node_id->parent = this;

    yang_name = "igp-information"; yang_parent_name = "remote-node-protocol-identifier"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::~IgpInformation()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::has_data() const
{
    if (is_presence_container) return true;
    return domain_identifier.is_set
	|| (node_id !=  nullptr && node_id->has_data());
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_identifier.yfilter)
	|| (node_id !=  nullptr && node_id->has_operation());
}

std::string Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-information";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_identifier.is_set || is_set(domain_identifier.yfilter)) leaf_name_data.push_back(domain_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-id")
    {
        if(node_id == nullptr)
        {
            node_id = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId>();
        }
        return node_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(node_id != nullptr)
    {
        _children["node-id"] = node_id;
    }

    return _children;
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier = value;
        domain_identifier.value_namespace = name_space;
        domain_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-id" || name == "domain-identifier")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::NodeId()
    :
    autonomous_system_number{YType::uint32, "autonomous-system-number"},
    ls_identifier{YType::uint32, "ls-identifier"}
        ,
    igp(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp>())
{
    igp->parent = this;

    yang_name = "node-id"; yang_parent_name = "igp-information"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::~NodeId()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::has_data() const
{
    if (is_presence_container) return true;
    return autonomous_system_number.is_set
	|| ls_identifier.is_set
	|| (igp !=  nullptr && igp->has_data());
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(autonomous_system_number.yfilter)
	|| ydk::is_set(ls_identifier.yfilter)
	|| (igp !=  nullptr && igp->has_operation());
}

std::string Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (autonomous_system_number.is_set || is_set(autonomous_system_number.yfilter)) leaf_name_data.push_back(autonomous_system_number.get_name_leafdata());
    if (ls_identifier.is_set || is_set(ls_identifier.yfilter)) leaf_name_data.push_back(ls_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp")
    {
        if(igp == nullptr)
        {
            igp = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp>();
        }
        return igp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(igp != nullptr)
    {
        _children["igp"] = igp;
    }

    return _children;
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number = value;
        autonomous_system_number.value_namespace = name_space;
        autonomous_system_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-identifier")
    {
        ls_identifier = value;
        ls_identifier.value_namespace = name_space;
        ls_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number.yfilter = yfilter;
    }
    if(value_path == "ls-identifier")
    {
        ls_identifier.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp" || name == "autonomous-system-number" || name == "ls-identifier")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Igp()
    :
    igp_id{YType::enumeration, "igp-id"}
        ,
    isis(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis>())
    , ospf(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf>())
    , bgp(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp>())
{
    isis->parent = this;
    ospf->parent = this;
    bgp->parent = this;

    yang_name = "igp"; yang_parent_name = "node-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::~Igp()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::has_data() const
{
    if (is_presence_container) return true;
    return igp_id.is_set
	|| (isis !=  nullptr && isis->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (bgp !=  nullptr && bgp->has_data());
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_id.yfilter)
	|| (isis !=  nullptr && isis->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation());
}

std::string Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_id.is_set || is_set(igp_id.yfilter)) leaf_name_data.push_back(igp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp>();
        }
        return bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(isis != nullptr)
    {
        _children["isis"] = isis;
    }

    if(ospf != nullptr)
    {
        _children["ospf"] = ospf;
    }

    if(bgp != nullptr)
    {
        _children["bgp"] = bgp;
    }

    return _children;
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-id")
    {
        igp_id = value;
        igp_id.value_namespace = name_space;
        igp_id.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-id")
    {
        igp_id.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis" || name == "ospf" || name == "bgp" || name == "igp-id")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::Isis()
    :
    system_id{YType::str, "system-id"},
    level{YType::uint32, "level"}
{

    yang_name = "isis"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::~Isis()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::has_data() const
{
    if (is_presence_container) return true;
    return system_id.is_set
	|| level.is_set;
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "level")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::Ospf()
    :
    router_id{YType::str, "router-id"},
    area{YType::uint32, "area"}
{

    yang_name = "ospf"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::~Ospf()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| area.is_set;
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(area.yfilter);
}

std::string Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "area")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::Bgp()
    :
    router_id{YType::str, "router-id"},
    confed_asn{YType::uint32, "confed-asn"}
{

    yang_name = "bgp"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::~Bgp()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| confed_asn.is_set;
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(confed_asn.yfilter);
}

std::string Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (confed_asn.is_set || is_set(confed_asn.yfilter)) leaf_name_data.push_back(confed_asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "confed-asn")
    {
        confed_asn = value;
        confed_asn.value_namespace = name_space;
        confed_asn.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "confed-asn")
    {
        confed_asn.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "confed-asn")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::SrgbInformation()
    :
    start{YType::uint32, "start"},
    size{YType::uint32, "size"},
    domain_identifier{YType::uint64, "domain-identifier"}
        ,
    node_id(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId>())
{
    node_id->parent = this;

    yang_name = "srgb-information"; yang_parent_name = "remote-node-protocol-identifier"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::~SrgbInformation()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::has_data() const
{
    if (is_presence_container) return true;
    return start.is_set
	|| size.is_set
	|| domain_identifier.is_set
	|| (node_id !=  nullptr && node_id->has_data());
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start.yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(domain_identifier.yfilter)
	|| (node_id !=  nullptr && node_id->has_operation());
}

std::string Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srgb-information";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (domain_identifier.is_set || is_set(domain_identifier.yfilter)) leaf_name_data.push_back(domain_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-id")
    {
        if(node_id == nullptr)
        {
            node_id = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId>();
        }
        return node_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(node_id != nullptr)
    {
        _children["node-id"] = node_id;
    }

    return _children;
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-identifier")
    {
        domain_identifier = value;
        domain_identifier.value_namespace = name_space;
        domain_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "domain-identifier")
    {
        domain_identifier.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-id" || name == "start" || name == "size" || name == "domain-identifier")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::NodeId()
    :
    autonomous_system_number{YType::uint32, "autonomous-system-number"},
    ls_identifier{YType::uint32, "ls-identifier"}
        ,
    igp(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp>())
{
    igp->parent = this;

    yang_name = "node-id"; yang_parent_name = "srgb-information"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::~NodeId()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::has_data() const
{
    if (is_presence_container) return true;
    return autonomous_system_number.is_set
	|| ls_identifier.is_set
	|| (igp !=  nullptr && igp->has_data());
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(autonomous_system_number.yfilter)
	|| ydk::is_set(ls_identifier.yfilter)
	|| (igp !=  nullptr && igp->has_operation());
}

std::string Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (autonomous_system_number.is_set || is_set(autonomous_system_number.yfilter)) leaf_name_data.push_back(autonomous_system_number.get_name_leafdata());
    if (ls_identifier.is_set || is_set(ls_identifier.yfilter)) leaf_name_data.push_back(ls_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp")
    {
        if(igp == nullptr)
        {
            igp = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp>();
        }
        return igp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(igp != nullptr)
    {
        _children["igp"] = igp;
    }

    return _children;
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number = value;
        autonomous_system_number.value_namespace = name_space;
        autonomous_system_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-identifier")
    {
        ls_identifier = value;
        ls_identifier.value_namespace = name_space;
        ls_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number.yfilter = yfilter;
    }
    if(value_path == "ls-identifier")
    {
        ls_identifier.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp" || name == "autonomous-system-number" || name == "ls-identifier")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Igp()
    :
    igp_id{YType::enumeration, "igp-id"}
        ,
    isis(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis>())
    , ospf(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf>())
    , bgp(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp>())
{
    isis->parent = this;
    ospf->parent = this;
    bgp->parent = this;

    yang_name = "igp"; yang_parent_name = "node-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::~Igp()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::has_data() const
{
    if (is_presence_container) return true;
    return igp_id.is_set
	|| (isis !=  nullptr && isis->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (bgp !=  nullptr && bgp->has_data());
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_id.yfilter)
	|| (isis !=  nullptr && isis->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation());
}

std::string Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_id.is_set || is_set(igp_id.yfilter)) leaf_name_data.push_back(igp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp>();
        }
        return bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(isis != nullptr)
    {
        _children["isis"] = isis;
    }

    if(ospf != nullptr)
    {
        _children["ospf"] = ospf;
    }

    if(bgp != nullptr)
    {
        _children["bgp"] = bgp;
    }

    return _children;
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-id")
    {
        igp_id = value;
        igp_id.value_namespace = name_space;
        igp_id.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-id")
    {
        igp_id.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis" || name == "ospf" || name == "bgp" || name == "igp-id")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::Isis()
    :
    system_id{YType::str, "system-id"},
    level{YType::uint32, "level"}
{

    yang_name = "isis"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::~Isis()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::has_data() const
{
    if (is_presence_container) return true;
    return system_id.is_set
	|| level.is_set;
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "level")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::Ospf()
    :
    router_id{YType::str, "router-id"},
    area{YType::uint32, "area"}
{

    yang_name = "ospf"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::~Ospf()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| area.is_set;
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(area.yfilter);
}

std::string Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "area")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::Bgp()
    :
    router_id{YType::str, "router-id"},
    confed_asn{YType::uint32, "confed-asn"}
{

    yang_name = "bgp"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::~Bgp()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| confed_asn.is_set;
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(confed_asn.yfilter);
}

std::string Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (confed_asn.is_set || is_set(confed_asn.yfilter)) leaf_name_data.push_back(confed_asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "confed-asn")
    {
        confed_asn = value;
        confed_asn.value_namespace = name_space;
        confed_asn.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "confed-asn")
    {
        confed_asn.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "confed-asn")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::PerformanceMetrics::PerformanceMetrics()
    :
    unidirectional_minimum_delay_microseconds{YType::uint32, "unidirectional-minimum-delay-microseconds"}
{

    yang_name = "performance-metrics"; yang_parent_name = "ipv4-link"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::PerformanceMetrics::~PerformanceMetrics()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::PerformanceMetrics::has_data() const
{
    if (is_presence_container) return true;
    return unidirectional_minimum_delay_microseconds.is_set;
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::PerformanceMetrics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unidirectional_minimum_delay_microseconds.yfilter);
}

std::string Pce::TopologyNodes::TopologyNode::Ipv4Link::PerformanceMetrics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "performance-metrics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Ipv4Link::PerformanceMetrics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unidirectional_minimum_delay_microseconds.is_set || is_set(unidirectional_minimum_delay_microseconds.yfilter)) leaf_name_data.push_back(unidirectional_minimum_delay_microseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::Ipv4Link::PerformanceMetrics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::Ipv4Link::PerformanceMetrics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::PerformanceMetrics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unidirectional-minimum-delay-microseconds")
    {
        unidirectional_minimum_delay_microseconds = value;
        unidirectional_minimum_delay_microseconds.value_namespace = name_space;
        unidirectional_minimum_delay_microseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::PerformanceMetrics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unidirectional-minimum-delay-microseconds")
    {
        unidirectional_minimum_delay_microseconds.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::PerformanceMetrics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unidirectional-minimum-delay-microseconds")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::AdjacencySid()
    :
    sid_type{YType::enumeration, "sid-type"},
    mpls_label{YType::uint32, "mpls-label"},
    rflag{YType::boolean, "rflag"},
    nflag{YType::boolean, "nflag"},
    pflag{YType::boolean, "pflag"},
    eflag{YType::boolean, "eflag"},
    vflag{YType::boolean, "vflag"},
    lflag{YType::boolean, "lflag"}
        ,
    sid_prefix(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix>())
{
    sid_prefix->parent = this;

    yang_name = "adjacency-sid"; yang_parent_name = "ipv4-link"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::~AdjacencySid()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::has_data() const
{
    if (is_presence_container) return true;
    return sid_type.is_set
	|| mpls_label.is_set
	|| rflag.is_set
	|| nflag.is_set
	|| pflag.is_set
	|| eflag.is_set
	|| vflag.is_set
	|| lflag.is_set
	|| (sid_prefix !=  nullptr && sid_prefix->has_data());
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid_type.yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| ydk::is_set(rflag.yfilter)
	|| ydk::is_set(nflag.yfilter)
	|| ydk::is_set(pflag.yfilter)
	|| ydk::is_set(eflag.yfilter)
	|| ydk::is_set(vflag.yfilter)
	|| ydk::is_set(lflag.yfilter)
	|| (sid_prefix !=  nullptr && sid_prefix->has_operation());
}

std::string Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid_type.is_set || is_set(sid_type.yfilter)) leaf_name_data.push_back(sid_type.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (rflag.is_set || is_set(rflag.yfilter)) leaf_name_data.push_back(rflag.get_name_leafdata());
    if (nflag.is_set || is_set(nflag.yfilter)) leaf_name_data.push_back(nflag.get_name_leafdata());
    if (pflag.is_set || is_set(pflag.yfilter)) leaf_name_data.push_back(pflag.get_name_leafdata());
    if (eflag.is_set || is_set(eflag.yfilter)) leaf_name_data.push_back(eflag.get_name_leafdata());
    if (vflag.is_set || is_set(vflag.yfilter)) leaf_name_data.push_back(vflag.get_name_leafdata());
    if (lflag.is_set || is_set(lflag.yfilter)) leaf_name_data.push_back(lflag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sid-prefix")
    {
        if(sid_prefix == nullptr)
        {
            sid_prefix = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix>();
        }
        return sid_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sid_prefix != nullptr)
    {
        _children["sid-prefix"] = sid_prefix;
    }

    return _children;
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid-type")
    {
        sid_type = value;
        sid_type.value_namespace = name_space;
        sid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rflag")
    {
        rflag = value;
        rflag.value_namespace = name_space;
        rflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nflag")
    {
        nflag = value;
        nflag.value_namespace = name_space;
        nflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pflag")
    {
        pflag = value;
        pflag.value_namespace = name_space;
        pflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eflag")
    {
        eflag = value;
        eflag.value_namespace = name_space;
        eflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vflag")
    {
        vflag = value;
        vflag.value_namespace = name_space;
        vflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lflag")
    {
        lflag = value;
        lflag.value_namespace = name_space;
        lflag.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid-type")
    {
        sid_type.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
    if(value_path == "rflag")
    {
        rflag.yfilter = yfilter;
    }
    if(value_path == "nflag")
    {
        nflag.yfilter = yfilter;
    }
    if(value_path == "pflag")
    {
        pflag.yfilter = yfilter;
    }
    if(value_path == "eflag")
    {
        eflag.yfilter = yfilter;
    }
    if(value_path == "vflag")
    {
        vflag.yfilter = yfilter;
    }
    if(value_path == "lflag")
    {
        lflag.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-prefix" || name == "sid-type" || name == "mpls-label" || name == "rflag" || name == "nflag" || name == "pflag" || name == "eflag" || name == "vflag" || name == "lflag")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::SidPrefix()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "sid-prefix"; yang_parent_name = "adjacency-sid"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::~SidPrefix()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sid-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::Ipv6Link()
    :
    local_ipv6_address{YType::str, "local-ipv6-address"},
    remote_ipv6_address{YType::str, "remote-ipv6-address"},
    igp_metric{YType::uint32, "igp-metric"},
    te_metric{YType::uint32, "te-metric"},
    maximum_link_bandwidth{YType::uint64, "maximum-link-bandwidth"},
    max_reservable_bandwidth{YType::uint64, "max-reservable-bandwidth"}
        ,
    local_igp_information(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation>())
    , remote_node_protocol_identifier(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier>())
    , adjacency_sid(this, {})
{
    local_igp_information->parent = this;
    remote_node_protocol_identifier->parent = this;

    yang_name = "ipv6-link"; yang_parent_name = "topology-node"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::~Ipv6Link()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<adjacency_sid.len(); index++)
    {
        if(adjacency_sid[index]->has_data())
            return true;
    }
    return local_ipv6_address.is_set
	|| remote_ipv6_address.is_set
	|| igp_metric.is_set
	|| te_metric.is_set
	|| maximum_link_bandwidth.is_set
	|| max_reservable_bandwidth.is_set
	|| (local_igp_information !=  nullptr && local_igp_information->has_data())
	|| (remote_node_protocol_identifier !=  nullptr && remote_node_protocol_identifier->has_data());
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::has_operation() const
{
    for (std::size_t index=0; index<adjacency_sid.len(); index++)
    {
        if(adjacency_sid[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(local_ipv6_address.yfilter)
	|| ydk::is_set(remote_ipv6_address.yfilter)
	|| ydk::is_set(igp_metric.yfilter)
	|| ydk::is_set(te_metric.yfilter)
	|| ydk::is_set(maximum_link_bandwidth.yfilter)
	|| ydk::is_set(max_reservable_bandwidth.yfilter)
	|| (local_igp_information !=  nullptr && local_igp_information->has_operation())
	|| (remote_node_protocol_identifier !=  nullptr && remote_node_protocol_identifier->has_operation());
}

std::string Pce::TopologyNodes::TopologyNode::Ipv6Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-link";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Ipv6Link::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_ipv6_address.is_set || is_set(local_ipv6_address.yfilter)) leaf_name_data.push_back(local_ipv6_address.get_name_leafdata());
    if (remote_ipv6_address.is_set || is_set(remote_ipv6_address.yfilter)) leaf_name_data.push_back(remote_ipv6_address.get_name_leafdata());
    if (igp_metric.is_set || is_set(igp_metric.yfilter)) leaf_name_data.push_back(igp_metric.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.yfilter)) leaf_name_data.push_back(te_metric.get_name_leafdata());
    if (maximum_link_bandwidth.is_set || is_set(maximum_link_bandwidth.yfilter)) leaf_name_data.push_back(maximum_link_bandwidth.get_name_leafdata());
    if (max_reservable_bandwidth.is_set || is_set(max_reservable_bandwidth.yfilter)) leaf_name_data.push_back(max_reservable_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::Ipv6Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-igp-information")
    {
        if(local_igp_information == nullptr)
        {
            local_igp_information = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation>();
        }
        return local_igp_information;
    }

    if(child_yang_name == "remote-node-protocol-identifier")
    {
        if(remote_node_protocol_identifier == nullptr)
        {
            remote_node_protocol_identifier = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier>();
        }
        return remote_node_protocol_identifier;
    }

    if(child_yang_name == "adjacency-sid")
    {
        auto ent_ = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid>();
        ent_->parent = this;
        adjacency_sid.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::Ipv6Link::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local_igp_information != nullptr)
    {
        _children["local-igp-information"] = local_igp_information;
    }

    if(remote_node_protocol_identifier != nullptr)
    {
        _children["remote-node-protocol-identifier"] = remote_node_protocol_identifier;
    }

    count_ = 0;
    for (auto ent_ : adjacency_sid.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-ipv6-address")
    {
        local_ipv6_address = value;
        local_ipv6_address.value_namespace = name_space;
        local_ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-ipv6-address")
    {
        remote_ipv6_address = value;
        remote_ipv6_address.value_namespace = name_space;
        remote_ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-metric")
    {
        igp_metric = value;
        igp_metric.value_namespace = name_space;
        igp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-metric")
    {
        te_metric = value;
        te_metric.value_namespace = name_space;
        te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-link-bandwidth")
    {
        maximum_link_bandwidth = value;
        maximum_link_bandwidth.value_namespace = name_space;
        maximum_link_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-reservable-bandwidth")
    {
        max_reservable_bandwidth = value;
        max_reservable_bandwidth.value_namespace = name_space;
        max_reservable_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-ipv6-address")
    {
        local_ipv6_address.yfilter = yfilter;
    }
    if(value_path == "remote-ipv6-address")
    {
        remote_ipv6_address.yfilter = yfilter;
    }
    if(value_path == "igp-metric")
    {
        igp_metric.yfilter = yfilter;
    }
    if(value_path == "te-metric")
    {
        te_metric.yfilter = yfilter;
    }
    if(value_path == "maximum-link-bandwidth")
    {
        maximum_link_bandwidth.yfilter = yfilter;
    }
    if(value_path == "max-reservable-bandwidth")
    {
        max_reservable_bandwidth.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-igp-information" || name == "remote-node-protocol-identifier" || name == "adjacency-sid" || name == "local-ipv6-address" || name == "remote-ipv6-address" || name == "igp-metric" || name == "te-metric" || name == "maximum-link-bandwidth" || name == "max-reservable-bandwidth")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::LocalIgpInformation()
    :
    domain_identifier{YType::uint64, "domain-identifier"}
        ,
    node_id(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId>())
{
    node_id->parent = this;

    yang_name = "local-igp-information"; yang_parent_name = "ipv6-link"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::~LocalIgpInformation()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::has_data() const
{
    if (is_presence_container) return true;
    return domain_identifier.is_set
	|| (node_id !=  nullptr && node_id->has_data());
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_identifier.yfilter)
	|| (node_id !=  nullptr && node_id->has_operation());
}

std::string Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-igp-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_identifier.is_set || is_set(domain_identifier.yfilter)) leaf_name_data.push_back(domain_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-id")
    {
        if(node_id == nullptr)
        {
            node_id = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId>();
        }
        return node_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(node_id != nullptr)
    {
        _children["node-id"] = node_id;
    }

    return _children;
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier = value;
        domain_identifier.value_namespace = name_space;
        domain_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-id" || name == "domain-identifier")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::NodeId()
    :
    autonomous_system_number{YType::uint32, "autonomous-system-number"},
    ls_identifier{YType::uint32, "ls-identifier"}
        ,
    igp(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp>())
{
    igp->parent = this;

    yang_name = "node-id"; yang_parent_name = "local-igp-information"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::~NodeId()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::has_data() const
{
    if (is_presence_container) return true;
    return autonomous_system_number.is_set
	|| ls_identifier.is_set
	|| (igp !=  nullptr && igp->has_data());
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(autonomous_system_number.yfilter)
	|| ydk::is_set(ls_identifier.yfilter)
	|| (igp !=  nullptr && igp->has_operation());
}

std::string Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (autonomous_system_number.is_set || is_set(autonomous_system_number.yfilter)) leaf_name_data.push_back(autonomous_system_number.get_name_leafdata());
    if (ls_identifier.is_set || is_set(ls_identifier.yfilter)) leaf_name_data.push_back(ls_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp")
    {
        if(igp == nullptr)
        {
            igp = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp>();
        }
        return igp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(igp != nullptr)
    {
        _children["igp"] = igp;
    }

    return _children;
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number = value;
        autonomous_system_number.value_namespace = name_space;
        autonomous_system_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-identifier")
    {
        ls_identifier = value;
        ls_identifier.value_namespace = name_space;
        ls_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number.yfilter = yfilter;
    }
    if(value_path == "ls-identifier")
    {
        ls_identifier.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp" || name == "autonomous-system-number" || name == "ls-identifier")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Igp()
    :
    igp_id{YType::enumeration, "igp-id"}
        ,
    isis(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Isis>())
    , ospf(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Ospf>())
    , bgp(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Bgp>())
{
    isis->parent = this;
    ospf->parent = this;
    bgp->parent = this;

    yang_name = "igp"; yang_parent_name = "node-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::~Igp()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::has_data() const
{
    if (is_presence_container) return true;
    return igp_id.is_set
	|| (isis !=  nullptr && isis->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (bgp !=  nullptr && bgp->has_data());
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_id.yfilter)
	|| (isis !=  nullptr && isis->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation());
}

std::string Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_id.is_set || is_set(igp_id.yfilter)) leaf_name_data.push_back(igp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Bgp>();
        }
        return bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(isis != nullptr)
    {
        _children["isis"] = isis;
    }

    if(ospf != nullptr)
    {
        _children["ospf"] = ospf;
    }

    if(bgp != nullptr)
    {
        _children["bgp"] = bgp;
    }

    return _children;
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-id")
    {
        igp_id = value;
        igp_id.value_namespace = name_space;
        igp_id.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-id")
    {
        igp_id.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis" || name == "ospf" || name == "bgp" || name == "igp-id")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Isis::Isis()
    :
    system_id{YType::str, "system-id"},
    level{YType::uint32, "level"}
{

    yang_name = "isis"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Isis::~Isis()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Isis::has_data() const
{
    if (is_presence_container) return true;
    return system_id.is_set
	|| level.is_set;
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "level")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Ospf::Ospf()
    :
    router_id{YType::str, "router-id"},
    area{YType::uint32, "area"}
{

    yang_name = "ospf"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Ospf::~Ospf()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Ospf::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| area.is_set;
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(area.yfilter);
}

std::string Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "area")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Bgp::Bgp()
    :
    router_id{YType::str, "router-id"},
    confed_asn{YType::uint32, "confed-asn"}
{

    yang_name = "bgp"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Bgp::~Bgp()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Bgp::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| confed_asn.is_set;
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(confed_asn.yfilter);
}

std::string Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (confed_asn.is_set || is_set(confed_asn.yfilter)) leaf_name_data.push_back(confed_asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "confed-asn")
    {
        confed_asn = value;
        confed_asn.value_namespace = name_space;
        confed_asn.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "confed-asn")
    {
        confed_asn.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::NodeId::Igp::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "confed-asn")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::RemoteNodeProtocolIdentifier()
    :
    node_name{YType::str, "node-name"},
    ipv4_bgp_router_id_set{YType::boolean, "ipv4-bgp-router-id-set"},
    ipv4_bgp_router_id{YType::str, "ipv4-bgp-router-id"},
    ipv4te_router_id_set{YType::boolean, "ipv4te-router-id-set"},
    ipv4te_router_id{YType::str, "ipv4te-router-id"}
        ,
    igp_information(this, {})
    , srgb_information(this, {})
{

    yang_name = "remote-node-protocol-identifier"; yang_parent_name = "ipv6-link"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::~RemoteNodeProtocolIdentifier()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<igp_information.len(); index++)
    {
        if(igp_information[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<srgb_information.len(); index++)
    {
        if(srgb_information[index]->has_data())
            return true;
    }
    return node_name.is_set
	|| ipv4_bgp_router_id_set.is_set
	|| ipv4_bgp_router_id.is_set
	|| ipv4te_router_id_set.is_set
	|| ipv4te_router_id.is_set;
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::has_operation() const
{
    for (std::size_t index=0; index<igp_information.len(); index++)
    {
        if(igp_information[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<srgb_information.len(); index++)
    {
        if(srgb_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(ipv4_bgp_router_id_set.yfilter)
	|| ydk::is_set(ipv4_bgp_router_id.yfilter)
	|| ydk::is_set(ipv4te_router_id_set.yfilter)
	|| ydk::is_set(ipv4te_router_id.yfilter);
}

std::string Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-node-protocol-identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (ipv4_bgp_router_id_set.is_set || is_set(ipv4_bgp_router_id_set.yfilter)) leaf_name_data.push_back(ipv4_bgp_router_id_set.get_name_leafdata());
    if (ipv4_bgp_router_id.is_set || is_set(ipv4_bgp_router_id.yfilter)) leaf_name_data.push_back(ipv4_bgp_router_id.get_name_leafdata());
    if (ipv4te_router_id_set.is_set || is_set(ipv4te_router_id_set.yfilter)) leaf_name_data.push_back(ipv4te_router_id_set.get_name_leafdata());
    if (ipv4te_router_id.is_set || is_set(ipv4te_router_id.yfilter)) leaf_name_data.push_back(ipv4te_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp-information")
    {
        auto ent_ = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation>();
        ent_->parent = this;
        igp_information.append(ent_);
        return ent_;
    }

    if(child_yang_name == "srgb-information")
    {
        auto ent_ = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation>();
        ent_->parent = this;
        srgb_information.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : igp_information.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : srgb_information.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-bgp-router-id-set")
    {
        ipv4_bgp_router_id_set = value;
        ipv4_bgp_router_id_set.value_namespace = name_space;
        ipv4_bgp_router_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-bgp-router-id")
    {
        ipv4_bgp_router_id = value;
        ipv4_bgp_router_id.value_namespace = name_space;
        ipv4_bgp_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4te-router-id-set")
    {
        ipv4te_router_id_set = value;
        ipv4te_router_id_set.value_namespace = name_space;
        ipv4te_router_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4te-router-id")
    {
        ipv4te_router_id = value;
        ipv4te_router_id.value_namespace = name_space;
        ipv4te_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-bgp-router-id-set")
    {
        ipv4_bgp_router_id_set.yfilter = yfilter;
    }
    if(value_path == "ipv4-bgp-router-id")
    {
        ipv4_bgp_router_id.yfilter = yfilter;
    }
    if(value_path == "ipv4te-router-id-set")
    {
        ipv4te_router_id_set.yfilter = yfilter;
    }
    if(value_path == "ipv4te-router-id")
    {
        ipv4te_router_id.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-information" || name == "srgb-information" || name == "node-name" || name == "ipv4-bgp-router-id-set" || name == "ipv4-bgp-router-id" || name == "ipv4te-router-id-set" || name == "ipv4te-router-id")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::IgpInformation()
    :
    domain_identifier{YType::uint64, "domain-identifier"}
        ,
    node_id(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId>())
{
    node_id->parent = this;

    yang_name = "igp-information"; yang_parent_name = "remote-node-protocol-identifier"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::~IgpInformation()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::has_data() const
{
    if (is_presence_container) return true;
    return domain_identifier.is_set
	|| (node_id !=  nullptr && node_id->has_data());
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_identifier.yfilter)
	|| (node_id !=  nullptr && node_id->has_operation());
}

std::string Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-information";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_identifier.is_set || is_set(domain_identifier.yfilter)) leaf_name_data.push_back(domain_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-id")
    {
        if(node_id == nullptr)
        {
            node_id = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId>();
        }
        return node_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(node_id != nullptr)
    {
        _children["node-id"] = node_id;
    }

    return _children;
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier = value;
        domain_identifier.value_namespace = name_space;
        domain_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-id" || name == "domain-identifier")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::NodeId()
    :
    autonomous_system_number{YType::uint32, "autonomous-system-number"},
    ls_identifier{YType::uint32, "ls-identifier"}
        ,
    igp(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp>())
{
    igp->parent = this;

    yang_name = "node-id"; yang_parent_name = "igp-information"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::~NodeId()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::has_data() const
{
    if (is_presence_container) return true;
    return autonomous_system_number.is_set
	|| ls_identifier.is_set
	|| (igp !=  nullptr && igp->has_data());
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(autonomous_system_number.yfilter)
	|| ydk::is_set(ls_identifier.yfilter)
	|| (igp !=  nullptr && igp->has_operation());
}

std::string Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (autonomous_system_number.is_set || is_set(autonomous_system_number.yfilter)) leaf_name_data.push_back(autonomous_system_number.get_name_leafdata());
    if (ls_identifier.is_set || is_set(ls_identifier.yfilter)) leaf_name_data.push_back(ls_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp")
    {
        if(igp == nullptr)
        {
            igp = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp>();
        }
        return igp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(igp != nullptr)
    {
        _children["igp"] = igp;
    }

    return _children;
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number = value;
        autonomous_system_number.value_namespace = name_space;
        autonomous_system_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-identifier")
    {
        ls_identifier = value;
        ls_identifier.value_namespace = name_space;
        ls_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number.yfilter = yfilter;
    }
    if(value_path == "ls-identifier")
    {
        ls_identifier.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp" || name == "autonomous-system-number" || name == "ls-identifier")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Igp()
    :
    igp_id{YType::enumeration, "igp-id"}
        ,
    isis(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis>())
    , ospf(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf>())
    , bgp(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp>())
{
    isis->parent = this;
    ospf->parent = this;
    bgp->parent = this;

    yang_name = "igp"; yang_parent_name = "node-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::~Igp()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::has_data() const
{
    if (is_presence_container) return true;
    return igp_id.is_set
	|| (isis !=  nullptr && isis->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (bgp !=  nullptr && bgp->has_data());
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_id.yfilter)
	|| (isis !=  nullptr && isis->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation());
}

std::string Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_id.is_set || is_set(igp_id.yfilter)) leaf_name_data.push_back(igp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp>();
        }
        return bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(isis != nullptr)
    {
        _children["isis"] = isis;
    }

    if(ospf != nullptr)
    {
        _children["ospf"] = ospf;
    }

    if(bgp != nullptr)
    {
        _children["bgp"] = bgp;
    }

    return _children;
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-id")
    {
        igp_id = value;
        igp_id.value_namespace = name_space;
        igp_id.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-id")
    {
        igp_id.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis" || name == "ospf" || name == "bgp" || name == "igp-id")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::Isis()
    :
    system_id{YType::str, "system-id"},
    level{YType::uint32, "level"}
{

    yang_name = "isis"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::~Isis()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::has_data() const
{
    if (is_presence_container) return true;
    return system_id.is_set
	|| level.is_set;
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "level")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::Ospf()
    :
    router_id{YType::str, "router-id"},
    area{YType::uint32, "area"}
{

    yang_name = "ospf"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::~Ospf()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| area.is_set;
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(area.yfilter);
}

std::string Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "area")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::Bgp()
    :
    router_id{YType::str, "router-id"},
    confed_asn{YType::uint32, "confed-asn"}
{

    yang_name = "bgp"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::~Bgp()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| confed_asn.is_set;
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(confed_asn.yfilter);
}

std::string Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (confed_asn.is_set || is_set(confed_asn.yfilter)) leaf_name_data.push_back(confed_asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "confed-asn")
    {
        confed_asn = value;
        confed_asn.value_namespace = name_space;
        confed_asn.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "confed-asn")
    {
        confed_asn.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "confed-asn")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::SrgbInformation()
    :
    start{YType::uint32, "start"},
    size{YType::uint32, "size"},
    domain_identifier{YType::uint64, "domain-identifier"}
        ,
    node_id(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId>())
{
    node_id->parent = this;

    yang_name = "srgb-information"; yang_parent_name = "remote-node-protocol-identifier"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::~SrgbInformation()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::has_data() const
{
    if (is_presence_container) return true;
    return start.is_set
	|| size.is_set
	|| domain_identifier.is_set
	|| (node_id !=  nullptr && node_id->has_data());
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start.yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(domain_identifier.yfilter)
	|| (node_id !=  nullptr && node_id->has_operation());
}

std::string Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srgb-information";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (domain_identifier.is_set || is_set(domain_identifier.yfilter)) leaf_name_data.push_back(domain_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-id")
    {
        if(node_id == nullptr)
        {
            node_id = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId>();
        }
        return node_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(node_id != nullptr)
    {
        _children["node-id"] = node_id;
    }

    return _children;
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-identifier")
    {
        domain_identifier = value;
        domain_identifier.value_namespace = name_space;
        domain_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "domain-identifier")
    {
        domain_identifier.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-id" || name == "start" || name == "size" || name == "domain-identifier")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::NodeId()
    :
    autonomous_system_number{YType::uint32, "autonomous-system-number"},
    ls_identifier{YType::uint32, "ls-identifier"}
        ,
    igp(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp>())
{
    igp->parent = this;

    yang_name = "node-id"; yang_parent_name = "srgb-information"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::~NodeId()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::has_data() const
{
    if (is_presence_container) return true;
    return autonomous_system_number.is_set
	|| ls_identifier.is_set
	|| (igp !=  nullptr && igp->has_data());
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(autonomous_system_number.yfilter)
	|| ydk::is_set(ls_identifier.yfilter)
	|| (igp !=  nullptr && igp->has_operation());
}

std::string Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (autonomous_system_number.is_set || is_set(autonomous_system_number.yfilter)) leaf_name_data.push_back(autonomous_system_number.get_name_leafdata());
    if (ls_identifier.is_set || is_set(ls_identifier.yfilter)) leaf_name_data.push_back(ls_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp")
    {
        if(igp == nullptr)
        {
            igp = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp>();
        }
        return igp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(igp != nullptr)
    {
        _children["igp"] = igp;
    }

    return _children;
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number = value;
        autonomous_system_number.value_namespace = name_space;
        autonomous_system_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-identifier")
    {
        ls_identifier = value;
        ls_identifier.value_namespace = name_space;
        ls_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number.yfilter = yfilter;
    }
    if(value_path == "ls-identifier")
    {
        ls_identifier.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp" || name == "autonomous-system-number" || name == "ls-identifier")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Igp()
    :
    igp_id{YType::enumeration, "igp-id"}
        ,
    isis(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis>())
    , ospf(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf>())
    , bgp(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp>())
{
    isis->parent = this;
    ospf->parent = this;
    bgp->parent = this;

    yang_name = "igp"; yang_parent_name = "node-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::~Igp()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::has_data() const
{
    if (is_presence_container) return true;
    return igp_id.is_set
	|| (isis !=  nullptr && isis->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (bgp !=  nullptr && bgp->has_data());
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_id.yfilter)
	|| (isis !=  nullptr && isis->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation());
}

std::string Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_id.is_set || is_set(igp_id.yfilter)) leaf_name_data.push_back(igp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp>();
        }
        return bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(isis != nullptr)
    {
        _children["isis"] = isis;
    }

    if(ospf != nullptr)
    {
        _children["ospf"] = ospf;
    }

    if(bgp != nullptr)
    {
        _children["bgp"] = bgp;
    }

    return _children;
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-id")
    {
        igp_id = value;
        igp_id.value_namespace = name_space;
        igp_id.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-id")
    {
        igp_id.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis" || name == "ospf" || name == "bgp" || name == "igp-id")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::Isis()
    :
    system_id{YType::str, "system-id"},
    level{YType::uint32, "level"}
{

    yang_name = "isis"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::~Isis()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::has_data() const
{
    if (is_presence_container) return true;
    return system_id.is_set
	|| level.is_set;
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "level")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::Ospf()
    :
    router_id{YType::str, "router-id"},
    area{YType::uint32, "area"}
{

    yang_name = "ospf"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::~Ospf()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| area.is_set;
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(area.yfilter);
}

std::string Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "area")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::Bgp()
    :
    router_id{YType::str, "router-id"},
    confed_asn{YType::uint32, "confed-asn"}
{

    yang_name = "bgp"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::~Bgp()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| confed_asn.is_set;
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(confed_asn.yfilter);
}

std::string Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (confed_asn.is_set || is_set(confed_asn.yfilter)) leaf_name_data.push_back(confed_asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "confed-asn")
    {
        confed_asn = value;
        confed_asn.value_namespace = name_space;
        confed_asn.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "confed-asn")
    {
        confed_asn.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "confed-asn")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::AdjacencySid()
    :
    sid_type{YType::enumeration, "sid-type"},
    mpls_label{YType::uint32, "mpls-label"},
    rflag{YType::boolean, "rflag"},
    nflag{YType::boolean, "nflag"},
    pflag{YType::boolean, "pflag"},
    eflag{YType::boolean, "eflag"},
    vflag{YType::boolean, "vflag"},
    lflag{YType::boolean, "lflag"}
        ,
    sid_prefix(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix>())
{
    sid_prefix->parent = this;

    yang_name = "adjacency-sid"; yang_parent_name = "ipv6-link"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::~AdjacencySid()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::has_data() const
{
    if (is_presence_container) return true;
    return sid_type.is_set
	|| mpls_label.is_set
	|| rflag.is_set
	|| nflag.is_set
	|| pflag.is_set
	|| eflag.is_set
	|| vflag.is_set
	|| lflag.is_set
	|| (sid_prefix !=  nullptr && sid_prefix->has_data());
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid_type.yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| ydk::is_set(rflag.yfilter)
	|| ydk::is_set(nflag.yfilter)
	|| ydk::is_set(pflag.yfilter)
	|| ydk::is_set(eflag.yfilter)
	|| ydk::is_set(vflag.yfilter)
	|| ydk::is_set(lflag.yfilter)
	|| (sid_prefix !=  nullptr && sid_prefix->has_operation());
}

std::string Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid_type.is_set || is_set(sid_type.yfilter)) leaf_name_data.push_back(sid_type.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (rflag.is_set || is_set(rflag.yfilter)) leaf_name_data.push_back(rflag.get_name_leafdata());
    if (nflag.is_set || is_set(nflag.yfilter)) leaf_name_data.push_back(nflag.get_name_leafdata());
    if (pflag.is_set || is_set(pflag.yfilter)) leaf_name_data.push_back(pflag.get_name_leafdata());
    if (eflag.is_set || is_set(eflag.yfilter)) leaf_name_data.push_back(eflag.get_name_leafdata());
    if (vflag.is_set || is_set(vflag.yfilter)) leaf_name_data.push_back(vflag.get_name_leafdata());
    if (lflag.is_set || is_set(lflag.yfilter)) leaf_name_data.push_back(lflag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sid-prefix")
    {
        if(sid_prefix == nullptr)
        {
            sid_prefix = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix>();
        }
        return sid_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sid_prefix != nullptr)
    {
        _children["sid-prefix"] = sid_prefix;
    }

    return _children;
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid-type")
    {
        sid_type = value;
        sid_type.value_namespace = name_space;
        sid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rflag")
    {
        rflag = value;
        rflag.value_namespace = name_space;
        rflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nflag")
    {
        nflag = value;
        nflag.value_namespace = name_space;
        nflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pflag")
    {
        pflag = value;
        pflag.value_namespace = name_space;
        pflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eflag")
    {
        eflag = value;
        eflag.value_namespace = name_space;
        eflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vflag")
    {
        vflag = value;
        vflag.value_namespace = name_space;
        vflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lflag")
    {
        lflag = value;
        lflag.value_namespace = name_space;
        lflag.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid-type")
    {
        sid_type.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
    if(value_path == "rflag")
    {
        rflag.yfilter = yfilter;
    }
    if(value_path == "nflag")
    {
        nflag.yfilter = yfilter;
    }
    if(value_path == "pflag")
    {
        pflag.yfilter = yfilter;
    }
    if(value_path == "eflag")
    {
        eflag.yfilter = yfilter;
    }
    if(value_path == "vflag")
    {
        vflag.yfilter = yfilter;
    }
    if(value_path == "lflag")
    {
        lflag.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-prefix" || name == "sid-type" || name == "mpls-label" || name == "rflag" || name == "nflag" || name == "pflag" || name == "eflag" || name == "vflag" || name == "lflag")
        return true;
    return false;
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::SidPrefix()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "sid-prefix"; yang_parent_name = "adjacency-sid"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::~SidPrefix()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sid-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Pce::TopologySummaries::TopologySummaries()
    :
    topology_summary(this, {})
{

    yang_name = "topology-summaries"; yang_parent_name = "pce"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::TopologySummaries::~TopologySummaries()
{
}

bool Pce::TopologySummaries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<topology_summary.len(); index++)
    {
        if(topology_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Pce::TopologySummaries::has_operation() const
{
    for (std::size_t index=0; index<topology_summary.len(); index++)
    {
        if(topology_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pce::TopologySummaries::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::TopologySummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologySummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologySummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology-summary")
    {
        auto ent_ = std::make_shared<Pce::TopologySummaries::TopologySummary>();
        ent_->parent = this;
        topology_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologySummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : topology_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pce::TopologySummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pce::TopologySummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pce::TopologySummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology-summary")
        return true;
    return false;
}

Pce::TopologySummaries::TopologySummary::TopologySummary()
    :
    af{YType::enumeration, "af"},
    protocol{YType::enumeration, "protocol"},
    nodes{YType::uint32, "nodes"},
    lookup_nodes{YType::uint32, "lookup-nodes"},
    prefixes{YType::uint32, "prefixes"},
    prefix_sids{YType::uint32, "prefix-sids"},
    regular_prefix_sids{YType::uint32, "regular-prefix-sids"},
    strict_prefix_sids{YType::uint32, "strict-prefix-sids"},
    links{YType::uint32, "links"},
    epe_links{YType::uint32, "epe-links"},
    adjacency_sids{YType::uint32, "adjacency-sids"},
    epesids{YType::uint32, "epesids"},
    protected_adjacency_sids{YType::uint32, "protected-adjacency-sids"},
    un_protected_adjacency_sids{YType::uint32, "un-protected-adjacency-sids"},
    topology_consistent{YType::boolean, "topology-consistent"}
        ,
    stats_topology_update(std::make_shared<Pce::TopologySummaries::TopologySummary::StatsTopologyUpdate>())
{
    stats_topology_update->parent = this;

    yang_name = "topology-summary"; yang_parent_name = "topology-summaries"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::TopologySummaries::TopologySummary::~TopologySummary()
{
}

bool Pce::TopologySummaries::TopologySummary::has_data() const
{
    if (is_presence_container) return true;
    return af.is_set
	|| protocol.is_set
	|| nodes.is_set
	|| lookup_nodes.is_set
	|| prefixes.is_set
	|| prefix_sids.is_set
	|| regular_prefix_sids.is_set
	|| strict_prefix_sids.is_set
	|| links.is_set
	|| epe_links.is_set
	|| adjacency_sids.is_set
	|| epesids.is_set
	|| protected_adjacency_sids.is_set
	|| un_protected_adjacency_sids.is_set
	|| topology_consistent.is_set
	|| (stats_topology_update !=  nullptr && stats_topology_update->has_data());
}

bool Pce::TopologySummaries::TopologySummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(nodes.yfilter)
	|| ydk::is_set(lookup_nodes.yfilter)
	|| ydk::is_set(prefixes.yfilter)
	|| ydk::is_set(prefix_sids.yfilter)
	|| ydk::is_set(regular_prefix_sids.yfilter)
	|| ydk::is_set(strict_prefix_sids.yfilter)
	|| ydk::is_set(links.yfilter)
	|| ydk::is_set(epe_links.yfilter)
	|| ydk::is_set(adjacency_sids.yfilter)
	|| ydk::is_set(epesids.yfilter)
	|| ydk::is_set(protected_adjacency_sids.yfilter)
	|| ydk::is_set(un_protected_adjacency_sids.yfilter)
	|| ydk::is_set(topology_consistent.yfilter)
	|| (stats_topology_update !=  nullptr && stats_topology_update->has_operation());
}

std::string Pce::TopologySummaries::TopologySummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/topology-summaries/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::TopologySummaries::TopologySummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-summary";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologySummaries::TopologySummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af.is_set || is_set(af.yfilter)) leaf_name_data.push_back(af.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (nodes.is_set || is_set(nodes.yfilter)) leaf_name_data.push_back(nodes.get_name_leafdata());
    if (lookup_nodes.is_set || is_set(lookup_nodes.yfilter)) leaf_name_data.push_back(lookup_nodes.get_name_leafdata());
    if (prefixes.is_set || is_set(prefixes.yfilter)) leaf_name_data.push_back(prefixes.get_name_leafdata());
    if (prefix_sids.is_set || is_set(prefix_sids.yfilter)) leaf_name_data.push_back(prefix_sids.get_name_leafdata());
    if (regular_prefix_sids.is_set || is_set(regular_prefix_sids.yfilter)) leaf_name_data.push_back(regular_prefix_sids.get_name_leafdata());
    if (strict_prefix_sids.is_set || is_set(strict_prefix_sids.yfilter)) leaf_name_data.push_back(strict_prefix_sids.get_name_leafdata());
    if (links.is_set || is_set(links.yfilter)) leaf_name_data.push_back(links.get_name_leafdata());
    if (epe_links.is_set || is_set(epe_links.yfilter)) leaf_name_data.push_back(epe_links.get_name_leafdata());
    if (adjacency_sids.is_set || is_set(adjacency_sids.yfilter)) leaf_name_data.push_back(adjacency_sids.get_name_leafdata());
    if (epesids.is_set || is_set(epesids.yfilter)) leaf_name_data.push_back(epesids.get_name_leafdata());
    if (protected_adjacency_sids.is_set || is_set(protected_adjacency_sids.yfilter)) leaf_name_data.push_back(protected_adjacency_sids.get_name_leafdata());
    if (un_protected_adjacency_sids.is_set || is_set(un_protected_adjacency_sids.yfilter)) leaf_name_data.push_back(un_protected_adjacency_sids.get_name_leafdata());
    if (topology_consistent.is_set || is_set(topology_consistent.yfilter)) leaf_name_data.push_back(topology_consistent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologySummaries::TopologySummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stats-topology-update")
    {
        if(stats_topology_update == nullptr)
        {
            stats_topology_update = std::make_shared<Pce::TopologySummaries::TopologySummary::StatsTopologyUpdate>();
        }
        return stats_topology_update;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologySummaries::TopologySummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(stats_topology_update != nullptr)
    {
        _children["stats-topology-update"] = stats_topology_update;
    }

    return _children;
}

void Pce::TopologySummaries::TopologySummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af")
    {
        af = value;
        af.value_namespace = name_space;
        af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nodes")
    {
        nodes = value;
        nodes.value_namespace = name_space;
        nodes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lookup-nodes")
    {
        lookup_nodes = value;
        lookup_nodes.value_namespace = name_space;
        lookup_nodes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefixes")
    {
        prefixes = value;
        prefixes.value_namespace = name_space;
        prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-sids")
    {
        prefix_sids = value;
        prefix_sids.value_namespace = name_space;
        prefix_sids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "regular-prefix-sids")
    {
        regular_prefix_sids = value;
        regular_prefix_sids.value_namespace = name_space;
        regular_prefix_sids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "strict-prefix-sids")
    {
        strict_prefix_sids = value;
        strict_prefix_sids.value_namespace = name_space;
        strict_prefix_sids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "links")
    {
        links = value;
        links.value_namespace = name_space;
        links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epe-links")
    {
        epe_links = value;
        epe_links.value_namespace = name_space;
        epe_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adjacency-sids")
    {
        adjacency_sids = value;
        adjacency_sids.value_namespace = name_space;
        adjacency_sids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "epesids")
    {
        epesids = value;
        epesids.value_namespace = name_space;
        epesids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-adjacency-sids")
    {
        protected_adjacency_sids = value;
        protected_adjacency_sids.value_namespace = name_space;
        protected_adjacency_sids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "un-protected-adjacency-sids")
    {
        un_protected_adjacency_sids = value;
        un_protected_adjacency_sids.value_namespace = name_space;
        un_protected_adjacency_sids.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-consistent")
    {
        topology_consistent = value;
        topology_consistent.value_namespace = name_space;
        topology_consistent.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologySummaries::TopologySummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af")
    {
        af.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "nodes")
    {
        nodes.yfilter = yfilter;
    }
    if(value_path == "lookup-nodes")
    {
        lookup_nodes.yfilter = yfilter;
    }
    if(value_path == "prefixes")
    {
        prefixes.yfilter = yfilter;
    }
    if(value_path == "prefix-sids")
    {
        prefix_sids.yfilter = yfilter;
    }
    if(value_path == "regular-prefix-sids")
    {
        regular_prefix_sids.yfilter = yfilter;
    }
    if(value_path == "strict-prefix-sids")
    {
        strict_prefix_sids.yfilter = yfilter;
    }
    if(value_path == "links")
    {
        links.yfilter = yfilter;
    }
    if(value_path == "epe-links")
    {
        epe_links.yfilter = yfilter;
    }
    if(value_path == "adjacency-sids")
    {
        adjacency_sids.yfilter = yfilter;
    }
    if(value_path == "epesids")
    {
        epesids.yfilter = yfilter;
    }
    if(value_path == "protected-adjacency-sids")
    {
        protected_adjacency_sids.yfilter = yfilter;
    }
    if(value_path == "un-protected-adjacency-sids")
    {
        un_protected_adjacency_sids.yfilter = yfilter;
    }
    if(value_path == "topology-consistent")
    {
        topology_consistent.yfilter = yfilter;
    }
}

bool Pce::TopologySummaries::TopologySummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stats-topology-update" || name == "af" || name == "protocol" || name == "nodes" || name == "lookup-nodes" || name == "prefixes" || name == "prefix-sids" || name == "regular-prefix-sids" || name == "strict-prefix-sids" || name == "links" || name == "epe-links" || name == "adjacency-sids" || name == "epesids" || name == "protected-adjacency-sids" || name == "un-protected-adjacency-sids" || name == "topology-consistent")
        return true;
    return false;
}

Pce::TopologySummaries::TopologySummary::StatsTopologyUpdate::StatsTopologyUpdate()
    :
    num_nodes_added{YType::uint32, "num-nodes-added"},
    num_nodes_deleted{YType::uint32, "num-nodes-deleted"},
    num_links_added{YType::uint32, "num-links-added"},
    num_links_deleted{YType::uint32, "num-links-deleted"},
    num_prefixes_added{YType::uint32, "num-prefixes-added"},
    num_prefixes_deleted{YType::uint32, "num-prefixes-deleted"}
{

    yang_name = "stats-topology-update"; yang_parent_name = "topology-summary"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::TopologySummaries::TopologySummary::StatsTopologyUpdate::~StatsTopologyUpdate()
{
}

bool Pce::TopologySummaries::TopologySummary::StatsTopologyUpdate::has_data() const
{
    if (is_presence_container) return true;
    return num_nodes_added.is_set
	|| num_nodes_deleted.is_set
	|| num_links_added.is_set
	|| num_links_deleted.is_set
	|| num_prefixes_added.is_set
	|| num_prefixes_deleted.is_set;
}

bool Pce::TopologySummaries::TopologySummary::StatsTopologyUpdate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(num_nodes_added.yfilter)
	|| ydk::is_set(num_nodes_deleted.yfilter)
	|| ydk::is_set(num_links_added.yfilter)
	|| ydk::is_set(num_links_deleted.yfilter)
	|| ydk::is_set(num_prefixes_added.yfilter)
	|| ydk::is_set(num_prefixes_deleted.yfilter);
}

std::string Pce::TopologySummaries::TopologySummary::StatsTopologyUpdate::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/topology-summaries/topology-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::TopologySummaries::TopologySummary::StatsTopologyUpdate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stats-topology-update";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TopologySummaries::TopologySummary::StatsTopologyUpdate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_nodes_added.is_set || is_set(num_nodes_added.yfilter)) leaf_name_data.push_back(num_nodes_added.get_name_leafdata());
    if (num_nodes_deleted.is_set || is_set(num_nodes_deleted.yfilter)) leaf_name_data.push_back(num_nodes_deleted.get_name_leafdata());
    if (num_links_added.is_set || is_set(num_links_added.yfilter)) leaf_name_data.push_back(num_links_added.get_name_leafdata());
    if (num_links_deleted.is_set || is_set(num_links_deleted.yfilter)) leaf_name_data.push_back(num_links_deleted.get_name_leafdata());
    if (num_prefixes_added.is_set || is_set(num_prefixes_added.yfilter)) leaf_name_data.push_back(num_prefixes_added.get_name_leafdata());
    if (num_prefixes_deleted.is_set || is_set(num_prefixes_deleted.yfilter)) leaf_name_data.push_back(num_prefixes_deleted.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TopologySummaries::TopologySummary::StatsTopologyUpdate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TopologySummaries::TopologySummary::StatsTopologyUpdate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::TopologySummaries::TopologySummary::StatsTopologyUpdate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "num-nodes-added")
    {
        num_nodes_added = value;
        num_nodes_added.value_namespace = name_space;
        num_nodes_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-nodes-deleted")
    {
        num_nodes_deleted = value;
        num_nodes_deleted.value_namespace = name_space;
        num_nodes_deleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-links-added")
    {
        num_links_added = value;
        num_links_added.value_namespace = name_space;
        num_links_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-links-deleted")
    {
        num_links_deleted = value;
        num_links_deleted.value_namespace = name_space;
        num_links_deleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-prefixes-added")
    {
        num_prefixes_added = value;
        num_prefixes_added.value_namespace = name_space;
        num_prefixes_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-prefixes-deleted")
    {
        num_prefixes_deleted = value;
        num_prefixes_deleted.value_namespace = name_space;
        num_prefixes_deleted.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TopologySummaries::TopologySummary::StatsTopologyUpdate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "num-nodes-added")
    {
        num_nodes_added.yfilter = yfilter;
    }
    if(value_path == "num-nodes-deleted")
    {
        num_nodes_deleted.yfilter = yfilter;
    }
    if(value_path == "num-links-added")
    {
        num_links_added.yfilter = yfilter;
    }
    if(value_path == "num-links-deleted")
    {
        num_links_deleted.yfilter = yfilter;
    }
    if(value_path == "num-prefixes-added")
    {
        num_prefixes_added.yfilter = yfilter;
    }
    if(value_path == "num-prefixes-deleted")
    {
        num_prefixes_deleted.yfilter = yfilter;
    }
}

bool Pce::TopologySummaries::TopologySummary::StatsTopologyUpdate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "num-nodes-added" || name == "num-nodes-deleted" || name == "num-links-added" || name == "num-links-deleted" || name == "num-prefixes-added" || name == "num-prefixes-deleted")
        return true;
    return false;
}

Pce::PrefixInfos::PrefixInfos()
    :
    prefix_info(this, {"node_identifier"})
{

    yang_name = "prefix-infos"; yang_parent_name = "pce"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::PrefixInfos::~PrefixInfos()
{
}

bool Pce::PrefixInfos::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefix_info.len(); index++)
    {
        if(prefix_info[index]->has_data())
            return true;
    }
    return false;
}

bool Pce::PrefixInfos::has_operation() const
{
    for (std::size_t index=0; index<prefix_info.len(); index++)
    {
        if(prefix_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pce::PrefixInfos::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::PrefixInfos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-infos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::PrefixInfos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::PrefixInfos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-info")
    {
        auto ent_ = std::make_shared<Pce::PrefixInfos::PrefixInfo>();
        ent_->parent = this;
        prefix_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::PrefixInfos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prefix_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pce::PrefixInfos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pce::PrefixInfos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pce::PrefixInfos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-info")
        return true;
    return false;
}

Pce::PrefixInfos::PrefixInfo::PrefixInfo()
    :
    node_identifier{YType::uint32, "node-identifier"},
    node_identifier_xr{YType::uint32, "node-identifier-xr"}
        ,
    node_protocol_identifier(std::make_shared<Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier>())
    , address(this, {})
{
    node_protocol_identifier->parent = this;

    yang_name = "prefix-info"; yang_parent_name = "prefix-infos"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::PrefixInfos::PrefixInfo::~PrefixInfo()
{
}

bool Pce::PrefixInfos::PrefixInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return node_identifier.is_set
	|| node_identifier_xr.is_set
	|| (node_protocol_identifier !=  nullptr && node_protocol_identifier->has_data());
}

bool Pce::PrefixInfos::PrefixInfo::has_operation() const
{
    for (std::size_t index=0; index<address.len(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node_identifier.yfilter)
	|| ydk::is_set(node_identifier_xr.yfilter)
	|| (node_protocol_identifier !=  nullptr && node_protocol_identifier->has_operation());
}

std::string Pce::PrefixInfos::PrefixInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/prefix-infos/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::PrefixInfos::PrefixInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-info";
    ADD_KEY_TOKEN(node_identifier, "node-identifier");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::PrefixInfos::PrefixInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_identifier.is_set || is_set(node_identifier.yfilter)) leaf_name_data.push_back(node_identifier.get_name_leafdata());
    if (node_identifier_xr.is_set || is_set(node_identifier_xr.yfilter)) leaf_name_data.push_back(node_identifier_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::PrefixInfos::PrefixInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-protocol-identifier")
    {
        if(node_protocol_identifier == nullptr)
        {
            node_protocol_identifier = std::make_shared<Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier>();
        }
        return node_protocol_identifier;
    }

    if(child_yang_name == "address")
    {
        auto ent_ = std::make_shared<Pce::PrefixInfos::PrefixInfo::Address>();
        ent_->parent = this;
        address.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::PrefixInfos::PrefixInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(node_protocol_identifier != nullptr)
    {
        _children["node-protocol-identifier"] = node_protocol_identifier;
    }

    count_ = 0;
    for (auto ent_ : address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pce::PrefixInfos::PrefixInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-identifier")
    {
        node_identifier = value;
        node_identifier.value_namespace = name_space;
        node_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-identifier-xr")
    {
        node_identifier_xr = value;
        node_identifier_xr.value_namespace = name_space;
        node_identifier_xr.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::PrefixInfos::PrefixInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-identifier")
    {
        node_identifier.yfilter = yfilter;
    }
    if(value_path == "node-identifier-xr")
    {
        node_identifier_xr.yfilter = yfilter;
    }
}

bool Pce::PrefixInfos::PrefixInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-protocol-identifier" || name == "address" || name == "node-identifier" || name == "node-identifier-xr")
        return true;
    return false;
}

Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::NodeProtocolIdentifier()
    :
    node_name{YType::str, "node-name"},
    ipv4_bgp_router_id_set{YType::boolean, "ipv4-bgp-router-id-set"},
    ipv4_bgp_router_id{YType::str, "ipv4-bgp-router-id"},
    ipv4te_router_id_set{YType::boolean, "ipv4te-router-id-set"},
    ipv4te_router_id{YType::str, "ipv4te-router-id"}
        ,
    igp_information(this, {})
    , srgb_information(this, {})
{

    yang_name = "node-protocol-identifier"; yang_parent_name = "prefix-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::~NodeProtocolIdentifier()
{
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<igp_information.len(); index++)
    {
        if(igp_information[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<srgb_information.len(); index++)
    {
        if(srgb_information[index]->has_data())
            return true;
    }
    return node_name.is_set
	|| ipv4_bgp_router_id_set.is_set
	|| ipv4_bgp_router_id.is_set
	|| ipv4te_router_id_set.is_set
	|| ipv4te_router_id.is_set;
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::has_operation() const
{
    for (std::size_t index=0; index<igp_information.len(); index++)
    {
        if(igp_information[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<srgb_information.len(); index++)
    {
        if(srgb_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(ipv4_bgp_router_id_set.yfilter)
	|| ydk::is_set(ipv4_bgp_router_id.yfilter)
	|| ydk::is_set(ipv4te_router_id_set.yfilter)
	|| ydk::is_set(ipv4te_router_id.yfilter);
}

std::string Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-protocol-identifier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (ipv4_bgp_router_id_set.is_set || is_set(ipv4_bgp_router_id_set.yfilter)) leaf_name_data.push_back(ipv4_bgp_router_id_set.get_name_leafdata());
    if (ipv4_bgp_router_id.is_set || is_set(ipv4_bgp_router_id.yfilter)) leaf_name_data.push_back(ipv4_bgp_router_id.get_name_leafdata());
    if (ipv4te_router_id_set.is_set || is_set(ipv4te_router_id_set.yfilter)) leaf_name_data.push_back(ipv4te_router_id_set.get_name_leafdata());
    if (ipv4te_router_id.is_set || is_set(ipv4te_router_id.yfilter)) leaf_name_data.push_back(ipv4te_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp-information")
    {
        auto ent_ = std::make_shared<Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation>();
        ent_->parent = this;
        igp_information.append(ent_);
        return ent_;
    }

    if(child_yang_name == "srgb-information")
    {
        auto ent_ = std::make_shared<Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation>();
        ent_->parent = this;
        srgb_information.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : igp_information.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : srgb_information.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-bgp-router-id-set")
    {
        ipv4_bgp_router_id_set = value;
        ipv4_bgp_router_id_set.value_namespace = name_space;
        ipv4_bgp_router_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-bgp-router-id")
    {
        ipv4_bgp_router_id = value;
        ipv4_bgp_router_id.value_namespace = name_space;
        ipv4_bgp_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4te-router-id-set")
    {
        ipv4te_router_id_set = value;
        ipv4te_router_id_set.value_namespace = name_space;
        ipv4te_router_id_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4te-router-id")
    {
        ipv4te_router_id = value;
        ipv4te_router_id.value_namespace = name_space;
        ipv4te_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-bgp-router-id-set")
    {
        ipv4_bgp_router_id_set.yfilter = yfilter;
    }
    if(value_path == "ipv4-bgp-router-id")
    {
        ipv4_bgp_router_id.yfilter = yfilter;
    }
    if(value_path == "ipv4te-router-id-set")
    {
        ipv4te_router_id_set.yfilter = yfilter;
    }
    if(value_path == "ipv4te-router-id")
    {
        ipv4te_router_id.yfilter = yfilter;
    }
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-information" || name == "srgb-information" || name == "node-name" || name == "ipv4-bgp-router-id-set" || name == "ipv4-bgp-router-id" || name == "ipv4te-router-id-set" || name == "ipv4te-router-id")
        return true;
    return false;
}

Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::IgpInformation()
    :
    domain_identifier{YType::uint64, "domain-identifier"}
        ,
    node_id(std::make_shared<Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId>())
{
    node_id->parent = this;

    yang_name = "igp-information"; yang_parent_name = "node-protocol-identifier"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::~IgpInformation()
{
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::has_data() const
{
    if (is_presence_container) return true;
    return domain_identifier.is_set
	|| (node_id !=  nullptr && node_id->has_data());
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_identifier.yfilter)
	|| (node_id !=  nullptr && node_id->has_operation());
}

std::string Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-information";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_identifier.is_set || is_set(domain_identifier.yfilter)) leaf_name_data.push_back(domain_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-id")
    {
        if(node_id == nullptr)
        {
            node_id = std::make_shared<Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId>();
        }
        return node_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(node_id != nullptr)
    {
        _children["node-id"] = node_id;
    }

    return _children;
}

void Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier = value;
        domain_identifier.value_namespace = name_space;
        domain_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier.yfilter = yfilter;
    }
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-id" || name == "domain-identifier")
        return true;
    return false;
}

Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::NodeId()
    :
    autonomous_system_number{YType::uint32, "autonomous-system-number"},
    ls_identifier{YType::uint32, "ls-identifier"}
        ,
    igp(std::make_shared<Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp>())
{
    igp->parent = this;

    yang_name = "node-id"; yang_parent_name = "igp-information"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::~NodeId()
{
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::has_data() const
{
    if (is_presence_container) return true;
    return autonomous_system_number.is_set
	|| ls_identifier.is_set
	|| (igp !=  nullptr && igp->has_data());
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(autonomous_system_number.yfilter)
	|| ydk::is_set(ls_identifier.yfilter)
	|| (igp !=  nullptr && igp->has_operation());
}

std::string Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (autonomous_system_number.is_set || is_set(autonomous_system_number.yfilter)) leaf_name_data.push_back(autonomous_system_number.get_name_leafdata());
    if (ls_identifier.is_set || is_set(ls_identifier.yfilter)) leaf_name_data.push_back(ls_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp")
    {
        if(igp == nullptr)
        {
            igp = std::make_shared<Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp>();
        }
        return igp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(igp != nullptr)
    {
        _children["igp"] = igp;
    }

    return _children;
}

void Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number = value;
        autonomous_system_number.value_namespace = name_space;
        autonomous_system_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-identifier")
    {
        ls_identifier = value;
        ls_identifier.value_namespace = name_space;
        ls_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number.yfilter = yfilter;
    }
    if(value_path == "ls-identifier")
    {
        ls_identifier.yfilter = yfilter;
    }
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp" || name == "autonomous-system-number" || name == "ls-identifier")
        return true;
    return false;
}

Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Igp()
    :
    igp_id{YType::enumeration, "igp-id"}
        ,
    isis(std::make_shared<Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis>())
    , ospf(std::make_shared<Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf>())
    , bgp(std::make_shared<Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp>())
{
    isis->parent = this;
    ospf->parent = this;
    bgp->parent = this;

    yang_name = "igp"; yang_parent_name = "node-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::~Igp()
{
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::has_data() const
{
    if (is_presence_container) return true;
    return igp_id.is_set
	|| (isis !=  nullptr && isis->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (bgp !=  nullptr && bgp->has_data());
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_id.yfilter)
	|| (isis !=  nullptr && isis->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation());
}

std::string Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_id.is_set || is_set(igp_id.yfilter)) leaf_name_data.push_back(igp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp>();
        }
        return bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(isis != nullptr)
    {
        _children["isis"] = isis;
    }

    if(ospf != nullptr)
    {
        _children["ospf"] = ospf;
    }

    if(bgp != nullptr)
    {
        _children["bgp"] = bgp;
    }

    return _children;
}

void Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-id")
    {
        igp_id = value;
        igp_id.value_namespace = name_space;
        igp_id.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-id")
    {
        igp_id.yfilter = yfilter;
    }
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis" || name == "ospf" || name == "bgp" || name == "igp-id")
        return true;
    return false;
}

Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::Isis()
    :
    system_id{YType::str, "system-id"},
    level{YType::uint32, "level"}
{

    yang_name = "isis"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::~Isis()
{
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::has_data() const
{
    if (is_presence_container) return true;
    return system_id.is_set
	|| level.is_set;
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "level")
        return true;
    return false;
}

Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::Ospf()
    :
    router_id{YType::str, "router-id"},
    area{YType::uint32, "area"}
{

    yang_name = "ospf"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::~Ospf()
{
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| area.is_set;
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(area.yfilter);
}

std::string Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "area")
        return true;
    return false;
}

Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::Bgp()
    :
    router_id{YType::str, "router-id"},
    confed_asn{YType::uint32, "confed-asn"}
{

    yang_name = "bgp"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::~Bgp()
{
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| confed_asn.is_set;
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(confed_asn.yfilter);
}

std::string Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (confed_asn.is_set || is_set(confed_asn.yfilter)) leaf_name_data.push_back(confed_asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "confed-asn")
    {
        confed_asn = value;
        confed_asn.value_namespace = name_space;
        confed_asn.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "confed-asn")
    {
        confed_asn.yfilter = yfilter;
    }
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::NodeId::Igp::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "confed-asn")
        return true;
    return false;
}

Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::SrgbInformation()
    :
    start{YType::uint32, "start"},
    size{YType::uint32, "size"},
    domain_identifier{YType::uint64, "domain-identifier"}
        ,
    node_id(std::make_shared<Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId>())
{
    node_id->parent = this;

    yang_name = "srgb-information"; yang_parent_name = "node-protocol-identifier"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::~SrgbInformation()
{
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::has_data() const
{
    if (is_presence_container) return true;
    return start.is_set
	|| size.is_set
	|| domain_identifier.is_set
	|| (node_id !=  nullptr && node_id->has_data());
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start.yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(domain_identifier.yfilter)
	|| (node_id !=  nullptr && node_id->has_operation());
}

std::string Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srgb-information";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start.is_set || is_set(start.yfilter)) leaf_name_data.push_back(start.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (domain_identifier.is_set || is_set(domain_identifier.yfilter)) leaf_name_data.push_back(domain_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-id")
    {
        if(node_id == nullptr)
        {
            node_id = std::make_shared<Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId>();
        }
        return node_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(node_id != nullptr)
    {
        _children["node-id"] = node_id;
    }

    return _children;
}

void Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start")
    {
        start = value;
        start.value_namespace = name_space;
        start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-identifier")
    {
        domain_identifier = value;
        domain_identifier.value_namespace = name_space;
        domain_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start")
    {
        start.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "domain-identifier")
    {
        domain_identifier.yfilter = yfilter;
    }
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-id" || name == "start" || name == "size" || name == "domain-identifier")
        return true;
    return false;
}

Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::NodeId()
    :
    autonomous_system_number{YType::uint32, "autonomous-system-number"},
    ls_identifier{YType::uint32, "ls-identifier"}
        ,
    igp(std::make_shared<Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp>())
{
    igp->parent = this;

    yang_name = "node-id"; yang_parent_name = "srgb-information"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::~NodeId()
{
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::has_data() const
{
    if (is_presence_container) return true;
    return autonomous_system_number.is_set
	|| ls_identifier.is_set
	|| (igp !=  nullptr && igp->has_data());
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(autonomous_system_number.yfilter)
	|| ydk::is_set(ls_identifier.yfilter)
	|| (igp !=  nullptr && igp->has_operation());
}

std::string Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (autonomous_system_number.is_set || is_set(autonomous_system_number.yfilter)) leaf_name_data.push_back(autonomous_system_number.get_name_leafdata());
    if (ls_identifier.is_set || is_set(ls_identifier.yfilter)) leaf_name_data.push_back(ls_identifier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp")
    {
        if(igp == nullptr)
        {
            igp = std::make_shared<Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp>();
        }
        return igp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(igp != nullptr)
    {
        _children["igp"] = igp;
    }

    return _children;
}

void Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number = value;
        autonomous_system_number.value_namespace = name_space;
        autonomous_system_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-identifier")
    {
        ls_identifier = value;
        ls_identifier.value_namespace = name_space;
        ls_identifier.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "autonomous-system-number")
    {
        autonomous_system_number.yfilter = yfilter;
    }
    if(value_path == "ls-identifier")
    {
        ls_identifier.yfilter = yfilter;
    }
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp" || name == "autonomous-system-number" || name == "ls-identifier")
        return true;
    return false;
}

Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Igp()
    :
    igp_id{YType::enumeration, "igp-id"}
        ,
    isis(std::make_shared<Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis>())
    , ospf(std::make_shared<Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf>())
    , bgp(std::make_shared<Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp>())
{
    isis->parent = this;
    ospf->parent = this;
    bgp->parent = this;

    yang_name = "igp"; yang_parent_name = "node-id"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::~Igp()
{
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::has_data() const
{
    if (is_presence_container) return true;
    return igp_id.is_set
	|| (isis !=  nullptr && isis->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (bgp !=  nullptr && bgp->has_data());
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(igp_id.yfilter)
	|| (isis !=  nullptr && isis->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation());
}

std::string Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_id.is_set || is_set(igp_id.yfilter)) leaf_name_data.push_back(igp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp>();
        }
        return bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(isis != nullptr)
    {
        _children["isis"] = isis;
    }

    if(ospf != nullptr)
    {
        _children["ospf"] = ospf;
    }

    if(bgp != nullptr)
    {
        _children["bgp"] = bgp;
    }

    return _children;
}

void Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "igp-id")
    {
        igp_id = value;
        igp_id.value_namespace = name_space;
        igp_id.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "igp-id")
    {
        igp_id.yfilter = yfilter;
    }
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis" || name == "ospf" || name == "bgp" || name == "igp-id")
        return true;
    return false;
}

Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::Isis()
    :
    system_id{YType::str, "system-id"},
    level{YType::uint32, "level"}
{

    yang_name = "isis"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::~Isis()
{
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::has_data() const
{
    if (is_presence_container) return true;
    return system_id.is_set
	|| level.is_set;
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(system_id.yfilter)
	|| ydk::is_set(level.yfilter);
}

std::string Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (system_id.is_set || is_set(system_id.yfilter)) leaf_name_data.push_back(system_id.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "system-id")
    {
        system_id = value;
        system_id.value_namespace = name_space;
        system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "system-id")
    {
        system_id.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "system-id" || name == "level")
        return true;
    return false;
}

Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::Ospf()
    :
    router_id{YType::str, "router-id"},
    area{YType::uint32, "area"}
{

    yang_name = "ospf"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::~Ospf()
{
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| area.is_set;
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(area.yfilter);
}

std::string Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (area.is_set || is_set(area.yfilter)) leaf_name_data.push_back(area.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area")
    {
        area = value;
        area.value_namespace = name_space;
        area.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "area")
    {
        area.yfilter = yfilter;
    }
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "area")
        return true;
    return false;
}

Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::Bgp()
    :
    router_id{YType::str, "router-id"},
    confed_asn{YType::uint32, "confed-asn"}
{

    yang_name = "bgp"; yang_parent_name = "igp"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::~Bgp()
{
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| confed_asn.is_set;
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(confed_asn.yfilter);
}

std::string Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (confed_asn.is_set || is_set(confed_asn.yfilter)) leaf_name_data.push_back(confed_asn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "confed-asn")
    {
        confed_asn = value;
        confed_asn.value_namespace = name_space;
        confed_asn.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "confed-asn")
    {
        confed_asn.yfilter = yfilter;
    }
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::NodeId::Igp::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "confed-asn")
        return true;
    return false;
}

Pce::PrefixInfos::PrefixInfo::Address::Address()
    :
    ip(std::make_shared<Pce::PrefixInfos::PrefixInfo::Address::Ip>())
{
    ip->parent = this;

    yang_name = "address"; yang_parent_name = "prefix-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::PrefixInfos::PrefixInfo::Address::~Address()
{
}

bool Pce::PrefixInfos::PrefixInfo::Address::has_data() const
{
    if (is_presence_container) return true;
    return (ip !=  nullptr && ip->has_data());
}

bool Pce::PrefixInfos::PrefixInfo::Address::has_operation() const
{
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Pce::PrefixInfos::PrefixInfo::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::PrefixInfos::PrefixInfo::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::PrefixInfos::PrefixInfo::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Pce::PrefixInfos::PrefixInfo::Address::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::PrefixInfos::PrefixInfo::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip != nullptr)
    {
        _children["ip"] = ip;
    }

    return _children;
}

void Pce::PrefixInfos::PrefixInfo::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pce::PrefixInfos::PrefixInfo::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pce::PrefixInfos::PrefixInfo::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip")
        return true;
    return false;
}

Pce::PrefixInfos::PrefixInfo::Address::Ip::Ip()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "ip"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::PrefixInfos::PrefixInfo::Address::Ip::~Ip()
{
}

bool Pce::PrefixInfos::PrefixInfo::Address::Ip::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Pce::PrefixInfos::PrefixInfo::Address::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Pce::PrefixInfos::PrefixInfo::Address::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::PrefixInfos::PrefixInfo::Address::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::PrefixInfos::PrefixInfo::Address::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::PrefixInfos::PrefixInfo::Address::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::PrefixInfos::PrefixInfo::Address::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::PrefixInfos::PrefixInfo::Address::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Pce::PrefixInfos::PrefixInfo::Address::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Pce::LspSummary::LspSummary()
    :
    all_ls_ps(std::make_shared<Pce::LspSummary::AllLsPs>())
    , peer_ls_ps_info(this, {})
{
    all_ls_ps->parent = this;

    yang_name = "lsp-summary"; yang_parent_name = "pce"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::LspSummary::~LspSummary()
{
}

bool Pce::LspSummary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<peer_ls_ps_info.len(); index++)
    {
        if(peer_ls_ps_info[index]->has_data())
            return true;
    }
    return (all_ls_ps !=  nullptr && all_ls_ps->has_data());
}

bool Pce::LspSummary::has_operation() const
{
    for (std::size_t index=0; index<peer_ls_ps_info.len(); index++)
    {
        if(peer_ls_ps_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (all_ls_ps !=  nullptr && all_ls_ps->has_operation());
}

std::string Pce::LspSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::LspSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::LspSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::LspSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-ls-ps")
    {
        if(all_ls_ps == nullptr)
        {
            all_ls_ps = std::make_shared<Pce::LspSummary::AllLsPs>();
        }
        return all_ls_ps;
    }

    if(child_yang_name == "peer-ls-ps-info")
    {
        auto ent_ = std::make_shared<Pce::LspSummary::PeerLsPsInfo>();
        ent_->parent = this;
        peer_ls_ps_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::LspSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(all_ls_ps != nullptr)
    {
        _children["all-ls-ps"] = all_ls_ps;
    }

    count_ = 0;
    for (auto ent_ : peer_ls_ps_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pce::LspSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pce::LspSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pce::LspSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-ls-ps" || name == "peer-ls-ps-info")
        return true;
    return false;
}

Pce::LspSummary::AllLsPs::AllLsPs()
    :
    all_ls_ps{YType::uint32, "all-ls-ps"},
    up_ls_ps{YType::uint32, "up-ls-ps"},
    admin_up_ls_ps{YType::uint32, "admin-up-ls-ps"},
    sr_ls_ps{YType::uint32, "sr-ls-ps"},
    rsvp_ls_ps{YType::uint32, "rsvp-ls-ps"}
{

    yang_name = "all-ls-ps"; yang_parent_name = "lsp-summary"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::LspSummary::AllLsPs::~AllLsPs()
{
}

bool Pce::LspSummary::AllLsPs::has_data() const
{
    if (is_presence_container) return true;
    return all_ls_ps.is_set
	|| up_ls_ps.is_set
	|| admin_up_ls_ps.is_set
	|| sr_ls_ps.is_set
	|| rsvp_ls_ps.is_set;
}

bool Pce::LspSummary::AllLsPs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_ls_ps.yfilter)
	|| ydk::is_set(up_ls_ps.yfilter)
	|| ydk::is_set(admin_up_ls_ps.yfilter)
	|| ydk::is_set(sr_ls_ps.yfilter)
	|| ydk::is_set(rsvp_ls_ps.yfilter);
}

std::string Pce::LspSummary::AllLsPs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/lsp-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::LspSummary::AllLsPs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-ls-ps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::LspSummary::AllLsPs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_ls_ps.is_set || is_set(all_ls_ps.yfilter)) leaf_name_data.push_back(all_ls_ps.get_name_leafdata());
    if (up_ls_ps.is_set || is_set(up_ls_ps.yfilter)) leaf_name_data.push_back(up_ls_ps.get_name_leafdata());
    if (admin_up_ls_ps.is_set || is_set(admin_up_ls_ps.yfilter)) leaf_name_data.push_back(admin_up_ls_ps.get_name_leafdata());
    if (sr_ls_ps.is_set || is_set(sr_ls_ps.yfilter)) leaf_name_data.push_back(sr_ls_ps.get_name_leafdata());
    if (rsvp_ls_ps.is_set || is_set(rsvp_ls_ps.yfilter)) leaf_name_data.push_back(rsvp_ls_ps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::LspSummary::AllLsPs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::LspSummary::AllLsPs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::LspSummary::AllLsPs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-ls-ps")
    {
        all_ls_ps = value;
        all_ls_ps.value_namespace = name_space;
        all_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-ls-ps")
    {
        up_ls_ps = value;
        up_ls_ps.value_namespace = name_space;
        up_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-up-ls-ps")
    {
        admin_up_ls_ps = value;
        admin_up_ls_ps.value_namespace = name_space;
        admin_up_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-ls-ps")
    {
        sr_ls_ps = value;
        sr_ls_ps.value_namespace = name_space;
        sr_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-ls-ps")
    {
        rsvp_ls_ps = value;
        rsvp_ls_ps.value_namespace = name_space;
        rsvp_ls_ps.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::LspSummary::AllLsPs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-ls-ps")
    {
        all_ls_ps.yfilter = yfilter;
    }
    if(value_path == "up-ls-ps")
    {
        up_ls_ps.yfilter = yfilter;
    }
    if(value_path == "admin-up-ls-ps")
    {
        admin_up_ls_ps.yfilter = yfilter;
    }
    if(value_path == "sr-ls-ps")
    {
        sr_ls_ps.yfilter = yfilter;
    }
    if(value_path == "rsvp-ls-ps")
    {
        rsvp_ls_ps.yfilter = yfilter;
    }
}

bool Pce::LspSummary::AllLsPs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-ls-ps" || name == "up-ls-ps" || name == "admin-up-ls-ps" || name == "sr-ls-ps" || name == "rsvp-ls-ps")
        return true;
    return false;
}

Pce::LspSummary::PeerLsPsInfo::PeerLsPsInfo()
    :
    lsp_summary(std::make_shared<Pce::LspSummary::PeerLsPsInfo::LspSummary_>())
    , peer_address(std::make_shared<Pce::LspSummary::PeerLsPsInfo::PeerAddress>())
{
    lsp_summary->parent = this;
    peer_address->parent = this;

    yang_name = "peer-ls-ps-info"; yang_parent_name = "lsp-summary"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::LspSummary::PeerLsPsInfo::~PeerLsPsInfo()
{
}

bool Pce::LspSummary::PeerLsPsInfo::has_data() const
{
    if (is_presence_container) return true;
    return (lsp_summary !=  nullptr && lsp_summary->has_data())
	|| (peer_address !=  nullptr && peer_address->has_data());
}

bool Pce::LspSummary::PeerLsPsInfo::has_operation() const
{
    return is_set(yfilter)
	|| (lsp_summary !=  nullptr && lsp_summary->has_operation())
	|| (peer_address !=  nullptr && peer_address->has_operation());
}

std::string Pce::LspSummary::PeerLsPsInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/lsp-summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::LspSummary::PeerLsPsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-ls-ps-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::LspSummary::PeerLsPsInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::LspSummary::PeerLsPsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-summary")
    {
        if(lsp_summary == nullptr)
        {
            lsp_summary = std::make_shared<Pce::LspSummary::PeerLsPsInfo::LspSummary_>();
        }
        return lsp_summary;
    }

    if(child_yang_name == "peer-address")
    {
        if(peer_address == nullptr)
        {
            peer_address = std::make_shared<Pce::LspSummary::PeerLsPsInfo::PeerAddress>();
        }
        return peer_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::LspSummary::PeerLsPsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(lsp_summary != nullptr)
    {
        _children["lsp-summary"] = lsp_summary;
    }

    if(peer_address != nullptr)
    {
        _children["peer-address"] = peer_address;
    }

    return _children;
}

void Pce::LspSummary::PeerLsPsInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pce::LspSummary::PeerLsPsInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pce::LspSummary::PeerLsPsInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-summary" || name == "peer-address")
        return true;
    return false;
}

Pce::LspSummary::PeerLsPsInfo::LspSummary_::LspSummary_()
    :
    all_ls_ps{YType::uint32, "all-ls-ps"},
    up_ls_ps{YType::uint32, "up-ls-ps"},
    admin_up_ls_ps{YType::uint32, "admin-up-ls-ps"},
    sr_ls_ps{YType::uint32, "sr-ls-ps"},
    rsvp_ls_ps{YType::uint32, "rsvp-ls-ps"}
{

    yang_name = "lsp-summary"; yang_parent_name = "peer-ls-ps-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::LspSummary::PeerLsPsInfo::LspSummary_::~LspSummary_()
{
}

bool Pce::LspSummary::PeerLsPsInfo::LspSummary_::has_data() const
{
    if (is_presence_container) return true;
    return all_ls_ps.is_set
	|| up_ls_ps.is_set
	|| admin_up_ls_ps.is_set
	|| sr_ls_ps.is_set
	|| rsvp_ls_ps.is_set;
}

bool Pce::LspSummary::PeerLsPsInfo::LspSummary_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_ls_ps.yfilter)
	|| ydk::is_set(up_ls_ps.yfilter)
	|| ydk::is_set(admin_up_ls_ps.yfilter)
	|| ydk::is_set(sr_ls_ps.yfilter)
	|| ydk::is_set(rsvp_ls_ps.yfilter);
}

std::string Pce::LspSummary::PeerLsPsInfo::LspSummary_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/lsp-summary/peer-ls-ps-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::LspSummary::PeerLsPsInfo::LspSummary_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::LspSummary::PeerLsPsInfo::LspSummary_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_ls_ps.is_set || is_set(all_ls_ps.yfilter)) leaf_name_data.push_back(all_ls_ps.get_name_leafdata());
    if (up_ls_ps.is_set || is_set(up_ls_ps.yfilter)) leaf_name_data.push_back(up_ls_ps.get_name_leafdata());
    if (admin_up_ls_ps.is_set || is_set(admin_up_ls_ps.yfilter)) leaf_name_data.push_back(admin_up_ls_ps.get_name_leafdata());
    if (sr_ls_ps.is_set || is_set(sr_ls_ps.yfilter)) leaf_name_data.push_back(sr_ls_ps.get_name_leafdata());
    if (rsvp_ls_ps.is_set || is_set(rsvp_ls_ps.yfilter)) leaf_name_data.push_back(rsvp_ls_ps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::LspSummary::PeerLsPsInfo::LspSummary_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::LspSummary::PeerLsPsInfo::LspSummary_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::LspSummary::PeerLsPsInfo::LspSummary_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-ls-ps")
    {
        all_ls_ps = value;
        all_ls_ps.value_namespace = name_space;
        all_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-ls-ps")
    {
        up_ls_ps = value;
        up_ls_ps.value_namespace = name_space;
        up_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-up-ls-ps")
    {
        admin_up_ls_ps = value;
        admin_up_ls_ps.value_namespace = name_space;
        admin_up_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-ls-ps")
    {
        sr_ls_ps = value;
        sr_ls_ps.value_namespace = name_space;
        sr_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-ls-ps")
    {
        rsvp_ls_ps = value;
        rsvp_ls_ps.value_namespace = name_space;
        rsvp_ls_ps.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::LspSummary::PeerLsPsInfo::LspSummary_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-ls-ps")
    {
        all_ls_ps.yfilter = yfilter;
    }
    if(value_path == "up-ls-ps")
    {
        up_ls_ps.yfilter = yfilter;
    }
    if(value_path == "admin-up-ls-ps")
    {
        admin_up_ls_ps.yfilter = yfilter;
    }
    if(value_path == "sr-ls-ps")
    {
        sr_ls_ps.yfilter = yfilter;
    }
    if(value_path == "rsvp-ls-ps")
    {
        rsvp_ls_ps.yfilter = yfilter;
    }
}

bool Pce::LspSummary::PeerLsPsInfo::LspSummary_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-ls-ps" || name == "up-ls-ps" || name == "admin-up-ls-ps" || name == "sr-ls-ps" || name == "rsvp-ls-ps")
        return true;
    return false;
}

Pce::LspSummary::PeerLsPsInfo::PeerAddress::PeerAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "peer-address"; yang_parent_name = "peer-ls-ps-info"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::LspSummary::PeerLsPsInfo::PeerAddress::~PeerAddress()
{
}

bool Pce::LspSummary::PeerLsPsInfo::PeerAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Pce::LspSummary::PeerLsPsInfo::PeerAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Pce::LspSummary::PeerLsPsInfo::PeerAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/lsp-summary/peer-ls-ps-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::LspSummary::PeerLsPsInfo::PeerAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::LspSummary::PeerLsPsInfo::PeerAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::LspSummary::PeerLsPsInfo::PeerAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::LspSummary::PeerLsPsInfo::PeerAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::LspSummary::PeerLsPsInfo::PeerAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::LspSummary::PeerLsPsInfo::PeerAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Pce::LspSummary::PeerLsPsInfo::PeerAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Pce::PeerInfos::PeerInfos()
    :
    peer_info(this, {"peer_address"})
{

    yang_name = "peer-infos"; yang_parent_name = "pce"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::PeerInfos::~PeerInfos()
{
}

bool Pce::PeerInfos::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<peer_info.len(); index++)
    {
        if(peer_info[index]->has_data())
            return true;
    }
    return false;
}

bool Pce::PeerInfos::has_operation() const
{
    for (std::size_t index=0; index<peer_info.len(); index++)
    {
        if(peer_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pce::PeerInfos::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::PeerInfos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-infos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::PeerInfos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::PeerInfos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-info")
    {
        auto ent_ = std::make_shared<Pce::PeerInfos::PeerInfo>();
        ent_->parent = this;
        peer_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::PeerInfos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : peer_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pce::PeerInfos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pce::PeerInfos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pce::PeerInfos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-info")
        return true;
    return false;
}

Pce::PeerInfos::PeerInfo::PeerInfo()
    :
    peer_address{YType::str, "peer-address"},
    peer_protocol{YType::enumeration, "peer-protocol"}
        ,
    peer_address_xr(std::make_shared<Pce::PeerInfos::PeerInfo::PeerAddressXr>())
    , brief_pcep_information(std::make_shared<Pce::PeerInfos::PeerInfo::BriefPcepInformation>())
{
    peer_address_xr->parent = this;
    brief_pcep_information->parent = this;

    yang_name = "peer-info"; yang_parent_name = "peer-infos"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::PeerInfos::PeerInfo::~PeerInfo()
{
}

bool Pce::PeerInfos::PeerInfo::has_data() const
{
    if (is_presence_container) return true;
    return peer_address.is_set
	|| peer_protocol.is_set
	|| (peer_address_xr !=  nullptr && peer_address_xr->has_data())
	|| (brief_pcep_information !=  nullptr && brief_pcep_information->has_data());
}

bool Pce::PeerInfos::PeerInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_address.yfilter)
	|| ydk::is_set(peer_protocol.yfilter)
	|| (peer_address_xr !=  nullptr && peer_address_xr->has_operation())
	|| (brief_pcep_information !=  nullptr && brief_pcep_information->has_operation());
}

std::string Pce::PeerInfos::PeerInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/peer-infos/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::PeerInfos::PeerInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-info";
    ADD_KEY_TOKEN(peer_address, "peer-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::PeerInfos::PeerInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_address.is_set || is_set(peer_address.yfilter)) leaf_name_data.push_back(peer_address.get_name_leafdata());
    if (peer_protocol.is_set || is_set(peer_protocol.yfilter)) leaf_name_data.push_back(peer_protocol.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::PeerInfos::PeerInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "peer-address-xr")
    {
        if(peer_address_xr == nullptr)
        {
            peer_address_xr = std::make_shared<Pce::PeerInfos::PeerInfo::PeerAddressXr>();
        }
        return peer_address_xr;
    }

    if(child_yang_name == "brief-pcep-information")
    {
        if(brief_pcep_information == nullptr)
        {
            brief_pcep_information = std::make_shared<Pce::PeerInfos::PeerInfo::BriefPcepInformation>();
        }
        return brief_pcep_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::PeerInfos::PeerInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(peer_address_xr != nullptr)
    {
        _children["peer-address-xr"] = peer_address_xr;
    }

    if(brief_pcep_information != nullptr)
    {
        _children["brief-pcep-information"] = brief_pcep_information;
    }

    return _children;
}

void Pce::PeerInfos::PeerInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-address")
    {
        peer_address = value;
        peer_address.value_namespace = name_space;
        peer_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-protocol")
    {
        peer_protocol = value;
        peer_protocol.value_namespace = name_space;
        peer_protocol.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::PeerInfos::PeerInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-address")
    {
        peer_address.yfilter = yfilter;
    }
    if(value_path == "peer-protocol")
    {
        peer_protocol.yfilter = yfilter;
    }
}

bool Pce::PeerInfos::PeerInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-address-xr" || name == "brief-pcep-information" || name == "peer-address" || name == "peer-protocol")
        return true;
    return false;
}

Pce::PeerInfos::PeerInfo::PeerAddressXr::PeerAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "peer-address-xr"; yang_parent_name = "peer-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::PeerInfos::PeerInfo::PeerAddressXr::~PeerAddressXr()
{
}

bool Pce::PeerInfos::PeerInfo::PeerAddressXr::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Pce::PeerInfos::PeerInfo::PeerAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Pce::PeerInfos::PeerInfo::PeerAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::PeerInfos::PeerInfo::PeerAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::PeerInfos::PeerInfo::PeerAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::PeerInfos::PeerInfo::PeerAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::PeerInfos::PeerInfo::PeerAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::PeerInfos::PeerInfo::PeerAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Pce::PeerInfos::PeerInfo::PeerAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Pce::PeerInfos::PeerInfo::BriefPcepInformation::BriefPcepInformation()
    :
    pcep_state{YType::enumeration, "pcep-state"},
    stateful{YType::boolean, "stateful"},
    capability_update{YType::boolean, "capability-update"},
    capability_instantiate{YType::boolean, "capability-instantiate"},
    capability_segment_routing{YType::boolean, "capability-segment-routing"},
    capability_triggered_sync{YType::boolean, "capability-triggered-sync"},
    capability_db_version{YType::boolean, "capability-db-version"},
    capability_delta_sync{YType::boolean, "capability-delta-sync"}
{

    yang_name = "brief-pcep-information"; yang_parent_name = "peer-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::PeerInfos::PeerInfo::BriefPcepInformation::~BriefPcepInformation()
{
}

bool Pce::PeerInfos::PeerInfo::BriefPcepInformation::has_data() const
{
    if (is_presence_container) return true;
    return pcep_state.is_set
	|| stateful.is_set
	|| capability_update.is_set
	|| capability_instantiate.is_set
	|| capability_segment_routing.is_set
	|| capability_triggered_sync.is_set
	|| capability_db_version.is_set
	|| capability_delta_sync.is_set;
}

bool Pce::PeerInfos::PeerInfo::BriefPcepInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pcep_state.yfilter)
	|| ydk::is_set(stateful.yfilter)
	|| ydk::is_set(capability_update.yfilter)
	|| ydk::is_set(capability_instantiate.yfilter)
	|| ydk::is_set(capability_segment_routing.yfilter)
	|| ydk::is_set(capability_triggered_sync.yfilter)
	|| ydk::is_set(capability_db_version.yfilter)
	|| ydk::is_set(capability_delta_sync.yfilter);
}

std::string Pce::PeerInfos::PeerInfo::BriefPcepInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief-pcep-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::PeerInfos::PeerInfo::BriefPcepInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pcep_state.is_set || is_set(pcep_state.yfilter)) leaf_name_data.push_back(pcep_state.get_name_leafdata());
    if (stateful.is_set || is_set(stateful.yfilter)) leaf_name_data.push_back(stateful.get_name_leafdata());
    if (capability_update.is_set || is_set(capability_update.yfilter)) leaf_name_data.push_back(capability_update.get_name_leafdata());
    if (capability_instantiate.is_set || is_set(capability_instantiate.yfilter)) leaf_name_data.push_back(capability_instantiate.get_name_leafdata());
    if (capability_segment_routing.is_set || is_set(capability_segment_routing.yfilter)) leaf_name_data.push_back(capability_segment_routing.get_name_leafdata());
    if (capability_triggered_sync.is_set || is_set(capability_triggered_sync.yfilter)) leaf_name_data.push_back(capability_triggered_sync.get_name_leafdata());
    if (capability_db_version.is_set || is_set(capability_db_version.yfilter)) leaf_name_data.push_back(capability_db_version.get_name_leafdata());
    if (capability_delta_sync.is_set || is_set(capability_delta_sync.yfilter)) leaf_name_data.push_back(capability_delta_sync.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::PeerInfos::PeerInfo::BriefPcepInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::PeerInfos::PeerInfo::BriefPcepInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::PeerInfos::PeerInfo::BriefPcepInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pcep-state")
    {
        pcep_state = value;
        pcep_state.value_namespace = name_space;
        pcep_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stateful")
    {
        stateful = value;
        stateful.value_namespace = name_space;
        stateful.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-update")
    {
        capability_update = value;
        capability_update.value_namespace = name_space;
        capability_update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-instantiate")
    {
        capability_instantiate = value;
        capability_instantiate.value_namespace = name_space;
        capability_instantiate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-segment-routing")
    {
        capability_segment_routing = value;
        capability_segment_routing.value_namespace = name_space;
        capability_segment_routing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-triggered-sync")
    {
        capability_triggered_sync = value;
        capability_triggered_sync.value_namespace = name_space;
        capability_triggered_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-db-version")
    {
        capability_db_version = value;
        capability_db_version.value_namespace = name_space;
        capability_db_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability-delta-sync")
    {
        capability_delta_sync = value;
        capability_delta_sync.value_namespace = name_space;
        capability_delta_sync.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::PeerInfos::PeerInfo::BriefPcepInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pcep-state")
    {
        pcep_state.yfilter = yfilter;
    }
    if(value_path == "stateful")
    {
        stateful.yfilter = yfilter;
    }
    if(value_path == "capability-update")
    {
        capability_update.yfilter = yfilter;
    }
    if(value_path == "capability-instantiate")
    {
        capability_instantiate.yfilter = yfilter;
    }
    if(value_path == "capability-segment-routing")
    {
        capability_segment_routing.yfilter = yfilter;
    }
    if(value_path == "capability-triggered-sync")
    {
        capability_triggered_sync.yfilter = yfilter;
    }
    if(value_path == "capability-db-version")
    {
        capability_db_version.yfilter = yfilter;
    }
    if(value_path == "capability-delta-sync")
    {
        capability_delta_sync.yfilter = yfilter;
    }
}

bool Pce::PeerInfos::PeerInfo::BriefPcepInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pcep-state" || name == "stateful" || name == "capability-update" || name == "capability-instantiate" || name == "capability-segment-routing" || name == "capability-triggered-sync" || name == "capability-db-version" || name == "capability-delta-sync")
        return true;
    return false;
}

Pce::TunnelDetailInfos::TunnelDetailInfos()
    :
    tunnel_detail_info(this, {"peer_address", "plsp_id", "tunnel_name"})
{

    yang_name = "tunnel-detail-infos"; yang_parent_name = "pce"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::TunnelDetailInfos::~TunnelDetailInfos()
{
}

bool Pce::TunnelDetailInfos::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tunnel_detail_info.len(); index++)
    {
        if(tunnel_detail_info[index]->has_data())
            return true;
    }
    return false;
}

bool Pce::TunnelDetailInfos::has_operation() const
{
    for (std::size_t index=0; index<tunnel_detail_info.len(); index++)
    {
        if(tunnel_detail_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pce::TunnelDetailInfos::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::TunnelDetailInfos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-detail-infos";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TunnelDetailInfos::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TunnelDetailInfos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-detail-info")
    {
        auto ent_ = std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo>();
        ent_->parent = this;
        tunnel_detail_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TunnelDetailInfos::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tunnel_detail_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pce::TunnelDetailInfos::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pce::TunnelDetailInfos::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pce::TunnelDetailInfos::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-detail-info")
        return true;
    return false;
}

Pce::TunnelDetailInfos::TunnelDetailInfo::TunnelDetailInfo()
    :
    peer_address{YType::str, "peer-address"},
    plsp_id{YType::uint32, "plsp-id"},
    tunnel_name{YType::str, "tunnel-name"},
    tunnel_name_xr{YType::str, "tunnel-name-xr"},
    xtc_controlled{YType::boolean, "xtc-controlled"},
    color{YType::uint32, "color"}
        ,
    pcc_address(std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::PccAddress>())
    , private_lsp_information(std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation>())
    , detail_lsp_information(this, {})
{
    pcc_address->parent = this;
    private_lsp_information->parent = this;

    yang_name = "tunnel-detail-info"; yang_parent_name = "tunnel-detail-infos"; is_top_level_class = false; has_list_ancestor = false; 
}

Pce::TunnelDetailInfos::TunnelDetailInfo::~TunnelDetailInfo()
{
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<detail_lsp_information.len(); index++)
    {
        if(detail_lsp_information[index]->has_data())
            return true;
    }
    return peer_address.is_set
	|| plsp_id.is_set
	|| tunnel_name.is_set
	|| tunnel_name_xr.is_set
	|| xtc_controlled.is_set
	|| color.is_set
	|| (pcc_address !=  nullptr && pcc_address->has_data())
	|| (private_lsp_information !=  nullptr && private_lsp_information->has_data());
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::has_operation() const
{
    for (std::size_t index=0; index<detail_lsp_information.len(); index++)
    {
        if(detail_lsp_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(peer_address.yfilter)
	|| ydk::is_set(plsp_id.yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(tunnel_name_xr.yfilter)
	|| ydk::is_set(xtc_controlled.yfilter)
	|| ydk::is_set(color.yfilter)
	|| (pcc_address !=  nullptr && pcc_address->has_operation())
	|| (private_lsp_information !=  nullptr && private_lsp_information->has_operation());
}

std::string Pce::TunnelDetailInfos::TunnelDetailInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/tunnel-detail-infos/" << get_segment_path();
    return path_buffer.str();
}

std::string Pce::TunnelDetailInfos::TunnelDetailInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-detail-info";
    ADD_KEY_TOKEN(peer_address, "peer-address");
    ADD_KEY_TOKEN(plsp_id, "plsp-id");
    ADD_KEY_TOKEN(tunnel_name, "tunnel-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TunnelDetailInfos::TunnelDetailInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_address.is_set || is_set(peer_address.yfilter)) leaf_name_data.push_back(peer_address.get_name_leafdata());
    if (plsp_id.is_set || is_set(plsp_id.yfilter)) leaf_name_data.push_back(plsp_id.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (tunnel_name_xr.is_set || is_set(tunnel_name_xr.yfilter)) leaf_name_data.push_back(tunnel_name_xr.get_name_leafdata());
    if (xtc_controlled.is_set || is_set(xtc_controlled.yfilter)) leaf_name_data.push_back(xtc_controlled.get_name_leafdata());
    if (color.is_set || is_set(color.yfilter)) leaf_name_data.push_back(color.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TunnelDetailInfos::TunnelDetailInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pcc-address")
    {
        if(pcc_address == nullptr)
        {
            pcc_address = std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::PccAddress>();
        }
        return pcc_address;
    }

    if(child_yang_name == "private-lsp-information")
    {
        if(private_lsp_information == nullptr)
        {
            private_lsp_information = std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation>();
        }
        return private_lsp_information;
    }

    if(child_yang_name == "detail-lsp-information")
    {
        auto ent_ = std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation>();
        ent_->parent = this;
        detail_lsp_information.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TunnelDetailInfos::TunnelDetailInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pcc_address != nullptr)
    {
        _children["pcc-address"] = pcc_address;
    }

    if(private_lsp_information != nullptr)
    {
        _children["private-lsp-information"] = private_lsp_information;
    }

    count_ = 0;
    for (auto ent_ : detail_lsp_information.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-address")
    {
        peer_address = value;
        peer_address.value_namespace = name_space;
        peer_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "plsp-id")
    {
        plsp_id = value;
        plsp_id.value_namespace = name_space;
        plsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name-xr")
    {
        tunnel_name_xr = value;
        tunnel_name_xr.value_namespace = name_space;
        tunnel_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xtc-controlled")
    {
        xtc_controlled = value;
        xtc_controlled.value_namespace = name_space;
        xtc_controlled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "color")
    {
        color = value;
        color.value_namespace = name_space;
        color.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-address")
    {
        peer_address.yfilter = yfilter;
    }
    if(value_path == "plsp-id")
    {
        plsp_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-name-xr")
    {
        tunnel_name_xr.yfilter = yfilter;
    }
    if(value_path == "xtc-controlled")
    {
        xtc_controlled.yfilter = yfilter;
    }
    if(value_path == "color")
    {
        color.yfilter = yfilter;
    }
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pcc-address" || name == "private-lsp-information" || name == "detail-lsp-information" || name == "peer-address" || name == "plsp-id" || name == "tunnel-name" || name == "tunnel-name-xr" || name == "xtc-controlled" || name == "color")
        return true;
    return false;
}

Pce::TunnelDetailInfos::TunnelDetailInfo::PccAddress::PccAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "pcc-address"; yang_parent_name = "tunnel-detail-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TunnelDetailInfos::TunnelDetailInfo::PccAddress::~PccAddress()
{
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::PccAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::PccAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Pce::TunnelDetailInfos::TunnelDetailInfo::PccAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcc-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TunnelDetailInfos::TunnelDetailInfo::PccAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TunnelDetailInfos::TunnelDetailInfo::PccAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TunnelDetailInfos::TunnelDetailInfo::PccAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::PccAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::PccAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::PccAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::PrivateLspInformation()
    :
    event_buffer(this, {})
{

    yang_name = "private-lsp-information"; yang_parent_name = "tunnel-detail-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::~PrivateLspInformation()
{
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<event_buffer.len(); index++)
    {
        if(event_buffer[index]->has_data())
            return true;
    }
    return false;
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::has_operation() const
{
    for (std::size_t index=0; index<event_buffer.len(); index++)
    {
        if(event_buffer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "private-lsp-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event-buffer")
    {
        auto ent_ = std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer>();
        ent_->parent = this;
        event_buffer.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : event_buffer.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-buffer")
        return true;
    return false;
}

Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer::EventBuffer()
    :
    event_id{YType::uint32, "event-id"},
    event_message{YType::str, "event-message"},
    time_stamp{YType::uint32, "time-stamp"}
{

    yang_name = "event-buffer"; yang_parent_name = "private-lsp-information"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer::~EventBuffer()
{
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer::has_data() const
{
    if (is_presence_container) return true;
    return event_id.is_set
	|| event_message.is_set
	|| time_stamp.is_set;
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_id.yfilter)
	|| ydk::is_set(event_message.yfilter)
	|| ydk::is_set(time_stamp.yfilter);
}

std::string Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-buffer";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_id.is_set || is_set(event_id.yfilter)) leaf_name_data.push_back(event_id.get_name_leafdata());
    if (event_message.is_set || is_set(event_message.yfilter)) leaf_name_data.push_back(event_message.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.yfilter)) leaf_name_data.push_back(time_stamp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-id")
    {
        event_id = value;
        event_id.value_namespace = name_space;
        event_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-message")
    {
        event_message = value;
        event_message.value_namespace = name_space;
        event_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
        time_stamp.value_namespace = name_space;
        time_stamp.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-id")
    {
        event_id.yfilter = yfilter;
    }
    if(value_path == "event-message")
    {
        event_message.yfilter = yfilter;
    }
    if(value_path == "time-stamp")
    {
        time_stamp.yfilter = yfilter;
    }
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-id" || name == "event-message" || name == "time-stamp")
        return true;
    return false;
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::DetailLspInformation()
    :
    signaled_bandwidth_specified{YType::boolean, "signaled-bandwidth-specified"},
    signaled_bandwidth{YType::uint64, "signaled-bandwidth"},
    actual_bandwidth_specified{YType::boolean, "actual-bandwidth-specified"},
    actual_bandwidth{YType::uint64, "actual-bandwidth"},
    lsp_role{YType::uint32, "lsp-role"},
    computing_pce{YType::uint32, "computing-pce"},
    srlg_info{YType::uint32, "srlg-info"}
        ,
    brief_lsp_information(std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation>())
    , er_os(std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs>())
    , lsppcep_information(std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation>())
    , lsp_association_info(std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo>())
    , lsp_attributes(std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes>())
    , sub_delegated_pce(std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::SubDelegatedPce>())
    , state_sync_pce(std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::StateSyncPce>())
    , reporting_pcc_address(std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ReportingPccAddress>())
    , rro(this, {})
{
    brief_lsp_information->parent = this;
    er_os->parent = this;
    lsppcep_information->parent = this;
    lsp_association_info->parent = this;
    lsp_attributes->parent = this;
    sub_delegated_pce->parent = this;
    state_sync_pce->parent = this;
    reporting_pcc_address->parent = this;

    yang_name = "detail-lsp-information"; yang_parent_name = "tunnel-detail-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::~DetailLspInformation()
{
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rro.len(); index++)
    {
        if(rro[index]->has_data())
            return true;
    }
    for (auto const & leaf : srlg_info.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return signaled_bandwidth_specified.is_set
	|| signaled_bandwidth.is_set
	|| actual_bandwidth_specified.is_set
	|| actual_bandwidth.is_set
	|| lsp_role.is_set
	|| computing_pce.is_set
	|| (brief_lsp_information !=  nullptr && brief_lsp_information->has_data())
	|| (er_os !=  nullptr && er_os->has_data())
	|| (lsppcep_information !=  nullptr && lsppcep_information->has_data())
	|| (lsp_association_info !=  nullptr && lsp_association_info->has_data())
	|| (lsp_attributes !=  nullptr && lsp_attributes->has_data())
	|| (sub_delegated_pce !=  nullptr && sub_delegated_pce->has_data())
	|| (state_sync_pce !=  nullptr && state_sync_pce->has_data())
	|| (reporting_pcc_address !=  nullptr && reporting_pcc_address->has_data());
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::has_operation() const
{
    for (std::size_t index=0; index<rro.len(); index++)
    {
        if(rro[index]->has_operation())
            return true;
    }
    for (auto const & leaf : srlg_info.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(signaled_bandwidth_specified.yfilter)
	|| ydk::is_set(signaled_bandwidth.yfilter)
	|| ydk::is_set(actual_bandwidth_specified.yfilter)
	|| ydk::is_set(actual_bandwidth.yfilter)
	|| ydk::is_set(lsp_role.yfilter)
	|| ydk::is_set(computing_pce.yfilter)
	|| ydk::is_set(srlg_info.yfilter)
	|| (brief_lsp_information !=  nullptr && brief_lsp_information->has_operation())
	|| (er_os !=  nullptr && er_os->has_operation())
	|| (lsppcep_information !=  nullptr && lsppcep_information->has_operation())
	|| (lsp_association_info !=  nullptr && lsp_association_info->has_operation())
	|| (lsp_attributes !=  nullptr && lsp_attributes->has_operation())
	|| (sub_delegated_pce !=  nullptr && sub_delegated_pce->has_operation())
	|| (state_sync_pce !=  nullptr && state_sync_pce->has_operation())
	|| (reporting_pcc_address !=  nullptr && reporting_pcc_address->has_operation());
}

std::string Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-lsp-information";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (signaled_bandwidth_specified.is_set || is_set(signaled_bandwidth_specified.yfilter)) leaf_name_data.push_back(signaled_bandwidth_specified.get_name_leafdata());
    if (signaled_bandwidth.is_set || is_set(signaled_bandwidth.yfilter)) leaf_name_data.push_back(signaled_bandwidth.get_name_leafdata());
    if (actual_bandwidth_specified.is_set || is_set(actual_bandwidth_specified.yfilter)) leaf_name_data.push_back(actual_bandwidth_specified.get_name_leafdata());
    if (actual_bandwidth.is_set || is_set(actual_bandwidth.yfilter)) leaf_name_data.push_back(actual_bandwidth.get_name_leafdata());
    if (lsp_role.is_set || is_set(lsp_role.yfilter)) leaf_name_data.push_back(lsp_role.get_name_leafdata());
    if (computing_pce.is_set || is_set(computing_pce.yfilter)) leaf_name_data.push_back(computing_pce.get_name_leafdata());

    auto srlg_info_name_datas = srlg_info.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), srlg_info_name_datas.begin(), srlg_info_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "brief-lsp-information")
    {
        if(brief_lsp_information == nullptr)
        {
            brief_lsp_information = std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation>();
        }
        return brief_lsp_information;
    }

    if(child_yang_name == "er-os")
    {
        if(er_os == nullptr)
        {
            er_os = std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs>();
        }
        return er_os;
    }

    if(child_yang_name == "lsppcep-information")
    {
        if(lsppcep_information == nullptr)
        {
            lsppcep_information = std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation>();
        }
        return lsppcep_information;
    }

    if(child_yang_name == "lsp-association-info")
    {
        if(lsp_association_info == nullptr)
        {
            lsp_association_info = std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo>();
        }
        return lsp_association_info;
    }

    if(child_yang_name == "lsp-attributes")
    {
        if(lsp_attributes == nullptr)
        {
            lsp_attributes = std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes>();
        }
        return lsp_attributes;
    }

    if(child_yang_name == "sub-delegated-pce")
    {
        if(sub_delegated_pce == nullptr)
        {
            sub_delegated_pce = std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::SubDelegatedPce>();
        }
        return sub_delegated_pce;
    }

    if(child_yang_name == "state-sync-pce")
    {
        if(state_sync_pce == nullptr)
        {
            state_sync_pce = std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::StateSyncPce>();
        }
        return state_sync_pce;
    }

    if(child_yang_name == "reporting-pcc-address")
    {
        if(reporting_pcc_address == nullptr)
        {
            reporting_pcc_address = std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ReportingPccAddress>();
        }
        return reporting_pcc_address;
    }

    if(child_yang_name == "rro")
    {
        auto ent_ = std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro>();
        ent_->parent = this;
        rro.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(brief_lsp_information != nullptr)
    {
        _children["brief-lsp-information"] = brief_lsp_information;
    }

    if(er_os != nullptr)
    {
        _children["er-os"] = er_os;
    }

    if(lsppcep_information != nullptr)
    {
        _children["lsppcep-information"] = lsppcep_information;
    }

    if(lsp_association_info != nullptr)
    {
        _children["lsp-association-info"] = lsp_association_info;
    }

    if(lsp_attributes != nullptr)
    {
        _children["lsp-attributes"] = lsp_attributes;
    }

    if(sub_delegated_pce != nullptr)
    {
        _children["sub-delegated-pce"] = sub_delegated_pce;
    }

    if(state_sync_pce != nullptr)
    {
        _children["state-sync-pce"] = state_sync_pce;
    }

    if(reporting_pcc_address != nullptr)
    {
        _children["reporting-pcc-address"] = reporting_pcc_address;
    }

    count_ = 0;
    for (auto ent_ : rro.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "signaled-bandwidth-specified")
    {
        signaled_bandwidth_specified = value;
        signaled_bandwidth_specified.value_namespace = name_space;
        signaled_bandwidth_specified.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaled-bandwidth")
    {
        signaled_bandwidth = value;
        signaled_bandwidth.value_namespace = name_space;
        signaled_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actual-bandwidth-specified")
    {
        actual_bandwidth_specified = value;
        actual_bandwidth_specified.value_namespace = name_space;
        actual_bandwidth_specified.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actual-bandwidth")
    {
        actual_bandwidth = value;
        actual_bandwidth.value_namespace = name_space;
        actual_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-role")
    {
        lsp_role = value;
        lsp_role.value_namespace = name_space;
        lsp_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "computing-pce")
    {
        computing_pce = value;
        computing_pce.value_namespace = name_space;
        computing_pce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-info")
    {
        srlg_info.append(value);
    }
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "signaled-bandwidth-specified")
    {
        signaled_bandwidth_specified.yfilter = yfilter;
    }
    if(value_path == "signaled-bandwidth")
    {
        signaled_bandwidth.yfilter = yfilter;
    }
    if(value_path == "actual-bandwidth-specified")
    {
        actual_bandwidth_specified.yfilter = yfilter;
    }
    if(value_path == "actual-bandwidth")
    {
        actual_bandwidth.yfilter = yfilter;
    }
    if(value_path == "lsp-role")
    {
        lsp_role.yfilter = yfilter;
    }
    if(value_path == "computing-pce")
    {
        computing_pce.yfilter = yfilter;
    }
    if(value_path == "srlg-info")
    {
        srlg_info.yfilter = yfilter;
    }
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "brief-lsp-information" || name == "er-os" || name == "lsppcep-information" || name == "lsp-association-info" || name == "lsp-attributes" || name == "sub-delegated-pce" || name == "state-sync-pce" || name == "reporting-pcc-address" || name == "rro" || name == "signaled-bandwidth-specified" || name == "signaled-bandwidth" || name == "actual-bandwidth-specified" || name == "actual-bandwidth" || name == "lsp-role" || name == "computing-pce" || name == "srlg-info")
        return true;
    return false;
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::BriefLspInformation()
    :
    tunnel_id{YType::uint32, "tunnel-id"},
    lspid{YType::uint32, "lspid"},
    binding_sid{YType::uint32, "binding-sid"},
    lsp_setup_type{YType::enumeration, "lsp-setup-type"},
    operational_state{YType::enumeration, "operational-state"},
    administrative_state{YType::enumeration, "administrative-state"},
    msd{YType::uint32, "msd"},
    absolute_margin{YType::uint32, "absolute-margin"},
    relative_margin{YType::uint32, "relative-margin"}
        ,
    source_address(std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::SourceAddress>())
    , destination_address(std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::DestinationAddress>())
{
    source_address->parent = this;
    destination_address->parent = this;

    yang_name = "brief-lsp-information"; yang_parent_name = "detail-lsp-information"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::~BriefLspInformation()
{
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_id.is_set
	|| lspid.is_set
	|| binding_sid.is_set
	|| lsp_setup_type.is_set
	|| operational_state.is_set
	|| administrative_state.is_set
	|| msd.is_set
	|| absolute_margin.is_set
	|| relative_margin.is_set
	|| (source_address !=  nullptr && source_address->has_data())
	|| (destination_address !=  nullptr && destination_address->has_data());
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(lspid.yfilter)
	|| ydk::is_set(binding_sid.yfilter)
	|| ydk::is_set(lsp_setup_type.yfilter)
	|| ydk::is_set(operational_state.yfilter)
	|| ydk::is_set(administrative_state.yfilter)
	|| ydk::is_set(msd.yfilter)
	|| ydk::is_set(absolute_margin.yfilter)
	|| ydk::is_set(relative_margin.yfilter)
	|| (source_address !=  nullptr && source_address->has_operation())
	|| (destination_address !=  nullptr && destination_address->has_operation());
}

std::string Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief-lsp-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (lspid.is_set || is_set(lspid.yfilter)) leaf_name_data.push_back(lspid.get_name_leafdata());
    if (binding_sid.is_set || is_set(binding_sid.yfilter)) leaf_name_data.push_back(binding_sid.get_name_leafdata());
    if (lsp_setup_type.is_set || is_set(lsp_setup_type.yfilter)) leaf_name_data.push_back(lsp_setup_type.get_name_leafdata());
    if (operational_state.is_set || is_set(operational_state.yfilter)) leaf_name_data.push_back(operational_state.get_name_leafdata());
    if (administrative_state.is_set || is_set(administrative_state.yfilter)) leaf_name_data.push_back(administrative_state.get_name_leafdata());
    if (msd.is_set || is_set(msd.yfilter)) leaf_name_data.push_back(msd.get_name_leafdata());
    if (absolute_margin.is_set || is_set(absolute_margin.yfilter)) leaf_name_data.push_back(absolute_margin.get_name_leafdata());
    if (relative_margin.is_set || is_set(relative_margin.yfilter)) leaf_name_data.push_back(relative_margin.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::SourceAddress>();
        }
        return source_address;
    }

    if(child_yang_name == "destination-address")
    {
        if(destination_address == nullptr)
        {
            destination_address = std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::DestinationAddress>();
        }
        return destination_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source_address != nullptr)
    {
        _children["source-address"] = source_address;
    }

    if(destination_address != nullptr)
    {
        _children["destination-address"] = destination_address;
    }

    return _children;
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lspid")
    {
        lspid = value;
        lspid.value_namespace = name_space;
        lspid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-sid")
    {
        binding_sid = value;
        binding_sid.value_namespace = name_space;
        binding_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-setup-type")
    {
        lsp_setup_type = value;
        lsp_setup_type.value_namespace = name_space;
        lsp_setup_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operational-state")
    {
        operational_state = value;
        operational_state.value_namespace = name_space;
        operational_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "administrative-state")
    {
        administrative_state = value;
        administrative_state.value_namespace = name_space;
        administrative_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msd")
    {
        msd = value;
        msd.value_namespace = name_space;
        msd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "absolute-margin")
    {
        absolute_margin = value;
        absolute_margin.value_namespace = name_space;
        absolute_margin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "relative-margin")
    {
        relative_margin = value;
        relative_margin.value_namespace = name_space;
        relative_margin.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "lspid")
    {
        lspid.yfilter = yfilter;
    }
    if(value_path == "binding-sid")
    {
        binding_sid.yfilter = yfilter;
    }
    if(value_path == "lsp-setup-type")
    {
        lsp_setup_type.yfilter = yfilter;
    }
    if(value_path == "operational-state")
    {
        operational_state.yfilter = yfilter;
    }
    if(value_path == "administrative-state")
    {
        administrative_state.yfilter = yfilter;
    }
    if(value_path == "msd")
    {
        msd.yfilter = yfilter;
    }
    if(value_path == "absolute-margin")
    {
        absolute_margin.yfilter = yfilter;
    }
    if(value_path == "relative-margin")
    {
        relative_margin.yfilter = yfilter;
    }
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "destination-address" || name == "tunnel-id" || name == "lspid" || name == "binding-sid" || name == "lsp-setup-type" || name == "operational-state" || name == "administrative-state" || name == "msd" || name == "absolute-margin" || name == "relative-margin")
        return true;
    return false;
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "source-address"; yang_parent_name = "brief-lsp-information"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::SourceAddress::~SourceAddress()
{
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::SourceAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::SourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::DestinationAddress::DestinationAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "destination-address"; yang_parent_name = "brief-lsp-information"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::DestinationAddress::~DestinationAddress()
{
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::DestinationAddress::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::DestinationAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::DestinationAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::DestinationAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::DestinationAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::DestinationAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::DestinationAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::DestinationAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::DestinationAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ErOs()
    :
    reported_metric_type{YType::uint32, "reported-metric-type"},
    reported_metric_value{YType::uint32, "reported-metric-value"},
    computed_metric_type{YType::uint32, "computed-metric-type"},
    computed_metric_value{YType::uint32, "computed-metric-value"},
    computed_hop_list_time{YType::uint32, "computed-hop-list-time"}
        ,
    reported_rsvp_path(this, {})
    , reported_sr_path(this, {})
    , computed_rsvp_path(this, {})
    , computed_sr_path(this, {})
{

    yang_name = "er-os"; yang_parent_name = "detail-lsp-information"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::~ErOs()
{
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<reported_rsvp_path.len(); index++)
    {
        if(reported_rsvp_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<reported_sr_path.len(); index++)
    {
        if(reported_sr_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<computed_rsvp_path.len(); index++)
    {
        if(computed_rsvp_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<computed_sr_path.len(); index++)
    {
        if(computed_sr_path[index]->has_data())
            return true;
    }
    return reported_metric_type.is_set
	|| reported_metric_value.is_set
	|| computed_metric_type.is_set
	|| computed_metric_value.is_set
	|| computed_hop_list_time.is_set;
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::has_operation() const
{
    for (std::size_t index=0; index<reported_rsvp_path.len(); index++)
    {
        if(reported_rsvp_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<reported_sr_path.len(); index++)
    {
        if(reported_sr_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<computed_rsvp_path.len(); index++)
    {
        if(computed_rsvp_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<computed_sr_path.len(); index++)
    {
        if(computed_sr_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(reported_metric_type.yfilter)
	|| ydk::is_set(reported_metric_value.yfilter)
	|| ydk::is_set(computed_metric_type.yfilter)
	|| ydk::is_set(computed_metric_value.yfilter)
	|| ydk::is_set(computed_hop_list_time.yfilter);
}

std::string Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "er-os";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reported_metric_type.is_set || is_set(reported_metric_type.yfilter)) leaf_name_data.push_back(reported_metric_type.get_name_leafdata());
    if (reported_metric_value.is_set || is_set(reported_metric_value.yfilter)) leaf_name_data.push_back(reported_metric_value.get_name_leafdata());
    if (computed_metric_type.is_set || is_set(computed_metric_type.yfilter)) leaf_name_data.push_back(computed_metric_type.get_name_leafdata());
    if (computed_metric_value.is_set || is_set(computed_metric_value.yfilter)) leaf_name_data.push_back(computed_metric_value.get_name_leafdata());
    if (computed_hop_list_time.is_set || is_set(computed_hop_list_time.yfilter)) leaf_name_data.push_back(computed_hop_list_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reported-rsvp-path")
    {
        auto ent_ = std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath>();
        ent_->parent = this;
        reported_rsvp_path.append(ent_);
        return ent_;
    }

    if(child_yang_name == "reported-sr-path")
    {
        auto ent_ = std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath>();
        ent_->parent = this;
        reported_sr_path.append(ent_);
        return ent_;
    }

    if(child_yang_name == "computed-rsvp-path")
    {
        auto ent_ = std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath>();
        ent_->parent = this;
        computed_rsvp_path.append(ent_);
        return ent_;
    }

    if(child_yang_name == "computed-sr-path")
    {
        auto ent_ = std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath>();
        ent_->parent = this;
        computed_sr_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : reported_rsvp_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : reported_sr_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : computed_rsvp_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : computed_sr_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reported-metric-type")
    {
        reported_metric_type = value;
        reported_metric_type.value_namespace = name_space;
        reported_metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reported-metric-value")
    {
        reported_metric_value = value;
        reported_metric_value.value_namespace = name_space;
        reported_metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "computed-metric-type")
    {
        computed_metric_type = value;
        computed_metric_type.value_namespace = name_space;
        computed_metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "computed-metric-value")
    {
        computed_metric_value = value;
        computed_metric_value.value_namespace = name_space;
        computed_metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "computed-hop-list-time")
    {
        computed_hop_list_time = value;
        computed_hop_list_time.value_namespace = name_space;
        computed_hop_list_time.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reported-metric-type")
    {
        reported_metric_type.yfilter = yfilter;
    }
    if(value_path == "reported-metric-value")
    {
        reported_metric_value.yfilter = yfilter;
    }
    if(value_path == "computed-metric-type")
    {
        computed_metric_type.yfilter = yfilter;
    }
    if(value_path == "computed-metric-value")
    {
        computed_metric_value.yfilter = yfilter;
    }
    if(value_path == "computed-hop-list-time")
    {
        computed_hop_list_time.yfilter = yfilter;
    }
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reported-rsvp-path" || name == "reported-sr-path" || name == "computed-rsvp-path" || name == "computed-sr-path" || name == "reported-metric-type" || name == "reported-metric-value" || name == "computed-metric-type" || name == "computed-metric-value" || name == "computed-hop-list-time")
        return true;
    return false;
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath::ReportedRsvpPath()
    :
    hop_address{YType::str, "hop-address"}
{

    yang_name = "reported-rsvp-path"; yang_parent_name = "er-os"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath::~ReportedRsvpPath()
{
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath::has_data() const
{
    if (is_presence_container) return true;
    return hop_address.is_set;
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hop_address.yfilter);
}

std::string Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reported-rsvp-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hop_address.is_set || is_set(hop_address.yfilter)) leaf_name_data.push_back(hop_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hop-address")
    {
        hop_address = value;
        hop_address.value_namespace = name_space;
        hop_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hop-address")
    {
        hop_address.yfilter = yfilter;
    }
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hop-address")
        return true;
    return false;
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::ReportedSrPath()
    :
    sid_type{YType::enumeration, "sid-type"},
    mpls_label{YType::uint32, "mpls-label"}
        ,
    local_addr(std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::LocalAddr>())
    , remote_addr(std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::RemoteAddr>())
{
    local_addr->parent = this;
    remote_addr->parent = this;

    yang_name = "reported-sr-path"; yang_parent_name = "er-os"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::~ReportedSrPath()
{
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::has_data() const
{
    if (is_presence_container) return true;
    return sid_type.is_set
	|| mpls_label.is_set
	|| (local_addr !=  nullptr && local_addr->has_data())
	|| (remote_addr !=  nullptr && remote_addr->has_data());
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid_type.yfilter)
	|| ydk::is_set(mpls_label.yfilter)
	|| (local_addr !=  nullptr && local_addr->has_operation())
	|| (remote_addr !=  nullptr && remote_addr->has_operation());
}

std::string Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reported-sr-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid_type.is_set || is_set(sid_type.yfilter)) leaf_name_data.push_back(sid_type.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.yfilter)) leaf_name_data.push_back(mpls_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-addr")
    {
        if(local_addr == nullptr)
        {
            local_addr = std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::LocalAddr>();
        }
        return local_addr;
    }

    if(child_yang_name == "remote-addr")
    {
        if(remote_addr == nullptr)
        {
            remote_addr = std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::RemoteAddr>();
        }
        return remote_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local_addr != nullptr)
    {
        _children["local-addr"] = local_addr;
    }

    if(remote_addr != nullptr)
    {
        _children["remote-addr"] = remote_addr;
    }

    return _children;
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid-type")
    {
        sid_type = value;
        sid_type.value_namespace = name_space;
        sid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
        mpls_label.value_namespace = name_space;
        mpls_label.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid-type")
    {
        sid_type.yfilter = yfilter;
    }
    if(value_path == "mpls-label")
    {
        mpls_label.yfilter = yfilter;
    }
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-addr" || name == "remote-addr" || name == "sid-type" || name == "mpls-label")
        return true;
    return false;
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::LocalAddr::LocalAddr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "local-addr"; yang_parent_name = "reported-sr-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::LocalAddr::~LocalAddr()
{
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::LocalAddr::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::LocalAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::LocalAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::LocalAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::LocalAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::LocalAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::LocalAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::LocalAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::LocalAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::RemoteAddr::RemoteAddr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{

    yang_name = "remote-addr"; yang_parent_name = "reported-sr-path"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::RemoteAddr::~RemoteAddr()
{
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::RemoteAddr::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::RemoteAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(ipv6.yfilter);
}

std::string Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::RemoteAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::RemoteAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::RemoteAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::RemoteAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::RemoteAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::RemoteAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::RemoteAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath::ComputedRsvpPath()
    :
    hop_address{YType::str, "hop-address"}
{

    yang_name = "computed-rsvp-path"; yang_parent_name = "er-os"; is_top_level_class = false; has_list_ancestor = true; 
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath::~ComputedRsvpPath()
{
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath::has_data() const
{
    if (is_presence_container) return true;
    return hop_address.is_set;
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hop_address.yfilter);
}

std::string Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "computed-rsvp-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hop_address.is_set || is_set(hop_address.yfilter)) leaf_name_data.push_back(hop_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hop-address")
    {
        hop_address = value;
        hop_address.value_namespace = name_space;
        hop_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hop-address")
    {
        hop_address.yfilter = yfilter;
    }
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hop-address")
        return true;
    return false;
}


}
}

