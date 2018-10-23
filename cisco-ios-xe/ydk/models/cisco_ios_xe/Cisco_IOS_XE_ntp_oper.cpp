
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_ntp_oper.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_ntp_oper {

NtpOperData::NtpOperData()
    :
    ntp_status_info(nullptr) // presence node
{

    yang_name = "ntp-oper-data"; yang_parent_name = "Cisco-IOS-XE-ntp-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

NtpOperData::~NtpOperData()
{
}

bool NtpOperData::has_data() const
{
    if (is_presence_container) return true;
    return (ntp_status_info !=  nullptr && ntp_status_info->has_data());
}

bool NtpOperData::has_operation() const
{
    return is_set(yfilter)
	|| (ntp_status_info !=  nullptr && ntp_status_info->has_operation());
}

std::string NtpOperData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ntp-oper:ntp-oper-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NtpOperData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NtpOperData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ntp-status-info")
    {
        if(ntp_status_info == nullptr)
        {
            ntp_status_info = std::make_shared<NtpOperData::NtpStatusInfo>();
        }
        return ntp_status_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NtpOperData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ntp_status_info != nullptr)
    {
        _children["ntp-status-info"] = ntp_status_info;
    }

    return _children;
}

void NtpOperData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void NtpOperData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> NtpOperData::clone_ptr() const
{
    return std::make_shared<NtpOperData>();
}

std::string NtpOperData::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string NtpOperData::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function NtpOperData::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> NtpOperData::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool NtpOperData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ntp-status-info")
        return true;
    return false;
}

NtpOperData::NtpStatusInfo::NtpStatusInfo()
    :
    reftime{YType::str, "reftime"},
    sys_poll{YType::uint8, "sys-poll"},
    stratum{YType::uint32, "stratum"},
    root_delay{YType::str, "root-delay"},
    root_disp{YType::str, "root-disp"},
    offset{YType::str, "offset"},
    freq_drift_ppm{YType::str, "freq-drift-ppm"}
        ,
    refid(std::make_shared<NtpOperData::NtpStatusInfo::Refid>())
    , ntp_associations(this, {"assoc_id"})
{
    refid->parent = this;

    yang_name = "ntp-status-info"; yang_parent_name = "ntp-oper-data"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

NtpOperData::NtpStatusInfo::~NtpStatusInfo()
{
}

bool NtpOperData::NtpStatusInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ntp_associations.len(); index++)
    {
        if(ntp_associations[index]->has_data())
            return true;
    }
    return reftime.is_set
	|| sys_poll.is_set
	|| stratum.is_set
	|| root_delay.is_set
	|| root_disp.is_set
	|| offset.is_set
	|| freq_drift_ppm.is_set
	|| (refid !=  nullptr && refid->has_data());
}

