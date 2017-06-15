
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_cfm_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XE_cfm_oper {

CfmStatistics::CfmStatistics()
    :
    cfm_meps_(std::make_shared<CfmStatistics::CfmMeps>())
{
    cfm_meps_->parent = this;

    yang_name = "cfm-statistics"; yang_parent_name = "Cisco-IOS-XE-cfm-oper";
}

CfmStatistics::~CfmStatistics()
{
}

bool CfmStatistics::has_data() const
{
    return (cfm_meps_ !=  nullptr && cfm_meps_->has_data());
}

bool CfmStatistics::has_operation() const
{
    return is_set(operation)
	|| (cfm_meps_ !=  nullptr && cfm_meps_->has_operation());
}

std::string CfmStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-cfm-oper:cfm-statistics";

    return path_buffer.str();

}

const EntityPath CfmStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CfmStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cfm-meps")
    {
        if(cfm_meps_ == nullptr)
        {
            cfm_meps_ = std::make_shared<CfmStatistics::CfmMeps>();
        }
        return cfm_meps_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CfmStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cfm_meps_ != nullptr)
    {
        children["cfm-meps"] = cfm_meps_;
    }

    return children;
}

void CfmStatistics::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CfmStatistics::clone_ptr() const
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

CfmStatistics::CfmMeps::CfmMeps()
{
    yang_name = "cfm-meps"; yang_parent_name = "cfm-statistics";
}

CfmStatistics::CfmMeps::~CfmMeps()
{
}

bool CfmStatistics::CfmMeps::has_data() const
{
    for (std::size_t index=0; index<cfm_mep_.size(); index++)
    {
        if(cfm_mep_[index]->has_data())
            return true;
    }
    return false;
}

