
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IPSEC_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_IPSEC_MIB {

CiscoIpsecMib::CiscoIpsecMib()
    :
    cipscryptomapsetiftable(std::make_shared<CiscoIpsecMib::Cipscryptomapsetiftable>())
	,cipsdynamiccryptomapsettable(std::make_shared<CiscoIpsecMib::Cipsdynamiccryptomapsettable>())
	,cipsipsecglobals(std::make_shared<CiscoIpsecMib::Cipsipsecglobals>())
	,cipsipsecstatistics(std::make_shared<CiscoIpsecMib::Cipsipsecstatistics>())
	,cipsisakmpgroup(std::make_shared<CiscoIpsecMib::Cipsisakmpgroup>())
	,cipsisakmppolicytable(std::make_shared<CiscoIpsecMib::Cipsisakmppolicytable>())
	,cipsstaticcryptomapsettable(std::make_shared<CiscoIpsecMib::Cipsstaticcryptomapsettable>())
	,cipsstaticcryptomaptable(std::make_shared<CiscoIpsecMib::Cipsstaticcryptomaptable>())
	,cipssyscapacitygroup(std::make_shared<CiscoIpsecMib::Cipssyscapacitygroup>())
	,cipstrapcntlgroup(std::make_shared<CiscoIpsecMib::Cipstrapcntlgroup>())
{
    cipscryptomapsetiftable->parent = this;

    cipsdynamiccryptomapsettable->parent = this;

    cipsipsecglobals->parent = this;

    cipsipsecstatistics->parent = this;

    cipsisakmpgroup->parent = this;

    cipsisakmppolicytable->parent = this;

    cipsstaticcryptomapsettable->parent = this;

    cipsstaticcryptomaptable->parent = this;

    cipssyscapacitygroup->parent = this;

    cipstrapcntlgroup->parent = this;

    yang_name = "CISCO-IPSEC-MIB"; yang_parent_name = "CISCO-IPSEC-MIB";
}

CiscoIpsecMib::~CiscoIpsecMib()
{
}

bool CiscoIpsecMib::has_data() const
{
    return (cipscryptomapsetiftable !=  nullptr && cipscryptomapsetiftable->has_data())
	|| (cipsdynamiccryptomapsettable !=  nullptr && cipsdynamiccryptomapsettable->has_data())
	|| (cipsipsecglobals !=  nullptr && cipsipsecglobals->has_data())
	|| (cipsipsecstatistics !=  nullptr && cipsipsecstatistics->has_data())
	|| (cipsisakmpgroup !=  nullptr && cipsisakmpgroup->has_data())
	|| (cipsisakmppolicytable !=  nullptr && cipsisakmppolicytable->has_data())
	|| (cipsstaticcryptomapsettable !=  nullptr && cipsstaticcryptomapsettable->has_data())
	|| (cipsstaticcryptomaptable !=  nullptr && cipsstaticcryptomaptable->has_data())
	|| (cipssyscapacitygroup !=  nullptr && cipssyscapacitygroup->has_data())
	|| (cipstrapcntlgroup !=  nullptr && cipstrapcntlgroup->has_data());
}

bool CiscoIpsecMib::has_operation() const
{
    return is_set(yfilter)
	|| (cipscryptomapsetiftable !=  nullptr && cipscryptomapsetiftable->has_operation())
	|| (cipsdynamiccryptomapsettable !=  nullptr && cipsdynamiccryptomapsettable->has_operation())
	|| (cipsipsecglobals !=  nullptr && cipsipsecglobals->has_operation())
	|| (cipsipsecstatistics !=  nullptr && cipsipsecstatistics->has_operation())
	|| (cipsisakmpgroup !=  nullptr && cipsisakmpgroup->has_operation())
	|| (cipsisakmppolicytable !=  nullptr && cipsisakmppolicytable->has_operation())
	|| (cipsstaticcryptomapsettable !=  nullptr && cipsstaticcryptomapsettable->has_operation())
	|| (cipsstaticcryptomaptable !=  nullptr && cipsstaticcryptomaptable->has_operation())
	|| (cipssyscapacitygroup !=  nullptr && cipssyscapacitygroup->has_operation())
	|| (cipstrapcntlgroup !=  nullptr && cipstrapcntlgroup->has_operation());
}

std::string CiscoIpsecMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSEC-MIB:CISCO-IPSEC-MIB";

    return path_buffer.str();

}

const EntityPath CiscoIpsecMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoIpsecMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipsCryptomapSetIfTable")
    {
        if(cipscryptomapsetiftable == nullptr)
        {
            cipscryptomapsetiftable = std::make_shared<CiscoIpsecMib::Cipscryptomapsetiftable>();
        }
        return cipscryptomapsetiftable;
    }

    if(child_yang_name == "cipsDynamicCryptomapSetTable")
    {
        if(cipsdynamiccryptomapsettable == nullptr)
        {
            cipsdynamiccryptomapsettable = std::make_shared<CiscoIpsecMib::Cipsdynamiccryptomapsettable>();
        }
        return cipsdynamiccryptomapsettable;
    }

    if(child_yang_name == "cipsIPsecGlobals")
    {
        if(cipsipsecglobals == nullptr)
        {
            cipsipsecglobals = std::make_shared<CiscoIpsecMib::Cipsipsecglobals>();
        }
        return cipsipsecglobals;
    }

    if(child_yang_name == "cipsIPsecStatistics")
    {
        if(cipsipsecstatistics == nullptr)
        {
            cipsipsecstatistics = std::make_shared<CiscoIpsecMib::Cipsipsecstatistics>();
        }
        return cipsipsecstatistics;
    }

    if(child_yang_name == "cipsIsakmpGroup")
    {
        if(cipsisakmpgroup == nullptr)
        {
            cipsisakmpgroup = std::make_shared<CiscoIpsecMib::Cipsisakmpgroup>();
        }
        return cipsisakmpgroup;
    }

    if(child_yang_name == "cipsIsakmpPolicyTable")
    {
        if(cipsisakmppolicytable == nullptr)
        {
            cipsisakmppolicytable = std::make_shared<CiscoIpsecMib::Cipsisakmppolicytable>();
        }
        return cipsisakmppolicytable;
    }

    if(child_yang_name == "cipsStaticCryptomapSetTable")
    {
        if(cipsstaticcryptomapsettable == nullptr)
        {
            cipsstaticcryptomapsettable = std::make_shared<CiscoIpsecMib::Cipsstaticcryptomapsettable>();
        }
        return cipsstaticcryptomapsettable;
    }

    if(child_yang_name == "cipsStaticCryptomapTable")
    {
        if(cipsstaticcryptomaptable == nullptr)
        {
            cipsstaticcryptomaptable = std::make_shared<CiscoIpsecMib::Cipsstaticcryptomaptable>();
        }
        return cipsstaticcryptomaptable;
    }

    if(child_yang_name == "cipsSysCapacityGroup")
    {
        if(cipssyscapacitygroup == nullptr)
        {
            cipssyscapacitygroup = std::make_shared<CiscoIpsecMib::Cipssyscapacitygroup>();
        }
        return cipssyscapacitygroup;
    }

    if(child_yang_name == "cipsTrapCntlGroup")
    {
        if(cipstrapcntlgroup == nullptr)
        {
            cipstrapcntlgroup = std::make_shared<CiscoIpsecMib::Cipstrapcntlgroup>();
        }
        return cipstrapcntlgroup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpsecMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cipscryptomapsetiftable != nullptr)
    {
        children["cipsCryptomapSetIfTable"] = cipscryptomapsetiftable;
    }

    if(cipsdynamiccryptomapsettable != nullptr)
    {
        children["cipsDynamicCryptomapSetTable"] = cipsdynamiccryptomapsettable;
    }

    if(cipsipsecglobals != nullptr)
    {
        children["cipsIPsecGlobals"] = cipsipsecglobals;
    }

    if(cipsipsecstatistics != nullptr)
    {
        children["cipsIPsecStatistics"] = cipsipsecstatistics;
    }

    if(cipsisakmpgroup != nullptr)
    {
        children["cipsIsakmpGroup"] = cipsisakmpgroup;
    }

    if(cipsisakmppolicytable != nullptr)
    {
        children["cipsIsakmpPolicyTable"] = cipsisakmppolicytable;
    }

    if(cipsstaticcryptomapsettable != nullptr)
    {
        children["cipsStaticCryptomapSetTable"] = cipsstaticcryptomapsettable;
    }

    if(cipsstaticcryptomaptable != nullptr)
    {
        children["cipsStaticCryptomapTable"] = cipsstaticcryptomaptable;
    }

    if(cipssyscapacitygroup != nullptr)
    {
        children["cipsSysCapacityGroup"] = cipssyscapacitygroup;
    }

    if(cipstrapcntlgroup != nullptr)
    {
        children["cipsTrapCntlGroup"] = cipstrapcntlgroup;
    }

    return children;
}

void CiscoIpsecMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIpsecMib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CiscoIpsecMib::clone_ptr() const
{
    return std::make_shared<CiscoIpsecMib>();
}

std::string CiscoIpsecMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoIpsecMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoIpsecMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CiscoIpsecMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CiscoIpsecMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipsCryptomapSetIfTable" || name == "cipsDynamicCryptomapSetTable" || name == "cipsIPsecGlobals" || name == "cipsIPsecStatistics" || name == "cipsIsakmpGroup" || name == "cipsIsakmpPolicyTable" || name == "cipsStaticCryptomapSetTable" || name == "cipsStaticCryptomapTable" || name == "cipsSysCapacityGroup" || name == "cipsTrapCntlGroup")
        return true;
    return false;
}

