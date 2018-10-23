
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_cfm_oper.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_cfm_oper {

CfmStatistics::CfmStatistics()
    :
    cfm_meps(std::make_shared<CfmStatistics::CfmMeps>())
{
    cfm_meps->parent = this;

    yang_name = "cfm-statistics"; yang_parent_name = "Cisco-IOS-XE-cfm-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

CfmStatistics::~CfmStatistics()
{
}

bool CfmStatistics::has_data() const
{
    if (is_presence_container) return true;
    return (cfm_meps !=  nullptr && cfm_meps->has_data());
}

bool CfmStatistics::has_operation() const
{
    return is_set(yfilter)
	|| (cfm_meps !=  nullptr && cfm_meps->has_operation());
}

std::string CfmStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cfm-oper:cfm-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CfmStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CfmStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cfm-meps")
    {
        if(cfm_meps == nullptr)
        {
            cfm_meps = std::make_shared<CfmStatistics::CfmMeps>();
        }
        return cfm_meps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CfmStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cfm_meps != nullptr)
    {
        _children["cfm-meps"] = cfm_meps;
    }

    return _children;
}

void CfmStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CfmStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> CfmStatistics::clone_ptr() const
{
    return std::make_shared<CfmStatistics>();
}

std::string CfmStatistics::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CfmStatistics::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CfmStatistics::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CfmStatistics::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CfmStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cfm-meps")
        return true;
    return false;
}

CfmStatistics::CfmMeps::CfmMeps()
    :
    cfm_mep(this, {"domain_name", "ma_name", "mpid"})
{

    yang_name = "cfm-meps"; yang_parent_name = "cfm-statistics"; is_top_level_class = false; has_list_ancestor = false; 
}

CfmStatistics::CfmMeps::~CfmMeps()
{
}

bool CfmStatistics::CfmMeps::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cfm_mep.len(); index++)
    {
        if(cfm_mep[index]->has_data())
            return true;
    }
    return false;
}

bool CfmStatistics::CfmMeps::has_operation() const
{
    for (std::size_t index=0; index<cfm_mep.len(); index++)
    {
        if(cfm_mep[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CfmStatistics::CfmMeps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cfm-oper:cfm-statistics/" << get_segment_path();
    return path_buffer.str();
}

std::string CfmStatistics::CfmMeps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cfm-meps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CfmStatistics::CfmMeps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CfmStatistics::CfmMeps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cfm-mep")
    {
        auto ent_ = std::make_shared<CfmStatistics::CfmMeps::CfmMep>();
        ent_->parent = this;
        cfm_mep.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CfmStatistics::CfmMeps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cfm_mep.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CfmStatistics::CfmMeps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CfmStatistics::CfmMeps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CfmStatistics::CfmMeps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cfm-mep")
        return true;
    return false;
}

CfmStatistics::CfmMeps::CfmMep::CfmMep()
    :
    domain_name{YType::str, "domain-name"},
    ma_name{YType::str, "ma-name"},
    mpid{YType::uint32, "mpid"},
    ccm_transmitted{YType::uint64, "ccm-transmitted"},
    ccm_seq_errors{YType::uint64, "ccm-seq-errors"},
    ltr_unexpected{YType::uint64, "ltr-unexpected"},
    lbr_transmitted{YType::uint64, "lbr-transmitted"},
    lbr_seq_errors{YType::uint64, "lbr-seq-errors"},
    lbr_received_ok{YType::uint64, "lbr-received-ok"},
    lbr_received_bad{YType::uint64, "lbr-received-bad"}
        ,
    last_cleared(std::make_shared<CfmStatistics::CfmMeps::CfmMep::LastCleared>())
{
    last_cleared->parent = this;

    yang_name = "cfm-mep"; yang_parent_name = "cfm-meps"; is_top_level_class = false; has_list_ancestor = false; 
}

CfmStatistics::CfmMeps::CfmMep::~CfmMep()
{
}

bool CfmStatistics::CfmMeps::CfmMep::has_data() const
{
    if (is_presence_container) return true;
    return domain_name.is_set
	|| ma_name.is_set
	|| mpid.is_set
	|| ccm_transmitted.is_set
	|| ccm_seq_errors.is_set
	|| ltr_unexpected.is_set
	|| lbr_transmitted.is_set
	|| lbr_seq_errors.is_set
	|| lbr_received_ok.is_set
	|| lbr_received_bad.is_set
	|| (last_cleared !=  nullptr && last_cleared->has_data());
}

bool CfmStatistics::CfmMeps::CfmMep::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_name.yfilter)
	|| ydk::is_set(ma_name.yfilter)
	|| ydk::is_set(mpid.yfilter)
	|| ydk::is_set(ccm_transmitted.yfilter)
	|| ydk::is_set(ccm_seq_errors.yfilter)
	|| ydk::is_set(ltr_unexpected.yfilter)
	|| ydk::is_set(lbr_transmitted.yfilter)
	|| ydk::is_set(lbr_seq_errors.yfilter)
	|| ydk::is_set(lbr_received_ok.yfilter)
	|| ydk::is_set(lbr_received_bad.yfilter)
	|| (last_cleared !=  nullptr && last_cleared->has_operation());
}

std::string CfmStatistics::CfmMeps::CfmMep::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cfm-oper:cfm-statistics/cfm-meps/" << get_segment_path();
    return path_buffer.str();
}