bool NtpOperData::NtpStatusInfo::has_operation() const
{
    for (std::size_t index=0; index<ntp_associations.len(); index++)
    {
        if(ntp_associations[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(reftime.yfilter)
	|| ydk::is_set(sys_poll.yfilter)
	|| ydk::is_set(stratum.yfilter)
	|| ydk::is_set(root_delay.yfilter)
	|| ydk::is_set(root_disp.yfilter)
	|| ydk::is_set(offset.yfilter)
	|| ydk::is_set(freq_drift_ppm.yfilter)
	|| (refid !=  nullptr && refid->has_operation());
}

std::string NtpOperData::NtpStatusInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ntp-oper:ntp-oper-data/" << get_segment_path();
    return path_buffer.str();
}

std::string NtpOperData::NtpStatusInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ntp-status-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NtpOperData::NtpStatusInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reftime.is_set || is_set(reftime.yfilter)) leaf_name_data.push_back(reftime.get_name_leafdata());
    if (sys_poll.is_set || is_set(sys_poll.yfilter)) leaf_name_data.push_back(sys_poll.get_name_leafdata());
    if (stratum.is_set || is_set(stratum.yfilter)) leaf_name_data.push_back(stratum.get_name_leafdata());
    if (root_delay.is_set || is_set(root_delay.yfilter)) leaf_name_data.push_back(root_delay.get_name_leafdata());
    if (root_disp.is_set || is_set(root_disp.yfilter)) leaf_name_data.push_back(root_disp.get_name_leafdata());
    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (freq_drift_ppm.is_set || is_set(freq_drift_ppm.yfilter)) leaf_name_data.push_back(freq_drift_ppm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NtpOperData::NtpStatusInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "refid")
    {
        if(refid == nullptr)
        {
            refid = std::make_shared<NtpOperData::NtpStatusInfo::Refid>();
        }
        return refid;
    }

    if(child_yang_name == "ntp-associations")
    {
        auto ent_ = std::make_shared<NtpOperData::NtpStatusInfo::NtpAssociations>();
        ent_->parent = this;
        ntp_associations.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NtpOperData::NtpStatusInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(refid != nullptr)
    {
        _children["refid"] = refid;
    }

    count_ = 0;
    for (auto ent_ : ntp_associations.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void NtpOperData::NtpStatusInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reftime")
    {
        reftime = value;
        reftime.value_namespace = name_space;
        reftime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sys-poll")
    {
        sys_poll = value;
        sys_poll.value_namespace = name_space;
        sys_poll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stratum")
    {
        stratum = value;
        stratum.value_namespace = name_space;
        stratum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "root-delay")
    {
        root_delay = value;
        root_delay.value_namespace = name_space;
        root_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "root-disp")
    {
        root_disp = value;
        root_disp.value_namespace = name_space;
        root_disp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset")
    {
        offset = value;
        offset.value_namespace = name_space;
        offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "freq-drift-ppm")
    {
        freq_drift_ppm = value;
        freq_drift_ppm.value_namespace = name_space;
        freq_drift_ppm.value_namespace_prefix = name_space_prefix;
    }
}

void NtpOperData::NtpStatusInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reftime")
    {
        reftime.yfilter = yfilter;
    }
    if(value_path == "sys-poll")
    {
        sys_poll.yfilter = yfilter;
    }
    if(value_path == "stratum")
    {
        stratum.yfilter = yfilter;
    }
    if(value_path == "root-delay")
    {
        root_delay.yfilter = yfilter;
    }
    if(value_path == "root-disp")
    {
        root_disp.yfilter = yfilter;
    }
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
    if(value_path == "freq-drift-ppm")
    {
        freq_drift_ppm.yfilter = yfilter;
    }
}

bool NtpOperData::NtpStatusInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "refid" || name == "ntp-associations" || name == "reftime" || name == "sys-poll" || name == "stratum" || name == "root-delay" || name == "root-disp" || name == "offset" || name == "freq-drift-ppm")
        return true;
    return false;
}

NtpOperData::NtpStatusInfo::Refid::Refid()
    :
    ip_addr{YType::str, "ip-addr"},
    exception_code{YType::uint32, "exception-code"}
        ,
    kod_data(std::make_shared<NtpOperData::NtpStatusInfo::Refid::KodData>())
    , ref_clk_src_data(std::make_shared<NtpOperData::NtpStatusInfo::Refid::RefClkSrcData>())
{
    kod_data->parent = this;
    ref_clk_src_data->parent = this;

    yang_name = "refid"; yang_parent_name = "ntp-status-info"; is_top_level_class = false; has_list_ancestor = false; 
}

NtpOperData::NtpStatusInfo::Refid::~Refid()
{
}

bool NtpOperData::NtpStatusInfo::Refid::has_data() const
{
    if (is_presence_container) return true;
    return ip_addr.is_set
	|| exception_code.is_set
	|| (kod_data !=  nullptr && kod_data->has_data())
	|| (ref_clk_src_data !=  nullptr && ref_clk_src_data->has_data());
}

bool NtpOperData::NtpStatusInfo::Refid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(exception_code.yfilter)
	|| (kod_data !=  nullptr && kod_data->has_operation())
	|| (ref_clk_src_data !=  nullptr && ref_clk_src_data->has_operation());
}

std::string NtpOperData::NtpStatusInfo::Refid::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ntp-oper:ntp-oper-data/ntp-status-info/" << get_segment_path();
    return path_buffer.str();
}

std::string NtpOperData::NtpStatusInfo::Refid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "refid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NtpOperData::NtpStatusInfo::Refid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (exception_code.is_set || is_set(exception_code.yfilter)) leaf_name_data.push_back(exception_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NtpOperData::NtpStatusInfo::Refid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "kod-data")
    {
        if(kod_data == nullptr)
        {
            kod_data = std::make_shared<NtpOperData::NtpStatusInfo::Refid::KodData>();
        }
        return kod_data;
    }

    if(child_yang_name == "ref-clk-src-data")
    {
        if(ref_clk_src_data == nullptr)
        {
            ref_clk_src_data = std::make_shared<NtpOperData::NtpStatusInfo::Refid::RefClkSrcData>();
        }
        return ref_clk_src_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NtpOperData::NtpStatusInfo::Refid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(kod_data != nullptr)
    {
        _children["kod-data"] = kod_data;
    }

    if(ref_clk_src_data != nullptr)
    {
        _children["ref-clk-src-data"] = ref_clk_src_data;
    }

    return _children;
}

void NtpOperData::NtpStatusInfo::Refid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exception-code")
    {
        exception_code = value;
        exception_code.value_namespace = name_space;
        exception_code.value_namespace_prefix = name_space_prefix;
    }
}

void NtpOperData::NtpStatusInfo::Refid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
    if(value_path == "exception-code")
    {
        exception_code.yfilter = yfilter;
    }
}

bool NtpOperData::NtpStatusInfo::Refid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "kod-data" || name == "ref-clk-src-data" || name == "ip-addr" || name == "exception-code")
        return true;
    return false;
}

NtpOperData::NtpStatusInfo::Refid::KodData::KodData()
    :
    kod_type{YType::enumeration, "kod-type"}
{

    yang_name = "kod-data"; yang_parent_name = "refid"; is_top_level_class = false; has_list_ancestor = false; 
}

NtpOperData::NtpStatusInfo::Refid::KodData::~KodData()
{
}