CiscoIpsecMib::Cipsisakmpgroup::Cipsisakmpgroup()
    :
    cipsisakmpenabled{YType::boolean, "cipsIsakmpEnabled"},
    cipsisakmpidentity{YType::enumeration, "cipsIsakmpIdentity"},
    cipsisakmpkeepaliveinterval{YType::int32, "cipsIsakmpKeepaliveInterval"},
    cipsnumisakmppolicies{YType::int32, "cipsNumIsakmpPolicies"}
{
    yang_name = "cipsIsakmpGroup"; yang_parent_name = "CISCO-IPSEC-MIB";
}

CiscoIpsecMib::Cipsisakmpgroup::~Cipsisakmpgroup()
{
}

bool CiscoIpsecMib::Cipsisakmpgroup::has_data() const
{
    return cipsisakmpenabled.is_set
	|| cipsisakmpidentity.is_set
	|| cipsisakmpkeepaliveinterval.is_set
	|| cipsnumisakmppolicies.is_set;
}

bool CiscoIpsecMib::Cipsisakmpgroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cipsisakmpenabled.yfilter)
	|| ydk::is_set(cipsisakmpidentity.yfilter)
	|| ydk::is_set(cipsisakmpkeepaliveinterval.yfilter)
	|| ydk::is_set(cipsnumisakmppolicies.yfilter);
}

std::string CiscoIpsecMib::Cipsisakmpgroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipsIsakmpGroup";

    return path_buffer.str();

}

const EntityPath CiscoIpsecMib::Cipsisakmpgroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSEC-MIB:CISCO-IPSEC-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipsisakmpenabled.is_set || is_set(cipsisakmpenabled.yfilter)) leaf_name_data.push_back(cipsisakmpenabled.get_name_leafdata());
    if (cipsisakmpidentity.is_set || is_set(cipsisakmpidentity.yfilter)) leaf_name_data.push_back(cipsisakmpidentity.get_name_leafdata());
    if (cipsisakmpkeepaliveinterval.is_set || is_set(cipsisakmpkeepaliveinterval.yfilter)) leaf_name_data.push_back(cipsisakmpkeepaliveinterval.get_name_leafdata());
    if (cipsnumisakmppolicies.is_set || is_set(cipsnumisakmppolicies.yfilter)) leaf_name_data.push_back(cipsnumisakmppolicies.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpsecMib::Cipsisakmpgroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpsecMib::Cipsisakmpgroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpsecMib::Cipsisakmpgroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cipsIsakmpEnabled")
    {
        cipsisakmpenabled = value;
        cipsisakmpenabled.value_namespace = name_space;
        cipsisakmpenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsIsakmpIdentity")
    {
        cipsisakmpidentity = value;
        cipsisakmpidentity.value_namespace = name_space;
        cipsisakmpidentity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsIsakmpKeepaliveInterval")
    {
        cipsisakmpkeepaliveinterval = value;
        cipsisakmpkeepaliveinterval.value_namespace = name_space;
        cipsisakmpkeepaliveinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsNumIsakmpPolicies")
    {
        cipsnumisakmppolicies = value;
        cipsnumisakmppolicies.value_namespace = name_space;
        cipsnumisakmppolicies.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIpsecMib::Cipsisakmpgroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cipsIsakmpEnabled")
    {
        cipsisakmpenabled.yfilter = yfilter;
    }
    if(value_path == "cipsIsakmpIdentity")
    {
        cipsisakmpidentity.yfilter = yfilter;
    }
    if(value_path == "cipsIsakmpKeepaliveInterval")
    {
        cipsisakmpkeepaliveinterval.yfilter = yfilter;
    }
    if(value_path == "cipsNumIsakmpPolicies")
    {
        cipsnumisakmppolicies.yfilter = yfilter;
    }
}

bool CiscoIpsecMib::Cipsisakmpgroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipsIsakmpEnabled" || name == "cipsIsakmpIdentity" || name == "cipsIsakmpKeepaliveInterval" || name == "cipsNumIsakmpPolicies")
        return true;
    return false;
}

CiscoIpsecMib::Cipsipsecglobals::Cipsipsecglobals()
    :
    cipsnumcetcryptomapsets{YType::uint32, "cipsNumCETCryptomapSets"},
    cipsnumdynamiccryptomapsets{YType::uint32, "cipsNumDynamicCryptomapSets"},
    cipsnumstaticcryptomapsets{YType::uint32, "cipsNumStaticCryptomapSets"},
    cipsnumtedcryptomapsets{YType::uint32, "cipsNumTEDCryptomapSets"},
    cipssalifesize{YType::uint32, "cipsSALifesize"},
    cipssalifetime{YType::uint32, "cipsSALifetime"}
{
    yang_name = "cipsIPsecGlobals"; yang_parent_name = "CISCO-IPSEC-MIB";
}

CiscoIpsecMib::Cipsipsecglobals::~Cipsipsecglobals()
{
}

bool CiscoIpsecMib::Cipsipsecglobals::has_data() const
{
    return cipsnumcetcryptomapsets.is_set
	|| cipsnumdynamiccryptomapsets.is_set
	|| cipsnumstaticcryptomapsets.is_set
	|| cipsnumtedcryptomapsets.is_set
	|| cipssalifesize.is_set
	|| cipssalifetime.is_set;
}

bool CiscoIpsecMib::Cipsipsecglobals::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cipsnumcetcryptomapsets.yfilter)
	|| ydk::is_set(cipsnumdynamiccryptomapsets.yfilter)
	|| ydk::is_set(cipsnumstaticcryptomapsets.yfilter)
	|| ydk::is_set(cipsnumtedcryptomapsets.yfilter)
	|| ydk::is_set(cipssalifesize.yfilter)
	|| ydk::is_set(cipssalifetime.yfilter);
}

std::string CiscoIpsecMib::Cipsipsecglobals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipsIPsecGlobals";

    return path_buffer.str();

}