std::string CfmStatistics::CfmMeps::CfmMep::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cfm-mep";
    ADD_KEY_TOKEN(domain_name, "domain-name");
    ADD_KEY_TOKEN(ma_name, "ma-name");
    ADD_KEY_TOKEN(mpid, "mpid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CfmStatistics::CfmMeps::CfmMep::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_name.is_set || is_set(domain_name.yfilter)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (ma_name.is_set || is_set(ma_name.yfilter)) leaf_name_data.push_back(ma_name.get_name_leafdata());
    if (mpid.is_set || is_set(mpid.yfilter)) leaf_name_data.push_back(mpid.get_name_leafdata());
    if (ccm_transmitted.is_set || is_set(ccm_transmitted.yfilter)) leaf_name_data.push_back(ccm_transmitted.get_name_leafdata());
    if (ccm_seq_errors.is_set || is_set(ccm_seq_errors.yfilter)) leaf_name_data.push_back(ccm_seq_errors.get_name_leafdata());
    if (ltr_unexpected.is_set || is_set(ltr_unexpected.yfilter)) leaf_name_data.push_back(ltr_unexpected.get_name_leafdata());
    if (lbr_transmitted.is_set || is_set(lbr_transmitted.yfilter)) leaf_name_data.push_back(lbr_transmitted.get_name_leafdata());
    if (lbr_seq_errors.is_set || is_set(lbr_seq_errors.yfilter)) leaf_name_data.push_back(lbr_seq_errors.get_name_leafdata());
    if (lbr_received_ok.is_set || is_set(lbr_received_ok.yfilter)) leaf_name_data.push_back(lbr_received_ok.get_name_leafdata());
    if (lbr_received_bad.is_set || is_set(lbr_received_bad.yfilter)) leaf_name_data.push_back(lbr_received_bad.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CfmStatistics::CfmMeps::CfmMep::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-cleared")
    {
        if(last_cleared == nullptr)
        {
            last_cleared = std::make_shared<CfmStatistics::CfmMeps::CfmMep::LastCleared>();
        }
        return last_cleared;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CfmStatistics::CfmMeps::CfmMep::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(last_cleared != nullptr)
    {
        _children["last-cleared"] = last_cleared;
    }

    return _children;
}

void CfmStatistics::CfmMeps::CfmMep::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-name")
    {
        domain_name = value;
        domain_name.value_namespace = name_space;
        domain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ma-name")
    {
        ma_name = value;
        ma_name.value_namespace = name_space;
        ma_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpid")
    {
        mpid = value;
        mpid.value_namespace = name_space;
        mpid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccm-transmitted")
    {
        ccm_transmitted = value;
        ccm_transmitted.value_namespace = name_space;
        ccm_transmitted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ccm-seq-errors")
    {
        ccm_seq_errors = value;
        ccm_seq_errors.value_namespace = name_space;
        ccm_seq_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ltr-unexpected")
    {
        ltr_unexpected = value;
        ltr_unexpected.value_namespace = name_space;
        ltr_unexpected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbr-transmitted")
    {
        lbr_transmitted = value;
        lbr_transmitted.value_namespace = name_space;
        lbr_transmitted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbr-seq-errors")
    {
        lbr_seq_errors = value;
        lbr_seq_errors.value_namespace = name_space;
        lbr_seq_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbr-received-ok")
    {
        lbr_received_ok = value;
        lbr_received_ok.value_namespace = name_space;
        lbr_received_ok.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lbr-received-bad")
    {
        lbr_received_bad = value;
        lbr_received_bad.value_namespace = name_space;
        lbr_received_bad.value_namespace_prefix = name_space_prefix;
    }
}

void CfmStatistics::CfmMeps::CfmMep::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-name")
    {
        domain_name.yfilter = yfilter;
    }
    if(value_path == "ma-name")
    {
        ma_name.yfilter = yfilter;
    }
    if(value_path == "mpid")
    {
        mpid.yfilter = yfilter;
    }
    if(value_path == "ccm-transmitted")
    {
        ccm_transmitted.yfilter = yfilter;
    }
    if(value_path == "ccm-seq-errors")
    {
        ccm_seq_errors.yfilter = yfilter;
    }
    if(value_path == "ltr-unexpected")
    {
        ltr_unexpected.yfilter = yfilter;
    }
    if(value_path == "lbr-transmitted")
    {
        lbr_transmitted.yfilter = yfilter;
    }
    if(value_path == "lbr-seq-errors")
    {
        lbr_seq_errors.yfilter = yfilter;
    }
    if(value_path == "lbr-received-ok")
    {
        lbr_received_ok.yfilter = yfilter;
    }
    if(value_path == "lbr-received-bad")
    {
        lbr_received_bad.yfilter = yfilter;
    }
}

bool CfmStatistics::CfmMeps::CfmMep::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-cleared" || name == "domain-name" || name == "ma-name" || name == "mpid" || name == "ccm-transmitted" || name == "ccm-seq-errors" || name == "ltr-unexpected" || name == "lbr-transmitted" || name == "lbr-seq-errors" || name == "lbr-received-ok" || name == "lbr-received-bad")
        return true;
    return false;
}

CfmStatistics::CfmMeps::CfmMep::LastCleared::LastCleared()
    :
    never{YType::empty, "never"},
    time{YType::str, "time"}
{

    yang_name = "last-cleared"; yang_parent_name = "cfm-mep"; is_top_level_class = false; has_list_ancestor = true; 
}

CfmStatistics::CfmMeps::CfmMep::LastCleared::~LastCleared()
{
}

bool CfmStatistics::CfmMeps::CfmMep::LastCleared::has_data() const
{
    if (is_presence_container) return true;
    return never.is_set
	|| time.is_set;
}

bool CfmStatistics::CfmMeps::CfmMep::LastCleared::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(never.yfilter)
	|| ydk::is_set(time.yfilter);
}

std::string CfmStatistics::CfmMeps::CfmMep::LastCleared::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-cleared";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CfmStatistics::CfmMeps::CfmMep::LastCleared::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (never.is_set || is_set(never.yfilter)) leaf_name_data.push_back(never.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CfmStatistics::CfmMeps::CfmMep::LastCleared::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CfmStatistics::CfmMeps::CfmMep::LastCleared::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CfmStatistics::CfmMeps::CfmMep::LastCleared::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "never")
    {
        never = value;
        never.value_namespace = name_space;
        never.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void CfmStatistics::CfmMeps::CfmMep::LastCleared::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "never")
    {
        never.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool CfmStatistics::CfmMeps::CfmMep::LastCleared::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "never" || name == "time")
        return true;
    return false;
}

const Enum::YLeaf CfmLastClearedType::never_cleared {0, "never-cleared"};
const Enum::YLeaf CfmLastClearedType::cleared_before {1, "cleared-before"};


}
}