bool NtpOperData::NtpStatusInfo::Refid::KodData::has_data() const
{
    if (is_presence_container) return true;
    return kod_type.is_set;
}

bool NtpOperData::NtpStatusInfo::Refid::KodData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(kod_type.yfilter);
}

std::string NtpOperData::NtpStatusInfo::Refid::KodData::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ntp-oper:ntp-oper-data/ntp-status-info/refid/" << get_segment_path();
    return path_buffer.str();
}

std::string NtpOperData::NtpStatusInfo::Refid::KodData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "kod-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NtpOperData::NtpStatusInfo::Refid::KodData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kod_type.is_set || is_set(kod_type.yfilter)) leaf_name_data.push_back(kod_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NtpOperData::NtpStatusInfo::Refid::KodData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NtpOperData::NtpStatusInfo::Refid::KodData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NtpOperData::NtpStatusInfo::Refid::KodData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "kod-type")
    {
        kod_type = value;
        kod_type.value_namespace = name_space;
        kod_type.value_namespace_prefix = name_space_prefix;
    }
}

void NtpOperData::NtpStatusInfo::Refid::KodData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "kod-type")
    {
        kod_type.yfilter = yfilter;
    }
}

bool NtpOperData::NtpStatusInfo::Refid::KodData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "kod-type")
        return true;
    return false;
}

NtpOperData::NtpStatusInfo::Refid::RefClkSrcData::RefClkSrcData()
    :
    ref_clk_src_type{YType::enumeration, "ref-clk-src-type"}
{

    yang_name = "ref-clk-src-data"; yang_parent_name = "refid"; is_top_level_class = false; has_list_ancestor = false; 
}

NtpOperData::NtpStatusInfo::Refid::RefClkSrcData::~RefClkSrcData()
{
}

bool NtpOperData::NtpStatusInfo::Refid::RefClkSrcData::has_data() const
{
    if (is_presence_container) return true;
    return ref_clk_src_type.is_set;
}

bool NtpOperData::NtpStatusInfo::Refid::RefClkSrcData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ref_clk_src_type.yfilter);
}

std::string NtpOperData::NtpStatusInfo::Refid::RefClkSrcData::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ntp-oper:ntp-oper-data/ntp-status-info/refid/" << get_segment_path();
    return path_buffer.str();
}

std::string NtpOperData::NtpStatusInfo::Refid::RefClkSrcData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ref-clk-src-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NtpOperData::NtpStatusInfo::Refid::RefClkSrcData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ref_clk_src_type.is_set || is_set(ref_clk_src_type.yfilter)) leaf_name_data.push_back(ref_clk_src_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NtpOperData::NtpStatusInfo::Refid::RefClkSrcData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NtpOperData::NtpStatusInfo::Refid::RefClkSrcData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NtpOperData::NtpStatusInfo::Refid::RefClkSrcData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ref-clk-src-type")
    {
        ref_clk_src_type = value;
        ref_clk_src_type.value_namespace = name_space;
        ref_clk_src_type.value_namespace_prefix = name_space_prefix;
    }
}

void NtpOperData::NtpStatusInfo::Refid::RefClkSrcData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ref-clk-src-type")
    {
        ref_clk_src_type.yfilter = yfilter;
    }
}

bool NtpOperData::NtpStatusInfo::Refid::RefClkSrcData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ref-clk-src-type")
        return true;
    return false;
}

NtpOperData::NtpStatusInfo::NtpAssociations::NtpAssociations()
    :
    assoc_id{YType::uint16, "assoc-id"},
    peer_reach{YType::uint8, "peer-reach"},
    peer_stratum{YType::uint32, "peer-stratum"},
    reftime{YType::str, "reftime"},
    last_poll_time{YType::uint64, "last-poll-time"},
    poll{YType::uint32, "poll"},
    delay{YType::str, "delay"},
    offset{YType::str, "offset"},
    jitter{YType::str, "jitter"},
    num_events{YType::uint8, "num-events"},
    last_peer_event{YType::enumeration, "last-peer-event"},
    peer_selection_status{YType::enumeration, "peer-selection-status"},
    peer_authentication_status{YType::enumeration, "peer-authentication-status"},
    serv_type{YType::enumeration, "serv-type"},
    psw_crypto{YType::enumeration, "psw-crypto"}
        ,
    refid(std::make_shared<NtpOperData::NtpStatusInfo::NtpAssociations::Refid>())
    , ntp_address(std::make_shared<NtpOperData::NtpStatusInfo::NtpAssociations::NtpAddress>())
{
    refid->parent = this;
    ntp_address->parent = this;

    yang_name = "ntp-associations"; yang_parent_name = "ntp-status-info"; is_top_level_class = false; has_list_ancestor = false; 
}

NtpOperData::NtpStatusInfo::NtpAssociations::~NtpAssociations()
{
}

