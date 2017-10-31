
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_BGP_POLICY_ACCOUNTING_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_BGP_POLICY_ACCOUNTING_MIB {

CISCOBGPPOLICYACCOUNTINGMIB::CISCOBGPPOLICYACCOUNTINGMIB()
    :
    cbpaccttable(std::make_shared<CISCOBGPPOLICYACCOUNTINGMIB::Cbpaccttable>())
{
    cbpaccttable->parent = this;

    yang_name = "CISCO-BGP-POLICY-ACCOUNTING-MIB"; yang_parent_name = "CISCO-BGP-POLICY-ACCOUNTING-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

CISCOBGPPOLICYACCOUNTINGMIB::~CISCOBGPPOLICYACCOUNTINGMIB()
{
}

bool CISCOBGPPOLICYACCOUNTINGMIB::has_data() const
{
    return (cbpaccttable !=  nullptr && cbpaccttable->has_data());
}

bool CISCOBGPPOLICYACCOUNTINGMIB::has_operation() const
{
    return is_set(yfilter)
	|| (cbpaccttable !=  nullptr && cbpaccttable->has_operation());
}

std::string CISCOBGPPOLICYACCOUNTINGMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-BGP-POLICY-ACCOUNTING-MIB:CISCO-BGP-POLICY-ACCOUNTING-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOBGPPOLICYACCOUNTINGMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOBGPPOLICYACCOUNTINGMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cbpAcctTable")
    {
        if(cbpaccttable == nullptr)
        {
            cbpaccttable = std::make_shared<CISCOBGPPOLICYACCOUNTINGMIB::Cbpaccttable>();
        }
        return cbpaccttable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOBGPPOLICYACCOUNTINGMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cbpaccttable != nullptr)
    {
        children["cbpAcctTable"] = cbpaccttable;
    }

    return children;
}

void CISCOBGPPOLICYACCOUNTINGMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOBGPPOLICYACCOUNTINGMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOBGPPOLICYACCOUNTINGMIB::clone_ptr() const
{
    return std::make_shared<CISCOBGPPOLICYACCOUNTINGMIB>();
}

std::string CISCOBGPPOLICYACCOUNTINGMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOBGPPOLICYACCOUNTINGMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOBGPPOLICYACCOUNTINGMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOBGPPOLICYACCOUNTINGMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOBGPPOLICYACCOUNTINGMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbpAcctTable")
        return true;
    return false;
}

