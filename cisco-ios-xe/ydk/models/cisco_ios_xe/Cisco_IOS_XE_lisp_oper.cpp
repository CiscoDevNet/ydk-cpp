
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_lisp_oper.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_lisp_oper {

LispState::LispState()
    :
    lisp_routers(this, {"top_id"})
{

    yang_name = "lisp-state"; yang_parent_name = "Cisco-IOS-XE-lisp-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

LispState::~LispState()
{
}

bool LispState::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lisp_routers.len(); index++)
    {
        if(lisp_routers[index]->has_data())
            return true;
    }
    return false;
}

bool LispState::has_operation() const
{
    for (std::size_t index=0; index<lisp_routers.len(); index++)
    {
        if(lisp_routers[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string LispState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-lisp-oper:lisp-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LispState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LispState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lisp-routers")
    {
        auto ent_ = std::make_shared<LispState::LispRouters>();
        ent_->parent = this;
        lisp_routers.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LispState::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lisp_routers.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void LispState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void LispState::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> LispState::clone_ptr() const
{
    return std::make_shared<LispState>();
}

std::string LispState::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string LispState::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function LispState::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> LispState::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool LispState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lisp-routers")
        return true;
    return false;
}

LispState::LispRouters::LispRouters()
    :
    top_id{YType::uint32, "top-id"},
    site_id{YType::uint64, "site-id"},
    xtr_id{YType::uint8, "xtr-id"}
        ,
    instances(this, {"iid"})
    , sessions(this, {"local_address", "peer_address", "local_port", "peer_port"})
    , local_rlocs(this, {"afi", "address"})
    , prefix_lists(this, {"name"})
{

    yang_name = "lisp-routers"; yang_parent_name = "lisp-state"; is_top_level_class = false; has_list_ancestor = false; 
}

LispState::LispRouters::~LispRouters()
{
}

bool LispState::LispRouters::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instances.len(); index++)
    {
        if(instances[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sessions.len(); index++)
    {
        if(sessions[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<local_rlocs.len(); index++)
    {
        if(local_rlocs[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<prefix_lists.len(); index++)
    {
        if(prefix_lists[index]->has_data())
            return true;
    }
    for (auto const & leaf : xtr_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return top_id.is_set
	|| site_id.is_set;
}

bool LispState::LispRouters::has_operation() const
{
    for (std::size_t index=0; index<instances.len(); index++)
    {
        if(instances[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sessions.len(); index++)
    {
        if(sessions[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<local_rlocs.len(); index++)
    {
        if(local_rlocs[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<prefix_lists.len(); index++)
    {
        if(prefix_lists[index]->has_operation())
            return true;
    }
    for (auto const & leaf : xtr_id.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(top_id.yfilter)
	|| ydk::is_set(site_id.yfilter)
	|| ydk::is_set(xtr_id.yfilter);
}

std::string LispState::LispRouters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-lisp-oper:lisp-state/" << get_segment_path();
    return path_buffer.str();
}

std::string LispState::LispRouters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp-routers";
    ADD_KEY_TOKEN(top_id, "top-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LispState::LispRouters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (top_id.is_set || is_set(top_id.yfilter)) leaf_name_data.push_back(top_id.get_name_leafdata());
    if (site_id.is_set || is_set(site_id.yfilter)) leaf_name_data.push_back(site_id.get_name_leafdata());

    auto xtr_id_name_datas = xtr_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), xtr_id_name_datas.begin(), xtr_id_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LispState::LispRouters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instances")
    {
        auto ent_ = std::make_shared<LispState::LispRouters::Instances>();
        ent_->parent = this;
        instances.append(ent_);
        return ent_;
    }

    if(child_yang_name == "sessions")
    {
        auto ent_ = std::make_shared<LispState::LispRouters::Sessions>();
        ent_->parent = this;
        sessions.append(ent_);
        return ent_;
    }

    if(child_yang_name == "local-rlocs")
    {
        auto ent_ = std::make_shared<LispState::LispRouters::LocalRlocs>();
        ent_->parent = this;
        local_rlocs.append(ent_);
        return ent_;
    }

    if(child_yang_name == "prefix-lists")
    {
        auto ent_ = std::make_shared<LispState::LispRouters::PrefixLists>();
        ent_->parent = this;
        prefix_lists.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LispState::LispRouters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : instances.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : sessions.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : local_rlocs.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : prefix_lists.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void LispState::LispRouters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "top-id")
    {
        top_id = value;
        top_id.value_namespace = name_space;
        top_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "site-id")
    {
        site_id = value;
        site_id.value_namespace = name_space;
        site_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xtr-id")
    {
        xtr_id.append(value);
    }
}

void LispState::LispRouters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "top-id")
    {
        top_id.yfilter = yfilter;
    }
    if(value_path == "site-id")
    {
        site_id.yfilter = yfilter;
    }
    if(value_path == "xtr-id")
    {
        xtr_id.yfilter = yfilter;
    }
}

bool LispState::LispRouters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instances" || name == "sessions" || name == "local-rlocs" || name == "prefix-lists" || name == "top-id" || name == "site-id" || name == "xtr-id")
        return true;
    return false;
}

LispState::LispRouters::Instances::Instances()
    :
    iid{YType::uint32, "iid"},
    vrf_name{YType::str, "vrf-name"},
    is_rloc_probing{YType::boolean, "is-rloc-probing"}
        ,
    af(this, {"iaftype"})
    , ms_eid_membership(this, {"rloc"})
    , etr_eid_membership(this, {"rloc"})
{

    yang_name = "instances"; yang_parent_name = "lisp-routers"; is_top_level_class = false; has_list_ancestor = true; 
}

LispState::LispRouters::Instances::~Instances()
{
}

bool LispState::LispRouters::Instances::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<af.len(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ms_eid_membership.len(); index++)
    {
        if(ms_eid_membership[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<etr_eid_membership.len(); index++)
    {
        if(etr_eid_membership[index]->has_data())
            return true;
    }
    return iid.is_set
	|| vrf_name.is_set
	|| is_rloc_probing.is_set;
}

bool LispState::LispRouters::Instances::has_operation() const
{
    for (std::size_t index=0; index<af.len(); index++)
    {
        if(af[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ms_eid_membership.len(); index++)
    {
        if(ms_eid_membership[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<etr_eid_membership.len(); index++)
    {
        if(etr_eid_membership[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(iid.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(is_rloc_probing.yfilter);
}

std::string LispState::LispRouters::Instances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instances";
    ADD_KEY_TOKEN(iid, "iid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LispState::LispRouters::Instances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iid.is_set || is_set(iid.yfilter)) leaf_name_data.push_back(iid.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (is_rloc_probing.is_set || is_set(is_rloc_probing.yfilter)) leaf_name_data.push_back(is_rloc_probing.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LispState::LispRouters::Instances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af")
    {
        auto ent_ = std::make_shared<LispState::LispRouters::Instances::Af>();
        ent_->parent = this;
        af.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ms-eid-membership")
    {
        auto ent_ = std::make_shared<LispState::LispRouters::Instances::MsEidMembership>();
        ent_->parent = this;
        ms_eid_membership.append(ent_);
        return ent_;
    }

    if(child_yang_name == "etr-eid-membership")
    {
        auto ent_ = std::make_shared<LispState::LispRouters::Instances::EtrEidMembership>();
        ent_->parent = this;
        etr_eid_membership.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LispState::LispRouters::Instances::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : af.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ms_eid_membership.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : etr_eid_membership.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void LispState::LispRouters::Instances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iid")
    {
        iid = value;
        iid.value_namespace = name_space;
        iid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rloc-probing")
    {
        is_rloc_probing = value;
        is_rloc_probing.value_namespace = name_space;
        is_rloc_probing.value_namespace_prefix = name_space_prefix;
    }
}

void LispState::LispRouters::Instances::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iid")
    {
        iid.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "is-rloc-probing")
    {
        is_rloc_probing.yfilter = yfilter;
    }
}

bool LispState::LispRouters::Instances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "ms-eid-membership" || name == "etr-eid-membership" || name == "iid" || name == "vrf-name" || name == "is-rloc-probing")
        return true;
    return false;
}

LispState::LispRouters::Instances::Af::Af()
    :
    iaftype{YType::enumeration, "iaftype"},
    l2_domain_id{YType::uint32, "l2-domain-id"},
    map_cache_size{YType::uint32, "map-cache-size"},
    map_cache_limit{YType::uint32, "map-cache-limit"},
    etr_map_cache_ttl{YType::uint32, "etr-map-cache-ttl"},
    registration_more_specific{YType::uint32, "registration-more-specific"},
    registration_more_specific_warning_threshold{YType::uint32, "registration-more-specific-warning-threshold"},
    registration_more_specific_limit{YType::uint32, "registration-more-specific-limit"},
    map_cache_threshold{YType::uint32, "map-cache-threshold"},
    map_requests_in{YType::uint64, "map-requests-in"},
    map_requests_out{YType::uint64, "map-requests-out"},
    encapsulated_map_requests_in{YType::uint64, "encapsulated-map-requests-in"},
    encapsulated_map_requests_out{YType::uint64, "encapsulated-map-requests-out"},
    rloc_probe_map_requests_in{YType::uint64, "rloc-probe-map-requests-in"},
    rloc_probe_map_requests_out{YType::uint64, "rloc-probe-map-requests-out"},
    map_requests_expired_on_queue{YType::uint64, "map-requests-expired-on-queue"},
    map_requests_no_reply{YType::uint64, "map-requests-no-reply"},
    map_requests_from_disallowed_locators{YType::uint64, "map-requests-from-disallowed-locators"},
    smr_map_requests_in{YType::uint64, "smr-map-requests-in"},
    smr_map_requests_out{YType::uint64, "smr-map-requests-out"},
    ddt_itr_map_requests_dropped{YType::uint64, "ddt-itr-map-requests-dropped"},
    ddt_itr_map_requests_nonce_collision{YType::uint64, "ddt-itr-map-requests-nonce-collision"},
    ddt_itr_map_requests_bad_xtr_nonce{YType::uint64, "ddt-itr-map-requests-bad-xtr-nonce"},
    mr_map_requests_forwarded{YType::uint64, "mr-map-requests-forwarded"},
    ms_map_requests_forwarded{YType::uint64, "ms-map-requests-forwarded"},
    to_alt_map_requests_out{YType::uint64, "to-alt-map-requests-out"},
    map_reply_records_in{YType::uint64, "map-reply-records-in"},
    map_reply_records_out{YType::uint64, "map-reply-records-out"},
    authoritative_records_in{YType::uint64, "authoritative-records-in"},
    authoritative_records_out{YType::uint64, "authoritative-records-out"},
    non_authoritative_records_in{YType::uint64, "non-authoritative-records-in"},
    non_authoritative_records_out{YType::uint64, "non-authoritative-records-out"},
    negative_records_in{YType::uint64, "negative-records-in"},
    negative_records_out{YType::uint64, "negative-records-out"},
    rloc_probe_records_in{YType::uint64, "rloc-probe-records-in"},
    rloc_probe_records_out{YType::uint64, "rloc-probe-records-out"},
    ms_proxy_reply_records_out{YType::uint64, "ms-proxy-reply-records-out"},
    wlc_subscribe_in{YType::uint64, "wlc-subscribe-in"},
    wlc_subscribe_out{YType::uint64, "wlc-subscribe-out"},
    wlc_subscribe_in_failure{YType::uint64, "wlc-subscribe-in-failure"},
    wlc_subscribe_out_failure{YType::uint64, "wlc-subscribe-out-failure"},
    wlc_unsubscribe_in{YType::uint64, "wlc-unsubscribe-in"},
    wlc_unsubscribe_out{YType::uint64, "wlc-unsubscribe-out"},
    wlc_unsubscribe_in_failure{YType::uint64, "wlc-unsubscribe-in-failure"},
    wlc_unsubscribe_out_failure{YType::uint64, "wlc-unsubscribe-out-failure"},
    map_register_records_in{YType::uint64, "map-register-records-in"},
    map_register_records_out{YType::uint64, "map-register-records-out"},
    map_registers_ms_disabled{YType::uint64, "map-registers-ms-disabled"},
    map_registers_auth_failed{YType::uint64, "map-registers-auth-failed"},
    map_registers_from_disallowed_locators{YType::uint64, "map-registers-from-disallowed-locators"},
    wlc_map_register_records_in{YType::uint64, "wlc-map-register-records-in"},
    wlc_map_register_records_out{YType::uint64, "wlc-map-register-records-out"},
    wlc_map_register_records_in_ap{YType::uint64, "wlc-map-register-records-in-ap"},
    wlc_map_register_records_out_ap{YType::uint64, "wlc-map-register-records-out-ap"},
    wlc_map_register_records_in_client{YType::uint64, "wlc-map-register-records-in-client"},
    wlc_map_register_records_out_client{YType::uint64, "wlc-map-register-records-out-client"},
    wlc_map_register_records_in_failure{YType::uint64, "wlc-map-register-records-in-failure"},
    wlc_map_register_records_out_failure{YType::uint64, "wlc-map-register-records-out-failure"},
    map_notify_records_in{YType::uint64, "map-notify-records-in"},
    map_notify_records_out{YType::uint64, "map-notify-records-out"},
    map_notify_auth_failed{YType::uint64, "map-notify-auth-failed"},
    wlc_map_notify_records_in{YType::uint64, "wlc-map-notify-records-in"},
    wlc_map_notify_records_out{YType::uint64, "wlc-map-notify-records-out"},
    wlc_map_notify_records_in_ap{YType::uint64, "wlc-map-notify-records-in-ap"},
    wlc_map_notify_records_out_ap{YType::uint64, "wlc-map-notify-records-out-ap"},
    wlc_map_notify_records_in_client{YType::uint64, "wlc-map-notify-records-in-client"},
    wlc_map_notify_records_out_client{YType::uint64, "wlc-map-notify-records-out-client"},
    wlc_map_notify_records_in_failure{YType::uint64, "wlc-map-notify-records-in-failure"},
    wlc_map_notify_records_out_failure{YType::uint64, "wlc-map-notify-records-out-failure"},
    mapping_record_ttl_alerts{YType::uint64, "mapping-record-ttl-alerts"},
    remote_eid_entries_created{YType::uint64, "remote-eid-entries-created"},
    remote_eid_entries_deleted{YType::uint64, "remote-eid-entries-deleted"},
    remote_eid_nsf_replay_entries_created{YType::uint64, "remote-eid-nsf-replay-entries-created"},
    forwarding_data_signals_processed{YType::uint64, "forwarding-data-signals-processed"},
    forwarding_data_signals_dropped{YType::uint64, "forwarding-data-signals-dropped"},
    forwarding_reachability_reports_processed{YType::uint64, "forwarding-reachability-reports-processed"},
    forwarding_reachability_reports_dropped{YType::uint64, "forwarding-reachability-reports-dropped"},
    is_etr_accept_mapping{YType::boolean, "is-etr-accept-mapping"},
    is_etr_accept_mapping_verify{YType::boolean, "is-etr-accept-mapping-verify"}
        ,
    role(std::make_shared<LispState::LispRouters::Instances::Af::Role>())
    , map_cache(this, {"afi", "prefix"})
    , local_dbase(this, {"afi", "prefix"})
    , ms_registrations(this, {"afi", "prefix"})
    , map_servers(this, {"afi", "address"})
    , map_resolvers(this, {"afi", "address"})
    , proxy_etrs(this, {"afi", "address"})
{
    role->parent = this;

    yang_name = "af"; yang_parent_name = "instances"; is_top_level_class = false; has_list_ancestor = true; 
}

LispState::LispRouters::Instances::Af::~Af()
{
}

bool LispState::LispRouters::Instances::Af::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<map_cache.len(); index++)
    {
        if(map_cache[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<local_dbase.len(); index++)
    {
        if(local_dbase[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ms_registrations.len(); index++)
    {
        if(ms_registrations[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<map_servers.len(); index++)
    {
        if(map_servers[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<map_resolvers.len(); index++)
    {
        if(map_resolvers[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<proxy_etrs.len(); index++)
    {
        if(proxy_etrs[index]->has_data())
            return true;
    }
    return iaftype.is_set
	|| l2_domain_id.is_set
	|| map_cache_size.is_set
	|| map_cache_limit.is_set
	|| etr_map_cache_ttl.is_set
	|| registration_more_specific.is_set
	|| registration_more_specific_warning_threshold.is_set
	|| registration_more_specific_limit.is_set
	|| map_cache_threshold.is_set
	|| map_requests_in.is_set
	|| map_requests_out.is_set
	|| encapsulated_map_requests_in.is_set
	|| encapsulated_map_requests_out.is_set
	|| rloc_probe_map_requests_in.is_set
	|| rloc_probe_map_requests_out.is_set
	|| map_requests_expired_on_queue.is_set
	|| map_requests_no_reply.is_set
	|| map_requests_from_disallowed_locators.is_set
	|| smr_map_requests_in.is_set
	|| smr_map_requests_out.is_set
	|| ddt_itr_map_requests_dropped.is_set
	|| ddt_itr_map_requests_nonce_collision.is_set
	|| ddt_itr_map_requests_bad_xtr_nonce.is_set
	|| mr_map_requests_forwarded.is_set
	|| ms_map_requests_forwarded.is_set
	|| to_alt_map_requests_out.is_set
	|| map_reply_records_in.is_set
	|| map_reply_records_out.is_set
	|| authoritative_records_in.is_set
	|| authoritative_records_out.is_set
	|| non_authoritative_records_in.is_set
	|| non_authoritative_records_out.is_set
	|| negative_records_in.is_set
	|| negative_records_out.is_set
	|| rloc_probe_records_in.is_set
	|| rloc_probe_records_out.is_set
	|| ms_proxy_reply_records_out.is_set
	|| wlc_subscribe_in.is_set
	|| wlc_subscribe_out.is_set
	|| wlc_subscribe_in_failure.is_set
	|| wlc_subscribe_out_failure.is_set
	|| wlc_unsubscribe_in.is_set
	|| wlc_unsubscribe_out.is_set
	|| wlc_unsubscribe_in_failure.is_set
	|| wlc_unsubscribe_out_failure.is_set
	|| map_register_records_in.is_set
	|| map_register_records_out.is_set
	|| map_registers_ms_disabled.is_set
	|| map_registers_auth_failed.is_set
	|| map_registers_from_disallowed_locators.is_set
	|| wlc_map_register_records_in.is_set
	|| wlc_map_register_records_out.is_set
	|| wlc_map_register_records_in_ap.is_set
	|| wlc_map_register_records_out_ap.is_set
	|| wlc_map_register_records_in_client.is_set
	|| wlc_map_register_records_out_client.is_set
	|| wlc_map_register_records_in_failure.is_set
	|| wlc_map_register_records_out_failure.is_set
	|| map_notify_records_in.is_set
	|| map_notify_records_out.is_set
	|| map_notify_auth_failed.is_set
	|| wlc_map_notify_records_in.is_set
	|| wlc_map_notify_records_out.is_set
	|| wlc_map_notify_records_in_ap.is_set
	|| wlc_map_notify_records_out_ap.is_set
	|| wlc_map_notify_records_in_client.is_set
	|| wlc_map_notify_records_out_client.is_set
	|| wlc_map_notify_records_in_failure.is_set
	|| wlc_map_notify_records_out_failure.is_set
	|| mapping_record_ttl_alerts.is_set
	|| remote_eid_entries_created.is_set
	|| remote_eid_entries_deleted.is_set
	|| remote_eid_nsf_replay_entries_created.is_set
	|| forwarding_data_signals_processed.is_set
	|| forwarding_data_signals_dropped.is_set
	|| forwarding_reachability_reports_processed.is_set
	|| forwarding_reachability_reports_dropped.is_set
	|| is_etr_accept_mapping.is_set
	|| is_etr_accept_mapping_verify.is_set
	|| (role !=  nullptr && role->has_data());
}

bool LispState::LispRouters::Instances::Af::has_operation() const
{
    for (std::size_t index=0; index<map_cache.len(); index++)
    {
        if(map_cache[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<local_dbase.len(); index++)
    {
        if(local_dbase[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ms_registrations.len(); index++)
    {
        if(ms_registrations[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<map_servers.len(); index++)
    {
        if(map_servers[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<map_resolvers.len(); index++)
    {
        if(map_resolvers[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<proxy_etrs.len(); index++)
    {
        if(proxy_etrs[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(iaftype.yfilter)
	|| ydk::is_set(l2_domain_id.yfilter)
	|| ydk::is_set(map_cache_size.yfilter)
	|| ydk::is_set(map_cache_limit.yfilter)
	|| ydk::is_set(etr_map_cache_ttl.yfilter)
	|| ydk::is_set(registration_more_specific.yfilter)
	|| ydk::is_set(registration_more_specific_warning_threshold.yfilter)
	|| ydk::is_set(registration_more_specific_limit.yfilter)
	|| ydk::is_set(map_cache_threshold.yfilter)
	|| ydk::is_set(map_requests_in.yfilter)
	|| ydk::is_set(map_requests_out.yfilter)
	|| ydk::is_set(encapsulated_map_requests_in.yfilter)
	|| ydk::is_set(encapsulated_map_requests_out.yfilter)
	|| ydk::is_set(rloc_probe_map_requests_in.yfilter)
	|| ydk::is_set(rloc_probe_map_requests_out.yfilter)
	|| ydk::is_set(map_requests_expired_on_queue.yfilter)
	|| ydk::is_set(map_requests_no_reply.yfilter)
	|| ydk::is_set(map_requests_from_disallowed_locators.yfilter)
	|| ydk::is_set(smr_map_requests_in.yfilter)
	|| ydk::is_set(smr_map_requests_out.yfilter)
	|| ydk::is_set(ddt_itr_map_requests_dropped.yfilter)
	|| ydk::is_set(ddt_itr_map_requests_nonce_collision.yfilter)
	|| ydk::is_set(ddt_itr_map_requests_bad_xtr_nonce.yfilter)
	|| ydk::is_set(mr_map_requests_forwarded.yfilter)
	|| ydk::is_set(ms_map_requests_forwarded.yfilter)
	|| ydk::is_set(to_alt_map_requests_out.yfilter)
	|| ydk::is_set(map_reply_records_in.yfilter)
	|| ydk::is_set(map_reply_records_out.yfilter)
	|| ydk::is_set(authoritative_records_in.yfilter)
	|| ydk::is_set(authoritative_records_out.yfilter)
	|| ydk::is_set(non_authoritative_records_in.yfilter)
	|| ydk::is_set(non_authoritative_records_out.yfilter)
	|| ydk::is_set(negative_records_in.yfilter)
	|| ydk::is_set(negative_records_out.yfilter)
	|| ydk::is_set(rloc_probe_records_in.yfilter)
	|| ydk::is_set(rloc_probe_records_out.yfilter)
	|| ydk::is_set(ms_proxy_reply_records_out.yfilter)
	|| ydk::is_set(wlc_subscribe_in.yfilter)
	|| ydk::is_set(wlc_subscribe_out.yfilter)
	|| ydk::is_set(wlc_subscribe_in_failure.yfilter)
	|| ydk::is_set(wlc_subscribe_out_failure.yfilter)
	|| ydk::is_set(wlc_unsubscribe_in.yfilter)
	|| ydk::is_set(wlc_unsubscribe_out.yfilter)
	|| ydk::is_set(wlc_unsubscribe_in_failure.yfilter)
	|| ydk::is_set(wlc_unsubscribe_out_failure.yfilter)
	|| ydk::is_set(map_register_records_in.yfilter)
	|| ydk::is_set(map_register_records_out.yfilter)
	|| ydk::is_set(map_registers_ms_disabled.yfilter)
	|| ydk::is_set(map_registers_auth_failed.yfilter)
	|| ydk::is_set(map_registers_from_disallowed_locators.yfilter)
	|| ydk::is_set(wlc_map_register_records_in.yfilter)
	|| ydk::is_set(wlc_map_register_records_out.yfilter)
	|| ydk::is_set(wlc_map_register_records_in_ap.yfilter)
	|| ydk::is_set(wlc_map_register_records_out_ap.yfilter)
	|| ydk::is_set(wlc_map_register_records_in_client.yfilter)
	|| ydk::is_set(wlc_map_register_records_out_client.yfilter)
	|| ydk::is_set(wlc_map_register_records_in_failure.yfilter)
	|| ydk::is_set(wlc_map_register_records_out_failure.yfilter)
	|| ydk::is_set(map_notify_records_in.yfilter)
	|| ydk::is_set(map_notify_records_out.yfilter)
	|| ydk::is_set(map_notify_auth_failed.yfilter)
	|| ydk::is_set(wlc_map_notify_records_in.yfilter)
	|| ydk::is_set(wlc_map_notify_records_out.yfilter)
	|| ydk::is_set(wlc_map_notify_records_in_ap.yfilter)
	|| ydk::is_set(wlc_map_notify_records_out_ap.yfilter)
	|| ydk::is_set(wlc_map_notify_records_in_client.yfilter)
	|| ydk::is_set(wlc_map_notify_records_out_client.yfilter)
	|| ydk::is_set(wlc_map_notify_records_in_failure.yfilter)
	|| ydk::is_set(wlc_map_notify_records_out_failure.yfilter)
	|| ydk::is_set(mapping_record_ttl_alerts.yfilter)
	|| ydk::is_set(remote_eid_entries_created.yfilter)
	|| ydk::is_set(remote_eid_entries_deleted.yfilter)
	|| ydk::is_set(remote_eid_nsf_replay_entries_created.yfilter)
	|| ydk::is_set(forwarding_data_signals_processed.yfilter)
	|| ydk::is_set(forwarding_data_signals_dropped.yfilter)
	|| ydk::is_set(forwarding_reachability_reports_processed.yfilter)
	|| ydk::is_set(forwarding_reachability_reports_dropped.yfilter)
	|| ydk::is_set(is_etr_accept_mapping.yfilter)
	|| ydk::is_set(is_etr_accept_mapping_verify.yfilter)
	|| (role !=  nullptr && role->has_operation());
}

std::string LispState::LispRouters::Instances::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af";
    ADD_KEY_TOKEN(iaftype, "iaftype");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LispState::LispRouters::Instances::Af::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iaftype.is_set || is_set(iaftype.yfilter)) leaf_name_data.push_back(iaftype.get_name_leafdata());
    if (l2_domain_id.is_set || is_set(l2_domain_id.yfilter)) leaf_name_data.push_back(l2_domain_id.get_name_leafdata());
    if (map_cache_size.is_set || is_set(map_cache_size.yfilter)) leaf_name_data.push_back(map_cache_size.get_name_leafdata());
    if (map_cache_limit.is_set || is_set(map_cache_limit.yfilter)) leaf_name_data.push_back(map_cache_limit.get_name_leafdata());
    if (etr_map_cache_ttl.is_set || is_set(etr_map_cache_ttl.yfilter)) leaf_name_data.push_back(etr_map_cache_ttl.get_name_leafdata());
    if (registration_more_specific.is_set || is_set(registration_more_specific.yfilter)) leaf_name_data.push_back(registration_more_specific.get_name_leafdata());
    if (registration_more_specific_warning_threshold.is_set || is_set(registration_more_specific_warning_threshold.yfilter)) leaf_name_data.push_back(registration_more_specific_warning_threshold.get_name_leafdata());
    if (registration_more_specific_limit.is_set || is_set(registration_more_specific_limit.yfilter)) leaf_name_data.push_back(registration_more_specific_limit.get_name_leafdata());
    if (map_cache_threshold.is_set || is_set(map_cache_threshold.yfilter)) leaf_name_data.push_back(map_cache_threshold.get_name_leafdata());
    if (map_requests_in.is_set || is_set(map_requests_in.yfilter)) leaf_name_data.push_back(map_requests_in.get_name_leafdata());
    if (map_requests_out.is_set || is_set(map_requests_out.yfilter)) leaf_name_data.push_back(map_requests_out.get_name_leafdata());
    if (encapsulated_map_requests_in.is_set || is_set(encapsulated_map_requests_in.yfilter)) leaf_name_data.push_back(encapsulated_map_requests_in.get_name_leafdata());
    if (encapsulated_map_requests_out.is_set || is_set(encapsulated_map_requests_out.yfilter)) leaf_name_data.push_back(encapsulated_map_requests_out.get_name_leafdata());
    if (rloc_probe_map_requests_in.is_set || is_set(rloc_probe_map_requests_in.yfilter)) leaf_name_data.push_back(rloc_probe_map_requests_in.get_name_leafdata());
    if (rloc_probe_map_requests_out.is_set || is_set(rloc_probe_map_requests_out.yfilter)) leaf_name_data.push_back(rloc_probe_map_requests_out.get_name_leafdata());
    if (map_requests_expired_on_queue.is_set || is_set(map_requests_expired_on_queue.yfilter)) leaf_name_data.push_back(map_requests_expired_on_queue.get_name_leafdata());
    if (map_requests_no_reply.is_set || is_set(map_requests_no_reply.yfilter)) leaf_name_data.push_back(map_requests_no_reply.get_name_leafdata());
    if (map_requests_from_disallowed_locators.is_set || is_set(map_requests_from_disallowed_locators.yfilter)) leaf_name_data.push_back(map_requests_from_disallowed_locators.get_name_leafdata());
    if (smr_map_requests_in.is_set || is_set(smr_map_requests_in.yfilter)) leaf_name_data.push_back(smr_map_requests_in.get_name_leafdata());
    if (smr_map_requests_out.is_set || is_set(smr_map_requests_out.yfilter)) leaf_name_data.push_back(smr_map_requests_out.get_name_leafdata());
    if (ddt_itr_map_requests_dropped.is_set || is_set(ddt_itr_map_requests_dropped.yfilter)) leaf_name_data.push_back(ddt_itr_map_requests_dropped.get_name_leafdata());
    if (ddt_itr_map_requests_nonce_collision.is_set || is_set(ddt_itr_map_requests_nonce_collision.yfilter)) leaf_name_data.push_back(ddt_itr_map_requests_nonce_collision.get_name_leafdata());
    if (ddt_itr_map_requests_bad_xtr_nonce.is_set || is_set(ddt_itr_map_requests_bad_xtr_nonce.yfilter)) leaf_name_data.push_back(ddt_itr_map_requests_bad_xtr_nonce.get_name_leafdata());
    if (mr_map_requests_forwarded.is_set || is_set(mr_map_requests_forwarded.yfilter)) leaf_name_data.push_back(mr_map_requests_forwarded.get_name_leafdata());
    if (ms_map_requests_forwarded.is_set || is_set(ms_map_requests_forwarded.yfilter)) leaf_name_data.push_back(ms_map_requests_forwarded.get_name_leafdata());
    if (to_alt_map_requests_out.is_set || is_set(to_alt_map_requests_out.yfilter)) leaf_name_data.push_back(to_alt_map_requests_out.get_name_leafdata());
    if (map_reply_records_in.is_set || is_set(map_reply_records_in.yfilter)) leaf_name_data.push_back(map_reply_records_in.get_name_leafdata());
    if (map_reply_records_out.is_set || is_set(map_reply_records_out.yfilter)) leaf_name_data.push_back(map_reply_records_out.get_name_leafdata());
    if (authoritative_records_in.is_set || is_set(authoritative_records_in.yfilter)) leaf_name_data.push_back(authoritative_records_in.get_name_leafdata());
    if (authoritative_records_out.is_set || is_set(authoritative_records_out.yfilter)) leaf_name_data.push_back(authoritative_records_out.get_name_leafdata());
    if (non_authoritative_records_in.is_set || is_set(non_authoritative_records_in.yfilter)) leaf_name_data.push_back(non_authoritative_records_in.get_name_leafdata());
    if (non_authoritative_records_out.is_set || is_set(non_authoritative_records_out.yfilter)) leaf_name_data.push_back(non_authoritative_records_out.get_name_leafdata());
    if (negative_records_in.is_set || is_set(negative_records_in.yfilter)) leaf_name_data.push_back(negative_records_in.get_name_leafdata());
    if (negative_records_out.is_set || is_set(negative_records_out.yfilter)) leaf_name_data.push_back(negative_records_out.get_name_leafdata());
    if (rloc_probe_records_in.is_set || is_set(rloc_probe_records_in.yfilter)) leaf_name_data.push_back(rloc_probe_records_in.get_name_leafdata());
    if (rloc_probe_records_out.is_set || is_set(rloc_probe_records_out.yfilter)) leaf_name_data.push_back(rloc_probe_records_out.get_name_leafdata());
    if (ms_proxy_reply_records_out.is_set || is_set(ms_proxy_reply_records_out.yfilter)) leaf_name_data.push_back(ms_proxy_reply_records_out.get_name_leafdata());
    if (wlc_subscribe_in.is_set || is_set(wlc_subscribe_in.yfilter)) leaf_name_data.push_back(wlc_subscribe_in.get_name_leafdata());
    if (wlc_subscribe_out.is_set || is_set(wlc_subscribe_out.yfilter)) leaf_name_data.push_back(wlc_subscribe_out.get_name_leafdata());
    if (wlc_subscribe_in_failure.is_set || is_set(wlc_subscribe_in_failure.yfilter)) leaf_name_data.push_back(wlc_subscribe_in_failure.get_name_leafdata());
    if (wlc_subscribe_out_failure.is_set || is_set(wlc_subscribe_out_failure.yfilter)) leaf_name_data.push_back(wlc_subscribe_out_failure.get_name_leafdata());
    if (wlc_unsubscribe_in.is_set || is_set(wlc_unsubscribe_in.yfilter)) leaf_name_data.push_back(wlc_unsubscribe_in.get_name_leafdata());
    if (wlc_unsubscribe_out.is_set || is_set(wlc_unsubscribe_out.yfilter)) leaf_name_data.push_back(wlc_unsubscribe_out.get_name_leafdata());
    if (wlc_unsubscribe_in_failure.is_set || is_set(wlc_unsubscribe_in_failure.yfilter)) leaf_name_data.push_back(wlc_unsubscribe_in_failure.get_name_leafdata());
    if (wlc_unsubscribe_out_failure.is_set || is_set(wlc_unsubscribe_out_failure.yfilter)) leaf_name_data.push_back(wlc_unsubscribe_out_failure.get_name_leafdata());
    if (map_register_records_in.is_set || is_set(map_register_records_in.yfilter)) leaf_name_data.push_back(map_register_records_in.get_name_leafdata());
    if (map_register_records_out.is_set || is_set(map_register_records_out.yfilter)) leaf_name_data.push_back(map_register_records_out.get_name_leafdata());
    if (map_registers_ms_disabled.is_set || is_set(map_registers_ms_disabled.yfilter)) leaf_name_data.push_back(map_registers_ms_disabled.get_name_leafdata());
    if (map_registers_auth_failed.is_set || is_set(map_registers_auth_failed.yfilter)) leaf_name_data.push_back(map_registers_auth_failed.get_name_leafdata());
    if (map_registers_from_disallowed_locators.is_set || is_set(map_registers_from_disallowed_locators.yfilter)) leaf_name_data.push_back(map_registers_from_disallowed_locators.get_name_leafdata());
    if (wlc_map_register_records_in.is_set || is_set(wlc_map_register_records_in.yfilter)) leaf_name_data.push_back(wlc_map_register_records_in.get_name_leafdata());
    if (wlc_map_register_records_out.is_set || is_set(wlc_map_register_records_out.yfilter)) leaf_name_data.push_back(wlc_map_register_records_out.get_name_leafdata());
    if (wlc_map_register_records_in_ap.is_set || is_set(wlc_map_register_records_in_ap.yfilter)) leaf_name_data.push_back(wlc_map_register_records_in_ap.get_name_leafdata());
    if (wlc_map_register_records_out_ap.is_set || is_set(wlc_map_register_records_out_ap.yfilter)) leaf_name_data.push_back(wlc_map_register_records_out_ap.get_name_leafdata());
    if (wlc_map_register_records_in_client.is_set || is_set(wlc_map_register_records_in_client.yfilter)) leaf_name_data.push_back(wlc_map_register_records_in_client.get_name_leafdata());
    if (wlc_map_register_records_out_client.is_set || is_set(wlc_map_register_records_out_client.yfilter)) leaf_name_data.push_back(wlc_map_register_records_out_client.get_name_leafdata());
    if (wlc_map_register_records_in_failure.is_set || is_set(wlc_map_register_records_in_failure.yfilter)) leaf_name_data.push_back(wlc_map_register_records_in_failure.get_name_leafdata());
    if (wlc_map_register_records_out_failure.is_set || is_set(wlc_map_register_records_out_failure.yfilter)) leaf_name_data.push_back(wlc_map_register_records_out_failure.get_name_leafdata());
    if (map_notify_records_in.is_set || is_set(map_notify_records_in.yfilter)) leaf_name_data.push_back(map_notify_records_in.get_name_leafdata());
    if (map_notify_records_out.is_set || is_set(map_notify_records_out.yfilter)) leaf_name_data.push_back(map_notify_records_out.get_name_leafdata());
    if (map_notify_auth_failed.is_set || is_set(map_notify_auth_failed.yfilter)) leaf_name_data.push_back(map_notify_auth_failed.get_name_leafdata());
    if (wlc_map_notify_records_in.is_set || is_set(wlc_map_notify_records_in.yfilter)) leaf_name_data.push_back(wlc_map_notify_records_in.get_name_leafdata());
    if (wlc_map_notify_records_out.is_set || is_set(wlc_map_notify_records_out.yfilter)) leaf_name_data.push_back(wlc_map_notify_records_out.get_name_leafdata());
    if (wlc_map_notify_records_in_ap.is_set || is_set(wlc_map_notify_records_in_ap.yfilter)) leaf_name_data.push_back(wlc_map_notify_records_in_ap.get_name_leafdata());
    if (wlc_map_notify_records_out_ap.is_set || is_set(wlc_map_notify_records_out_ap.yfilter)) leaf_name_data.push_back(wlc_map_notify_records_out_ap.get_name_leafdata());
    if (wlc_map_notify_records_in_client.is_set || is_set(wlc_map_notify_records_in_client.yfilter)) leaf_name_data.push_back(wlc_map_notify_records_in_client.get_name_leafdata());
    if (wlc_map_notify_records_out_client.is_set || is_set(wlc_map_notify_records_out_client.yfilter)) leaf_name_data.push_back(wlc_map_notify_records_out_client.get_name_leafdata());
    if (wlc_map_notify_records_in_failure.is_set || is_set(wlc_map_notify_records_in_failure.yfilter)) leaf_name_data.push_back(wlc_map_notify_records_in_failure.get_name_leafdata());
    if (wlc_map_notify_records_out_failure.is_set || is_set(wlc_map_notify_records_out_failure.yfilter)) leaf_name_data.push_back(wlc_map_notify_records_out_failure.get_name_leafdata());
    if (mapping_record_ttl_alerts.is_set || is_set(mapping_record_ttl_alerts.yfilter)) leaf_name_data.push_back(mapping_record_ttl_alerts.get_name_leafdata());
    if (remote_eid_entries_created.is_set || is_set(remote_eid_entries_created.yfilter)) leaf_name_data.push_back(remote_eid_entries_created.get_name_leafdata());
    if (remote_eid_entries_deleted.is_set || is_set(remote_eid_entries_deleted.yfilter)) leaf_name_data.push_back(remote_eid_entries_deleted.get_name_leafdata());
    if (remote_eid_nsf_replay_entries_created.is_set || is_set(remote_eid_nsf_replay_entries_created.yfilter)) leaf_name_data.push_back(remote_eid_nsf_replay_entries_created.get_name_leafdata());
    if (forwarding_data_signals_processed.is_set || is_set(forwarding_data_signals_processed.yfilter)) leaf_name_data.push_back(forwarding_data_signals_processed.get_name_leafdata());
    if (forwarding_data_signals_dropped.is_set || is_set(forwarding_data_signals_dropped.yfilter)) leaf_name_data.push_back(forwarding_data_signals_dropped.get_name_leafdata());
    if (forwarding_reachability_reports_processed.is_set || is_set(forwarding_reachability_reports_processed.yfilter)) leaf_name_data.push_back(forwarding_reachability_reports_processed.get_name_leafdata());
    if (forwarding_reachability_reports_dropped.is_set || is_set(forwarding_reachability_reports_dropped.yfilter)) leaf_name_data.push_back(forwarding_reachability_reports_dropped.get_name_leafdata());
    if (is_etr_accept_mapping.is_set || is_set(is_etr_accept_mapping.yfilter)) leaf_name_data.push_back(is_etr_accept_mapping.get_name_leafdata());
    if (is_etr_accept_mapping_verify.is_set || is_set(is_etr_accept_mapping_verify.yfilter)) leaf_name_data.push_back(is_etr_accept_mapping_verify.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LispState::LispRouters::Instances::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "role")
    {
        if(role == nullptr)
        {
            role = std::make_shared<LispState::LispRouters::Instances::Af::Role>();
        }
        return role;
    }

    if(child_yang_name == "map-cache")
    {
        auto ent_ = std::make_shared<LispState::LispRouters::Instances::Af::MapCache>();
        ent_->parent = this;
        map_cache.append(ent_);
        return ent_;
    }

    if(child_yang_name == "local-dbase")
    {
        auto ent_ = std::make_shared<LispState::LispRouters::Instances::Af::LocalDbase>();
        ent_->parent = this;
        local_dbase.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ms-registrations")
    {
        auto ent_ = std::make_shared<LispState::LispRouters::Instances::Af::MsRegistrations>();
        ent_->parent = this;
        ms_registrations.append(ent_);
        return ent_;
    }

    if(child_yang_name == "map-servers")
    {
        auto ent_ = std::make_shared<LispState::LispRouters::Instances::Af::MapServers>();
        ent_->parent = this;
        map_servers.append(ent_);
        return ent_;
    }

    if(child_yang_name == "map-resolvers")
    {
        auto ent_ = std::make_shared<LispState::LispRouters::Instances::Af::MapResolvers>();
        ent_->parent = this;
        map_resolvers.append(ent_);
        return ent_;
    }

    if(child_yang_name == "proxy-etrs")
    {
        auto ent_ = std::make_shared<LispState::LispRouters::Instances::Af::ProxyEtrs>();
        ent_->parent = this;
        proxy_etrs.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LispState::LispRouters::Instances::Af::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(role != nullptr)
    {
        _children["role"] = role;
    }

    count_ = 0;
    for (auto ent_ : map_cache.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : local_dbase.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ms_registrations.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : map_servers.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : map_resolvers.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : proxy_etrs.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void LispState::LispRouters::Instances::Af::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iaftype")
    {
        iaftype = value;
        iaftype.value_namespace = name_space;
        iaftype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2-domain-id")
    {
        l2_domain_id = value;
        l2_domain_id.value_namespace = name_space;
        l2_domain_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "map-cache-size")
    {
        map_cache_size = value;
        map_cache_size.value_namespace = name_space;
        map_cache_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "map-cache-limit")
    {
        map_cache_limit = value;
        map_cache_limit.value_namespace = name_space;
        map_cache_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "etr-map-cache-ttl")
    {
        etr_map_cache_ttl = value;
        etr_map_cache_ttl.value_namespace = name_space;
        etr_map_cache_ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "registration-more-specific")
    {
        registration_more_specific = value;
        registration_more_specific.value_namespace = name_space;
        registration_more_specific.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "registration-more-specific-warning-threshold")
    {
        registration_more_specific_warning_threshold = value;
        registration_more_specific_warning_threshold.value_namespace = name_space;
        registration_more_specific_warning_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "registration-more-specific-limit")
    {
        registration_more_specific_limit = value;
        registration_more_specific_limit.value_namespace = name_space;
        registration_more_specific_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "map-cache-threshold")
    {
        map_cache_threshold = value;
        map_cache_threshold.value_namespace = name_space;
        map_cache_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "map-requests-in")
    {
        map_requests_in = value;
        map_requests_in.value_namespace = name_space;
        map_requests_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "map-requests-out")
    {
        map_requests_out = value;
        map_requests_out.value_namespace = name_space;
        map_requests_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulated-map-requests-in")
    {
        encapsulated_map_requests_in = value;
        encapsulated_map_requests_in.value_namespace = name_space;
        encapsulated_map_requests_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulated-map-requests-out")
    {
        encapsulated_map_requests_out = value;
        encapsulated_map_requests_out.value_namespace = name_space;
        encapsulated_map_requests_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rloc-probe-map-requests-in")
    {
        rloc_probe_map_requests_in = value;
        rloc_probe_map_requests_in.value_namespace = name_space;
        rloc_probe_map_requests_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rloc-probe-map-requests-out")
    {
        rloc_probe_map_requests_out = value;
        rloc_probe_map_requests_out.value_namespace = name_space;
        rloc_probe_map_requests_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "map-requests-expired-on-queue")
    {
        map_requests_expired_on_queue = value;
        map_requests_expired_on_queue.value_namespace = name_space;
        map_requests_expired_on_queue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "map-requests-no-reply")
    {
        map_requests_no_reply = value;
        map_requests_no_reply.value_namespace = name_space;
        map_requests_no_reply.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "map-requests-from-disallowed-locators")
    {
        map_requests_from_disallowed_locators = value;
        map_requests_from_disallowed_locators.value_namespace = name_space;
        map_requests_from_disallowed_locators.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "smr-map-requests-in")
    {
        smr_map_requests_in = value;
        smr_map_requests_in.value_namespace = name_space;
        smr_map_requests_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "smr-map-requests-out")
    {
        smr_map_requests_out = value;
        smr_map_requests_out.value_namespace = name_space;
        smr_map_requests_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ddt-itr-map-requests-dropped")
    {
        ddt_itr_map_requests_dropped = value;
        ddt_itr_map_requests_dropped.value_namespace = name_space;
        ddt_itr_map_requests_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ddt-itr-map-requests-nonce-collision")
    {
        ddt_itr_map_requests_nonce_collision = value;
        ddt_itr_map_requests_nonce_collision.value_namespace = name_space;
        ddt_itr_map_requests_nonce_collision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ddt-itr-map-requests-bad-xtr-nonce")
    {
        ddt_itr_map_requests_bad_xtr_nonce = value;
        ddt_itr_map_requests_bad_xtr_nonce.value_namespace = name_space;
        ddt_itr_map_requests_bad_xtr_nonce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mr-map-requests-forwarded")
    {
        mr_map_requests_forwarded = value;
        mr_map_requests_forwarded.value_namespace = name_space;
        mr_map_requests_forwarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ms-map-requests-forwarded")
    {
        ms_map_requests_forwarded = value;
        ms_map_requests_forwarded.value_namespace = name_space;
        ms_map_requests_forwarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "to-alt-map-requests-out")
    {
        to_alt_map_requests_out = value;
        to_alt_map_requests_out.value_namespace = name_space;
        to_alt_map_requests_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "map-reply-records-in")
    {
        map_reply_records_in = value;
        map_reply_records_in.value_namespace = name_space;
        map_reply_records_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "map-reply-records-out")
    {
        map_reply_records_out = value;
        map_reply_records_out.value_namespace = name_space;
        map_reply_records_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authoritative-records-in")
    {
        authoritative_records_in = value;
        authoritative_records_in.value_namespace = name_space;
        authoritative_records_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authoritative-records-out")
    {
        authoritative_records_out = value;
        authoritative_records_out.value_namespace = name_space;
        authoritative_records_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-authoritative-records-in")
    {
        non_authoritative_records_in = value;
        non_authoritative_records_in.value_namespace = name_space;
        non_authoritative_records_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-authoritative-records-out")
    {
        non_authoritative_records_out = value;
        non_authoritative_records_out.value_namespace = name_space;
        non_authoritative_records_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-records-in")
    {
        negative_records_in = value;
        negative_records_in.value_namespace = name_space;
        negative_records_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negative-records-out")
    {
        negative_records_out = value;
        negative_records_out.value_namespace = name_space;
        negative_records_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rloc-probe-records-in")
    {
        rloc_probe_records_in = value;
        rloc_probe_records_in.value_namespace = name_space;
        rloc_probe_records_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rloc-probe-records-out")
    {
        rloc_probe_records_out = value;
        rloc_probe_records_out.value_namespace = name_space;
        rloc_probe_records_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ms-proxy-reply-records-out")
    {
        ms_proxy_reply_records_out = value;
        ms_proxy_reply_records_out.value_namespace = name_space;
        ms_proxy_reply_records_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wlc-subscribe-in")
    {
        wlc_subscribe_in = value;
        wlc_subscribe_in.value_namespace = name_space;
        wlc_subscribe_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wlc-subscribe-out")
    {
        wlc_subscribe_out = value;
        wlc_subscribe_out.value_namespace = name_space;
        wlc_subscribe_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wlc-subscribe-in-failure")
    {
        wlc_subscribe_in_failure = value;
        wlc_subscribe_in_failure.value_namespace = name_space;
        wlc_subscribe_in_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wlc-subscribe-out-failure")
    {
        wlc_subscribe_out_failure = value;
        wlc_subscribe_out_failure.value_namespace = name_space;
        wlc_subscribe_out_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wlc-unsubscribe-in")
    {
        wlc_unsubscribe_in = value;
        wlc_unsubscribe_in.value_namespace = name_space;
        wlc_unsubscribe_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wlc-unsubscribe-out")
    {
        wlc_unsubscribe_out = value;
        wlc_unsubscribe_out.value_namespace = name_space;
        wlc_unsubscribe_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wlc-unsubscribe-in-failure")
    {
        wlc_unsubscribe_in_failure = value;
        wlc_unsubscribe_in_failure.value_namespace = name_space;
        wlc_unsubscribe_in_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wlc-unsubscribe-out-failure")
    {
        wlc_unsubscribe_out_failure = value;
        wlc_unsubscribe_out_failure.value_namespace = name_space;
        wlc_unsubscribe_out_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "map-register-records-in")
    {
        map_register_records_in = value;
        map_register_records_in.value_namespace = name_space;
        map_register_records_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "map-register-records-out")
    {
        map_register_records_out = value;
        map_register_records_out.value_namespace = name_space;
        map_register_records_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "map-registers-ms-disabled")
    {
        map_registers_ms_disabled = value;
        map_registers_ms_disabled.value_namespace = name_space;
        map_registers_ms_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "map-registers-auth-failed")
    {
        map_registers_auth_failed = value;
        map_registers_auth_failed.value_namespace = name_space;
        map_registers_auth_failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "map-registers-from-disallowed-locators")
    {
        map_registers_from_disallowed_locators = value;
        map_registers_from_disallowed_locators.value_namespace = name_space;
        map_registers_from_disallowed_locators.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wlc-map-register-records-in")
    {
        wlc_map_register_records_in = value;
        wlc_map_register_records_in.value_namespace = name_space;
        wlc_map_register_records_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wlc-map-register-records-out")
    {
        wlc_map_register_records_out = value;
        wlc_map_register_records_out.value_namespace = name_space;
        wlc_map_register_records_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wlc-map-register-records-in-ap")
    {
        wlc_map_register_records_in_ap = value;
        wlc_map_register_records_in_ap.value_namespace = name_space;
        wlc_map_register_records_in_ap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wlc-map-register-records-out-ap")
    {
        wlc_map_register_records_out_ap = value;
        wlc_map_register_records_out_ap.value_namespace = name_space;
        wlc_map_register_records_out_ap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wlc-map-register-records-in-client")
    {
        wlc_map_register_records_in_client = value;
        wlc_map_register_records_in_client.value_namespace = name_space;
        wlc_map_register_records_in_client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wlc-map-register-records-out-client")
    {
        wlc_map_register_records_out_client = value;
        wlc_map_register_records_out_client.value_namespace = name_space;
        wlc_map_register_records_out_client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wlc-map-register-records-in-failure")
    {
        wlc_map_register_records_in_failure = value;
        wlc_map_register_records_in_failure.value_namespace = name_space;
        wlc_map_register_records_in_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wlc-map-register-records-out-failure")
    {
        wlc_map_register_records_out_failure = value;
        wlc_map_register_records_out_failure.value_namespace = name_space;
        wlc_map_register_records_out_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "map-notify-records-in")
    {
        map_notify_records_in = value;
        map_notify_records_in.value_namespace = name_space;
        map_notify_records_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "map-notify-records-out")
    {
        map_notify_records_out = value;
        map_notify_records_out.value_namespace = name_space;
        map_notify_records_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "map-notify-auth-failed")
    {
        map_notify_auth_failed = value;
        map_notify_auth_failed.value_namespace = name_space;
        map_notify_auth_failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wlc-map-notify-records-in")
    {
        wlc_map_notify_records_in = value;
        wlc_map_notify_records_in.value_namespace = name_space;
        wlc_map_notify_records_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wlc-map-notify-records-out")
    {
        wlc_map_notify_records_out = value;
        wlc_map_notify_records_out.value_namespace = name_space;
        wlc_map_notify_records_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wlc-map-notify-records-in-ap")
    {
        wlc_map_notify_records_in_ap = value;
        wlc_map_notify_records_in_ap.value_namespace = name_space;
        wlc_map_notify_records_in_ap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wlc-map-notify-records-out-ap")
    {
        wlc_map_notify_records_out_ap = value;
        wlc_map_notify_records_out_ap.value_namespace = name_space;
        wlc_map_notify_records_out_ap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wlc-map-notify-records-in-client")
    {
        wlc_map_notify_records_in_client = value;
        wlc_map_notify_records_in_client.value_namespace = name_space;
        wlc_map_notify_records_in_client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wlc-map-notify-records-out-client")
    {
        wlc_map_notify_records_out_client = value;
        wlc_map_notify_records_out_client.value_namespace = name_space;
        wlc_map_notify_records_out_client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wlc-map-notify-records-in-failure")
    {
        wlc_map_notify_records_in_failure = value;
        wlc_map_notify_records_in_failure.value_namespace = name_space;
        wlc_map_notify_records_in_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wlc-map-notify-records-out-failure")
    {
        wlc_map_notify_records_out_failure = value;
        wlc_map_notify_records_out_failure.value_namespace = name_space;
        wlc_map_notify_records_out_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mapping-record-ttl-alerts")
    {
        mapping_record_ttl_alerts = value;
        mapping_record_ttl_alerts.value_namespace = name_space;
        mapping_record_ttl_alerts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-eid-entries-created")
    {
        remote_eid_entries_created = value;
        remote_eid_entries_created.value_namespace = name_space;
        remote_eid_entries_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-eid-entries-deleted")
    {
        remote_eid_entries_deleted = value;
        remote_eid_entries_deleted.value_namespace = name_space;
        remote_eid_entries_deleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-eid-nsf-replay-entries-created")
    {
        remote_eid_nsf_replay_entries_created = value;
        remote_eid_nsf_replay_entries_created.value_namespace = name_space;
        remote_eid_nsf_replay_entries_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-data-signals-processed")
    {
        forwarding_data_signals_processed = value;
        forwarding_data_signals_processed.value_namespace = name_space;
        forwarding_data_signals_processed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-data-signals-dropped")
    {
        forwarding_data_signals_dropped = value;
        forwarding_data_signals_dropped.value_namespace = name_space;
        forwarding_data_signals_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-reachability-reports-processed")
    {
        forwarding_reachability_reports_processed = value;
        forwarding_reachability_reports_processed.value_namespace = name_space;
        forwarding_reachability_reports_processed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-reachability-reports-dropped")
    {
        forwarding_reachability_reports_dropped = value;
        forwarding_reachability_reports_dropped.value_namespace = name_space;
        forwarding_reachability_reports_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-etr-accept-mapping")
    {
        is_etr_accept_mapping = value;
        is_etr_accept_mapping.value_namespace = name_space;
        is_etr_accept_mapping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-etr-accept-mapping-verify")
    {
        is_etr_accept_mapping_verify = value;
        is_etr_accept_mapping_verify.value_namespace = name_space;
        is_etr_accept_mapping_verify.value_namespace_prefix = name_space_prefix;
    }
}

void LispState::LispRouters::Instances::Af::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iaftype")
    {
        iaftype.yfilter = yfilter;
    }
    if(value_path == "l2-domain-id")
    {
        l2_domain_id.yfilter = yfilter;
    }
    if(value_path == "map-cache-size")
    {
        map_cache_size.yfilter = yfilter;
    }
    if(value_path == "map-cache-limit")
    {
        map_cache_limit.yfilter = yfilter;
    }
    if(value_path == "etr-map-cache-ttl")
    {
        etr_map_cache_ttl.yfilter = yfilter;
    }
    if(value_path == "registration-more-specific")
    {
        registration_more_specific.yfilter = yfilter;
    }
    if(value_path == "registration-more-specific-warning-threshold")
    {
        registration_more_specific_warning_threshold.yfilter = yfilter;
    }
    if(value_path == "registration-more-specific-limit")
    {
        registration_more_specific_limit.yfilter = yfilter;
    }
    if(value_path == "map-cache-threshold")
    {
        map_cache_threshold.yfilter = yfilter;
    }
    if(value_path == "map-requests-in")
    {
        map_requests_in.yfilter = yfilter;
    }
    if(value_path == "map-requests-out")
    {
        map_requests_out.yfilter = yfilter;
    }
    if(value_path == "encapsulated-map-requests-in")
    {
        encapsulated_map_requests_in.yfilter = yfilter;
    }
    if(value_path == "encapsulated-map-requests-out")
    {
        encapsulated_map_requests_out.yfilter = yfilter;
    }
    if(value_path == "rloc-probe-map-requests-in")
    {
        rloc_probe_map_requests_in.yfilter = yfilter;
    }
    if(value_path == "rloc-probe-map-requests-out")
    {
        rloc_probe_map_requests_out.yfilter = yfilter;
    }
    if(value_path == "map-requests-expired-on-queue")
    {
        map_requests_expired_on_queue.yfilter = yfilter;
    }
    if(value_path == "map-requests-no-reply")
    {
        map_requests_no_reply.yfilter = yfilter;
    }
    if(value_path == "map-requests-from-disallowed-locators")
    {
        map_requests_from_disallowed_locators.yfilter = yfilter;
    }
    if(value_path == "smr-map-requests-in")
    {
        smr_map_requests_in.yfilter = yfilter;
    }
    if(value_path == "smr-map-requests-out")
    {
        smr_map_requests_out.yfilter = yfilter;
    }
    if(value_path == "ddt-itr-map-requests-dropped")
    {
        ddt_itr_map_requests_dropped.yfilter = yfilter;
    }
    if(value_path == "ddt-itr-map-requests-nonce-collision")
    {
        ddt_itr_map_requests_nonce_collision.yfilter = yfilter;
    }
    if(value_path == "ddt-itr-map-requests-bad-xtr-nonce")
    {
        ddt_itr_map_requests_bad_xtr_nonce.yfilter = yfilter;
    }
    if(value_path == "mr-map-requests-forwarded")
    {
        mr_map_requests_forwarded.yfilter = yfilter;
    }
    if(value_path == "ms-map-requests-forwarded")
    {
        ms_map_requests_forwarded.yfilter = yfilter;
    }
    if(value_path == "to-alt-map-requests-out")
    {
        to_alt_map_requests_out.yfilter = yfilter;
    }
    if(value_path == "map-reply-records-in")
    {
        map_reply_records_in.yfilter = yfilter;
    }
    if(value_path == "map-reply-records-out")
    {
        map_reply_records_out.yfilter = yfilter;
    }
    if(value_path == "authoritative-records-in")
    {
        authoritative_records_in.yfilter = yfilter;
    }
    if(value_path == "authoritative-records-out")
    {
        authoritative_records_out.yfilter = yfilter;
    }
    if(value_path == "non-authoritative-records-in")
    {
        non_authoritative_records_in.yfilter = yfilter;
    }
    if(value_path == "non-authoritative-records-out")
    {
        non_authoritative_records_out.yfilter = yfilter;
    }
    if(value_path == "negative-records-in")
    {
        negative_records_in.yfilter = yfilter;
    }
    if(value_path == "negative-records-out")
    {
        negative_records_out.yfilter = yfilter;
    }
    if(value_path == "rloc-probe-records-in")
    {
        rloc_probe_records_in.yfilter = yfilter;
    }
    if(value_path == "rloc-probe-records-out")
    {
        rloc_probe_records_out.yfilter = yfilter;
    }
    if(value_path == "ms-proxy-reply-records-out")
    {
        ms_proxy_reply_records_out.yfilter = yfilter;
    }
    if(value_path == "wlc-subscribe-in")
    {
        wlc_subscribe_in.yfilter = yfilter;
    }
    if(value_path == "wlc-subscribe-out")
    {
        wlc_subscribe_out.yfilter = yfilter;
    }
    if(value_path == "wlc-subscribe-in-failure")
    {
        wlc_subscribe_in_failure.yfilter = yfilter;
    }
    if(value_path == "wlc-subscribe-out-failure")
    {
        wlc_subscribe_out_failure.yfilter = yfilter;
    }
    if(value_path == "wlc-unsubscribe-in")
    {
        wlc_unsubscribe_in.yfilter = yfilter;
    }
    if(value_path == "wlc-unsubscribe-out")
    {
        wlc_unsubscribe_out.yfilter = yfilter;
    }
    if(value_path == "wlc-unsubscribe-in-failure")
    {
        wlc_unsubscribe_in_failure.yfilter = yfilter;
    }
    if(value_path == "wlc-unsubscribe-out-failure")
    {
        wlc_unsubscribe_out_failure.yfilter = yfilter;
    }
    if(value_path == "map-register-records-in")
    {
        map_register_records_in.yfilter = yfilter;
    }
    if(value_path == "map-register-records-out")
    {
        map_register_records_out.yfilter = yfilter;
    }
    if(value_path == "map-registers-ms-disabled")
    {
        map_registers_ms_disabled.yfilter = yfilter;
    }
    if(value_path == "map-registers-auth-failed")
    {
        map_registers_auth_failed.yfilter = yfilter;
    }
    if(value_path == "map-registers-from-disallowed-locators")
    {
        map_registers_from_disallowed_locators.yfilter = yfilter;
    }
    if(value_path == "wlc-map-register-records-in")
    {
        wlc_map_register_records_in.yfilter = yfilter;
    }
    if(value_path == "wlc-map-register-records-out")
    {
        wlc_map_register_records_out.yfilter = yfilter;
    }
    if(value_path == "wlc-map-register-records-in-ap")
    {
        wlc_map_register_records_in_ap.yfilter = yfilter;
    }
    if(value_path == "wlc-map-register-records-out-ap")
    {
        wlc_map_register_records_out_ap.yfilter = yfilter;
    }
    if(value_path == "wlc-map-register-records-in-client")
    {
        wlc_map_register_records_in_client.yfilter = yfilter;
    }
    if(value_path == "wlc-map-register-records-out-client")
    {
        wlc_map_register_records_out_client.yfilter = yfilter;
    }
    if(value_path == "wlc-map-register-records-in-failure")
    {
        wlc_map_register_records_in_failure.yfilter = yfilter;
    }
    if(value_path == "wlc-map-register-records-out-failure")
    {
        wlc_map_register_records_out_failure.yfilter = yfilter;
    }
    if(value_path == "map-notify-records-in")
    {
        map_notify_records_in.yfilter = yfilter;
    }
    if(value_path == "map-notify-records-out")
    {
        map_notify_records_out.yfilter = yfilter;
    }
    if(value_path == "map-notify-auth-failed")
    {
        map_notify_auth_failed.yfilter = yfilter;
    }
    if(value_path == "wlc-map-notify-records-in")
    {
        wlc_map_notify_records_in.yfilter = yfilter;
    }
    if(value_path == "wlc-map-notify-records-out")
    {
        wlc_map_notify_records_out.yfilter = yfilter;
    }
    if(value_path == "wlc-map-notify-records-in-ap")
    {
        wlc_map_notify_records_in_ap.yfilter = yfilter;
    }
    if(value_path == "wlc-map-notify-records-out-ap")
    {
        wlc_map_notify_records_out_ap.yfilter = yfilter;
    }
    if(value_path == "wlc-map-notify-records-in-client")
    {
        wlc_map_notify_records_in_client.yfilter = yfilter;
    }
    if(value_path == "wlc-map-notify-records-out-client")
    {
        wlc_map_notify_records_out_client.yfilter = yfilter;
    }
    if(value_path == "wlc-map-notify-records-in-failure")
    {
        wlc_map_notify_records_in_failure.yfilter = yfilter;
    }
    if(value_path == "wlc-map-notify-records-out-failure")
    {
        wlc_map_notify_records_out_failure.yfilter = yfilter;
    }
    if(value_path == "mapping-record-ttl-alerts")
    {
        mapping_record_ttl_alerts.yfilter = yfilter;
    }
    if(value_path == "remote-eid-entries-created")
    {
        remote_eid_entries_created.yfilter = yfilter;
    }
    if(value_path == "remote-eid-entries-deleted")
    {
        remote_eid_entries_deleted.yfilter = yfilter;
    }
    if(value_path == "remote-eid-nsf-replay-entries-created")
    {
        remote_eid_nsf_replay_entries_created.yfilter = yfilter;
    }
    if(value_path == "forwarding-data-signals-processed")
    {
        forwarding_data_signals_processed.yfilter = yfilter;
    }
    if(value_path == "forwarding-data-signals-dropped")
    {
        forwarding_data_signals_dropped.yfilter = yfilter;
    }
    if(value_path == "forwarding-reachability-reports-processed")
    {
        forwarding_reachability_reports_processed.yfilter = yfilter;
    }
    if(value_path == "forwarding-reachability-reports-dropped")
    {
        forwarding_reachability_reports_dropped.yfilter = yfilter;
    }
    if(value_path == "is-etr-accept-mapping")
    {
        is_etr_accept_mapping.yfilter = yfilter;
    }
    if(value_path == "is-etr-accept-mapping-verify")
    {
        is_etr_accept_mapping_verify.yfilter = yfilter;
    }
}

bool LispState::LispRouters::Instances::Af::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "role" || name == "map-cache" || name == "local-dbase" || name == "ms-registrations" || name == "map-servers" || name == "map-resolvers" || name == "proxy-etrs" || name == "iaftype" || name == "l2-domain-id" || name == "map-cache-size" || name == "map-cache-limit" || name == "etr-map-cache-ttl" || name == "registration-more-specific" || name == "registration-more-specific-warning-threshold" || name == "registration-more-specific-limit" || name == "map-cache-threshold" || name == "map-requests-in" || name == "map-requests-out" || name == "encapsulated-map-requests-in" || name == "encapsulated-map-requests-out" || name == "rloc-probe-map-requests-in" || name == "rloc-probe-map-requests-out" || name == "map-requests-expired-on-queue" || name == "map-requests-no-reply" || name == "map-requests-from-disallowed-locators" || name == "smr-map-requests-in" || name == "smr-map-requests-out" || name == "ddt-itr-map-requests-dropped" || name == "ddt-itr-map-requests-nonce-collision" || name == "ddt-itr-map-requests-bad-xtr-nonce" || name == "mr-map-requests-forwarded" || name == "ms-map-requests-forwarded" || name == "to-alt-map-requests-out" || name == "map-reply-records-in" || name == "map-reply-records-out" || name == "authoritative-records-in" || name == "authoritative-records-out" || name == "non-authoritative-records-in" || name == "non-authoritative-records-out" || name == "negative-records-in" || name == "negative-records-out" || name == "rloc-probe-records-in" || name == "rloc-probe-records-out" || name == "ms-proxy-reply-records-out" || name == "wlc-subscribe-in" || name == "wlc-subscribe-out" || name == "wlc-subscribe-in-failure" || name == "wlc-subscribe-out-failure" || name == "wlc-unsubscribe-in" || name == "wlc-unsubscribe-out" || name == "wlc-unsubscribe-in-failure" || name == "wlc-unsubscribe-out-failure" || name == "map-register-records-in" || name == "map-register-records-out" || name == "map-registers-ms-disabled" || name == "map-registers-auth-failed" || name == "map-registers-from-disallowed-locators" || name == "wlc-map-register-records-in" || name == "wlc-map-register-records-out" || name == "wlc-map-register-records-in-ap" || name == "wlc-map-register-records-out-ap" || name == "wlc-map-register-records-in-client" || name == "wlc-map-register-records-out-client" || name == "wlc-map-register-records-in-failure" || name == "wlc-map-register-records-out-failure" || name == "map-notify-records-in" || name == "map-notify-records-out" || name == "map-notify-auth-failed" || name == "wlc-map-notify-records-in" || name == "wlc-map-notify-records-out" || name == "wlc-map-notify-records-in-ap" || name == "wlc-map-notify-records-out-ap" || name == "wlc-map-notify-records-in-client" || name == "wlc-map-notify-records-out-client" || name == "wlc-map-notify-records-in-failure" || name == "wlc-map-notify-records-out-failure" || name == "mapping-record-ttl-alerts" || name == "remote-eid-entries-created" || name == "remote-eid-entries-deleted" || name == "remote-eid-nsf-replay-entries-created" || name == "forwarding-data-signals-processed" || name == "forwarding-data-signals-dropped" || name == "forwarding-reachability-reports-processed" || name == "forwarding-reachability-reports-dropped" || name == "is-etr-accept-mapping" || name == "is-etr-accept-mapping-verify")
        return true;
    return false;
}

LispState::LispRouters::Instances::Af::Role::Role()
    :
    is_ms{YType::boolean, "is-ms"},
    is_mr{YType::boolean, "is-mr"},
    is_itr{YType::boolean, "is-itr"},
    is_etr{YType::boolean, "is-etr"},
    is_pitr{YType::boolean, "is-pitr"},
    is_petr{YType::boolean, "is-petr"}
{

    yang_name = "role"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

LispState::LispRouters::Instances::Af::Role::~Role()
{
}

bool LispState::LispRouters::Instances::Af::Role::has_data() const
{
    if (is_presence_container) return true;
    return is_ms.is_set
	|| is_mr.is_set
	|| is_itr.is_set
	|| is_etr.is_set
	|| is_pitr.is_set
	|| is_petr.is_set;
}

bool LispState::LispRouters::Instances::Af::Role::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_ms.yfilter)
	|| ydk::is_set(is_mr.yfilter)
	|| ydk::is_set(is_itr.yfilter)
	|| ydk::is_set(is_etr.yfilter)
	|| ydk::is_set(is_pitr.yfilter)
	|| ydk::is_set(is_petr.yfilter);
}

std::string LispState::LispRouters::Instances::Af::Role::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "role";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LispState::LispRouters::Instances::Af::Role::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_ms.is_set || is_set(is_ms.yfilter)) leaf_name_data.push_back(is_ms.get_name_leafdata());
    if (is_mr.is_set || is_set(is_mr.yfilter)) leaf_name_data.push_back(is_mr.get_name_leafdata());
    if (is_itr.is_set || is_set(is_itr.yfilter)) leaf_name_data.push_back(is_itr.get_name_leafdata());
    if (is_etr.is_set || is_set(is_etr.yfilter)) leaf_name_data.push_back(is_etr.get_name_leafdata());
    if (is_pitr.is_set || is_set(is_pitr.yfilter)) leaf_name_data.push_back(is_pitr.get_name_leafdata());
    if (is_petr.is_set || is_set(is_petr.yfilter)) leaf_name_data.push_back(is_petr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LispState::LispRouters::Instances::Af::Role::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LispState::LispRouters::Instances::Af::Role::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void LispState::LispRouters::Instances::Af::Role::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-ms")
    {
        is_ms = value;
        is_ms.value_namespace = name_space;
        is_ms.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mr")
    {
        is_mr = value;
        is_mr.value_namespace = name_space;
        is_mr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-itr")
    {
        is_itr = value;
        is_itr.value_namespace = name_space;
        is_itr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-etr")
    {
        is_etr = value;
        is_etr.value_namespace = name_space;
        is_etr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pitr")
    {
        is_pitr = value;
        is_pitr.value_namespace = name_space;
        is_pitr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-petr")
    {
        is_petr = value;
        is_petr.value_namespace = name_space;
        is_petr.value_namespace_prefix = name_space_prefix;
    }
}

void LispState::LispRouters::Instances::Af::Role::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-ms")
    {
        is_ms.yfilter = yfilter;
    }
    if(value_path == "is-mr")
    {
        is_mr.yfilter = yfilter;
    }
    if(value_path == "is-itr")
    {
        is_itr.yfilter = yfilter;
    }
    if(value_path == "is-etr")
    {
        is_etr.yfilter = yfilter;
    }
    if(value_path == "is-pitr")
    {
        is_pitr.yfilter = yfilter;
    }
    if(value_path == "is-petr")
    {
        is_petr.yfilter = yfilter;
    }
}

bool LispState::LispRouters::Instances::Af::Role::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-ms" || name == "is-mr" || name == "is-itr" || name == "is-etr" || name == "is-pitr" || name == "is-petr")
        return true;
    return false;
}

LispState::LispRouters::Instances::Af::MapCache::MapCache()
    :
    afi{YType::enumeration, "afi"},
    prefix{YType::str, "prefix"},
    up_time{YType::str, "up-time"},
    last_modified_time{YType::str, "last-modified-time"},
    last_update_time{YType::str, "last-update-time"},
    ttl{YType::uint32, "ttl"},
    is_authoritative{YType::boolean, "is-authoritative"},
    is_static{YType::boolean, "is-static"},
    is_negative{YType::boolean, "is-negative"},
    nmr_action{YType::enumeration, "nmr-action"},
    expiry_time{YType::str, "expiry-time"},
    encapsulated_packets{YType::uint64, "encapsulated-packets"},
    encapsulated_octets{YType::uint64, "encapsulated-octets"},
    is_active{YType::boolean, "is-active"}
        ,
    map_cache_rloc(this, {"afi", "address"})
{

    yang_name = "map-cache"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

LispState::LispRouters::Instances::Af::MapCache::~MapCache()
{
}

bool LispState::LispRouters::Instances::Af::MapCache::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<map_cache_rloc.len(); index++)
    {
        if(map_cache_rloc[index]->has_data())
            return true;
    }
    return afi.is_set
	|| prefix.is_set
	|| up_time.is_set
	|| last_modified_time.is_set
	|| last_update_time.is_set
	|| ttl.is_set
	|| is_authoritative.is_set
	|| is_static.is_set
	|| is_negative.is_set
	|| nmr_action.is_set
	|| expiry_time.is_set
	|| encapsulated_packets.is_set
	|| encapsulated_octets.is_set
	|| is_active.is_set;
}

bool LispState::LispRouters::Instances::Af::MapCache::has_operation() const
{
    for (std::size_t index=0; index<map_cache_rloc.len(); index++)
    {
        if(map_cache_rloc[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(up_time.yfilter)
	|| ydk::is_set(last_modified_time.yfilter)
	|| ydk::is_set(last_update_time.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| ydk::is_set(is_authoritative.yfilter)
	|| ydk::is_set(is_static.yfilter)
	|| ydk::is_set(is_negative.yfilter)
	|| ydk::is_set(nmr_action.yfilter)
	|| ydk::is_set(expiry_time.yfilter)
	|| ydk::is_set(encapsulated_packets.yfilter)
	|| ydk::is_set(encapsulated_octets.yfilter)
	|| ydk::is_set(is_active.yfilter);
}

std::string LispState::LispRouters::Instances::Af::MapCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache";
    ADD_KEY_TOKEN(afi, "afi");
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LispState::LispRouters::Instances::Af::MapCache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (up_time.is_set || is_set(up_time.yfilter)) leaf_name_data.push_back(up_time.get_name_leafdata());
    if (last_modified_time.is_set || is_set(last_modified_time.yfilter)) leaf_name_data.push_back(last_modified_time.get_name_leafdata());
    if (last_update_time.is_set || is_set(last_update_time.yfilter)) leaf_name_data.push_back(last_update_time.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (is_authoritative.is_set || is_set(is_authoritative.yfilter)) leaf_name_data.push_back(is_authoritative.get_name_leafdata());
    if (is_static.is_set || is_set(is_static.yfilter)) leaf_name_data.push_back(is_static.get_name_leafdata());
    if (is_negative.is_set || is_set(is_negative.yfilter)) leaf_name_data.push_back(is_negative.get_name_leafdata());
    if (nmr_action.is_set || is_set(nmr_action.yfilter)) leaf_name_data.push_back(nmr_action.get_name_leafdata());
    if (expiry_time.is_set || is_set(expiry_time.yfilter)) leaf_name_data.push_back(expiry_time.get_name_leafdata());
    if (encapsulated_packets.is_set || is_set(encapsulated_packets.yfilter)) leaf_name_data.push_back(encapsulated_packets.get_name_leafdata());
    if (encapsulated_octets.is_set || is_set(encapsulated_octets.yfilter)) leaf_name_data.push_back(encapsulated_octets.get_name_leafdata());
    if (is_active.is_set || is_set(is_active.yfilter)) leaf_name_data.push_back(is_active.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LispState::LispRouters::Instances::Af::MapCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-cache-rloc")
    {
        auto ent_ = std::make_shared<LispState::LispRouters::Instances::Af::MapCache::MapCacheRloc>();
        ent_->parent = this;
        map_cache_rloc.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LispState::LispRouters::Instances::Af::MapCache::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : map_cache_rloc.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void LispState::LispRouters::Instances::Af::MapCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-time")
    {
        up_time = value;
        up_time.value_namespace = name_space;
        up_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-modified-time")
    {
        last_modified_time = value;
        last_modified_time.value_namespace = name_space;
        last_modified_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-time")
    {
        last_update_time = value;
        last_update_time.value_namespace = name_space;
        last_update_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-authoritative")
    {
        is_authoritative = value;
        is_authoritative.value_namespace = name_space;
        is_authoritative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-static")
    {
        is_static = value;
        is_static.value_namespace = name_space;
        is_static.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-negative")
    {
        is_negative = value;
        is_negative.value_namespace = name_space;
        is_negative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nmr-action")
    {
        nmr_action = value;
        nmr_action.value_namespace = name_space;
        nmr_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry-time")
    {
        expiry_time = value;
        expiry_time.value_namespace = name_space;
        expiry_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulated-packets")
    {
        encapsulated_packets = value;
        encapsulated_packets.value_namespace = name_space;
        encapsulated_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulated-octets")
    {
        encapsulated_octets = value;
        encapsulated_octets.value_namespace = name_space;
        encapsulated_octets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-active")
    {
        is_active = value;
        is_active.value_namespace = name_space;
        is_active.value_namespace_prefix = name_space_prefix;
    }
}

void LispState::LispRouters::Instances::Af::MapCache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "up-time")
    {
        up_time.yfilter = yfilter;
    }
    if(value_path == "last-modified-time")
    {
        last_modified_time.yfilter = yfilter;
    }
    if(value_path == "last-update-time")
    {
        last_update_time.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
    if(value_path == "is-authoritative")
    {
        is_authoritative.yfilter = yfilter;
    }
    if(value_path == "is-static")
    {
        is_static.yfilter = yfilter;
    }
    if(value_path == "is-negative")
    {
        is_negative.yfilter = yfilter;
    }
    if(value_path == "nmr-action")
    {
        nmr_action.yfilter = yfilter;
    }
    if(value_path == "expiry-time")
    {
        expiry_time.yfilter = yfilter;
    }
    if(value_path == "encapsulated-packets")
    {
        encapsulated_packets.yfilter = yfilter;
    }
    if(value_path == "encapsulated-octets")
    {
        encapsulated_octets.yfilter = yfilter;
    }
    if(value_path == "is-active")
    {
        is_active.yfilter = yfilter;
    }
}

bool LispState::LispRouters::Instances::Af::MapCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-cache-rloc" || name == "afi" || name == "prefix" || name == "up-time" || name == "last-modified-time" || name == "last-update-time" || name == "ttl" || name == "is-authoritative" || name == "is-static" || name == "is-negative" || name == "nmr-action" || name == "expiry-time" || name == "encapsulated-packets" || name == "encapsulated-octets" || name == "is-active")
        return true;
    return false;
}

LispState::LispRouters::Instances::Af::MapCache::MapCacheRloc::MapCacheRloc()
    :
    afi{YType::enumeration, "afi"},
    address{YType::str, "address"},
    state{YType::enumeration, "state"},
    creation_time{YType::str, "creation-time"},
    last_state_change_time{YType::str, "last-state-change-time"},
    rloc_probe_rtt{YType::uint32, "rloc-probe-rtt"}
        ,
    params(std::make_shared<LispState::LispRouters::Instances::Af::MapCache::MapCacheRloc::Params>())
{
    params->parent = this;

    yang_name = "map-cache-rloc"; yang_parent_name = "map-cache"; is_top_level_class = false; has_list_ancestor = true; 
}

LispState::LispRouters::Instances::Af::MapCache::MapCacheRloc::~MapCacheRloc()
{
}

bool LispState::LispRouters::Instances::Af::MapCache::MapCacheRloc::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| address.is_set
	|| state.is_set
	|| creation_time.is_set
	|| last_state_change_time.is_set
	|| rloc_probe_rtt.is_set
	|| (params !=  nullptr && params->has_data());
}

bool LispState::LispRouters::Instances::Af::MapCache::MapCacheRloc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(creation_time.yfilter)
	|| ydk::is_set(last_state_change_time.yfilter)
	|| ydk::is_set(rloc_probe_rtt.yfilter)
	|| (params !=  nullptr && params->has_operation());
}

std::string LispState::LispRouters::Instances::Af::MapCache::MapCacheRloc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-cache-rloc";
    ADD_KEY_TOKEN(afi, "afi");
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LispState::LispRouters::Instances::Af::MapCache::MapCacheRloc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (creation_time.is_set || is_set(creation_time.yfilter)) leaf_name_data.push_back(creation_time.get_name_leafdata());
    if (last_state_change_time.is_set || is_set(last_state_change_time.yfilter)) leaf_name_data.push_back(last_state_change_time.get_name_leafdata());
    if (rloc_probe_rtt.is_set || is_set(rloc_probe_rtt.yfilter)) leaf_name_data.push_back(rloc_probe_rtt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LispState::LispRouters::Instances::Af::MapCache::MapCacheRloc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "params")
    {
        if(params == nullptr)
        {
            params = std::make_shared<LispState::LispRouters::Instances::Af::MapCache::MapCacheRloc::Params>();
        }
        return params;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LispState::LispRouters::Instances::Af::MapCache::MapCacheRloc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(params != nullptr)
    {
        _children["params"] = params;
    }

    return _children;
}

void LispState::LispRouters::Instances::Af::MapCache::MapCacheRloc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creation-time")
    {
        creation_time = value;
        creation_time.value_namespace = name_space;
        creation_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-state-change-time")
    {
        last_state_change_time = value;
        last_state_change_time.value_namespace = name_space;
        last_state_change_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rloc-probe-rtt")
    {
        rloc_probe_rtt = value;
        rloc_probe_rtt.value_namespace = name_space;
        rloc_probe_rtt.value_namespace_prefix = name_space_prefix;
    }
}

void LispState::LispRouters::Instances::Af::MapCache::MapCacheRloc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "creation-time")
    {
        creation_time.yfilter = yfilter;
    }
    if(value_path == "last-state-change-time")
    {
        last_state_change_time.yfilter = yfilter;
    }
    if(value_path == "rloc-probe-rtt")
    {
        rloc_probe_rtt.yfilter = yfilter;
    }
}

bool LispState::LispRouters::Instances::Af::MapCache::MapCacheRloc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "params" || name == "afi" || name == "address" || name == "state" || name == "creation-time" || name == "last-state-change-time" || name == "rloc-probe-rtt")
        return true;
    return false;
}

LispState::LispRouters::Instances::Af::MapCache::MapCacheRloc::Params::Params()
    :
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"},
    mcast_priority{YType::uint8, "mcast-priority"},
    mcast_weight{YType::uint8, "mcast-weight"}
{

    yang_name = "params"; yang_parent_name = "map-cache-rloc"; is_top_level_class = false; has_list_ancestor = true; 
}

LispState::LispRouters::Instances::Af::MapCache::MapCacheRloc::Params::~Params()
{
}

bool LispState::LispRouters::Instances::Af::MapCache::MapCacheRloc::Params::has_data() const
{
    if (is_presence_container) return true;
    return priority.is_set
	|| weight.is_set
	|| mcast_priority.is_set
	|| mcast_weight.is_set;
}

bool LispState::LispRouters::Instances::Af::MapCache::MapCacheRloc::Params::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(mcast_priority.yfilter)
	|| ydk::is_set(mcast_weight.yfilter);
}

std::string LispState::LispRouters::Instances::Af::MapCache::MapCacheRloc::Params::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "params";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LispState::LispRouters::Instances::Af::MapCache::MapCacheRloc::Params::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (mcast_priority.is_set || is_set(mcast_priority.yfilter)) leaf_name_data.push_back(mcast_priority.get_name_leafdata());
    if (mcast_weight.is_set || is_set(mcast_weight.yfilter)) leaf_name_data.push_back(mcast_weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LispState::LispRouters::Instances::Af::MapCache::MapCacheRloc::Params::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LispState::LispRouters::Instances::Af::MapCache::MapCacheRloc::Params::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void LispState::LispRouters::Instances::Af::MapCache::MapCacheRloc::Params::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast-priority")
    {
        mcast_priority = value;
        mcast_priority.value_namespace = name_space;
        mcast_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast-weight")
    {
        mcast_weight = value;
        mcast_weight.value_namespace = name_space;
        mcast_weight.value_namespace_prefix = name_space_prefix;
    }
}

void LispState::LispRouters::Instances::Af::MapCache::MapCacheRloc::Params::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "mcast-priority")
    {
        mcast_priority.yfilter = yfilter;
    }
    if(value_path == "mcast-weight")
    {
        mcast_weight.yfilter = yfilter;
    }
}

bool LispState::LispRouters::Instances::Af::MapCache::MapCacheRloc::Params::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "weight" || name == "mcast-priority" || name == "mcast-weight")
        return true;
    return false;
}

LispState::LispRouters::Instances::Af::LocalDbase::LocalDbase()
    :
    afi{YType::enumeration, "afi"},
    prefix{YType::str, "prefix"},
    lsb{YType::uint32, "lsb"},
    is_reachable{YType::boolean, "is-reachable"},
    is_proxy{YType::boolean, "is-proxy"}
        ,
    local_dbase_rloc(this, {"afi", "address"})
{

    yang_name = "local-dbase"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

LispState::LispRouters::Instances::Af::LocalDbase::~LocalDbase()
{
}

bool LispState::LispRouters::Instances::Af::LocalDbase::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<local_dbase_rloc.len(); index++)
    {
        if(local_dbase_rloc[index]->has_data())
            return true;
    }
    return afi.is_set
	|| prefix.is_set
	|| lsb.is_set
	|| is_reachable.is_set
	|| is_proxy.is_set;
}

bool LispState::LispRouters::Instances::Af::LocalDbase::has_operation() const
{
    for (std::size_t index=0; index<local_dbase_rloc.len(); index++)
    {
        if(local_dbase_rloc[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(lsb.yfilter)
	|| ydk::is_set(is_reachable.yfilter)
	|| ydk::is_set(is_proxy.yfilter);
}

std::string LispState::LispRouters::Instances::Af::LocalDbase::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-dbase";
    ADD_KEY_TOKEN(afi, "afi");
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LispState::LispRouters::Instances::Af::LocalDbase::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (lsb.is_set || is_set(lsb.yfilter)) leaf_name_data.push_back(lsb.get_name_leafdata());
    if (is_reachable.is_set || is_set(is_reachable.yfilter)) leaf_name_data.push_back(is_reachable.get_name_leafdata());
    if (is_proxy.is_set || is_set(is_proxy.yfilter)) leaf_name_data.push_back(is_proxy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LispState::LispRouters::Instances::Af::LocalDbase::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-dbase-rloc")
    {
        auto ent_ = std::make_shared<LispState::LispRouters::Instances::Af::LocalDbase::LocalDbaseRloc>();
        ent_->parent = this;
        local_dbase_rloc.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LispState::LispRouters::Instances::Af::LocalDbase::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : local_dbase_rloc.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void LispState::LispRouters::Instances::Af::LocalDbase::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsb")
    {
        lsb = value;
        lsb.value_namespace = name_space;
        lsb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-reachable")
    {
        is_reachable = value;
        is_reachable.value_namespace = name_space;
        is_reachable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-proxy")
    {
        is_proxy = value;
        is_proxy.value_namespace = name_space;
        is_proxy.value_namespace_prefix = name_space_prefix;
    }
}

void LispState::LispRouters::Instances::Af::LocalDbase::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "lsb")
    {
        lsb.yfilter = yfilter;
    }
    if(value_path == "is-reachable")
    {
        is_reachable.yfilter = yfilter;
    }
    if(value_path == "is-proxy")
    {
        is_proxy.yfilter = yfilter;
    }
}

bool LispState::LispRouters::Instances::Af::LocalDbase::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-dbase-rloc" || name == "afi" || name == "prefix" || name == "lsb" || name == "is-reachable" || name == "is-proxy")
        return true;
    return false;
}

LispState::LispRouters::Instances::Af::LocalDbase::LocalDbaseRloc::LocalDbaseRloc()
    :
    afi{YType::enumeration, "afi"},
    address{YType::str, "address"},
    state{YType::enumeration, "state"},
    is_local{YType::boolean, "is-local"}
        ,
    params(std::make_shared<LispState::LispRouters::Instances::Af::LocalDbase::LocalDbaseRloc::Params>())
{
    params->parent = this;

    yang_name = "local-dbase-rloc"; yang_parent_name = "local-dbase"; is_top_level_class = false; has_list_ancestor = true; 
}

LispState::LispRouters::Instances::Af::LocalDbase::LocalDbaseRloc::~LocalDbaseRloc()
{
}

bool LispState::LispRouters::Instances::Af::LocalDbase::LocalDbaseRloc::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| address.is_set
	|| state.is_set
	|| is_local.is_set
	|| (params !=  nullptr && params->has_data());
}

bool LispState::LispRouters::Instances::Af::LocalDbase::LocalDbaseRloc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(is_local.yfilter)
	|| (params !=  nullptr && params->has_operation());
}

std::string LispState::LispRouters::Instances::Af::LocalDbase::LocalDbaseRloc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-dbase-rloc";
    ADD_KEY_TOKEN(afi, "afi");
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LispState::LispRouters::Instances::Af::LocalDbase::LocalDbaseRloc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (is_local.is_set || is_set(is_local.yfilter)) leaf_name_data.push_back(is_local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LispState::LispRouters::Instances::Af::LocalDbase::LocalDbaseRloc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "params")
    {
        if(params == nullptr)
        {
            params = std::make_shared<LispState::LispRouters::Instances::Af::LocalDbase::LocalDbaseRloc::Params>();
        }
        return params;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LispState::LispRouters::Instances::Af::LocalDbase::LocalDbaseRloc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(params != nullptr)
    {
        _children["params"] = params;
    }

    return _children;
}

void LispState::LispRouters::Instances::Af::LocalDbase::LocalDbaseRloc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local")
    {
        is_local = value;
        is_local.value_namespace = name_space;
        is_local.value_namespace_prefix = name_space_prefix;
    }
}

void LispState::LispRouters::Instances::Af::LocalDbase::LocalDbaseRloc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "is-local")
    {
        is_local.yfilter = yfilter;
    }
}

bool LispState::LispRouters::Instances::Af::LocalDbase::LocalDbaseRloc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "params" || name == "afi" || name == "address" || name == "state" || name == "is-local")
        return true;
    return false;
}

LispState::LispRouters::Instances::Af::LocalDbase::LocalDbaseRloc::Params::Params()
    :
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"},
    mcast_priority{YType::uint8, "mcast-priority"},
    mcast_weight{YType::uint8, "mcast-weight"}
{

    yang_name = "params"; yang_parent_name = "local-dbase-rloc"; is_top_level_class = false; has_list_ancestor = true; 
}

LispState::LispRouters::Instances::Af::LocalDbase::LocalDbaseRloc::Params::~Params()
{
}

bool LispState::LispRouters::Instances::Af::LocalDbase::LocalDbaseRloc::Params::has_data() const
{
    if (is_presence_container) return true;
    return priority.is_set
	|| weight.is_set
	|| mcast_priority.is_set
	|| mcast_weight.is_set;
}

bool LispState::LispRouters::Instances::Af::LocalDbase::LocalDbaseRloc::Params::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(mcast_priority.yfilter)
	|| ydk::is_set(mcast_weight.yfilter);
}

std::string LispState::LispRouters::Instances::Af::LocalDbase::LocalDbaseRloc::Params::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "params";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LispState::LispRouters::Instances::Af::LocalDbase::LocalDbaseRloc::Params::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (mcast_priority.is_set || is_set(mcast_priority.yfilter)) leaf_name_data.push_back(mcast_priority.get_name_leafdata());
    if (mcast_weight.is_set || is_set(mcast_weight.yfilter)) leaf_name_data.push_back(mcast_weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LispState::LispRouters::Instances::Af::LocalDbase::LocalDbaseRloc::Params::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LispState::LispRouters::Instances::Af::LocalDbase::LocalDbaseRloc::Params::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void LispState::LispRouters::Instances::Af::LocalDbase::LocalDbaseRloc::Params::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast-priority")
    {
        mcast_priority = value;
        mcast_priority.value_namespace = name_space;
        mcast_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast-weight")
    {
        mcast_weight = value;
        mcast_weight.value_namespace = name_space;
        mcast_weight.value_namespace_prefix = name_space_prefix;
    }
}

void LispState::LispRouters::Instances::Af::LocalDbase::LocalDbaseRloc::Params::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "mcast-priority")
    {
        mcast_priority.yfilter = yfilter;
    }
    if(value_path == "mcast-weight")
    {
        mcast_weight.yfilter = yfilter;
    }
}

bool LispState::LispRouters::Instances::Af::LocalDbase::LocalDbaseRloc::Params::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "weight" || name == "mcast-priority" || name == "mcast-weight")
        return true;
    return false;
}

LispState::LispRouters::Instances::Af::MsRegistrations::MsRegistrations()
    :
    afi{YType::enumeration, "afi"},
    prefix{YType::str, "prefix"},
    last_registration_source_port{YType::uint16, "last-registration-source-port"},
    creation_time{YType::str, "creation-time"},
    last_registration_time{YType::str, "last-registration-time"},
    site_name{YType::str, "site-name"},
    site_description{YType::str, "site-description"},
    is_registered{YType::boolean, "is-registered"},
    authentication_error{YType::uint64, "authentication-error"},
    rloc_mismatch_error{YType::uint64, "rloc-mismatch-error"}
        ,
    last_registration_source(std::make_shared<LispState::LispRouters::Instances::Af::MsRegistrations::LastRegistrationSource>())
    , etr_registrations(this, {"source_address", "source_port"})
{
    last_registration_source->parent = this;

    yang_name = "ms-registrations"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

LispState::LispRouters::Instances::Af::MsRegistrations::~MsRegistrations()
{
}

bool LispState::LispRouters::Instances::Af::MsRegistrations::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<etr_registrations.len(); index++)
    {
        if(etr_registrations[index]->has_data())
            return true;
    }
    return afi.is_set
	|| prefix.is_set
	|| last_registration_source_port.is_set
	|| creation_time.is_set
	|| last_registration_time.is_set
	|| site_name.is_set
	|| site_description.is_set
	|| is_registered.is_set
	|| authentication_error.is_set
	|| rloc_mismatch_error.is_set
	|| (last_registration_source !=  nullptr && last_registration_source->has_data());
}

bool LispState::LispRouters::Instances::Af::MsRegistrations::has_operation() const
{
    for (std::size_t index=0; index<etr_registrations.len(); index++)
    {
        if(etr_registrations[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(last_registration_source_port.yfilter)
	|| ydk::is_set(creation_time.yfilter)
	|| ydk::is_set(last_registration_time.yfilter)
	|| ydk::is_set(site_name.yfilter)
	|| ydk::is_set(site_description.yfilter)
	|| ydk::is_set(is_registered.yfilter)
	|| ydk::is_set(authentication_error.yfilter)
	|| ydk::is_set(rloc_mismatch_error.yfilter)
	|| (last_registration_source !=  nullptr && last_registration_source->has_operation());
}

std::string LispState::LispRouters::Instances::Af::MsRegistrations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ms-registrations";
    ADD_KEY_TOKEN(afi, "afi");
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LispState::LispRouters::Instances::Af::MsRegistrations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (last_registration_source_port.is_set || is_set(last_registration_source_port.yfilter)) leaf_name_data.push_back(last_registration_source_port.get_name_leafdata());
    if (creation_time.is_set || is_set(creation_time.yfilter)) leaf_name_data.push_back(creation_time.get_name_leafdata());
    if (last_registration_time.is_set || is_set(last_registration_time.yfilter)) leaf_name_data.push_back(last_registration_time.get_name_leafdata());
    if (site_name.is_set || is_set(site_name.yfilter)) leaf_name_data.push_back(site_name.get_name_leafdata());
    if (site_description.is_set || is_set(site_description.yfilter)) leaf_name_data.push_back(site_description.get_name_leafdata());
    if (is_registered.is_set || is_set(is_registered.yfilter)) leaf_name_data.push_back(is_registered.get_name_leafdata());
    if (authentication_error.is_set || is_set(authentication_error.yfilter)) leaf_name_data.push_back(authentication_error.get_name_leafdata());
    if (rloc_mismatch_error.is_set || is_set(rloc_mismatch_error.yfilter)) leaf_name_data.push_back(rloc_mismatch_error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LispState::LispRouters::Instances::Af::MsRegistrations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-registration-source")
    {
        if(last_registration_source == nullptr)
        {
            last_registration_source = std::make_shared<LispState::LispRouters::Instances::Af::MsRegistrations::LastRegistrationSource>();
        }
        return last_registration_source;
    }

    if(child_yang_name == "etr-registrations")
    {
        auto ent_ = std::make_shared<LispState::LispRouters::Instances::Af::MsRegistrations::EtrRegistrations>();
        ent_->parent = this;
        etr_registrations.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LispState::LispRouters::Instances::Af::MsRegistrations::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(last_registration_source != nullptr)
    {
        _children["last-registration-source"] = last_registration_source;
    }

    count_ = 0;
    for (auto ent_ : etr_registrations.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void LispState::LispRouters::Instances::Af::MsRegistrations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-registration-source-port")
    {
        last_registration_source_port = value;
        last_registration_source_port.value_namespace = name_space;
        last_registration_source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "creation-time")
    {
        creation_time = value;
        creation_time.value_namespace = name_space;
        creation_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-registration-time")
    {
        last_registration_time = value;
        last_registration_time.value_namespace = name_space;
        last_registration_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "site-name")
    {
        site_name = value;
        site_name.value_namespace = name_space;
        site_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "site-description")
    {
        site_description = value;
        site_description.value_namespace = name_space;
        site_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-registered")
    {
        is_registered = value;
        is_registered.value_namespace = name_space;
        is_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-error")
    {
        authentication_error = value;
        authentication_error.value_namespace = name_space;
        authentication_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rloc-mismatch-error")
    {
        rloc_mismatch_error = value;
        rloc_mismatch_error.value_namespace = name_space;
        rloc_mismatch_error.value_namespace_prefix = name_space_prefix;
    }
}

void LispState::LispRouters::Instances::Af::MsRegistrations::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "last-registration-source-port")
    {
        last_registration_source_port.yfilter = yfilter;
    }
    if(value_path == "creation-time")
    {
        creation_time.yfilter = yfilter;
    }
    if(value_path == "last-registration-time")
    {
        last_registration_time.yfilter = yfilter;
    }
    if(value_path == "site-name")
    {
        site_name.yfilter = yfilter;
    }
    if(value_path == "site-description")
    {
        site_description.yfilter = yfilter;
    }
    if(value_path == "is-registered")
    {
        is_registered.yfilter = yfilter;
    }
    if(value_path == "authentication-error")
    {
        authentication_error.yfilter = yfilter;
    }
    if(value_path == "rloc-mismatch-error")
    {
        rloc_mismatch_error.yfilter = yfilter;
    }
}

bool LispState::LispRouters::Instances::Af::MsRegistrations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-registration-source" || name == "etr-registrations" || name == "afi" || name == "prefix" || name == "last-registration-source-port" || name == "creation-time" || name == "last-registration-time" || name == "site-name" || name == "site-description" || name == "is-registered" || name == "authentication-error" || name == "rloc-mismatch-error")
        return true;
    return false;
}

LispState::LispRouters::Instances::Af::MsRegistrations::LastRegistrationSource::LastRegistrationSource()
    :
    afi{YType::enumeration, "afi"},
    address{YType::str, "address"}
{

    yang_name = "last-registration-source"; yang_parent_name = "ms-registrations"; is_top_level_class = false; has_list_ancestor = true; 
}

LispState::LispRouters::Instances::Af::MsRegistrations::LastRegistrationSource::~LastRegistrationSource()
{
}

bool LispState::LispRouters::Instances::Af::MsRegistrations::LastRegistrationSource::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| address.is_set;
}

bool LispState::LispRouters::Instances::Af::MsRegistrations::LastRegistrationSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string LispState::LispRouters::Instances::Af::MsRegistrations::LastRegistrationSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-registration-source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LispState::LispRouters::Instances::Af::MsRegistrations::LastRegistrationSource::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LispState::LispRouters::Instances::Af::MsRegistrations::LastRegistrationSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LispState::LispRouters::Instances::Af::MsRegistrations::LastRegistrationSource::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void LispState::LispRouters::Instances::Af::MsRegistrations::LastRegistrationSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void LispState::LispRouters::Instances::Af::MsRegistrations::LastRegistrationSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool LispState::LispRouters::Instances::Af::MsRegistrations::LastRegistrationSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "address")
        return true;
    return false;
}

LispState::LispRouters::Instances::Af::MsRegistrations::EtrRegistrations::EtrRegistrations()
    :
    source_address{YType::str, "source-address"},
    source_port{YType::uint16, "source-port"},
    last_registration_time{YType::str, "last-registration-time"},
    ttl{YType::uint32, "ttl"},
    proxy_reply{YType::boolean, "proxy-reply"},
    wants_map_notify{YType::boolean, "wants-map-notify"}
        ,
    ms_registration_rloc(this, {"afi", "address"})
{

    yang_name = "etr-registrations"; yang_parent_name = "ms-registrations"; is_top_level_class = false; has_list_ancestor = true; 
}

LispState::LispRouters::Instances::Af::MsRegistrations::EtrRegistrations::~EtrRegistrations()
{
}

bool LispState::LispRouters::Instances::Af::MsRegistrations::EtrRegistrations::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ms_registration_rloc.len(); index++)
    {
        if(ms_registration_rloc[index]->has_data())
            return true;
    }
    return source_address.is_set
	|| source_port.is_set
	|| last_registration_time.is_set
	|| ttl.is_set
	|| proxy_reply.is_set
	|| wants_map_notify.is_set;
}

bool LispState::LispRouters::Instances::Af::MsRegistrations::EtrRegistrations::has_operation() const
{
    for (std::size_t index=0; index<ms_registration_rloc.len(); index++)
    {
        if(ms_registration_rloc[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_port.yfilter)
	|| ydk::is_set(last_registration_time.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| ydk::is_set(proxy_reply.yfilter)
	|| ydk::is_set(wants_map_notify.yfilter);
}

std::string LispState::LispRouters::Instances::Af::MsRegistrations::EtrRegistrations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr-registrations";
    ADD_KEY_TOKEN(source_address, "source-address");
    ADD_KEY_TOKEN(source_port, "source-port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LispState::LispRouters::Instances::Af::MsRegistrations::EtrRegistrations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.yfilter)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (last_registration_time.is_set || is_set(last_registration_time.yfilter)) leaf_name_data.push_back(last_registration_time.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (proxy_reply.is_set || is_set(proxy_reply.yfilter)) leaf_name_data.push_back(proxy_reply.get_name_leafdata());
    if (wants_map_notify.is_set || is_set(wants_map_notify.yfilter)) leaf_name_data.push_back(wants_map_notify.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LispState::LispRouters::Instances::Af::MsRegistrations::EtrRegistrations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ms-registration-rloc")
    {
        auto ent_ = std::make_shared<LispState::LispRouters::Instances::Af::MsRegistrations::EtrRegistrations::MsRegistrationRloc>();
        ent_->parent = this;
        ms_registration_rloc.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LispState::LispRouters::Instances::Af::MsRegistrations::EtrRegistrations::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ms_registration_rloc.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void LispState::LispRouters::Instances::Af::MsRegistrations::EtrRegistrations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-port")
    {
        source_port = value;
        source_port.value_namespace = name_space;
        source_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-registration-time")
    {
        last_registration_time = value;
        last_registration_time.value_namespace = name_space;
        last_registration_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-reply")
    {
        proxy_reply = value;
        proxy_reply.value_namespace = name_space;
        proxy_reply.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wants-map-notify")
    {
        wants_map_notify = value;
        wants_map_notify.value_namespace = name_space;
        wants_map_notify.value_namespace_prefix = name_space_prefix;
    }
}

void LispState::LispRouters::Instances::Af::MsRegistrations::EtrRegistrations::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-port")
    {
        source_port.yfilter = yfilter;
    }
    if(value_path == "last-registration-time")
    {
        last_registration_time.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
    if(value_path == "proxy-reply")
    {
        proxy_reply.yfilter = yfilter;
    }
    if(value_path == "wants-map-notify")
    {
        wants_map_notify.yfilter = yfilter;
    }
}

bool LispState::LispRouters::Instances::Af::MsRegistrations::EtrRegistrations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ms-registration-rloc" || name == "source-address" || name == "source-port" || name == "last-registration-time" || name == "ttl" || name == "proxy-reply" || name == "wants-map-notify")
        return true;
    return false;
}

LispState::LispRouters::Instances::Af::MsRegistrations::EtrRegistrations::MsRegistrationRloc::MsRegistrationRloc()
    :
    afi{YType::enumeration, "afi"},
    address{YType::str, "address"},
    state{YType::enumeration, "state"},
    is_local{YType::boolean, "is-local"}
        ,
    params(std::make_shared<LispState::LispRouters::Instances::Af::MsRegistrations::EtrRegistrations::MsRegistrationRloc::Params>())
{
    params->parent = this;

    yang_name = "ms-registration-rloc"; yang_parent_name = "etr-registrations"; is_top_level_class = false; has_list_ancestor = true; 
}

LispState::LispRouters::Instances::Af::MsRegistrations::EtrRegistrations::MsRegistrationRloc::~MsRegistrationRloc()
{
}

bool LispState::LispRouters::Instances::Af::MsRegistrations::EtrRegistrations::MsRegistrationRloc::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| address.is_set
	|| state.is_set
	|| is_local.is_set
	|| (params !=  nullptr && params->has_data());
}

bool LispState::LispRouters::Instances::Af::MsRegistrations::EtrRegistrations::MsRegistrationRloc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(is_local.yfilter)
	|| (params !=  nullptr && params->has_operation());
}

std::string LispState::LispRouters::Instances::Af::MsRegistrations::EtrRegistrations::MsRegistrationRloc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ms-registration-rloc";
    ADD_KEY_TOKEN(afi, "afi");
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LispState::LispRouters::Instances::Af::MsRegistrations::EtrRegistrations::MsRegistrationRloc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (is_local.is_set || is_set(is_local.yfilter)) leaf_name_data.push_back(is_local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LispState::LispRouters::Instances::Af::MsRegistrations::EtrRegistrations::MsRegistrationRloc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "params")
    {
        if(params == nullptr)
        {
            params = std::make_shared<LispState::LispRouters::Instances::Af::MsRegistrations::EtrRegistrations::MsRegistrationRloc::Params>();
        }
        return params;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LispState::LispRouters::Instances::Af::MsRegistrations::EtrRegistrations::MsRegistrationRloc::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(params != nullptr)
    {
        _children["params"] = params;
    }

    return _children;
}

void LispState::LispRouters::Instances::Af::MsRegistrations::EtrRegistrations::MsRegistrationRloc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local")
    {
        is_local = value;
        is_local.value_namespace = name_space;
        is_local.value_namespace_prefix = name_space_prefix;
    }
}

void LispState::LispRouters::Instances::Af::MsRegistrations::EtrRegistrations::MsRegistrationRloc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "is-local")
    {
        is_local.yfilter = yfilter;
    }
}

bool LispState::LispRouters::Instances::Af::MsRegistrations::EtrRegistrations::MsRegistrationRloc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "params" || name == "afi" || name == "address" || name == "state" || name == "is-local")
        return true;
    return false;
}

LispState::LispRouters::Instances::Af::MsRegistrations::EtrRegistrations::MsRegistrationRloc::Params::Params()
    :
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"},
    mcast_priority{YType::uint8, "mcast-priority"},
    mcast_weight{YType::uint8, "mcast-weight"}
{

    yang_name = "params"; yang_parent_name = "ms-registration-rloc"; is_top_level_class = false; has_list_ancestor = true; 
}

LispState::LispRouters::Instances::Af::MsRegistrations::EtrRegistrations::MsRegistrationRloc::Params::~Params()
{
}

bool LispState::LispRouters::Instances::Af::MsRegistrations::EtrRegistrations::MsRegistrationRloc::Params::has_data() const
{
    if (is_presence_container) return true;
    return priority.is_set
	|| weight.is_set
	|| mcast_priority.is_set
	|| mcast_weight.is_set;
}

bool LispState::LispRouters::Instances::Af::MsRegistrations::EtrRegistrations::MsRegistrationRloc::Params::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(mcast_priority.yfilter)
	|| ydk::is_set(mcast_weight.yfilter);
}

std::string LispState::LispRouters::Instances::Af::MsRegistrations::EtrRegistrations::MsRegistrationRloc::Params::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "params";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LispState::LispRouters::Instances::Af::MsRegistrations::EtrRegistrations::MsRegistrationRloc::Params::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (mcast_priority.is_set || is_set(mcast_priority.yfilter)) leaf_name_data.push_back(mcast_priority.get_name_leafdata());
    if (mcast_weight.is_set || is_set(mcast_weight.yfilter)) leaf_name_data.push_back(mcast_weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LispState::LispRouters::Instances::Af::MsRegistrations::EtrRegistrations::MsRegistrationRloc::Params::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LispState::LispRouters::Instances::Af::MsRegistrations::EtrRegistrations::MsRegistrationRloc::Params::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void LispState::LispRouters::Instances::Af::MsRegistrations::EtrRegistrations::MsRegistrationRloc::Params::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast-priority")
    {
        mcast_priority = value;
        mcast_priority.value_namespace = name_space;
        mcast_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast-weight")
    {
        mcast_weight = value;
        mcast_weight.value_namespace = name_space;
        mcast_weight.value_namespace_prefix = name_space_prefix;
    }
}

void LispState::LispRouters::Instances::Af::MsRegistrations::EtrRegistrations::MsRegistrationRloc::Params::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "mcast-priority")
    {
        mcast_priority.yfilter = yfilter;
    }
    if(value_path == "mcast-weight")
    {
        mcast_weight.yfilter = yfilter;
    }
}

bool LispState::LispRouters::Instances::Af::MsRegistrations::EtrRegistrations::MsRegistrationRloc::Params::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "weight" || name == "mcast-priority" || name == "mcast-weight")
        return true;
    return false;
}

LispState::LispRouters::Instances::Af::MapServers::MapServers()
    :
    afi{YType::enumeration, "afi"},
    address{YType::str, "address"},
    state{YType::enumeration, "state"}
{

    yang_name = "map-servers"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

LispState::LispRouters::Instances::Af::MapServers::~MapServers()
{
}

bool LispState::LispRouters::Instances::Af::MapServers::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| address.is_set
	|| state.is_set;
}

bool LispState::LispRouters::Instances::Af::MapServers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(state.yfilter);
}

std::string LispState::LispRouters::Instances::Af::MapServers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-servers";
    ADD_KEY_TOKEN(afi, "afi");
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LispState::LispRouters::Instances::Af::MapServers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LispState::LispRouters::Instances::Af::MapServers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LispState::LispRouters::Instances::Af::MapServers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void LispState::LispRouters::Instances::Af::MapServers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void LispState::LispRouters::Instances::Af::MapServers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool LispState::LispRouters::Instances::Af::MapServers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "address" || name == "state")
        return true;
    return false;
}

LispState::LispRouters::Instances::Af::MapResolvers::MapResolvers()
    :
    afi{YType::enumeration, "afi"},
    address{YType::str, "address"},
    state{YType::enumeration, "state"}
{

    yang_name = "map-resolvers"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

LispState::LispRouters::Instances::Af::MapResolvers::~MapResolvers()
{
}

bool LispState::LispRouters::Instances::Af::MapResolvers::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| address.is_set
	|| state.is_set;
}

bool LispState::LispRouters::Instances::Af::MapResolvers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(state.yfilter);
}

std::string LispState::LispRouters::Instances::Af::MapResolvers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-resolvers";
    ADD_KEY_TOKEN(afi, "afi");
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LispState::LispRouters::Instances::Af::MapResolvers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LispState::LispRouters::Instances::Af::MapResolvers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LispState::LispRouters::Instances::Af::MapResolvers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void LispState::LispRouters::Instances::Af::MapResolvers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void LispState::LispRouters::Instances::Af::MapResolvers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool LispState::LispRouters::Instances::Af::MapResolvers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "address" || name == "state")
        return true;
    return false;
}

LispState::LispRouters::Instances::Af::ProxyEtrs::ProxyEtrs()
    :
    afi{YType::enumeration, "afi"},
    address{YType::str, "address"},
    state{YType::enumeration, "state"}
        ,
    params(std::make_shared<LispState::LispRouters::Instances::Af::ProxyEtrs::Params>())
{
    params->parent = this;

    yang_name = "proxy-etrs"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

LispState::LispRouters::Instances::Af::ProxyEtrs::~ProxyEtrs()
{
}

bool LispState::LispRouters::Instances::Af::ProxyEtrs::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| address.is_set
	|| state.is_set
	|| (params !=  nullptr && params->has_data());
}

bool LispState::LispRouters::Instances::Af::ProxyEtrs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(state.yfilter)
	|| (params !=  nullptr && params->has_operation());
}

std::string LispState::LispRouters::Instances::Af::ProxyEtrs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proxy-etrs";
    ADD_KEY_TOKEN(afi, "afi");
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LispState::LispRouters::Instances::Af::ProxyEtrs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LispState::LispRouters::Instances::Af::ProxyEtrs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "params")
    {
        if(params == nullptr)
        {
            params = std::make_shared<LispState::LispRouters::Instances::Af::ProxyEtrs::Params>();
        }
        return params;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LispState::LispRouters::Instances::Af::ProxyEtrs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(params != nullptr)
    {
        _children["params"] = params;
    }

    return _children;
}

void LispState::LispRouters::Instances::Af::ProxyEtrs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void LispState::LispRouters::Instances::Af::ProxyEtrs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool LispState::LispRouters::Instances::Af::ProxyEtrs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "params" || name == "afi" || name == "address" || name == "state")
        return true;
    return false;
}

LispState::LispRouters::Instances::Af::ProxyEtrs::Params::Params()
    :
    priority{YType::uint8, "priority"},
    weight{YType::uint8, "weight"},
    mcast_priority{YType::uint8, "mcast-priority"},
    mcast_weight{YType::uint8, "mcast-weight"}
{

    yang_name = "params"; yang_parent_name = "proxy-etrs"; is_top_level_class = false; has_list_ancestor = true; 
}

LispState::LispRouters::Instances::Af::ProxyEtrs::Params::~Params()
{
}

bool LispState::LispRouters::Instances::Af::ProxyEtrs::Params::has_data() const
{
    if (is_presence_container) return true;
    return priority.is_set
	|| weight.is_set
	|| mcast_priority.is_set
	|| mcast_weight.is_set;
}

bool LispState::LispRouters::Instances::Af::ProxyEtrs::Params::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(mcast_priority.yfilter)
	|| ydk::is_set(mcast_weight.yfilter);
}

std::string LispState::LispRouters::Instances::Af::ProxyEtrs::Params::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "params";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LispState::LispRouters::Instances::Af::ProxyEtrs::Params::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (mcast_priority.is_set || is_set(mcast_priority.yfilter)) leaf_name_data.push_back(mcast_priority.get_name_leafdata());
    if (mcast_weight.is_set || is_set(mcast_weight.yfilter)) leaf_name_data.push_back(mcast_weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LispState::LispRouters::Instances::Af::ProxyEtrs::Params::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LispState::LispRouters::Instances::Af::ProxyEtrs::Params::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void LispState::LispRouters::Instances::Af::ProxyEtrs::Params::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast-priority")
    {
        mcast_priority = value;
        mcast_priority.value_namespace = name_space;
        mcast_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast-weight")
    {
        mcast_weight = value;
        mcast_weight.value_namespace = name_space;
        mcast_weight.value_namespace_prefix = name_space_prefix;
    }
}

void LispState::LispRouters::Instances::Af::ProxyEtrs::Params::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "mcast-priority")
    {
        mcast_priority.yfilter = yfilter;
    }
    if(value_path == "mcast-weight")
    {
        mcast_weight.yfilter = yfilter;
    }
}

bool LispState::LispRouters::Instances::Af::ProxyEtrs::Params::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "weight" || name == "mcast-priority" || name == "mcast-weight")
        return true;
    return false;
}

LispState::LispRouters::Instances::MsEidMembership::MsEidMembership()
    :
    rloc{YType::str, "rloc"},
    member_since{YType::str, "member-since"},
    is_gleaned{YType::boolean, "is-gleaned"},
    is_configured{YType::boolean, "is-configured"}
{

    yang_name = "ms-eid-membership"; yang_parent_name = "instances"; is_top_level_class = false; has_list_ancestor = true; 
}

LispState::LispRouters::Instances::MsEidMembership::~MsEidMembership()
{
}

bool LispState::LispRouters::Instances::MsEidMembership::has_data() const
{
    if (is_presence_container) return true;
    return rloc.is_set
	|| member_since.is_set
	|| is_gleaned.is_set
	|| is_configured.is_set;
}

bool LispState::LispRouters::Instances::MsEidMembership::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rloc.yfilter)
	|| ydk::is_set(member_since.yfilter)
	|| ydk::is_set(is_gleaned.yfilter)
	|| ydk::is_set(is_configured.yfilter);
}

std::string LispState::LispRouters::Instances::MsEidMembership::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ms-eid-membership";
    ADD_KEY_TOKEN(rloc, "rloc");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LispState::LispRouters::Instances::MsEidMembership::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rloc.is_set || is_set(rloc.yfilter)) leaf_name_data.push_back(rloc.get_name_leafdata());
    if (member_since.is_set || is_set(member_since.yfilter)) leaf_name_data.push_back(member_since.get_name_leafdata());
    if (is_gleaned.is_set || is_set(is_gleaned.yfilter)) leaf_name_data.push_back(is_gleaned.get_name_leafdata());
    if (is_configured.is_set || is_set(is_configured.yfilter)) leaf_name_data.push_back(is_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LispState::LispRouters::Instances::MsEidMembership::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LispState::LispRouters::Instances::MsEidMembership::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void LispState::LispRouters::Instances::MsEidMembership::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rloc")
    {
        rloc = value;
        rloc.value_namespace = name_space;
        rloc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-since")
    {
        member_since = value;
        member_since.value_namespace = name_space;
        member_since.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-gleaned")
    {
        is_gleaned = value;
        is_gleaned.value_namespace = name_space;
        is_gleaned.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-configured")
    {
        is_configured = value;
        is_configured.value_namespace = name_space;
        is_configured.value_namespace_prefix = name_space_prefix;
    }
}

void LispState::LispRouters::Instances::MsEidMembership::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rloc")
    {
        rloc.yfilter = yfilter;
    }
    if(value_path == "member-since")
    {
        member_since.yfilter = yfilter;
    }
    if(value_path == "is-gleaned")
    {
        is_gleaned.yfilter = yfilter;
    }
    if(value_path == "is-configured")
    {
        is_configured.yfilter = yfilter;
    }
}

bool LispState::LispRouters::Instances::MsEidMembership::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rloc" || name == "member-since" || name == "is-gleaned" || name == "is-configured")
        return true;
    return false;
}

LispState::LispRouters::Instances::EtrEidMembership::EtrEidMembership()
    :
    rloc{YType::str, "rloc"},
    member_since{YType::str, "member-since"},
    is_learned_from_ms{YType::boolean, "is-learned-from-ms"},
    is_configured{YType::boolean, "is-configured"}
{

    yang_name = "etr-eid-membership"; yang_parent_name = "instances"; is_top_level_class = false; has_list_ancestor = true; 
}

LispState::LispRouters::Instances::EtrEidMembership::~EtrEidMembership()
{
}

bool LispState::LispRouters::Instances::EtrEidMembership::has_data() const
{
    if (is_presence_container) return true;
    return rloc.is_set
	|| member_since.is_set
	|| is_learned_from_ms.is_set
	|| is_configured.is_set;
}

bool LispState::LispRouters::Instances::EtrEidMembership::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rloc.yfilter)
	|| ydk::is_set(member_since.yfilter)
	|| ydk::is_set(is_learned_from_ms.yfilter)
	|| ydk::is_set(is_configured.yfilter);
}

std::string LispState::LispRouters::Instances::EtrEidMembership::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "etr-eid-membership";
    ADD_KEY_TOKEN(rloc, "rloc");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LispState::LispRouters::Instances::EtrEidMembership::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rloc.is_set || is_set(rloc.yfilter)) leaf_name_data.push_back(rloc.get_name_leafdata());
    if (member_since.is_set || is_set(member_since.yfilter)) leaf_name_data.push_back(member_since.get_name_leafdata());
    if (is_learned_from_ms.is_set || is_set(is_learned_from_ms.yfilter)) leaf_name_data.push_back(is_learned_from_ms.get_name_leafdata());
    if (is_configured.is_set || is_set(is_configured.yfilter)) leaf_name_data.push_back(is_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LispState::LispRouters::Instances::EtrEidMembership::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LispState::LispRouters::Instances::EtrEidMembership::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void LispState::LispRouters::Instances::EtrEidMembership::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rloc")
    {
        rloc = value;
        rloc.value_namespace = name_space;
        rloc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "member-since")
    {
        member_since = value;
        member_since.value_namespace = name_space;
        member_since.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-learned-from-ms")
    {
        is_learned_from_ms = value;
        is_learned_from_ms.value_namespace = name_space;
        is_learned_from_ms.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-configured")
    {
        is_configured = value;
        is_configured.value_namespace = name_space;
        is_configured.value_namespace_prefix = name_space_prefix;
    }
}

void LispState::LispRouters::Instances::EtrEidMembership::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rloc")
    {
        rloc.yfilter = yfilter;
    }
    if(value_path == "member-since")
    {
        member_since.yfilter = yfilter;
    }
    if(value_path == "is-learned-from-ms")
    {
        is_learned_from_ms.yfilter = yfilter;
    }
    if(value_path == "is-configured")
    {
        is_configured.yfilter = yfilter;
    }
}

bool LispState::LispRouters::Instances::EtrEidMembership::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rloc" || name == "member-since" || name == "is-learned-from-ms" || name == "is-configured")
        return true;
    return false;
}

LispState::LispRouters::Sessions::Sessions()
    :
    local_address{YType::str, "local-address"},
    peer_address{YType::str, "peer-address"},
    local_port{YType::uint16, "local-port"},
    peer_port{YType::uint16, "peer-port"},
    state{YType::enumeration, "state"},
    last_state_change_time{YType::str, "last-state-change-time"},
    is_role_active{YType::boolean, "is-role-active"},
    is_routable{YType::boolean, "is-routable"},
    messages_in{YType::uint64, "messages-in"},
    messages_out{YType::uint64, "messages-out"},
    bytes_in{YType::uint64, "bytes-in"},
    bytes_out{YType::uint64, "bytes-out"}
{

    yang_name = "sessions"; yang_parent_name = "lisp-routers"; is_top_level_class = false; has_list_ancestor = true; 
}

LispState::LispRouters::Sessions::~Sessions()
{
}

bool LispState::LispRouters::Sessions::has_data() const
{
    if (is_presence_container) return true;
    return local_address.is_set
	|| peer_address.is_set
	|| local_port.is_set
	|| peer_port.is_set
	|| state.is_set
	|| last_state_change_time.is_set
	|| is_role_active.is_set
	|| is_routable.is_set
	|| messages_in.is_set
	|| messages_out.is_set
	|| bytes_in.is_set
	|| bytes_out.is_set;
}

bool LispState::LispRouters::Sessions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(peer_address.yfilter)
	|| ydk::is_set(local_port.yfilter)
	|| ydk::is_set(peer_port.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(last_state_change_time.yfilter)
	|| ydk::is_set(is_role_active.yfilter)
	|| ydk::is_set(is_routable.yfilter)
	|| ydk::is_set(messages_in.yfilter)
	|| ydk::is_set(messages_out.yfilter)
	|| ydk::is_set(bytes_in.yfilter)
	|| ydk::is_set(bytes_out.yfilter);
}

std::string LispState::LispRouters::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";
    ADD_KEY_TOKEN(local_address, "local-address");
    ADD_KEY_TOKEN(peer_address, "peer-address");
    ADD_KEY_TOKEN(local_port, "local-port");
    ADD_KEY_TOKEN(peer_port, "peer-port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LispState::LispRouters::Sessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (peer_address.is_set || is_set(peer_address.yfilter)) leaf_name_data.push_back(peer_address.get_name_leafdata());
    if (local_port.is_set || is_set(local_port.yfilter)) leaf_name_data.push_back(local_port.get_name_leafdata());
    if (peer_port.is_set || is_set(peer_port.yfilter)) leaf_name_data.push_back(peer_port.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (last_state_change_time.is_set || is_set(last_state_change_time.yfilter)) leaf_name_data.push_back(last_state_change_time.get_name_leafdata());
    if (is_role_active.is_set || is_set(is_role_active.yfilter)) leaf_name_data.push_back(is_role_active.get_name_leafdata());
    if (is_routable.is_set || is_set(is_routable.yfilter)) leaf_name_data.push_back(is_routable.get_name_leafdata());
    if (messages_in.is_set || is_set(messages_in.yfilter)) leaf_name_data.push_back(messages_in.get_name_leafdata());
    if (messages_out.is_set || is_set(messages_out.yfilter)) leaf_name_data.push_back(messages_out.get_name_leafdata());
    if (bytes_in.is_set || is_set(bytes_in.yfilter)) leaf_name_data.push_back(bytes_in.get_name_leafdata());
    if (bytes_out.is_set || is_set(bytes_out.yfilter)) leaf_name_data.push_back(bytes_out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LispState::LispRouters::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LispState::LispRouters::Sessions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void LispState::LispRouters::Sessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-address")
    {
        peer_address = value;
        peer_address.value_namespace = name_space;
        peer_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-port")
    {
        local_port = value;
        local_port.value_namespace = name_space;
        local_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-port")
    {
        peer_port = value;
        peer_port.value_namespace = name_space;
        peer_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-state-change-time")
    {
        last_state_change_time = value;
        last_state_change_time.value_namespace = name_space;
        last_state_change_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-role-active")
    {
        is_role_active = value;
        is_role_active.value_namespace = name_space;
        is_role_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-routable")
    {
        is_routable = value;
        is_routable.value_namespace = name_space;
        is_routable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "messages-in")
    {
        messages_in = value;
        messages_in.value_namespace = name_space;
        messages_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "messages-out")
    {
        messages_out = value;
        messages_out.value_namespace = name_space;
        messages_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes-in")
    {
        bytes_in = value;
        bytes_in.value_namespace = name_space;
        bytes_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes-out")
    {
        bytes_out = value;
        bytes_out.value_namespace = name_space;
        bytes_out.value_namespace_prefix = name_space_prefix;
    }
}

void LispState::LispRouters::Sessions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "peer-address")
    {
        peer_address.yfilter = yfilter;
    }
    if(value_path == "local-port")
    {
        local_port.yfilter = yfilter;
    }
    if(value_path == "peer-port")
    {
        peer_port.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "last-state-change-time")
    {
        last_state_change_time.yfilter = yfilter;
    }
    if(value_path == "is-role-active")
    {
        is_role_active.yfilter = yfilter;
    }
    if(value_path == "is-routable")
    {
        is_routable.yfilter = yfilter;
    }
    if(value_path == "messages-in")
    {
        messages_in.yfilter = yfilter;
    }
    if(value_path == "messages-out")
    {
        messages_out.yfilter = yfilter;
    }
    if(value_path == "bytes-in")
    {
        bytes_in.yfilter = yfilter;
    }
    if(value_path == "bytes-out")
    {
        bytes_out.yfilter = yfilter;
    }
}

bool LispState::LispRouters::Sessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-address" || name == "peer-address" || name == "local-port" || name == "peer-port" || name == "state" || name == "last-state-change-time" || name == "is-role-active" || name == "is-routable" || name == "messages-in" || name == "messages-out" || name == "bytes-in" || name == "bytes-out")
        return true;
    return false;
}

LispState::LispRouters::LocalRlocs::LocalRlocs()
    :
    afi{YType::enumeration, "afi"},
    address{YType::str, "address"},
    state{YType::enumeration, "state"},
    is_local{YType::boolean, "is-local"}
{

    yang_name = "local-rlocs"; yang_parent_name = "lisp-routers"; is_top_level_class = false; has_list_ancestor = true; 
}

LispState::LispRouters::LocalRlocs::~LocalRlocs()
{
}

bool LispState::LispRouters::LocalRlocs::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| address.is_set
	|| state.is_set
	|| is_local.is_set;
}

bool LispState::LispRouters::LocalRlocs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(is_local.yfilter);
}

std::string LispState::LispRouters::LocalRlocs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-rlocs";
    ADD_KEY_TOKEN(afi, "afi");
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LispState::LispRouters::LocalRlocs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (is_local.is_set || is_set(is_local.yfilter)) leaf_name_data.push_back(is_local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LispState::LispRouters::LocalRlocs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LispState::LispRouters::LocalRlocs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void LispState::LispRouters::LocalRlocs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local")
    {
        is_local = value;
        is_local.value_namespace = name_space;
        is_local.value_namespace_prefix = name_space_prefix;
    }
}

void LispState::LispRouters::LocalRlocs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "is-local")
    {
        is_local.yfilter = yfilter;
    }
}

bool LispState::LispRouters::LocalRlocs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "address" || name == "state" || name == "is-local")
        return true;
    return false;
}

LispState::LispRouters::PrefixLists::PrefixLists()
    :
    name{YType::str, "name"},
    count{YType::uint64, "count"}
        ,
    prefix_list_entry(this, {"afi", "prefix"})
{

    yang_name = "prefix-lists"; yang_parent_name = "lisp-routers"; is_top_level_class = false; has_list_ancestor = true; 
}

LispState::LispRouters::PrefixLists::~PrefixLists()
{
}

bool LispState::LispRouters::PrefixLists::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefix_list_entry.len(); index++)
    {
        if(prefix_list_entry[index]->has_data())
            return true;
    }
    return name.is_set
	|| count.is_set;
}

bool LispState::LispRouters::PrefixLists::has_operation() const
{
    for (std::size_t index=0; index<prefix_list_entry.len(); index++)
    {
        if(prefix_list_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(count.yfilter);
}

std::string LispState::LispRouters::PrefixLists::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-lists";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LispState::LispRouters::PrefixLists::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (count.is_set || is_set(count.yfilter)) leaf_name_data.push_back(count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LispState::LispRouters::PrefixLists::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-list-entry")
    {
        auto ent_ = std::make_shared<LispState::LispRouters::PrefixLists::PrefixListEntry>();
        ent_->parent = this;
        prefix_list_entry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LispState::LispRouters::PrefixLists::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prefix_list_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void LispState::LispRouters::PrefixLists::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count")
    {
        count = value;
        count.value_namespace = name_space;
        count.value_namespace_prefix = name_space_prefix;
    }
}

void LispState::LispRouters::PrefixLists::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "count")
    {
        count.yfilter = yfilter;
    }
}

bool LispState::LispRouters::PrefixLists::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list-entry" || name == "name" || name == "count")
        return true;
    return false;
}

LispState::LispRouters::PrefixLists::PrefixListEntry::PrefixListEntry()
    :
    afi{YType::enumeration, "afi"},
    prefix{YType::str, "prefix"},
    source_has_static{YType::boolean, "source-has-static"},
    source_has_rib{YType::boolean, "source-has-rib"},
    source_has_site_reg{YType::boolean, "source-has-site-reg"}
{

    yang_name = "prefix-list-entry"; yang_parent_name = "prefix-lists"; is_top_level_class = false; has_list_ancestor = true; 
}

LispState::LispRouters::PrefixLists::PrefixListEntry::~PrefixListEntry()
{
}

bool LispState::LispRouters::PrefixLists::PrefixListEntry::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| prefix.is_set
	|| source_has_static.is_set
	|| source_has_rib.is_set
	|| source_has_site_reg.is_set;
}

bool LispState::LispRouters::PrefixLists::PrefixListEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(source_has_static.yfilter)
	|| ydk::is_set(source_has_rib.yfilter)
	|| ydk::is_set(source_has_site_reg.yfilter);
}

std::string LispState::LispRouters::PrefixLists::PrefixListEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list-entry";
    ADD_KEY_TOKEN(afi, "afi");
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > LispState::LispRouters::PrefixLists::PrefixListEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (source_has_static.is_set || is_set(source_has_static.yfilter)) leaf_name_data.push_back(source_has_static.get_name_leafdata());
    if (source_has_rib.is_set || is_set(source_has_rib.yfilter)) leaf_name_data.push_back(source_has_rib.get_name_leafdata());
    if (source_has_site_reg.is_set || is_set(source_has_site_reg.yfilter)) leaf_name_data.push_back(source_has_site_reg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> LispState::LispRouters::PrefixLists::PrefixListEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> LispState::LispRouters::PrefixLists::PrefixListEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void LispState::LispRouters::PrefixLists::PrefixListEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-has-static")
    {
        source_has_static = value;
        source_has_static.value_namespace = name_space;
        source_has_static.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-has-rib")
    {
        source_has_rib = value;
        source_has_rib.value_namespace = name_space;
        source_has_rib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-has-site-reg")
    {
        source_has_site_reg = value;
        source_has_site_reg.value_namespace = name_space;
        source_has_site_reg.value_namespace_prefix = name_space_prefix;
    }
}

void LispState::LispRouters::PrefixLists::PrefixListEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "source-has-static")
    {
        source_has_static.yfilter = yfilter;
    }
    if(value_path == "source-has-rib")
    {
        source_has_rib.yfilter = yfilter;
    }
    if(value_path == "source-has-site-reg")
    {
        source_has_site_reg.yfilter = yfilter;
    }
}

bool LispState::LispRouters::PrefixLists::PrefixListEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "prefix" || name == "source-has-static" || name == "source-has-rib" || name == "source-has-site-reg")
        return true;
    return false;
}

const Enum::YLeaf LispAddressFamilyType::ipv4_afi {0, "ipv4-afi"};
const Enum::YLeaf LispAddressFamilyType::ipv6_afi {1, "ipv6-afi"};
const Enum::YLeaf LispAddressFamilyType::mac_afi {2, "mac-afi"};

const Enum::YLeaf LispRlocStateType::lisp_rloc_state_down {0, "lisp-rloc-state-down"};
const Enum::YLeaf LispRlocStateType::lisp_rloc_state_up {1, "lisp-rloc-state-up"};

const Enum::YLeaf LispMapReplyActionType::no_action {0, "no-action"};
const Enum::YLeaf LispMapReplyActionType::natively_forward {1, "natively-forward"};
const Enum::YLeaf LispMapReplyActionType::send_map_request {2, "send-map-request"};
const Enum::YLeaf LispMapReplyActionType::drop {3, "drop"};

const Enum::YLeaf LispIaftypeType::iaf_ipv4 {0, "iaf-ipv4"};
const Enum::YLeaf LispIaftypeType::iaf_ipv6 {1, "iaf-ipv6"};
const Enum::YLeaf LispIaftypeType::iaf_mac {2, "iaf-mac"};
const Enum::YLeaf LispIaftypeType::iaf_ar {3, "iaf-ar"};
const Enum::YLeaf LispIaftypeType::iaf_rar {4, "iaf-rar"};

const Enum::YLeaf LispSessionStateType::lisp_session_state_incomplete {0, "lisp-session-state-incomplete"};
const Enum::YLeaf LispSessionStateType::lisp_session_state_listening {1, "lisp-session-state-listening"};
const Enum::YLeaf LispSessionStateType::lisp_session_state_down {2, "lisp-session-state-down"};
const Enum::YLeaf LispSessionStateType::lisp_session_state_up {3, "lisp-session-state-up"};


}
}