bool NtpOperData::NtpStatusInfo::NtpAssociations::has_data() const
{
    if (is_presence_container) return true;
    return assoc_id.is_set
	|| peer_reach.is_set
	|| peer_stratum.is_set
	|| reftime.is_set
	|| last_poll_time.is_set
	|| poll.is_set
	|| delay.is_set
	|| offset.is_set
	|| jitter.is_set
	|| num_events.is_set
	|| last_peer_event.is_set
	|| peer_selection_status.is_set
	|| peer_authentication_status.is_set
	|| serv_type.is_set
	|| psw_crypto.is_set
	|| (refid !=  nullptr && refid->has_data())
	|| (ntp_address !=  nullptr && ntp_address->has_data());
}

bool NtpOperData::NtpStatusInfo::NtpAssociations::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(assoc_id.yfilter)
	|| ydk::is_set(peer_reach.yfilter)
	|| ydk::is_set(peer_stratum.yfilter)
	|| ydk::is_set(reftime.yfilter)
	|| ydk::is_set(last_poll_time.yfilter)
	|| ydk::is_set(poll.yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(offset.yfilter)
	|| ydk::is_set(jitter.yfilter)
	|| ydk::is_set(num_events.yfilter)
	|| ydk::is_set(last_peer_event.yfilter)
	|| ydk::is_set(peer_selection_status.yfilter)
	|| ydk::is_set(peer_authentication_status.yfilter)
	|| ydk::is_set(serv_type.yfilter)
	|| ydk::is_set(psw_crypto.yfilter)
	|| (refid !=  nullptr && refid->has_operation())
	|| (ntp_address !=  nullptr && ntp_address->has_operation());
}

std::string NtpOperData::NtpStatusInfo::NtpAssociations::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ntp-oper:ntp-oper-data/ntp-status-info/" << get_segment_path();
    return path_buffer.str();
}