CISCOBGPPOLICYACCOUNTINGMIB::Cbpaccttable::Cbpaccttable()
{

    yang_name = "cbpAcctTable"; yang_parent_name = "CISCO-BGP-POLICY-ACCOUNTING-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOBGPPOLICYACCOUNTINGMIB::Cbpaccttable::~Cbpaccttable()
{
}

bool CISCOBGPPOLICYACCOUNTINGMIB::Cbpaccttable::has_data() const
{
    for (std::size_t index=0; index<cbpacctentry.size(); index++)
    {
        if(cbpacctentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOBGPPOLICYACCOUNTINGMIB::Cbpaccttable::has_operation() const
{
    for (std::size_t index=0; index<cbpacctentry.size(); index++)
    {
        if(cbpacctentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOBGPPOLICYACCOUNTINGMIB::Cbpaccttable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-BGP-POLICY-ACCOUNTING-MIB:CISCO-BGP-POLICY-ACCOUNTING-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOBGPPOLICYACCOUNTINGMIB::Cbpaccttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbpAcctTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOBGPPOLICYACCOUNTINGMIB::Cbpaccttable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOBGPPOLICYACCOUNTINGMIB::Cbpaccttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cbpAcctEntry")
    {
        for(auto const & c : cbpacctentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CISCOBGPPOLICYACCOUNTINGMIB::Cbpaccttable::Cbpacctentry>();
        c->parent = this;
        cbpacctentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOBGPPOLICYACCOUNTINGMIB::Cbpaccttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cbpacctentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOBGPPOLICYACCOUNTINGMIB::Cbpaccttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOBGPPOLICYACCOUNTINGMIB::Cbpaccttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOBGPPOLICYACCOUNTINGMIB::Cbpaccttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cbpAcctEntry")
        return true;
    return false;
}

CISCOBGPPOLICYACCOUNTINGMIB::Cbpaccttable::Cbpacctentry::Cbpacctentry()
    :
    ifindex{YType::str, "ifIndex"},
    cbpaccttrafficindex{YType::int32, "cbpAcctTrafficIndex"},
    cbpacctinpacketcount{YType::uint64, "cbpAcctInPacketCount"},
    cbpacctinoctetcount{YType::uint64, "cbpAcctInOctetCount"},
    cbpacctoutpacketcount{YType::uint64, "cbpAcctOutPacketCount"},
    cbpacctoutoctetcount{YType::uint64, "cbpAcctOutOctetCount"}
{

    yang_name = "cbpAcctEntry"; yang_parent_name = "cbpAcctTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOBGPPOLICYACCOUNTINGMIB::Cbpaccttable::Cbpacctentry::~Cbpacctentry()
{
}

bool CISCOBGPPOLICYACCOUNTINGMIB::Cbpaccttable::Cbpacctentry::has_data() const
{
    return ifindex.is_set
	|| cbpaccttrafficindex.is_set
	|| cbpacctinpacketcount.is_set
	|| cbpacctinoctetcount.is_set
	|| cbpacctoutpacketcount.is_set
	|| cbpacctoutoctetcount.is_set;
}

bool CISCOBGPPOLICYACCOUNTINGMIB::Cbpaccttable::Cbpacctentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cbpaccttrafficindex.yfilter)
	|| ydk::is_set(cbpacctinpacketcount.yfilter)
	|| ydk::is_set(cbpacctinoctetcount.yfilter)
	|| ydk::is_set(cbpacctoutpacketcount.yfilter)
	|| ydk::is_set(cbpacctoutoctetcount.yfilter);
}

std::string CISCOBGPPOLICYACCOUNTINGMIB::Cbpaccttable::Cbpacctentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-BGP-POLICY-ACCOUNTING-MIB:CISCO-BGP-POLICY-ACCOUNTING-MIB/cbpAcctTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOBGPPOLICYACCOUNTINGMIB::Cbpaccttable::Cbpacctentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cbpAcctEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[cbpAcctTrafficIndex='" <<cbpaccttrafficindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOBGPPOLICYACCOUNTINGMIB::Cbpaccttable::Cbpacctentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cbpaccttrafficindex.is_set || is_set(cbpaccttrafficindex.yfilter)) leaf_name_data.push_back(cbpaccttrafficindex.get_name_leafdata());
    if (cbpacctinpacketcount.is_set || is_set(cbpacctinpacketcount.yfilter)) leaf_name_data.push_back(cbpacctinpacketcount.get_name_leafdata());
    if (cbpacctinoctetcount.is_set || is_set(cbpacctinoctetcount.yfilter)) leaf_name_data.push_back(cbpacctinoctetcount.get_name_leafdata());
    if (cbpacctoutpacketcount.is_set || is_set(cbpacctoutpacketcount.yfilter)) leaf_name_data.push_back(cbpacctoutpacketcount.get_name_leafdata());
    if (cbpacctoutoctetcount.is_set || is_set(cbpacctoutoctetcount.yfilter)) leaf_name_data.push_back(cbpacctoutoctetcount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOBGPPOLICYACCOUNTINGMIB::Cbpaccttable::Cbpacctentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOBGPPOLICYACCOUNTINGMIB::Cbpaccttable::Cbpacctentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOBGPPOLICYACCOUNTINGMIB::Cbpaccttable::Cbpacctentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbpAcctTrafficIndex")
    {
        cbpaccttrafficindex = value;
        cbpaccttrafficindex.value_namespace = name_space;
        cbpaccttrafficindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbpAcctInPacketCount")
    {
        cbpacctinpacketcount = value;
        cbpacctinpacketcount.value_namespace = name_space;
        cbpacctinpacketcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbpAcctInOctetCount")
    {
        cbpacctinoctetcount = value;
        cbpacctinoctetcount.value_namespace = name_space;
        cbpacctinoctetcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbpAcctOutPacketCount")
    {
        cbpacctoutpacketcount = value;
        cbpacctoutpacketcount.value_namespace = name_space;
        cbpacctoutpacketcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cbpAcctOutOctetCount")
    {
        cbpacctoutoctetcount = value;
        cbpacctoutoctetcount.value_namespace = name_space;
        cbpacctoutoctetcount.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOBGPPOLICYACCOUNTINGMIB::Cbpaccttable::Cbpacctentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cbpAcctTrafficIndex")
    {
        cbpaccttrafficindex.yfilter = yfilter;
    }
    if(value_path == "cbpAcctInPacketCount")
    {
        cbpacctinpacketcount.yfilter = yfilter;
    }
    if(value_path == "cbpAcctInOctetCount")
    {
        cbpacctinoctetcount.yfilter = yfilter;
    }
    if(value_path == "cbpAcctOutPacketCount")
    {
        cbpacctoutpacketcount.yfilter = yfilter;
    }
    if(value_path == "cbpAcctOutOctetCount")
    {
        cbpacctoutoctetcount.yfilter = yfilter;
    }
}

bool CISCOBGPPOLICYACCOUNTINGMIB::Cbpaccttable::Cbpacctentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cbpAcctTrafficIndex" || name == "cbpAcctInPacketCount" || name == "cbpAcctInOctetCount" || name == "cbpAcctOutPacketCount" || name == "cbpAcctOutOctetCount")
        return true;
    return false;
}


}
}