bool CfmStatistics::CfmMeps::has_operation() const
{
    for (std::size_t index=0; index<cfm_mep_.size(); index++)
    {
        if(cfm_mep_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CfmStatistics::CfmMeps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cfm-meps";

    return path_buffer.str();

}

const EntityPath CfmStatistics::CfmMeps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-cfm-oper:cfm-statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CfmStatistics::CfmMeps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cfm-mep")
    {
        for(auto const & c : cfm_mep_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CfmStatistics::CfmMeps::CfmMep>();
        c->parent = this;
        cfm_mep_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CfmStatistics::CfmMeps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cfm_mep_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CfmStatistics::CfmMeps::set_value(const std::string & value_path, std::string value)
{
}

CfmStatistics::CfmMeps::CfmMep::CfmMep()
    :
    domain_name{YType::str, "domain-name"},
    ma_name{YType::str, "ma-name"},
    mpid{YType::uint32, "mpid"},
    ccm_seq_errors{YType::uint64, "ccm-seq-errors"},
    ccm_transmitted{YType::uint64, "ccm-transmitted"},
    lbr_received_bad{YType::uint64, "lbr-received-bad"},
    lbr_received_ok{YType::uint64, "lbr-received-ok"},
    lbr_seq_errors{YType::uint64, "lbr-seq-errors"},
    lbr_transmitted{YType::uint64, "lbr-transmitted"},
    ltr_unexpected{YType::uint64, "ltr-unexpected"}
    	,
    last_cleared_(std::make_shared<CfmStatistics::CfmMeps::CfmMep::LastCleared>())
{
    last_cleared_->parent = this;

    yang_name = "cfm-mep"; yang_parent_name = "cfm-meps";
}

CfmStatistics::CfmMeps::CfmMep::~CfmMep()
{
}

bool CfmStatistics::CfmMeps::CfmMep::has_data() const
{
    return domain_name.is_set
	|| ma_name.is_set
	|| mpid.is_set
	|| ccm_seq_errors.is_set
	|| ccm_transmitted.is_set
	|| lbr_received_bad.is_set
	|| lbr_received_ok.is_set
	|| lbr_seq_errors.is_set
	|| lbr_transmitted.is_set
	|| ltr_unexpected.is_set
	|| (last_cleared_ !=  nullptr && last_cleared_->has_data());
}

bool CfmStatistics::CfmMeps::CfmMep::has_operation() const
{
    return is_set(operation)
	|| is_set(domain_name.operation)
	|| is_set(ma_name.operation)
	|| is_set(mpid.operation)
	|| is_set(ccm_seq_errors.operation)
	|| is_set(ccm_transmitted.operation)
	|| is_set(lbr_received_bad.operation)
	|| is_set(lbr_received_ok.operation)
	|| is_set(lbr_seq_errors.operation)
	|| is_set(lbr_transmitted.operation)
	|| is_set(ltr_unexpected.operation)
	|| (last_cleared_ !=  nullptr && last_cleared_->has_operation());
}

std::string CfmStatistics::CfmMeps::CfmMep::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cfm-mep" <<"[domain-name='" <<domain_name <<"']" <<"[ma-name='" <<ma_name <<"']" <<"[mpid='" <<mpid <<"']";

    return path_buffer.str();

}

const EntityPath CfmStatistics::CfmMeps::CfmMep::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-cfm-oper:cfm-statistics/cfm-meps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_name.is_set || is_set(domain_name.operation)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (ma_name.is_set || is_set(ma_name.operation)) leaf_name_data.push_back(ma_name.get_name_leafdata());
    if (mpid.is_set || is_set(mpid.operation)) leaf_name_data.push_back(mpid.get_name_leafdata());
    if (ccm_seq_errors.is_set || is_set(ccm_seq_errors.operation)) leaf_name_data.push_back(ccm_seq_errors.get_name_leafdata());
    if (ccm_transmitted.is_set || is_set(ccm_transmitted.operation)) leaf_name_data.push_back(ccm_transmitted.get_name_leafdata());
    if (lbr_received_bad.is_set || is_set(lbr_received_bad.operation)) leaf_name_data.push_back(lbr_received_bad.get_name_leafdata());
    if (lbr_received_ok.is_set || is_set(lbr_received_ok.operation)) leaf_name_data.push_back(lbr_received_ok.get_name_leafdata());
    if (lbr_seq_errors.is_set || is_set(lbr_seq_errors.operation)) leaf_name_data.push_back(lbr_seq_errors.get_name_leafdata());
    if (lbr_transmitted.is_set || is_set(lbr_transmitted.operation)) leaf_name_data.push_back(lbr_transmitted.get_name_leafdata());
    if (ltr_unexpected.is_set || is_set(ltr_unexpected.operation)) leaf_name_data.push_back(ltr_unexpected.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CfmStatistics::CfmMeps::CfmMep::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-cleared")
    {
        if(last_cleared_ == nullptr)
        {
            last_cleared_ = std::make_shared<CfmStatistics::CfmMeps::CfmMep::LastCleared>();
        }
        return last_cleared_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CfmStatistics::CfmMeps::CfmMep::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(last_cleared_ != nullptr)
    {
        children["last-cleared"] = last_cleared_;
    }

    return children;
}

void CfmStatistics::CfmMeps::CfmMep::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "domain-name")
    {
        domain_name = value;
    }
    if(value_path == "ma-name")
    {
        ma_name = value;
    }
    if(value_path == "mpid")
    {
        mpid = value;
    }
    if(value_path == "ccm-seq-errors")
    {
        ccm_seq_errors = value;
    }
    if(value_path == "ccm-transmitted")
    {
        ccm_transmitted = value;
    }
    if(value_path == "lbr-received-bad")
    {
        lbr_received_bad = value;
    }
    if(value_path == "lbr-received-ok")
    {
        lbr_received_ok = value;
    }
    if(value_path == "lbr-seq-errors")
    {
        lbr_seq_errors = value;
    }
    if(value_path == "lbr-transmitted")
    {
        lbr_transmitted = value;
    }
    if(value_path == "ltr-unexpected")
    {
        ltr_unexpected = value;
    }
}

CfmStatistics::CfmMeps::CfmMep::LastCleared::LastCleared()
    :
    never{YType::empty, "never"},
    time{YType::str, "time"}
{
    yang_name = "last-cleared"; yang_parent_name = "cfm-mep";
}

CfmStatistics::CfmMeps::CfmMep::LastCleared::~LastCleared()
{
}

bool CfmStatistics::CfmMeps::CfmMep::LastCleared::has_data() const
{
    return never.is_set
	|| time.is_set;
}

bool CfmStatistics::CfmMeps::CfmMep::LastCleared::has_operation() const
{
    return is_set(operation)
	|| is_set(never.operation)
	|| is_set(time.operation);
}

std::string CfmStatistics::CfmMeps::CfmMep::LastCleared::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-cleared";

    return path_buffer.str();

}

const EntityPath CfmStatistics::CfmMeps::CfmMep::LastCleared::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastCleared' in Cisco_IOS_XE_cfm_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (never.is_set || is_set(never.operation)) leaf_name_data.push_back(never.get_name_leafdata());
    if (time.is_set || is_set(time.operation)) leaf_name_data.push_back(time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CfmStatistics::CfmMeps::CfmMep::LastCleared::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CfmStatistics::CfmMeps::CfmMep::LastCleared::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CfmStatistics::CfmMeps::CfmMep::LastCleared::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "never")
    {
        never = value;
    }
    if(value_path == "time")
    {
        time = value;
    }
}

const Enum::YLeaf CfmLastClearedTypeEnum::never_cleared {0, "never-cleared"};
const Enum::YLeaf CfmLastClearedTypeEnum::cleared_before {1, "cleared-before"};


}
}