std::string NtpOperData::NtpStatusInfo::NtpAssociations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ntp-associations";
    ADD_KEY_TOKEN(assoc_id, "assoc-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NtpOperData::NtpStatusInfo::NtpAssociations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (assoc_id.is_set || is_set(assoc_id.yfilter)) leaf_name_data.push_back(assoc_id.get_name_leafdata());
    if (peer_reach.is_set || is_set(peer_reach.yfilter)) leaf_name_data.push_back(peer_reach.get_name_leafdata());
    if (peer_stratum.is_set || is_set(peer_stratum.yfilter)) leaf_name_data.push_back(peer_stratum.get_name_leafdata());
    if (reftime.is_set || is_set(reftime.yfilter)) leaf_name_data.push_back(reftime.get_name_leafdata());
    if (last_poll_time.is_set || is_set(last_poll_time.yfilter)) leaf_name_data.push_back(last_poll_time.get_name_leafdata());
    if (poll.is_set || is_set(poll.yfilter)) leaf_name_data.push_back(poll.get_name_leafdata());
    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (offset.is_set || is_set(offset.yfilter)) leaf_name_data.push_back(offset.get_name_leafdata());
    if (jitter.is_set || is_set(jitter.yfilter)) leaf_name_data.push_back(jitter.get_name_leafdata());
    if (num_events.is_set || is_set(num_events.yfilter)) leaf_name_data.push_back(num_events.get_name_leafdata());
    if (last_peer_event.is_set || is_set(last_peer_event.yfilter)) leaf_name_data.push_back(last_peer_event.get_name_leafdata());
    if (peer_selection_status.is_set || is_set(peer_selection_status.yfilter)) leaf_name_data.push_back(peer_selection_status.get_name_leafdata());
    if (peer_authentication_status.is_set || is_set(peer_authentication_status.yfilter)) leaf_name_data.push_back(peer_authentication_status.get_name_leafdata());
    if (serv_type.is_set || is_set(serv_type.yfilter)) leaf_name_data.push_back(serv_type.get_name_leafdata());
    if (psw_crypto.is_set || is_set(psw_crypto.yfilter)) leaf_name_data.push_back(psw_crypto.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NtpOperData::NtpStatusInfo::NtpAssociations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "refid")
    {
        if(refid == nullptr)
        {
            refid = std::make_shared<NtpOperData::NtpStatusInfo::NtpAssociations::Refid>();
        }
        return refid;
    }

    if(child_yang_name == "ntp-address")
    {
        if(ntp_address == nullptr)
        {
            ntp_address = std::make_shared<NtpOperData::NtpStatusInfo::NtpAssociations::NtpAddress>();
        }
        return ntp_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NtpOperData::NtpStatusInfo::NtpAssociations::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(refid != nullptr)
    {
        _children["refid"] = refid;
    }

    if(ntp_address != nullptr)
    {
        _children["ntp-address"] = ntp_address;
    }

    return _children;
}

void NtpOperData::NtpStatusInfo::NtpAssociations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "assoc-id")
    {
        assoc_id = value;
        assoc_id.value_namespace = name_space;
        assoc_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-reach")
    {
        peer_reach = value;
        peer_reach.value_namespace = name_space;
        peer_reach.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-stratum")
    {
        peer_stratum = value;
        peer_stratum.value_namespace = name_space;
        peer_stratum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reftime")
    {
        reftime = value;
        reftime.value_namespace = name_space;
        reftime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-poll-time")
    {
        last_poll_time = value;
        last_poll_time.value_namespace = name_space;
        last_poll_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "poll")
    {
        poll = value;
        poll.value_namespace = name_space;
        poll.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "offset")
    {
        offset = value;
        offset.value_namespace = name_space;
        offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "jitter")
    {
        jitter = value;
        jitter.value_namespace = name_space;
        jitter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-events")
    {
        num_events = value;
        num_events.value_namespace = name_space;
        num_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-peer-event")
    {
        last_peer_event = value;
        last_peer_event.value_namespace = name_space;
        last_peer_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-selection-status")
    {
        peer_selection_status = value;
        peer_selection_status.value_namespace = name_space;
        peer_selection_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-authentication-status")
    {
        peer_authentication_status = value;
        peer_authentication_status.value_namespace = name_space;
        peer_authentication_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serv-type")
    {
        serv_type = value;
        serv_type.value_namespace = name_space;
        serv_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psw-crypto")
    {
        psw_crypto = value;
        psw_crypto.value_namespace = name_space;
        psw_crypto.value_namespace_prefix = name_space_prefix;
    }
}

void NtpOperData::NtpStatusInfo::NtpAssociations::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "assoc-id")
    {
        assoc_id.yfilter = yfilter;
    }
    if(value_path == "peer-reach")
    {
        peer_reach.yfilter = yfilter;
    }
    if(value_path == "peer-stratum")
    {
        peer_stratum.yfilter = yfilter;
    }
    if(value_path == "reftime")
    {
        reftime.yfilter = yfilter;
    }
    if(value_path == "last-poll-time")
    {
        last_poll_time.yfilter = yfilter;
    }
    if(value_path == "poll")
    {
        poll.yfilter = yfilter;
    }
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
    if(value_path == "jitter")
    {
        jitter.yfilter = yfilter;
    }
    if(value_path == "num-events")
    {
        num_events.yfilter = yfilter;
    }
    if(value_path == "last-peer-event")
    {
        last_peer_event.yfilter = yfilter;
    }
    if(value_path == "peer-selection-status")
    {
        peer_selection_status.yfilter = yfilter;
    }
    if(value_path == "peer-authentication-status")
    {
        peer_authentication_status.yfilter = yfilter;
    }
    if(value_path == "serv-type")
    {
        serv_type.yfilter = yfilter;
    }
    if(value_path == "psw-crypto")
    {
        psw_crypto.yfilter = yfilter;
    }
}

bool NtpOperData::NtpStatusInfo::NtpAssociations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "refid" || name == "ntp-address" || name == "assoc-id" || name == "peer-reach" || name == "peer-stratum" || name == "reftime" || name == "last-poll-time" || name == "poll" || name == "delay" || name == "offset" || name == "jitter" || name == "num-events" || name == "last-peer-event" || name == "peer-selection-status" || name == "peer-authentication-status" || name == "serv-type" || name == "psw-crypto")
        return true;
    return false;
}

NtpOperData::NtpStatusInfo::NtpAssociations::Refid::Refid()
    :
    ip_addr{YType::str, "ip-addr"},
    exception_code{YType::uint32, "exception-code"}
        ,
    kod_data(std::make_shared<NtpOperData::NtpStatusInfo::NtpAssociations::Refid::KodData>())
    , ref_clk_src_data(std::make_shared<NtpOperData::NtpStatusInfo::NtpAssociations::Refid::RefClkSrcData>())
{
    kod_data->parent = this;
    ref_clk_src_data->parent = this;

    yang_name = "refid"; yang_parent_name = "ntp-associations"; is_top_level_class = false; has_list_ancestor = true; 
}

NtpOperData::NtpStatusInfo::NtpAssociations::Refid::~Refid()
{
}

bool NtpOperData::NtpStatusInfo::NtpAssociations::Refid::has_data() const
{
    if (is_presence_container) return true;
    return ip_addr.is_set
	|| exception_code.is_set
	|| (kod_data !=  nullptr && kod_data->has_data())
	|| (ref_clk_src_data !=  nullptr && ref_clk_src_data->has_data());
}

bool NtpOperData::NtpStatusInfo::NtpAssociations::Refid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(exception_code.yfilter)
	|| (kod_data !=  nullptr && kod_data->has_operation())
	|| (ref_clk_src_data !=  nullptr && ref_clk_src_data->has_operation());
}

std::string NtpOperData::NtpStatusInfo::NtpAssociations::Refid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "refid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NtpOperData::NtpStatusInfo::NtpAssociations::Refid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (exception_code.is_set || is_set(exception_code.yfilter)) leaf_name_data.push_back(exception_code.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NtpOperData::NtpStatusInfo::NtpAssociations::Refid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "kod-data")
    {
        if(kod_data == nullptr)
        {
            kod_data = std::make_shared<NtpOperData::NtpStatusInfo::NtpAssociations::Refid::KodData>();
        }
        return kod_data;
    }

    if(child_yang_name == "ref-clk-src-data")
    {
        if(ref_clk_src_data == nullptr)
        {
            ref_clk_src_data = std::make_shared<NtpOperData::NtpStatusInfo::NtpAssociations::Refid::RefClkSrcData>();
        }
        return ref_clk_src_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NtpOperData::NtpStatusInfo::NtpAssociations::Refid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(kod_data != nullptr)
    {
        _children["kod-data"] = kod_data;
    }

    if(ref_clk_src_data != nullptr)
    {
        _children["ref-clk-src-data"] = ref_clk_src_data;
    }

    return _children;
}

void NtpOperData::NtpStatusInfo::NtpAssociations::Refid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exception-code")
    {
        exception_code = value;
        exception_code.value_namespace = name_space;
        exception_code.value_namespace_prefix = name_space_prefix;
    }
}

void NtpOperData::NtpStatusInfo::NtpAssociations::Refid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
    if(value_path == "exception-code")
    {
        exception_code.yfilter = yfilter;
    }
}

bool NtpOperData::NtpStatusInfo::NtpAssociations::Refid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "kod-data" || name == "ref-clk-src-data" || name == "ip-addr" || name == "exception-code")
        return true;
    return false;
}