const EntityPath CiscoIpsecMib::Cipsipsecglobals::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSEC-MIB:CISCO-IPSEC-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipsnumcetcryptomapsets.is_set || is_set(cipsnumcetcryptomapsets.yfilter)) leaf_name_data.push_back(cipsnumcetcryptomapsets.get_name_leafdata());
    if (cipsnumdynamiccryptomapsets.is_set || is_set(cipsnumdynamiccryptomapsets.yfilter)) leaf_name_data.push_back(cipsnumdynamiccryptomapsets.get_name_leafdata());
    if (cipsnumstaticcryptomapsets.is_set || is_set(cipsnumstaticcryptomapsets.yfilter)) leaf_name_data.push_back(cipsnumstaticcryptomapsets.get_name_leafdata());
    if (cipsnumtedcryptomapsets.is_set || is_set(cipsnumtedcryptomapsets.yfilter)) leaf_name_data.push_back(cipsnumtedcryptomapsets.get_name_leafdata());
    if (cipssalifesize.is_set || is_set(cipssalifesize.yfilter)) leaf_name_data.push_back(cipssalifesize.get_name_leafdata());
    if (cipssalifetime.is_set || is_set(cipssalifetime.yfilter)) leaf_name_data.push_back(cipssalifetime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpsecMib::Cipsipsecglobals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpsecMib::Cipsipsecglobals::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpsecMib::Cipsipsecglobals::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cipsNumCETCryptomapSets")
    {
        cipsnumcetcryptomapsets = value;
        cipsnumcetcryptomapsets.value_namespace = name_space;
        cipsnumcetcryptomapsets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsNumDynamicCryptomapSets")
    {
        cipsnumdynamiccryptomapsets = value;
        cipsnumdynamiccryptomapsets.value_namespace = name_space;
        cipsnumdynamiccryptomapsets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsNumStaticCryptomapSets")
    {
        cipsnumstaticcryptomapsets = value;
        cipsnumstaticcryptomapsets.value_namespace = name_space;
        cipsnumstaticcryptomapsets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsNumTEDCryptomapSets")
    {
        cipsnumtedcryptomapsets = value;
        cipsnumtedcryptomapsets.value_namespace = name_space;
        cipsnumtedcryptomapsets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsSALifesize")
    {
        cipssalifesize = value;
        cipssalifesize.value_namespace = name_space;
        cipssalifesize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsSALifetime")
    {
        cipssalifetime = value;
        cipssalifetime.value_namespace = name_space;
        cipssalifetime.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIpsecMib::Cipsipsecglobals::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cipsNumCETCryptomapSets")
    {
        cipsnumcetcryptomapsets.yfilter = yfilter;
    }
    if(value_path == "cipsNumDynamicCryptomapSets")
    {
        cipsnumdynamiccryptomapsets.yfilter = yfilter;
    }
    if(value_path == "cipsNumStaticCryptomapSets")
    {
        cipsnumstaticcryptomapsets.yfilter = yfilter;
    }
    if(value_path == "cipsNumTEDCryptomapSets")
    {
        cipsnumtedcryptomapsets.yfilter = yfilter;
    }
    if(value_path == "cipsSALifesize")
    {
        cipssalifesize.yfilter = yfilter;
    }
    if(value_path == "cipsSALifetime")
    {
        cipssalifetime.yfilter = yfilter;
    }
}

bool CiscoIpsecMib::Cipsipsecglobals::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipsNumCETCryptomapSets" || name == "cipsNumDynamicCryptomapSets" || name == "cipsNumStaticCryptomapSets" || name == "cipsNumTEDCryptomapSets" || name == "cipsSALifesize" || name == "cipsSALifetime")
        return true;
    return false;
}

CiscoIpsecMib::Cipsipsecstatistics::Cipsipsecstatistics()
    :
    cipsnumtedfailures{YType::uint32, "cipsNumTEDFailures"},
    cipsnumtedprobesreceived{YType::uint32, "cipsNumTEDProbesReceived"},
    cipsnumtedprobessent{YType::uint32, "cipsNumTEDProbesSent"}
{
    yang_name = "cipsIPsecStatistics"; yang_parent_name = "CISCO-IPSEC-MIB";
}

CiscoIpsecMib::Cipsipsecstatistics::~Cipsipsecstatistics()
{
}

bool CiscoIpsecMib::Cipsipsecstatistics::has_data() const
{
    return cipsnumtedfailures.is_set
	|| cipsnumtedprobesreceived.is_set
	|| cipsnumtedprobessent.is_set;
}

bool CiscoIpsecMib::Cipsipsecstatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cipsnumtedfailures.yfilter)
	|| ydk::is_set(cipsnumtedprobesreceived.yfilter)
	|| ydk::is_set(cipsnumtedprobessent.yfilter);
}

std::string CiscoIpsecMib::Cipsipsecstatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipsIPsecStatistics";

    return path_buffer.str();

}

const EntityPath CiscoIpsecMib::Cipsipsecstatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSEC-MIB:CISCO-IPSEC-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipsnumtedfailures.is_set || is_set(cipsnumtedfailures.yfilter)) leaf_name_data.push_back(cipsnumtedfailures.get_name_leafdata());
    if (cipsnumtedprobesreceived.is_set || is_set(cipsnumtedprobesreceived.yfilter)) leaf_name_data.push_back(cipsnumtedprobesreceived.get_name_leafdata());
    if (cipsnumtedprobessent.is_set || is_set(cipsnumtedprobessent.yfilter)) leaf_name_data.push_back(cipsnumtedprobessent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpsecMib::Cipsipsecstatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpsecMib::Cipsipsecstatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpsecMib::Cipsipsecstatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cipsNumTEDFailures")
    {
        cipsnumtedfailures = value;
        cipsnumtedfailures.value_namespace = name_space;
        cipsnumtedfailures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsNumTEDProbesReceived")
    {
        cipsnumtedprobesreceived = value;
        cipsnumtedprobesreceived.value_namespace = name_space;
        cipsnumtedprobesreceived.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsNumTEDProbesSent")
    {
        cipsnumtedprobessent = value;
        cipsnumtedprobessent.value_namespace = name_space;
        cipsnumtedprobessent.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIpsecMib::Cipsipsecstatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cipsNumTEDFailures")
    {
        cipsnumtedfailures.yfilter = yfilter;
    }
    if(value_path == "cipsNumTEDProbesReceived")
    {
        cipsnumtedprobesreceived.yfilter = yfilter;
    }
    if(value_path == "cipsNumTEDProbesSent")
    {
        cipsnumtedprobessent.yfilter = yfilter;
    }
}

bool CiscoIpsecMib::Cipsipsecstatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipsNumTEDFailures" || name == "cipsNumTEDProbesReceived" || name == "cipsNumTEDProbesSent")
        return true;
    return false;
}

CiscoIpsecMib::Cipssyscapacitygroup::Cipssyscapacitygroup()
    :
    cips3descapable{YType::boolean, "cips3DesCapable"},
    cipsmaxsas{YType::int32, "cipsMaxSAs"}
{
    yang_name = "cipsSysCapacityGroup"; yang_parent_name = "CISCO-IPSEC-MIB";
}

CiscoIpsecMib::Cipssyscapacitygroup::~Cipssyscapacitygroup()
{
}

bool CiscoIpsecMib::Cipssyscapacitygroup::has_data() const
{
    return cips3descapable.is_set
	|| cipsmaxsas.is_set;
}

bool CiscoIpsecMib::Cipssyscapacitygroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cips3descapable.yfilter)
	|| ydk::is_set(cipsmaxsas.yfilter);
}

std::string CiscoIpsecMib::Cipssyscapacitygroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipsSysCapacityGroup";

    return path_buffer.str();

}

const EntityPath CiscoIpsecMib::Cipssyscapacitygroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSEC-MIB:CISCO-IPSEC-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cips3descapable.is_set || is_set(cips3descapable.yfilter)) leaf_name_data.push_back(cips3descapable.get_name_leafdata());
    if (cipsmaxsas.is_set || is_set(cipsmaxsas.yfilter)) leaf_name_data.push_back(cipsmaxsas.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpsecMib::Cipssyscapacitygroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpsecMib::Cipssyscapacitygroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpsecMib::Cipssyscapacitygroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cips3DesCapable")
    {
        cips3descapable = value;
        cips3descapable.value_namespace = name_space;
        cips3descapable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsMaxSAs")
    {
        cipsmaxsas = value;
        cipsmaxsas.value_namespace = name_space;
        cipsmaxsas.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIpsecMib::Cipssyscapacitygroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cips3DesCapable")
    {
        cips3descapable.yfilter = yfilter;
    }
    if(value_path == "cipsMaxSAs")
    {
        cipsmaxsas.yfilter = yfilter;
    }
}

bool CiscoIpsecMib::Cipssyscapacitygroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cips3DesCapable" || name == "cipsMaxSAs")
        return true;
    return false;
}

CiscoIpsecMib::Cipstrapcntlgroup::Cipstrapcntlgroup()
    :
    cipscntlcryptomapadded{YType::enumeration, "cipsCntlCryptomapAdded"},
    cipscntlcryptomapdeleted{YType::enumeration, "cipsCntlCryptomapDeleted"},
    cipscntlcryptomapsetattached{YType::enumeration, "cipsCntlCryptomapSetAttached"},
    cipscntlcryptomapsetdetached{YType::enumeration, "cipsCntlCryptomapSetDetached"},
    cipscntlisakmppolicyadded{YType::enumeration, "cipsCntlIsakmpPolicyAdded"},
    cipscntlisakmppolicydeleted{YType::enumeration, "cipsCntlIsakmpPolicyDeleted"},
    cipscntltoomanysas{YType::enumeration, "cipsCntlTooManySAs"}
{
    yang_name = "cipsTrapCntlGroup"; yang_parent_name = "CISCO-IPSEC-MIB";
}

CiscoIpsecMib::Cipstrapcntlgroup::~Cipstrapcntlgroup()
{
}

bool CiscoIpsecMib::Cipstrapcntlgroup::has_data() const
{
    return cipscntlcryptomapadded.is_set
	|| cipscntlcryptomapdeleted.is_set
	|| cipscntlcryptomapsetattached.is_set
	|| cipscntlcryptomapsetdetached.is_set
	|| cipscntlisakmppolicyadded.is_set
	|| cipscntlisakmppolicydeleted.is_set
	|| cipscntltoomanysas.is_set;
}

bool CiscoIpsecMib::Cipstrapcntlgroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cipscntlcryptomapadded.yfilter)
	|| ydk::is_set(cipscntlcryptomapdeleted.yfilter)
	|| ydk::is_set(cipscntlcryptomapsetattached.yfilter)
	|| ydk::is_set(cipscntlcryptomapsetdetached.yfilter)
	|| ydk::is_set(cipscntlisakmppolicyadded.yfilter)
	|| ydk::is_set(cipscntlisakmppolicydeleted.yfilter)
	|| ydk::is_set(cipscntltoomanysas.yfilter);
}

std::string CiscoIpsecMib::Cipstrapcntlgroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipsTrapCntlGroup";

    return path_buffer.str();

}

