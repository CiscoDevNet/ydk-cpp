
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_BGP_POLICY_ACCOUNTING_MIB.hpp"

namespace ydk {
namespace CISCO_BGP_POLICY_ACCOUNTING_MIB {

CiscoBgpPolicyAccountingMib::CiscoBgpPolicyAccountingMib()
    :
    cbpaccttable_(std::make_shared<CiscoBgpPolicyAccountingMib::Cbpaccttable>())
{
    cbpaccttable_->parent = this;

    yang_name = "CISCO-BGP-POLICY-ACCOUNTING-MIB"; yang_parent_name = "CISCO-BGP-POLICY-ACCOUNTING-MIB";
}

CiscoBgpPolicyAccountingMib::~CiscoBgpPolicyAccountingMib()
{
}

bool CiscoBgpPolicyAccountingMib::has_data() const
{
    return (cbpaccttable_ !=  nullptr && cbpaccttable_->has_data());
}

bool CiscoBgpPolicyAccountingMib::has_operation() const
{
    return is_set(operation)
	|| (cbpaccttable_ !=  nullptr && cbpaccttable_->has_operation());
}

std::string CiscoBgpPolicyAccountingMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-BGP-POLICY-ACCOUNTING-MIB:CISCO-BGP-POLICY-ACCOUNTING-MIB";

    return path_buffer.str();

}

const EntityPath CiscoBgpPolicyAccountingMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoBgpPolicyAccountingMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cbpAcctTable")
    {
        if(cbpaccttable_ == nullptr)
        {
            cbpaccttable_ = std::make_shared<CiscoBgpPolicyAccountingMib::Cbpaccttable>();
        }
        return cbpaccttable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoBgpPolicyAccountingMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cbpaccttable_ != nullptr)
    {
        children["cbpAcctTable"] = cbpaccttable_;
    }

    return children;
}

void CiscoBgpPolicyAccountingMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CiscoBgpPolicyAccountingMib::clone_ptr() const
{
    return std::make_shared<CiscoBgpPolicyAccountingMib>();
}

std::string CiscoBgpPolicyAccountingMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoBgpPolicyAccountingMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoBgpPolicyAccountingMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CiscoBgpPolicyAccountingMib::Cbpaccttable::Cbpaccttable()
{
    yang_name = "cbpAcctTable"; yang_parent_name = "CISCO-BGP-POLICY-ACCOUNTING-MIB";
}

CiscoBgpPolicyAccountingMib::Cbpaccttable::~Cbpaccttable()
{
}

bool CiscoBgpPolicyAccountingMib::Cbpaccttable::has_data() const
{
    for (std::size_t index=0; index<cbpacctentry_.size(); index++)
    {
        if(cbpacctentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoBgpPolicyAccountingMib::Cbpaccttable::has_operation() const
{
    for (std::size_t index=0; index<cbpacctentry_.size(); index++)
    {
        if(cbpacctentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoBgpPolicyAccountingMib::Cbpaccttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbpAcctTable";

    return path_buffer.str();

}

const EntityPath CiscoBgpPolicyAccountingMib::Cbpaccttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-BGP-POLICY-ACCOUNTING-MIB:CISCO-BGP-POLICY-ACCOUNTING-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoBgpPolicyAccountingMib::Cbpaccttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cbpAcctEntry")
    {
        for(auto const & c : cbpacctentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoBgpPolicyAccountingMib::Cbpaccttable::Cbpacctentry>();
        c->parent = this;
        cbpacctentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoBgpPolicyAccountingMib::Cbpaccttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cbpacctentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoBgpPolicyAccountingMib::Cbpaccttable::set_value(const std::string & value_path, std::string value)
{
}

CiscoBgpPolicyAccountingMib::Cbpaccttable::Cbpacctentry::Cbpacctentry()
    :
    ifindex{YType::str, "ifIndex"},
    cbpaccttrafficindex{YType::int32, "cbpAcctTrafficIndex"},
    cbpacctinoctetcount{YType::uint64, "cbpAcctInOctetCount"},
    cbpacctinpacketcount{YType::uint64, "cbpAcctInPacketCount"},
    cbpacctoutoctetcount{YType::uint64, "cbpAcctOutOctetCount"},
    cbpacctoutpacketcount{YType::uint64, "cbpAcctOutPacketCount"}
{
    yang_name = "cbpAcctEntry"; yang_parent_name = "cbpAcctTable";
}

CiscoBgpPolicyAccountingMib::Cbpaccttable::Cbpacctentry::~Cbpacctentry()
{
}

bool CiscoBgpPolicyAccountingMib::Cbpaccttable::Cbpacctentry::has_data() const
{
    return ifindex.is_set
	|| cbpaccttrafficindex.is_set
	|| cbpacctinoctetcount.is_set
	|| cbpacctinpacketcount.is_set
	|| cbpacctoutoctetcount.is_set
	|| cbpacctoutpacketcount.is_set;
}

bool CiscoBgpPolicyAccountingMib::Cbpaccttable::Cbpacctentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(cbpaccttrafficindex.operation)
	|| is_set(cbpacctinoctetcount.operation)
	|| is_set(cbpacctinpacketcount.operation)
	|| is_set(cbpacctoutoctetcount.operation)
	|| is_set(cbpacctoutpacketcount.operation);
}

std::string CiscoBgpPolicyAccountingMib::Cbpaccttable::Cbpacctentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbpAcctEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[cbpAcctTrafficIndex='" <<cbpaccttrafficindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoBgpPolicyAccountingMib::Cbpaccttable::Cbpacctentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-BGP-POLICY-ACCOUNTING-MIB:CISCO-BGP-POLICY-ACCOUNTING-MIB/cbpAcctTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cbpaccttrafficindex.is_set || is_set(cbpaccttrafficindex.operation)) leaf_name_data.push_back(cbpaccttrafficindex.get_name_leafdata());
    if (cbpacctinoctetcount.is_set || is_set(cbpacctinoctetcount.operation)) leaf_name_data.push_back(cbpacctinoctetcount.get_name_leafdata());
    if (cbpacctinpacketcount.is_set || is_set(cbpacctinpacketcount.operation)) leaf_name_data.push_back(cbpacctinpacketcount.get_name_leafdata());
    if (cbpacctoutoctetcount.is_set || is_set(cbpacctoutoctetcount.operation)) leaf_name_data.push_back(cbpacctoutoctetcount.get_name_leafdata());
    if (cbpacctoutpacketcount.is_set || is_set(cbpacctoutpacketcount.operation)) leaf_name_data.push_back(cbpacctoutpacketcount.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoBgpPolicyAccountingMib::Cbpaccttable::Cbpacctentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoBgpPolicyAccountingMib::Cbpaccttable::Cbpacctentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoBgpPolicyAccountingMib::Cbpaccttable::Cbpacctentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "cbpAcctTrafficIndex")
    {
        cbpaccttrafficindex = value;
    }
    if(value_path == "cbpAcctInOctetCount")
    {
        cbpacctinoctetcount = value;
    }
    if(value_path == "cbpAcctInPacketCount")
    {
        cbpacctinpacketcount = value;
    }
    if(value_path == "cbpAcctOutOctetCount")
    {
        cbpacctoutoctetcount = value;
    }
    if(value_path == "cbpAcctOutPacketCount")
    {
        cbpacctoutpacketcount = value;
    }
}


}
}