NtpOperData::NtpStatusInfo::NtpAssociations::Refid::KodData::KodData()
    :
    kod_type{YType::enumeration, "kod-type"}
{

    yang_name = "kod-data"; yang_parent_name = "refid"; is_top_level_class = false; has_list_ancestor = true; 
}

NtpOperData::NtpStatusInfo::NtpAssociations::Refid::KodData::~KodData()
{
}

bool NtpOperData::NtpStatusInfo::NtpAssociations::Refid::KodData::has_data() const
{
    if (is_presence_container) return true;
    return kod_type.is_set;
}

bool NtpOperData::NtpStatusInfo::NtpAssociations::Refid::KodData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(kod_type.yfilter);
}

std::string NtpOperData::NtpStatusInfo::NtpAssociations::Refid::KodData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "kod-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NtpOperData::NtpStatusInfo::NtpAssociations::Refid::KodData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kod_type.is_set || is_set(kod_type.yfilter)) leaf_name_data.push_back(kod_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NtpOperData::NtpStatusInfo::NtpAssociations::Refid::KodData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NtpOperData::NtpStatusInfo::NtpAssociations::Refid::KodData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NtpOperData::NtpStatusInfo::NtpAssociations::Refid::KodData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "kod-type")
    {
        kod_type = value;
        kod_type.value_namespace = name_space;
        kod_type.value_namespace_prefix = name_space_prefix;
    }
}

void NtpOperData::NtpStatusInfo::NtpAssociations::Refid::KodData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "kod-type")
    {
        kod_type.yfilter = yfilter;
    }
}

bool NtpOperData::NtpStatusInfo::NtpAssociations::Refid::KodData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "kod-type")
        return true;
    return false;
}

NtpOperData::NtpStatusInfo::NtpAssociations::Refid::RefClkSrcData::RefClkSrcData()
    :
    ref_clk_src_type{YType::enumeration, "ref-clk-src-type"}
{

    yang_name = "ref-clk-src-data"; yang_parent_name = "refid"; is_top_level_class = false; has_list_ancestor = true; 
}

NtpOperData::NtpStatusInfo::NtpAssociations::Refid::RefClkSrcData::~RefClkSrcData()
{
}

bool NtpOperData::NtpStatusInfo::NtpAssociations::Refid::RefClkSrcData::has_data() const
{
    if (is_presence_container) return true;
    return ref_clk_src_type.is_set;
}

bool NtpOperData::NtpStatusInfo::NtpAssociations::Refid::RefClkSrcData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ref_clk_src_type.yfilter);
}

std::string NtpOperData::NtpStatusInfo::NtpAssociations::Refid::RefClkSrcData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ref-clk-src-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NtpOperData::NtpStatusInfo::NtpAssociations::Refid::RefClkSrcData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ref_clk_src_type.is_set || is_set(ref_clk_src_type.yfilter)) leaf_name_data.push_back(ref_clk_src_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NtpOperData::NtpStatusInfo::NtpAssociations::Refid::RefClkSrcData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NtpOperData::NtpStatusInfo::NtpAssociations::Refid::RefClkSrcData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NtpOperData::NtpStatusInfo::NtpAssociations::Refid::RefClkSrcData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ref-clk-src-type")
    {
        ref_clk_src_type = value;
        ref_clk_src_type.value_namespace = name_space;
        ref_clk_src_type.value_namespace_prefix = name_space_prefix;
    }
}

void NtpOperData::NtpStatusInfo::NtpAssociations::Refid::RefClkSrcData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ref-clk-src-type")
    {
        ref_clk_src_type.yfilter = yfilter;
    }
}

bool NtpOperData::NtpStatusInfo::NtpAssociations::Refid::RefClkSrcData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ref-clk-src-type")
        return true;
    return false;
}

NtpOperData::NtpStatusInfo::NtpAssociations::NtpAddress::NtpAddress()
    :
    ip_addr{YType::str, "ip-addr"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "ntp-address"; yang_parent_name = "ntp-associations"; is_top_level_class = false; has_list_ancestor = true; 
}