const EntityPath CiscoIpsecMib::Cipstrapcntlgroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSEC-MIB:CISCO-IPSEC-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipscntlcryptomapadded.is_set || is_set(cipscntlcryptomapadded.yfilter)) leaf_name_data.push_back(cipscntlcryptomapadded.get_name_leafdata());
    if (cipscntlcryptomapdeleted.is_set || is_set(cipscntlcryptomapdeleted.yfilter)) leaf_name_data.push_back(cipscntlcryptomapdeleted.get_name_leafdata());
    if (cipscntlcryptomapsetattached.is_set || is_set(cipscntlcryptomapsetattached.yfilter)) leaf_name_data.push_back(cipscntlcryptomapsetattached.get_name_leafdata());
    if (cipscntlcryptomapsetdetached.is_set || is_set(cipscntlcryptomapsetdetached.yfilter)) leaf_name_data.push_back(cipscntlcryptomapsetdetached.get_name_leafdata());
    if (cipscntlisakmppolicyadded.is_set || is_set(cipscntlisakmppolicyadded.yfilter)) leaf_name_data.push_back(cipscntlisakmppolicyadded.get_name_leafdata());
    if (cipscntlisakmppolicydeleted.is_set || is_set(cipscntlisakmppolicydeleted.yfilter)) leaf_name_data.push_back(cipscntlisakmppolicydeleted.get_name_leafdata());
    if (cipscntltoomanysas.is_set || is_set(cipscntltoomanysas.yfilter)) leaf_name_data.push_back(cipscntltoomanysas.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpsecMib::Cipstrapcntlgroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpsecMib::Cipstrapcntlgroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpsecMib::Cipstrapcntlgroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cipsCntlCryptomapAdded")
    {
        cipscntlcryptomapadded = value;
        cipscntlcryptomapadded.value_namespace = name_space;
        cipscntlcryptomapadded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsCntlCryptomapDeleted")
    {
        cipscntlcryptomapdeleted = value;
        cipscntlcryptomapdeleted.value_namespace = name_space;
        cipscntlcryptomapdeleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsCntlCryptomapSetAttached")
    {
        cipscntlcryptomapsetattached = value;
        cipscntlcryptomapsetattached.value_namespace = name_space;
        cipscntlcryptomapsetattached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsCntlCryptomapSetDetached")
    {
        cipscntlcryptomapsetdetached = value;
        cipscntlcryptomapsetdetached.value_namespace = name_space;
        cipscntlcryptomapsetdetached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsCntlIsakmpPolicyAdded")
    {
        cipscntlisakmppolicyadded = value;
        cipscntlisakmppolicyadded.value_namespace = name_space;
        cipscntlisakmppolicyadded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsCntlIsakmpPolicyDeleted")
    {
        cipscntlisakmppolicydeleted = value;
        cipscntlisakmppolicydeleted.value_namespace = name_space;
        cipscntlisakmppolicydeleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsCntlTooManySAs")
    {
        cipscntltoomanysas = value;
        cipscntltoomanysas.value_namespace = name_space;
        cipscntltoomanysas.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIpsecMib::Cipstrapcntlgroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cipsCntlCryptomapAdded")
    {
        cipscntlcryptomapadded.yfilter = yfilter;
    }
    if(value_path == "cipsCntlCryptomapDeleted")
    {
        cipscntlcryptomapdeleted.yfilter = yfilter;
    }
    if(value_path == "cipsCntlCryptomapSetAttached")
    {
        cipscntlcryptomapsetattached.yfilter = yfilter;
    }
    if(value_path == "cipsCntlCryptomapSetDetached")
    {
        cipscntlcryptomapsetdetached.yfilter = yfilter;
    }
    if(value_path == "cipsCntlIsakmpPolicyAdded")
    {
        cipscntlisakmppolicyadded.yfilter = yfilter;
    }
    if(value_path == "cipsCntlIsakmpPolicyDeleted")
    {
        cipscntlisakmppolicydeleted.yfilter = yfilter;
    }
    if(value_path == "cipsCntlTooManySAs")
    {
        cipscntltoomanysas.yfilter = yfilter;
    }
}

bool CiscoIpsecMib::Cipstrapcntlgroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipsCntlCryptomapAdded" || name == "cipsCntlCryptomapDeleted" || name == "cipsCntlCryptomapSetAttached" || name == "cipsCntlCryptomapSetDetached" || name == "cipsCntlIsakmpPolicyAdded" || name == "cipsCntlIsakmpPolicyDeleted" || name == "cipsCntlTooManySAs")
        return true;
    return false;
}

CiscoIpsecMib::Cipsisakmppolicytable::Cipsisakmppolicytable()
{
    yang_name = "cipsIsakmpPolicyTable"; yang_parent_name = "CISCO-IPSEC-MIB";
}

CiscoIpsecMib::Cipsisakmppolicytable::~Cipsisakmppolicytable()
{
}

bool CiscoIpsecMib::Cipsisakmppolicytable::has_data() const
{
    for (std::size_t index=0; index<cipsisakmppolicyentry.size(); index++)
    {
        if(cipsisakmppolicyentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIpsecMib::Cipsisakmppolicytable::has_operation() const
{
    for (std::size_t index=0; index<cipsisakmppolicyentry.size(); index++)
    {
        if(cipsisakmppolicyentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoIpsecMib::Cipsisakmppolicytable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipsIsakmpPolicyTable";

    return path_buffer.str();

}

const EntityPath CiscoIpsecMib::Cipsisakmppolicytable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSEC-MIB:CISCO-IPSEC-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpsecMib::Cipsisakmppolicytable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipsIsakmpPolicyEntry")
    {
        for(auto const & c : cipsisakmppolicyentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIpsecMib::Cipsisakmppolicytable::Cipsisakmppolicyentry>();
        c->parent = this;
        cipsisakmppolicyentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpsecMib::Cipsisakmppolicytable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cipsisakmppolicyentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIpsecMib::Cipsisakmppolicytable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIpsecMib::Cipsisakmppolicytable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIpsecMib::Cipsisakmppolicytable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipsIsakmpPolicyEntry")
        return true;
    return false;
}

CiscoIpsecMib::Cipsisakmppolicytable::Cipsisakmppolicyentry::Cipsisakmppolicyentry()
    :
    cipsisakmppolpriority{YType::int32, "cipsIsakmpPolPriority"},
    cipsisakmppolauth{YType::enumeration, "cipsIsakmpPolAuth"},
    cipsisakmppolencr{YType::enumeration, "cipsIsakmpPolEncr"},
    cipsisakmppolgroup{YType::enumeration, "cipsIsakmpPolGroup"},
    cipsisakmppolhash{YType::enumeration, "cipsIsakmpPolHash"},
    cipsisakmppollifetime{YType::int32, "cipsIsakmpPolLifetime"}
{
    yang_name = "cipsIsakmpPolicyEntry"; yang_parent_name = "cipsIsakmpPolicyTable";
}

CiscoIpsecMib::Cipsisakmppolicytable::Cipsisakmppolicyentry::~Cipsisakmppolicyentry()
{
}

bool CiscoIpsecMib::Cipsisakmppolicytable::Cipsisakmppolicyentry::has_data() const
{
    return cipsisakmppolpriority.is_set
	|| cipsisakmppolauth.is_set
	|| cipsisakmppolencr.is_set
	|| cipsisakmppolgroup.is_set
	|| cipsisakmppolhash.is_set
	|| cipsisakmppollifetime.is_set;
}

bool CiscoIpsecMib::Cipsisakmppolicytable::Cipsisakmppolicyentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cipsisakmppolpriority.yfilter)
	|| ydk::is_set(cipsisakmppolauth.yfilter)
	|| ydk::is_set(cipsisakmppolencr.yfilter)
	|| ydk::is_set(cipsisakmppolgroup.yfilter)
	|| ydk::is_set(cipsisakmppolhash.yfilter)
	|| ydk::is_set(cipsisakmppollifetime.yfilter);
}

std::string CiscoIpsecMib::Cipsisakmppolicytable::Cipsisakmppolicyentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipsIsakmpPolicyEntry" <<"[cipsIsakmpPolPriority='" <<cipsisakmppolpriority <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIpsecMib::Cipsisakmppolicytable::Cipsisakmppolicyentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSEC-MIB:CISCO-IPSEC-MIB/cipsIsakmpPolicyTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipsisakmppolpriority.is_set || is_set(cipsisakmppolpriority.yfilter)) leaf_name_data.push_back(cipsisakmppolpriority.get_name_leafdata());
    if (cipsisakmppolauth.is_set || is_set(cipsisakmppolauth.yfilter)) leaf_name_data.push_back(cipsisakmppolauth.get_name_leafdata());
    if (cipsisakmppolencr.is_set || is_set(cipsisakmppolencr.yfilter)) leaf_name_data.push_back(cipsisakmppolencr.get_name_leafdata());
    if (cipsisakmppolgroup.is_set || is_set(cipsisakmppolgroup.yfilter)) leaf_name_data.push_back(cipsisakmppolgroup.get_name_leafdata());
    if (cipsisakmppolhash.is_set || is_set(cipsisakmppolhash.yfilter)) leaf_name_data.push_back(cipsisakmppolhash.get_name_leafdata());
    if (cipsisakmppollifetime.is_set || is_set(cipsisakmppollifetime.yfilter)) leaf_name_data.push_back(cipsisakmppollifetime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpsecMib::Cipsisakmppolicytable::Cipsisakmppolicyentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpsecMib::Cipsisakmppolicytable::Cipsisakmppolicyentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpsecMib::Cipsisakmppolicytable::Cipsisakmppolicyentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cipsIsakmpPolPriority")
    {
        cipsisakmppolpriority = value;
        cipsisakmppolpriority.value_namespace = name_space;
        cipsisakmppolpriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsIsakmpPolAuth")
    {
        cipsisakmppolauth = value;
        cipsisakmppolauth.value_namespace = name_space;
        cipsisakmppolauth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsIsakmpPolEncr")
    {
        cipsisakmppolencr = value;
        cipsisakmppolencr.value_namespace = name_space;
        cipsisakmppolencr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsIsakmpPolGroup")
    {
        cipsisakmppolgroup = value;
        cipsisakmppolgroup.value_namespace = name_space;
        cipsisakmppolgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsIsakmpPolHash")
    {
        cipsisakmppolhash = value;
        cipsisakmppolhash.value_namespace = name_space;
        cipsisakmppolhash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsIsakmpPolLifetime")
    {
        cipsisakmppollifetime = value;
        cipsisakmppollifetime.value_namespace = name_space;
        cipsisakmppollifetime.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIpsecMib::Cipsisakmppolicytable::Cipsisakmppolicyentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cipsIsakmpPolPriority")
    {
        cipsisakmppolpriority.yfilter = yfilter;
    }
    if(value_path == "cipsIsakmpPolAuth")
    {
        cipsisakmppolauth.yfilter = yfilter;
    }
    if(value_path == "cipsIsakmpPolEncr")
    {
        cipsisakmppolencr.yfilter = yfilter;
    }
    if(value_path == "cipsIsakmpPolGroup")
    {
        cipsisakmppolgroup.yfilter = yfilter;
    }
    if(value_path == "cipsIsakmpPolHash")
    {
        cipsisakmppolhash.yfilter = yfilter;
    }
    if(value_path == "cipsIsakmpPolLifetime")
    {
        cipsisakmppollifetime.yfilter = yfilter;
    }
}

bool CiscoIpsecMib::Cipsisakmppolicytable::Cipsisakmppolicyentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipsIsakmpPolPriority" || name == "cipsIsakmpPolAuth" || name == "cipsIsakmpPolEncr" || name == "cipsIsakmpPolGroup" || name == "cipsIsakmpPolHash" || name == "cipsIsakmpPolLifetime")
        return true;
    return false;
}

CiscoIpsecMib::Cipsstaticcryptomapsettable::Cipsstaticcryptomapsettable()
{
    yang_name = "cipsStaticCryptomapSetTable"; yang_parent_name = "CISCO-IPSEC-MIB";
}

CiscoIpsecMib::Cipsstaticcryptomapsettable::~Cipsstaticcryptomapsettable()
{
}

bool CiscoIpsecMib::Cipsstaticcryptomapsettable::has_data() const
{
    for (std::size_t index=0; index<cipsstaticcryptomapsetentry.size(); index++)
    {
        if(cipsstaticcryptomapsetentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIpsecMib::Cipsstaticcryptomapsettable::has_operation() const
{
    for (std::size_t index=0; index<cipsstaticcryptomapsetentry.size(); index++)
    {
        if(cipsstaticcryptomapsetentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoIpsecMib::Cipsstaticcryptomapsettable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipsStaticCryptomapSetTable";

    return path_buffer.str();

}

const EntityPath CiscoIpsecMib::Cipsstaticcryptomapsettable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSEC-MIB:CISCO-IPSEC-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpsecMib::Cipsstaticcryptomapsettable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipsStaticCryptomapSetEntry")
    {
        for(auto const & c : cipsstaticcryptomapsetentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIpsecMib::Cipsstaticcryptomapsettable::Cipsstaticcryptomapsetentry>();
        c->parent = this;
        cipsstaticcryptomapsetentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpsecMib::Cipsstaticcryptomapsettable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cipsstaticcryptomapsetentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIpsecMib::Cipsstaticcryptomapsettable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIpsecMib::Cipsstaticcryptomapsettable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIpsecMib::Cipsstaticcryptomapsettable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipsStaticCryptomapSetEntry")
        return true;
    return false;
}

CiscoIpsecMib::Cipsstaticcryptomapsettable::Cipsstaticcryptomapsetentry::Cipsstaticcryptomapsetentry()
    :
    cipsstaticcryptomapsetname{YType::str, "cipsStaticCryptomapSetName"},
    cipsstaticcryptomapsetnumcet{YType::uint32, "cipsStaticCryptomapSetNumCET"},
    cipsstaticcryptomapsetnumdisc{YType::uint32, "cipsStaticCryptomapSetNumDisc"},
    cipsstaticcryptomapsetnumdynamic{YType::uint32, "cipsStaticCryptomapSetNumDynamic"},
    cipsstaticcryptomapsetnumisakmp{YType::uint32, "cipsStaticCryptomapSetNumIsakmp"},
    cipsstaticcryptomapsetnummanual{YType::uint32, "cipsStaticCryptomapSetNumManual"},
    cipsstaticcryptomapsetnumsas{YType::uint32, "cipsStaticCryptomapSetNumSAs"},
    cipsstaticcryptomapsetsize{YType::uint32, "cipsStaticCryptomapSetSize"}
{
    yang_name = "cipsStaticCryptomapSetEntry"; yang_parent_name = "cipsStaticCryptomapSetTable";
}

CiscoIpsecMib::Cipsstaticcryptomapsettable::Cipsstaticcryptomapsetentry::~Cipsstaticcryptomapsetentry()
{
}

bool CiscoIpsecMib::Cipsstaticcryptomapsettable::Cipsstaticcryptomapsetentry::has_data() const
{
    return cipsstaticcryptomapsetname.is_set
	|| cipsstaticcryptomapsetnumcet.is_set
	|| cipsstaticcryptomapsetnumdisc.is_set
	|| cipsstaticcryptomapsetnumdynamic.is_set
	|| cipsstaticcryptomapsetnumisakmp.is_set
	|| cipsstaticcryptomapsetnummanual.is_set
	|| cipsstaticcryptomapsetnumsas.is_set
	|| cipsstaticcryptomapsetsize.is_set;
}

bool CiscoIpsecMib::Cipsstaticcryptomapsettable::Cipsstaticcryptomapsetentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cipsstaticcryptomapsetname.yfilter)
	|| ydk::is_set(cipsstaticcryptomapsetnumcet.yfilter)
	|| ydk::is_set(cipsstaticcryptomapsetnumdisc.yfilter)
	|| ydk::is_set(cipsstaticcryptomapsetnumdynamic.yfilter)
	|| ydk::is_set(cipsstaticcryptomapsetnumisakmp.yfilter)
	|| ydk::is_set(cipsstaticcryptomapsetnummanual.yfilter)
	|| ydk::is_set(cipsstaticcryptomapsetnumsas.yfilter)
	|| ydk::is_set(cipsstaticcryptomapsetsize.yfilter);
}

std::string CiscoIpsecMib::Cipsstaticcryptomapsettable::Cipsstaticcryptomapsetentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipsStaticCryptomapSetEntry" <<"[cipsStaticCryptomapSetName='" <<cipsstaticcryptomapsetname <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIpsecMib::Cipsstaticcryptomapsettable::Cipsstaticcryptomapsetentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSEC-MIB:CISCO-IPSEC-MIB/cipsStaticCryptomapSetTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipsstaticcryptomapsetname.is_set || is_set(cipsstaticcryptomapsetname.yfilter)) leaf_name_data.push_back(cipsstaticcryptomapsetname.get_name_leafdata());
    if (cipsstaticcryptomapsetnumcet.is_set || is_set(cipsstaticcryptomapsetnumcet.yfilter)) leaf_name_data.push_back(cipsstaticcryptomapsetnumcet.get_name_leafdata());
    if (cipsstaticcryptomapsetnumdisc.is_set || is_set(cipsstaticcryptomapsetnumdisc.yfilter)) leaf_name_data.push_back(cipsstaticcryptomapsetnumdisc.get_name_leafdata());
    if (cipsstaticcryptomapsetnumdynamic.is_set || is_set(cipsstaticcryptomapsetnumdynamic.yfilter)) leaf_name_data.push_back(cipsstaticcryptomapsetnumdynamic.get_name_leafdata());
    if (cipsstaticcryptomapsetnumisakmp.is_set || is_set(cipsstaticcryptomapsetnumisakmp.yfilter)) leaf_name_data.push_back(cipsstaticcryptomapsetnumisakmp.get_name_leafdata());
    if (cipsstaticcryptomapsetnummanual.is_set || is_set(cipsstaticcryptomapsetnummanual.yfilter)) leaf_name_data.push_back(cipsstaticcryptomapsetnummanual.get_name_leafdata());
    if (cipsstaticcryptomapsetnumsas.is_set || is_set(cipsstaticcryptomapsetnumsas.yfilter)) leaf_name_data.push_back(cipsstaticcryptomapsetnumsas.get_name_leafdata());
    if (cipsstaticcryptomapsetsize.is_set || is_set(cipsstaticcryptomapsetsize.yfilter)) leaf_name_data.push_back(cipsstaticcryptomapsetsize.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpsecMib::Cipsstaticcryptomapsettable::Cipsstaticcryptomapsetentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpsecMib::Cipsstaticcryptomapsettable::Cipsstaticcryptomapsetentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpsecMib::Cipsstaticcryptomapsettable::Cipsstaticcryptomapsetentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cipsStaticCryptomapSetName")
    {
        cipsstaticcryptomapsetname = value;
        cipsstaticcryptomapsetname.value_namespace = name_space;
        cipsstaticcryptomapsetname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsStaticCryptomapSetNumCET")
    {
        cipsstaticcryptomapsetnumcet = value;
        cipsstaticcryptomapsetnumcet.value_namespace = name_space;
        cipsstaticcryptomapsetnumcet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsStaticCryptomapSetNumDisc")
    {
        cipsstaticcryptomapsetnumdisc = value;
        cipsstaticcryptomapsetnumdisc.value_namespace = name_space;
        cipsstaticcryptomapsetnumdisc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsStaticCryptomapSetNumDynamic")
    {
        cipsstaticcryptomapsetnumdynamic = value;
        cipsstaticcryptomapsetnumdynamic.value_namespace = name_space;
        cipsstaticcryptomapsetnumdynamic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsStaticCryptomapSetNumIsakmp")
    {
        cipsstaticcryptomapsetnumisakmp = value;
        cipsstaticcryptomapsetnumisakmp.value_namespace = name_space;
        cipsstaticcryptomapsetnumisakmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsStaticCryptomapSetNumManual")
    {
        cipsstaticcryptomapsetnummanual = value;
        cipsstaticcryptomapsetnummanual.value_namespace = name_space;
        cipsstaticcryptomapsetnummanual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsStaticCryptomapSetNumSAs")
    {
        cipsstaticcryptomapsetnumsas = value;
        cipsstaticcryptomapsetnumsas.value_namespace = name_space;
        cipsstaticcryptomapsetnumsas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsStaticCryptomapSetSize")
    {
        cipsstaticcryptomapsetsize = value;
        cipsstaticcryptomapsetsize.value_namespace = name_space;
        cipsstaticcryptomapsetsize.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIpsecMib::Cipsstaticcryptomapsettable::Cipsstaticcryptomapsetentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cipsStaticCryptomapSetName")
    {
        cipsstaticcryptomapsetname.yfilter = yfilter;
    }
    if(value_path == "cipsStaticCryptomapSetNumCET")
    {
        cipsstaticcryptomapsetnumcet.yfilter = yfilter;
    }
    if(value_path == "cipsStaticCryptomapSetNumDisc")
    {
        cipsstaticcryptomapsetnumdisc.yfilter = yfilter;
    }
    if(value_path == "cipsStaticCryptomapSetNumDynamic")
    {
        cipsstaticcryptomapsetnumdynamic.yfilter = yfilter;
    }
    if(value_path == "cipsStaticCryptomapSetNumIsakmp")
    {
        cipsstaticcryptomapsetnumisakmp.yfilter = yfilter;
    }
    if(value_path == "cipsStaticCryptomapSetNumManual")
    {
        cipsstaticcryptomapsetnummanual.yfilter = yfilter;
    }
    if(value_path == "cipsStaticCryptomapSetNumSAs")
    {
        cipsstaticcryptomapsetnumsas.yfilter = yfilter;
    }
    if(value_path == "cipsStaticCryptomapSetSize")
    {
        cipsstaticcryptomapsetsize.yfilter = yfilter;
    }
}

bool CiscoIpsecMib::Cipsstaticcryptomapsettable::Cipsstaticcryptomapsetentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipsStaticCryptomapSetName" || name == "cipsStaticCryptomapSetNumCET" || name == "cipsStaticCryptomapSetNumDisc" || name == "cipsStaticCryptomapSetNumDynamic" || name == "cipsStaticCryptomapSetNumIsakmp" || name == "cipsStaticCryptomapSetNumManual" || name == "cipsStaticCryptomapSetNumSAs" || name == "cipsStaticCryptomapSetSize")
        return true;
    return false;
}

CiscoIpsecMib::Cipsdynamiccryptomapsettable::Cipsdynamiccryptomapsettable()
{
    yang_name = "cipsDynamicCryptomapSetTable"; yang_parent_name = "CISCO-IPSEC-MIB";
}

CiscoIpsecMib::Cipsdynamiccryptomapsettable::~Cipsdynamiccryptomapsettable()
{
}

bool CiscoIpsecMib::Cipsdynamiccryptomapsettable::has_data() const
{
    for (std::size_t index=0; index<cipsdynamiccryptomapsetentry.size(); index++)
    {
        if(cipsdynamiccryptomapsetentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIpsecMib::Cipsdynamiccryptomapsettable::has_operation() const
{
    for (std::size_t index=0; index<cipsdynamiccryptomapsetentry.size(); index++)
    {
        if(cipsdynamiccryptomapsetentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoIpsecMib::Cipsdynamiccryptomapsettable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipsDynamicCryptomapSetTable";

    return path_buffer.str();

}

const EntityPath CiscoIpsecMib::Cipsdynamiccryptomapsettable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSEC-MIB:CISCO-IPSEC-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpsecMib::Cipsdynamiccryptomapsettable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipsDynamicCryptomapSetEntry")
    {
        for(auto const & c : cipsdynamiccryptomapsetentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIpsecMib::Cipsdynamiccryptomapsettable::Cipsdynamiccryptomapsetentry>();
        c->parent = this;
        cipsdynamiccryptomapsetentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpsecMib::Cipsdynamiccryptomapsettable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cipsdynamiccryptomapsetentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIpsecMib::Cipsdynamiccryptomapsettable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIpsecMib::Cipsdynamiccryptomapsettable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIpsecMib::Cipsdynamiccryptomapsettable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipsDynamicCryptomapSetEntry")
        return true;
    return false;
}

CiscoIpsecMib::Cipsdynamiccryptomapsettable::Cipsdynamiccryptomapsetentry::Cipsdynamiccryptomapsetentry()
    :
    cipsdynamiccryptomapsetname{YType::str, "cipsDynamicCryptomapSetName"},
    cipsdynamiccryptomapsetnumassoc{YType::uint32, "cipsDynamicCryptomapSetNumAssoc"},
    cipsdynamiccryptomapsetsize{YType::uint32, "cipsDynamicCryptomapSetSize"}
{
    yang_name = "cipsDynamicCryptomapSetEntry"; yang_parent_name = "cipsDynamicCryptomapSetTable";
}

CiscoIpsecMib::Cipsdynamiccryptomapsettable::Cipsdynamiccryptomapsetentry::~Cipsdynamiccryptomapsetentry()
{
}

bool CiscoIpsecMib::Cipsdynamiccryptomapsettable::Cipsdynamiccryptomapsetentry::has_data() const
{
    return cipsdynamiccryptomapsetname.is_set
	|| cipsdynamiccryptomapsetnumassoc.is_set
	|| cipsdynamiccryptomapsetsize.is_set;
}

bool CiscoIpsecMib::Cipsdynamiccryptomapsettable::Cipsdynamiccryptomapsetentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cipsdynamiccryptomapsetname.yfilter)
	|| ydk::is_set(cipsdynamiccryptomapsetnumassoc.yfilter)
	|| ydk::is_set(cipsdynamiccryptomapsetsize.yfilter);
}

std::string CiscoIpsecMib::Cipsdynamiccryptomapsettable::Cipsdynamiccryptomapsetentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipsDynamicCryptomapSetEntry" <<"[cipsDynamicCryptomapSetName='" <<cipsdynamiccryptomapsetname <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIpsecMib::Cipsdynamiccryptomapsettable::Cipsdynamiccryptomapsetentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSEC-MIB:CISCO-IPSEC-MIB/cipsDynamicCryptomapSetTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipsdynamiccryptomapsetname.is_set || is_set(cipsdynamiccryptomapsetname.yfilter)) leaf_name_data.push_back(cipsdynamiccryptomapsetname.get_name_leafdata());
    if (cipsdynamiccryptomapsetnumassoc.is_set || is_set(cipsdynamiccryptomapsetnumassoc.yfilter)) leaf_name_data.push_back(cipsdynamiccryptomapsetnumassoc.get_name_leafdata());
    if (cipsdynamiccryptomapsetsize.is_set || is_set(cipsdynamiccryptomapsetsize.yfilter)) leaf_name_data.push_back(cipsdynamiccryptomapsetsize.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpsecMib::Cipsdynamiccryptomapsettable::Cipsdynamiccryptomapsetentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpsecMib::Cipsdynamiccryptomapsettable::Cipsdynamiccryptomapsetentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpsecMib::Cipsdynamiccryptomapsettable::Cipsdynamiccryptomapsetentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cipsDynamicCryptomapSetName")
    {
        cipsdynamiccryptomapsetname = value;
        cipsdynamiccryptomapsetname.value_namespace = name_space;
        cipsdynamiccryptomapsetname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsDynamicCryptomapSetNumAssoc")
    {
        cipsdynamiccryptomapsetnumassoc = value;
        cipsdynamiccryptomapsetnumassoc.value_namespace = name_space;
        cipsdynamiccryptomapsetnumassoc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsDynamicCryptomapSetSize")
    {
        cipsdynamiccryptomapsetsize = value;
        cipsdynamiccryptomapsetsize.value_namespace = name_space;
        cipsdynamiccryptomapsetsize.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIpsecMib::Cipsdynamiccryptomapsettable::Cipsdynamiccryptomapsetentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cipsDynamicCryptomapSetName")
    {
        cipsdynamiccryptomapsetname.yfilter = yfilter;
    }
    if(value_path == "cipsDynamicCryptomapSetNumAssoc")
    {
        cipsdynamiccryptomapsetnumassoc.yfilter = yfilter;
    }
    if(value_path == "cipsDynamicCryptomapSetSize")
    {
        cipsdynamiccryptomapsetsize.yfilter = yfilter;
    }
}

bool CiscoIpsecMib::Cipsdynamiccryptomapsettable::Cipsdynamiccryptomapsetentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipsDynamicCryptomapSetName" || name == "cipsDynamicCryptomapSetNumAssoc" || name == "cipsDynamicCryptomapSetSize")
        return true;
    return false;
}

CiscoIpsecMib::Cipsstaticcryptomaptable::Cipsstaticcryptomaptable()
{
    yang_name = "cipsStaticCryptomapTable"; yang_parent_name = "CISCO-IPSEC-MIB";
}

CiscoIpsecMib::Cipsstaticcryptomaptable::~Cipsstaticcryptomaptable()
{
}

bool CiscoIpsecMib::Cipsstaticcryptomaptable::has_data() const
{
    for (std::size_t index=0; index<cipsstaticcryptomapentry.size(); index++)
    {
        if(cipsstaticcryptomapentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIpsecMib::Cipsstaticcryptomaptable::has_operation() const
{
    for (std::size_t index=0; index<cipsstaticcryptomapentry.size(); index++)
    {
        if(cipsstaticcryptomapentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoIpsecMib::Cipsstaticcryptomaptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipsStaticCryptomapTable";

    return path_buffer.str();

}

const EntityPath CiscoIpsecMib::Cipsstaticcryptomaptable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSEC-MIB:CISCO-IPSEC-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpsecMib::Cipsstaticcryptomaptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipsStaticCryptomapEntry")
    {
        for(auto const & c : cipsstaticcryptomapentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIpsecMib::Cipsstaticcryptomaptable::Cipsstaticcryptomapentry>();
        c->parent = this;
        cipsstaticcryptomapentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpsecMib::Cipsstaticcryptomaptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cipsstaticcryptomapentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIpsecMib::Cipsstaticcryptomaptable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIpsecMib::Cipsstaticcryptomaptable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIpsecMib::Cipsstaticcryptomaptable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipsStaticCryptomapEntry")
        return true;
    return false;
}

CiscoIpsecMib::Cipsstaticcryptomaptable::Cipsstaticcryptomapentry::Cipsstaticcryptomapentry()
    :
    cipsstaticcryptomapsetname{YType::str, "cipsStaticCryptomapSetName"},
    cipsstaticcryptomappriority{YType::int32, "cipsStaticCryptomapPriority"},
    cipsstaticcryptomapdescr{YType::str, "cipsStaticCryptomapDescr"},
    cipsstaticcryptomaplevelhost{YType::boolean, "cipsStaticCryptomapLevelHost"},
    cipsstaticcryptomaplifesize{YType::int32, "cipsStaticCryptomapLifesize"},
    cipsstaticcryptomaplifetime{YType::int32, "cipsStaticCryptomapLifetime"},
    cipsstaticcryptomapnumpeers{YType::int32, "cipsStaticCryptomapNumPeers"},
    cipsstaticcryptomappeer{YType::str, "cipsStaticCryptomapPeer"},
    cipsstaticcryptomappfs{YType::enumeration, "cipsStaticCryptomapPfs"},
    cipsstaticcryptomaptype{YType::enumeration, "cipsStaticCryptomapType"}
{
    yang_name = "cipsStaticCryptomapEntry"; yang_parent_name = "cipsStaticCryptomapTable";
}

CiscoIpsecMib::Cipsstaticcryptomaptable::Cipsstaticcryptomapentry::~Cipsstaticcryptomapentry()
{
}

bool CiscoIpsecMib::Cipsstaticcryptomaptable::Cipsstaticcryptomapentry::has_data() const
{
    return cipsstaticcryptomapsetname.is_set
	|| cipsstaticcryptomappriority.is_set
	|| cipsstaticcryptomapdescr.is_set
	|| cipsstaticcryptomaplevelhost.is_set
	|| cipsstaticcryptomaplifesize.is_set
	|| cipsstaticcryptomaplifetime.is_set
	|| cipsstaticcryptomapnumpeers.is_set
	|| cipsstaticcryptomappeer.is_set
	|| cipsstaticcryptomappfs.is_set
	|| cipsstaticcryptomaptype.is_set;
}

bool CiscoIpsecMib::Cipsstaticcryptomaptable::Cipsstaticcryptomapentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cipsstaticcryptomapsetname.yfilter)
	|| ydk::is_set(cipsstaticcryptomappriority.yfilter)
	|| ydk::is_set(cipsstaticcryptomapdescr.yfilter)
	|| ydk::is_set(cipsstaticcryptomaplevelhost.yfilter)
	|| ydk::is_set(cipsstaticcryptomaplifesize.yfilter)
	|| ydk::is_set(cipsstaticcryptomaplifetime.yfilter)
	|| ydk::is_set(cipsstaticcryptomapnumpeers.yfilter)
	|| ydk::is_set(cipsstaticcryptomappeer.yfilter)
	|| ydk::is_set(cipsstaticcryptomappfs.yfilter)
	|| ydk::is_set(cipsstaticcryptomaptype.yfilter);
}

std::string CiscoIpsecMib::Cipsstaticcryptomaptable::Cipsstaticcryptomapentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipsStaticCryptomapEntry" <<"[cipsStaticCryptomapSetName='" <<cipsstaticcryptomapsetname <<"']" <<"[cipsStaticCryptomapPriority='" <<cipsstaticcryptomappriority <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIpsecMib::Cipsstaticcryptomaptable::Cipsstaticcryptomapentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSEC-MIB:CISCO-IPSEC-MIB/cipsStaticCryptomapTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipsstaticcryptomapsetname.is_set || is_set(cipsstaticcryptomapsetname.yfilter)) leaf_name_data.push_back(cipsstaticcryptomapsetname.get_name_leafdata());
    if (cipsstaticcryptomappriority.is_set || is_set(cipsstaticcryptomappriority.yfilter)) leaf_name_data.push_back(cipsstaticcryptomappriority.get_name_leafdata());
    if (cipsstaticcryptomapdescr.is_set || is_set(cipsstaticcryptomapdescr.yfilter)) leaf_name_data.push_back(cipsstaticcryptomapdescr.get_name_leafdata());
    if (cipsstaticcryptomaplevelhost.is_set || is_set(cipsstaticcryptomaplevelhost.yfilter)) leaf_name_data.push_back(cipsstaticcryptomaplevelhost.get_name_leafdata());
    if (cipsstaticcryptomaplifesize.is_set || is_set(cipsstaticcryptomaplifesize.yfilter)) leaf_name_data.push_back(cipsstaticcryptomaplifesize.get_name_leafdata());
    if (cipsstaticcryptomaplifetime.is_set || is_set(cipsstaticcryptomaplifetime.yfilter)) leaf_name_data.push_back(cipsstaticcryptomaplifetime.get_name_leafdata());
    if (cipsstaticcryptomapnumpeers.is_set || is_set(cipsstaticcryptomapnumpeers.yfilter)) leaf_name_data.push_back(cipsstaticcryptomapnumpeers.get_name_leafdata());
    if (cipsstaticcryptomappeer.is_set || is_set(cipsstaticcryptomappeer.yfilter)) leaf_name_data.push_back(cipsstaticcryptomappeer.get_name_leafdata());
    if (cipsstaticcryptomappfs.is_set || is_set(cipsstaticcryptomappfs.yfilter)) leaf_name_data.push_back(cipsstaticcryptomappfs.get_name_leafdata());
    if (cipsstaticcryptomaptype.is_set || is_set(cipsstaticcryptomaptype.yfilter)) leaf_name_data.push_back(cipsstaticcryptomaptype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpsecMib::Cipsstaticcryptomaptable::Cipsstaticcryptomapentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpsecMib::Cipsstaticcryptomaptable::Cipsstaticcryptomapentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpsecMib::Cipsstaticcryptomaptable::Cipsstaticcryptomapentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cipsStaticCryptomapSetName")
    {
        cipsstaticcryptomapsetname = value;
        cipsstaticcryptomapsetname.value_namespace = name_space;
        cipsstaticcryptomapsetname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsStaticCryptomapPriority")
    {
        cipsstaticcryptomappriority = value;
        cipsstaticcryptomappriority.value_namespace = name_space;
        cipsstaticcryptomappriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsStaticCryptomapDescr")
    {
        cipsstaticcryptomapdescr = value;
        cipsstaticcryptomapdescr.value_namespace = name_space;
        cipsstaticcryptomapdescr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsStaticCryptomapLevelHost")
    {
        cipsstaticcryptomaplevelhost = value;
        cipsstaticcryptomaplevelhost.value_namespace = name_space;
        cipsstaticcryptomaplevelhost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsStaticCryptomapLifesize")
    {
        cipsstaticcryptomaplifesize = value;
        cipsstaticcryptomaplifesize.value_namespace = name_space;
        cipsstaticcryptomaplifesize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsStaticCryptomapLifetime")
    {
        cipsstaticcryptomaplifetime = value;
        cipsstaticcryptomaplifetime.value_namespace = name_space;
        cipsstaticcryptomaplifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsStaticCryptomapNumPeers")
    {
        cipsstaticcryptomapnumpeers = value;
        cipsstaticcryptomapnumpeers.value_namespace = name_space;
        cipsstaticcryptomapnumpeers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsStaticCryptomapPeer")
    {
        cipsstaticcryptomappeer = value;
        cipsstaticcryptomappeer.value_namespace = name_space;
        cipsstaticcryptomappeer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsStaticCryptomapPfs")
    {
        cipsstaticcryptomappfs = value;
        cipsstaticcryptomappfs.value_namespace = name_space;
        cipsstaticcryptomappfs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsStaticCryptomapType")
    {
        cipsstaticcryptomaptype = value;
        cipsstaticcryptomaptype.value_namespace = name_space;
        cipsstaticcryptomaptype.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIpsecMib::Cipsstaticcryptomaptable::Cipsstaticcryptomapentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cipsStaticCryptomapSetName")
    {
        cipsstaticcryptomapsetname.yfilter = yfilter;
    }
    if(value_path == "cipsStaticCryptomapPriority")
    {
        cipsstaticcryptomappriority.yfilter = yfilter;
    }
    if(value_path == "cipsStaticCryptomapDescr")
    {
        cipsstaticcryptomapdescr.yfilter = yfilter;
    }
    if(value_path == "cipsStaticCryptomapLevelHost")
    {
        cipsstaticcryptomaplevelhost.yfilter = yfilter;
    }
    if(value_path == "cipsStaticCryptomapLifesize")
    {
        cipsstaticcryptomaplifesize.yfilter = yfilter;
    }
    if(value_path == "cipsStaticCryptomapLifetime")
    {
        cipsstaticcryptomaplifetime.yfilter = yfilter;
    }
    if(value_path == "cipsStaticCryptomapNumPeers")
    {
        cipsstaticcryptomapnumpeers.yfilter = yfilter;
    }
    if(value_path == "cipsStaticCryptomapPeer")
    {
        cipsstaticcryptomappeer.yfilter = yfilter;
    }
    if(value_path == "cipsStaticCryptomapPfs")
    {
        cipsstaticcryptomappfs.yfilter = yfilter;
    }
    if(value_path == "cipsStaticCryptomapType")
    {
        cipsstaticcryptomaptype.yfilter = yfilter;
    }
}

bool CiscoIpsecMib::Cipsstaticcryptomaptable::Cipsstaticcryptomapentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipsStaticCryptomapSetName" || name == "cipsStaticCryptomapPriority" || name == "cipsStaticCryptomapDescr" || name == "cipsStaticCryptomapLevelHost" || name == "cipsStaticCryptomapLifesize" || name == "cipsStaticCryptomapLifetime" || name == "cipsStaticCryptomapNumPeers" || name == "cipsStaticCryptomapPeer" || name == "cipsStaticCryptomapPfs" || name == "cipsStaticCryptomapType")
        return true;
    return false;
}

CiscoIpsecMib::Cipscryptomapsetiftable::Cipscryptomapsetiftable()
{
    yang_name = "cipsCryptomapSetIfTable"; yang_parent_name = "CISCO-IPSEC-MIB";
}

CiscoIpsecMib::Cipscryptomapsetiftable::~Cipscryptomapsetiftable()
{
}

bool CiscoIpsecMib::Cipscryptomapsetiftable::has_data() const
{
    for (std::size_t index=0; index<cipscryptomapsetifentry.size(); index++)
    {
        if(cipscryptomapsetifentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIpsecMib::Cipscryptomapsetiftable::has_operation() const
{
    for (std::size_t index=0; index<cipscryptomapsetifentry.size(); index++)
    {
        if(cipscryptomapsetifentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoIpsecMib::Cipscryptomapsetiftable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipsCryptomapSetIfTable";

    return path_buffer.str();

}

const EntityPath CiscoIpsecMib::Cipscryptomapsetiftable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSEC-MIB:CISCO-IPSEC-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpsecMib::Cipscryptomapsetiftable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipsCryptomapSetIfEntry")
    {
        for(auto const & c : cipscryptomapsetifentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIpsecMib::Cipscryptomapsetiftable::Cipscryptomapsetifentry>();
        c->parent = this;
        cipscryptomapsetifentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpsecMib::Cipscryptomapsetiftable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cipscryptomapsetifentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIpsecMib::Cipscryptomapsetiftable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIpsecMib::Cipscryptomapsetiftable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIpsecMib::Cipscryptomapsetiftable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipsCryptomapSetIfEntry")
        return true;
    return false;
}

CiscoIpsecMib::Cipscryptomapsetiftable::Cipscryptomapsetifentry::Cipscryptomapsetifentry()
    :
    ifindex{YType::str, "ifIndex"},
    cipsstaticcryptomapsetname{YType::str, "cipsStaticCryptomapSetName"},
    cipscryptomapsetifstatus{YType::enumeration, "cipsCryptomapSetIfStatus"},
    cipscryptomapsetifvirtual{YType::boolean, "cipsCryptomapSetIfVirtual"}
{
    yang_name = "cipsCryptomapSetIfEntry"; yang_parent_name = "cipsCryptomapSetIfTable";
}

CiscoIpsecMib::Cipscryptomapsetiftable::Cipscryptomapsetifentry::~Cipscryptomapsetifentry()
{
}

bool CiscoIpsecMib::Cipscryptomapsetiftable::Cipscryptomapsetifentry::has_data() const
{
    return ifindex.is_set
	|| cipsstaticcryptomapsetname.is_set
	|| cipscryptomapsetifstatus.is_set
	|| cipscryptomapsetifvirtual.is_set;
}

bool CiscoIpsecMib::Cipscryptomapsetiftable::Cipscryptomapsetifentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cipsstaticcryptomapsetname.yfilter)
	|| ydk::is_set(cipscryptomapsetifstatus.yfilter)
	|| ydk::is_set(cipscryptomapsetifvirtual.yfilter);
}

std::string CiscoIpsecMib::Cipscryptomapsetiftable::Cipscryptomapsetifentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipsCryptomapSetIfEntry" <<"[ifIndex='" <<ifindex <<"']" <<"[cipsStaticCryptomapSetName='" <<cipsstaticcryptomapsetname <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIpsecMib::Cipscryptomapsetiftable::Cipscryptomapsetifentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IPSEC-MIB:CISCO-IPSEC-MIB/cipsCryptomapSetIfTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cipsstaticcryptomapsetname.is_set || is_set(cipsstaticcryptomapsetname.yfilter)) leaf_name_data.push_back(cipsstaticcryptomapsetname.get_name_leafdata());
    if (cipscryptomapsetifstatus.is_set || is_set(cipscryptomapsetifstatus.yfilter)) leaf_name_data.push_back(cipscryptomapsetifstatus.get_name_leafdata());
    if (cipscryptomapsetifvirtual.is_set || is_set(cipscryptomapsetifvirtual.yfilter)) leaf_name_data.push_back(cipscryptomapsetifvirtual.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIpsecMib::Cipscryptomapsetiftable::Cipscryptomapsetifentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIpsecMib::Cipscryptomapsetiftable::Cipscryptomapsetifentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIpsecMib::Cipscryptomapsetiftable::Cipscryptomapsetifentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsStaticCryptomapSetName")
    {
        cipsstaticcryptomapsetname = value;
        cipsstaticcryptomapsetname.value_namespace = name_space;
        cipsstaticcryptomapsetname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsCryptomapSetIfStatus")
    {
        cipscryptomapsetifstatus = value;
        cipscryptomapsetifstatus.value_namespace = name_space;
        cipscryptomapsetifstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsCryptomapSetIfVirtual")
    {
        cipscryptomapsetifvirtual = value;
        cipscryptomapsetifvirtual.value_namespace = name_space;
        cipscryptomapsetifvirtual.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIpsecMib::Cipscryptomapsetiftable::Cipscryptomapsetifentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cipsStaticCryptomapSetName")
    {
        cipsstaticcryptomapsetname.yfilter = yfilter;
    }
    if(value_path == "cipsCryptomapSetIfStatus")
    {
        cipscryptomapsetifstatus.yfilter = yfilter;
    }
    if(value_path == "cipsCryptomapSetIfVirtual")
    {
        cipscryptomapsetifvirtual.yfilter = yfilter;
    }
}

bool CiscoIpsecMib::Cipscryptomapsetiftable::Cipscryptomapsetifentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cipsStaticCryptomapSetName" || name == "cipsCryptomapSetIfStatus" || name == "cipsCryptomapSetIfVirtual")
        return true;
    return false;
}

const Enum::YLeaf Cryptomaptype::cryptomapTypeNONE {0, "cryptomapTypeNONE"};
const Enum::YLeaf Cryptomaptype::cryptomapTypeMANUAL {1, "cryptomapTypeMANUAL"};
const Enum::YLeaf Cryptomaptype::cryptomapTypeISAKMP {2, "cryptomapTypeISAKMP"};
const Enum::YLeaf Cryptomaptype::cryptomapTypeCET {3, "cryptomapTypeCET"};
const Enum::YLeaf Cryptomaptype::cryptomapTypeDYNAMIC {4, "cryptomapTypeDYNAMIC"};
const Enum::YLeaf Cryptomaptype::cryptomapTypeDYNAMICDISCOVERY {5, "cryptomapTypeDYNAMICDISCOVERY"};

const Enum::YLeaf Cryptomapsetbindstatus::unknown {0, "unknown"};
const Enum::YLeaf Cryptomapsetbindstatus::attached {1, "attached"};
const Enum::YLeaf Cryptomapsetbindstatus::detached {2, "detached"};

const Enum::YLeaf Ikehashalgo::none {1, "none"};
const Enum::YLeaf Ikehashalgo::md5 {2, "md5"};
const Enum::YLeaf Ikehashalgo::sha {3, "sha"};

const Enum::YLeaf Ikeidentitytype::isakmpIdTypeUNKNOWN {0, "isakmpIdTypeUNKNOWN"};
const Enum::YLeaf Ikeidentitytype::isakmpIdTypeADDRESS {1, "isakmpIdTypeADDRESS"};
const Enum::YLeaf Ikeidentitytype::isakmpIdTypeHOSTNAME {2, "isakmpIdTypeHOSTNAME"};

const Enum::YLeaf Diffhellmangrp::none {1, "none"};
const Enum::YLeaf Diffhellmangrp::dhGroup1 {2, "dhGroup1"};
const Enum::YLeaf Diffhellmangrp::dhGroup2 {3, "dhGroup2"};

const Enum::YLeaf Encryptalgo::none {1, "none"};
const Enum::YLeaf Encryptalgo::des {2, "des"};
const Enum::YLeaf Encryptalgo::des3 {3, "des3"};

const Enum::YLeaf Ikeauthmethod::none {1, "none"};
const Enum::YLeaf Ikeauthmethod::preSharedKey {2, "preSharedKey"};
const Enum::YLeaf Ikeauthmethod::rsaSig {3, "rsaSig"};
const Enum::YLeaf Ikeauthmethod::rsaEncrypt {4, "rsaEncrypt"};
const Enum::YLeaf Ikeauthmethod::revPublicKey {5, "revPublicKey"};

const Enum::YLeaf Trapstatus::enabled {1, "enabled"};
const Enum::YLeaf Trapstatus::disabled {2, "disabled"};


}
}