NtpOperData::NtpStatusInfo::NtpAssociations::NtpAddress::~NtpAddress()
{
}

bool NtpOperData::NtpStatusInfo::NtpAssociations::NtpAddress::has_data() const
{
    if (is_presence_container) return true;
    return ip_addr.is_set
	|| vrf_name.is_set;
}

bool NtpOperData::NtpStatusInfo::NtpAssociations::NtpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_addr.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string NtpOperData::NtpStatusInfo::NtpAssociations::NtpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ntp-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > NtpOperData::NtpStatusInfo::NtpAssociations::NtpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_addr.is_set || is_set(ip_addr.yfilter)) leaf_name_data.push_back(ip_addr.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> NtpOperData::NtpStatusInfo::NtpAssociations::NtpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> NtpOperData::NtpStatusInfo::NtpAssociations::NtpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void NtpOperData::NtpStatusInfo::NtpAssociations::NtpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-addr")
    {
        ip_addr = value;
        ip_addr.value_namespace = name_space;
        ip_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void NtpOperData::NtpStatusInfo::NtpAssociations::NtpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-addr")
    {
        ip_addr.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool NtpOperData::NtpStatusInfo::NtpAssociations::NtpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-addr" || name == "vrf-name")
        return true;
    return false;
}

const Enum::YLeaf KissCodeType::ntp_ref_acst {0, "ntp-ref-acst"};
const Enum::YLeaf KissCodeType::ntp_ref_auth {1, "ntp-ref-auth"};
const Enum::YLeaf KissCodeType::ntp_ref_auto {2, "ntp-ref-auto"};
const Enum::YLeaf KissCodeType::ntp_ref_bcst {3, "ntp-ref-bcst"};
const Enum::YLeaf KissCodeType::ntp_ref_cryp {4, "ntp-ref-cryp"};
const Enum::YLeaf KissCodeType::ntp_ref_deny {5, "ntp-ref-deny"};
const Enum::YLeaf KissCodeType::ntp_ref_drop {6, "ntp-ref-drop"};
const Enum::YLeaf KissCodeType::ntp_ref_rstr {7, "ntp-ref-rstr"};
const Enum::YLeaf KissCodeType::ntp_ref_init {8, "ntp-ref-init"};
const Enum::YLeaf KissCodeType::ntp_ref_mcst {9, "ntp-ref-mcst"};
const Enum::YLeaf KissCodeType::ntp_ref_nkey {10, "ntp-ref-nkey"};
const Enum::YLeaf KissCodeType::ntp_ref_rate {11, "ntp-ref-rate"};
const Enum::YLeaf KissCodeType::ntp_ref_rmot {12, "ntp-ref-rmot"};
const Enum::YLeaf KissCodeType::ntp_ref_step {13, "ntp-ref-step"};

const Enum::YLeaf PeerEvent::ntp_peer_event_mobilize {0, "ntp-peer-event-mobilize"};
const Enum::YLeaf PeerEvent::ntp_peer_event_demobilize {1, "ntp-peer-event-demobilize"};
const Enum::YLeaf PeerEvent::ntp_peer_event_unreachable {2, "ntp-peer-event-unreachable"};
const Enum::YLeaf PeerEvent::ntp_peer_event_reachable {3, "ntp-peer-event-reachable"};
const Enum::YLeaf PeerEvent::ntp_peer_event_restart {4, "ntp-peer-event-restart"};
const Enum::YLeaf PeerEvent::ntp_peer_event_reply {5, "ntp-peer-event-reply"};
const Enum::YLeaf PeerEvent::ntp_peer_event_rate {6, "ntp-peer-event-rate"};
const Enum::YLeaf PeerEvent::ntp_peer_event_deny {7, "ntp-peer-event-deny"};
const Enum::YLeaf PeerEvent::ntp_peer_disarmed {8, "ntp-peer-disarmed"};
const Enum::YLeaf PeerEvent::ntp_peer_armed {9, "ntp-peer-armed"};
const Enum::YLeaf PeerEvent::ntp_peer_event_newpeer {10, "ntp-peer-event-newpeer"};
const Enum::YLeaf PeerEvent::ntp_peer_event_clock {11, "ntp-peer-event-clock"};
const Enum::YLeaf PeerEvent::ntp_peer_event_auth {12, "ntp-peer-event-auth"};
const Enum::YLeaf PeerEvent::ntp_peer_event_popcorn {13, "ntp-peer-event-popcorn"};
const Enum::YLeaf PeerEvent::ntp_peer_event_xleave {14, "ntp-peer-event-xleave"};
const Enum::YLeaf PeerEvent::ntp_peer_event_xerr {15, "ntp-peer-event-xerr"};
const Enum::YLeaf PeerEvent::ntp_peer_event_tai {16, "ntp-peer-event-tai"};

const Enum::YLeaf ServerType::ntp_peer {0, "ntp-peer"};
const Enum::YLeaf ServerType::ntp_server {1, "ntp-server"};
const Enum::YLeaf ServerType::ntp_unknown_type {2, "ntp-unknown-type"};

const Enum::YLeaf RefidPktTypeInfo::ntp_ref_state_kod {0, "ntp-ref-state-kod"};
const Enum::YLeaf RefidPktTypeInfo::ntp_ref_state_resolved_with_clk_source {1, "ntp-ref-state-resolved-with-clk-source"};
const Enum::YLeaf RefidPktTypeInfo::ntp_ref_state_resolved_with_ip_addr {2, "ntp-ref-state-resolved-with-ip-addr"};
const Enum::YLeaf RefidPktTypeInfo::ntp_ref_state_bad_state {3, "ntp-ref-state-bad-state"};

const Enum::YLeaf PeerStatusWord::crypto_flag_sig {0, "crypto-flag-sig"};
const Enum::YLeaf PeerStatusWord::crypto_flag_leap {1, "crypto-flag-leap"};
const Enum::YLeaf PeerStatusWord::crypto_flag_vrfy {2, "crypto-flag-vrfy"};
const Enum::YLeaf PeerStatusWord::crypto_flag_cook {3, "crypto-flag-cook"};
const Enum::YLeaf PeerStatusWord::crypto_flag_auto {4, "crypto-flag-auto"};
const Enum::YLeaf PeerStatusWord::crypto_flag_cert {5, "crypto-flag-cert"};

const Enum::YLeaf PeerSelectStatus::ntp_peer_as_backup {0, "ntp-peer-as-backup"};
const Enum::YLeaf PeerSelectStatus::ntp_peer_rejected {1, "ntp-peer-rejected"};
const Enum::YLeaf PeerSelectStatus::ntp_peer_false_ticker {2, "ntp-peer-false-ticker"};
const Enum::YLeaf PeerSelectStatus::ntp_peer_excess {3, "ntp-peer-excess"};
const Enum::YLeaf PeerSelectStatus::ntp_peer_outlier {4, "ntp-peer-outlier"};
const Enum::YLeaf PeerSelectStatus::ntp_peer_candidate {5, "ntp-peer-candidate"};
const Enum::YLeaf PeerSelectStatus::ntp_peer_sys_peer {6, "ntp-peer-sys-peer"};
const Enum::YLeaf PeerSelectStatus::ntp_peer_pps_peer {7, "ntp-peer-pps-peer"};

const Enum::YLeaf RefClockSourceType::ntp_ref_goes {0, "ntp-ref-goes"};
const Enum::YLeaf RefClockSourceType::ntp_ref_gps {1, "ntp-ref-gps"};
const Enum::YLeaf RefClockSourceType::ntp_ref_gal {2, "ntp-ref-gal"};
const Enum::YLeaf RefClockSourceType::ntp_ref_pps {3, "ntp-ref-pps"};
const Enum::YLeaf RefClockSourceType::ntp_ref_irig {4, "ntp-ref-irig"};
const Enum::YLeaf RefClockSourceType::ntp_ref_wwvb {5, "ntp-ref-wwvb"};
const Enum::YLeaf RefClockSourceType::ntp_ref_dcf {6, "ntp-ref-dcf"};
const Enum::YLeaf RefClockSourceType::ntp_ref_hbg {7, "ntp-ref-hbg"};
const Enum::YLeaf RefClockSourceType::ntp_ref_msf {8, "ntp-ref-msf"};
const Enum::YLeaf RefClockSourceType::ntp_ref_jjy {9, "ntp-ref-jjy"};
const Enum::YLeaf RefClockSourceType::ntp_ref_lorc {10, "ntp-ref-lorc"};
const Enum::YLeaf RefClockSourceType::ntp_ref_tdf {11, "ntp-ref-tdf"};
const Enum::YLeaf RefClockSourceType::ntp_ref_chu {12, "ntp-ref-chu"};
const Enum::YLeaf RefClockSourceType::ntp_ref_wwv {13, "ntp-ref-wwv"};
const Enum::YLeaf RefClockSourceType::ntp_ref_wwvh {14, "ntp-ref-wwvh"};
const Enum::YLeaf RefClockSourceType::ntp_ref_nist {15, "ntp-ref-nist"};
const Enum::YLeaf RefClockSourceType::ntp_ref_acts {16, "ntp-ref-acts"};
const Enum::YLeaf RefClockSourceType::ntp_ref_usno {17, "ntp-ref-usno"};
const Enum::YLeaf RefClockSourceType::ntp_ref_ptb {18, "ntp-ref-ptb"};

const Enum::YLeaf PeerAuthStatus::ntp_auth_ok {0, "ntp-auth-ok"};
const Enum::YLeaf PeerAuthStatus::ntp_auth_bad_auth {1, "ntp-auth-bad-auth"};
const Enum::YLeaf PeerAuthStatus::ntp_auth_auth_not_configured {2, "ntp-auth-auth-not-configured"};
const Enum::YLeaf PeerAuthStatus::ntp_auth_status_not_available {3, "ntp-auth-status-not-available"};
const Enum::YLeaf PeerAuthStatus::ntp_auth_none {4, "ntp-auth-none"};
const Enum::YLeaf PeerAuthStatus::ntp_auth_crypto {5, "ntp-auth-crypto"};


}
}

