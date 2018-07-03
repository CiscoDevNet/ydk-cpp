
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IPSEC_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_IPSEC_MIB {

CISCOIPSECMIB::CISCOIPSECMIB()
    :
    cipsisakmpgroup(std::make_shared<CISCOIPSECMIB::CipsIsakmpGroup>())
    , cipsipsecglobals(std::make_shared<CISCOIPSECMIB::CipsIPsecGlobals>())
    , cipsipsecstatistics(std::make_shared<CISCOIPSECMIB::CipsIPsecStatistics>())
    , cipssyscapacitygroup(std::make_shared<CISCOIPSECMIB::CipsSysCapacityGroup>())
    , cipstrapcntlgroup(std::make_shared<CISCOIPSECMIB::CipsTrapCntlGroup>())
    , cipsisakmppolicytable(std::make_shared<CISCOIPSECMIB::CipsIsakmpPolicyTable>())
    , cipsstaticcryptomapsettable(std::make_shared<CISCOIPSECMIB::CipsStaticCryptomapSetTable>())
    , cipsdynamiccryptomapsettable(std::make_shared<CISCOIPSECMIB::CipsDynamicCryptomapSetTable>())
    , cipsstaticcryptomaptable(std::make_shared<CISCOIPSECMIB::CipsStaticCryptomapTable>())
    , cipscryptomapsetiftable(std::make_shared<CISCOIPSECMIB::CipsCryptomapSetIfTable>())
{
    cipsisakmpgroup->parent = this;
    cipsipsecglobals->parent = this;
    cipsipsecstatistics->parent = this;
    cipssyscapacitygroup->parent = this;
    cipstrapcntlgroup->parent = this;
    cipsisakmppolicytable->parent = this;
    cipsstaticcryptomapsettable->parent = this;
    cipsdynamiccryptomapsettable->parent = this;
    cipsstaticcryptomaptable->parent = this;
    cipscryptomapsetiftable->parent = this;

    yang_name = "CISCO-IPSEC-MIB"; yang_parent_name = "CISCO-IPSEC-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCOIPSECMIB::~CISCOIPSECMIB()
{
}

bool CISCOIPSECMIB::has_data() const
{
    if (is_presence_container) return true;
    return (cipsisakmpgroup !=  nullptr && cipsisakmpgroup->has_data())
	|| (cipsipsecglobals !=  nullptr && cipsipsecglobals->has_data())
	|| (cipsipsecstatistics !=  nullptr && cipsipsecstatistics->has_data())
	|| (cipssyscapacitygroup !=  nullptr && cipssyscapacitygroup->has_data())
	|| (cipstrapcntlgroup !=  nullptr && cipstrapcntlgroup->has_data())
	|| (cipsisakmppolicytable !=  nullptr && cipsisakmppolicytable->has_data())
	|| (cipsstaticcryptomapsettable !=  nullptr && cipsstaticcryptomapsettable->has_data())
	|| (cipsdynamiccryptomapsettable !=  nullptr && cipsdynamiccryptomapsettable->has_data())
	|| (cipsstaticcryptomaptable !=  nullptr && cipsstaticcryptomaptable->has_data())
	|| (cipscryptomapsetiftable !=  nullptr && cipscryptomapsetiftable->has_data());
}

bool CISCOIPSECMIB::has_operation() const
{
    return is_set(yfilter)
	|| (cipsisakmpgroup !=  nullptr && cipsisakmpgroup->has_operation())
	|| (cipsipsecglobals !=  nullptr && cipsipsecglobals->has_operation())
	|| (cipsipsecstatistics !=  nullptr && cipsipsecstatistics->has_operation())
	|| (cipssyscapacitygroup !=  nullptr && cipssyscapacitygroup->has_operation())
	|| (cipstrapcntlgroup !=  nullptr && cipstrapcntlgroup->has_operation())
	|| (cipsisakmppolicytable !=  nullptr && cipsisakmppolicytable->has_operation())
	|| (cipsstaticcryptomapsettable !=  nullptr && cipsstaticcryptomapsettable->has_operation())
	|| (cipsdynamiccryptomapsettable !=  nullptr && cipsdynamiccryptomapsettable->has_operation())
	|| (cipsstaticcryptomaptable !=  nullptr && cipsstaticcryptomaptable->has_operation())
	|| (cipscryptomapsetiftable !=  nullptr && cipscryptomapsetiftable->has_operation());
}

std::string CISCOIPSECMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSEC-MIB:CISCO-IPSEC-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSECMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSECMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipsIsakmpGroup")
    {
        if(cipsisakmpgroup == nullptr)
        {
            cipsisakmpgroup = std::make_shared<CISCOIPSECMIB::CipsIsakmpGroup>();
        }
        return cipsisakmpgroup;
    }

    if(child_yang_name == "cipsIPsecGlobals")
    {
        if(cipsipsecglobals == nullptr)
        {
            cipsipsecglobals = std::make_shared<CISCOIPSECMIB::CipsIPsecGlobals>();
        }
        return cipsipsecglobals;
    }

    if(child_yang_name == "cipsIPsecStatistics")
    {
        if(cipsipsecstatistics == nullptr)
        {
            cipsipsecstatistics = std::make_shared<CISCOIPSECMIB::CipsIPsecStatistics>();
        }
        return cipsipsecstatistics;
    }

    if(child_yang_name == "cipsSysCapacityGroup")
    {
        if(cipssyscapacitygroup == nullptr)
        {
            cipssyscapacitygroup = std::make_shared<CISCOIPSECMIB::CipsSysCapacityGroup>();
        }
        return cipssyscapacitygroup;
    }

    if(child_yang_name == "cipsTrapCntlGroup")
    {
        if(cipstrapcntlgroup == nullptr)
        {
            cipstrapcntlgroup = std::make_shared<CISCOIPSECMIB::CipsTrapCntlGroup>();
        }
        return cipstrapcntlgroup;
    }

    if(child_yang_name == "cipsIsakmpPolicyTable")
    {
        if(cipsisakmppolicytable == nullptr)
        {
            cipsisakmppolicytable = std::make_shared<CISCOIPSECMIB::CipsIsakmpPolicyTable>();
        }
        return cipsisakmppolicytable;
    }

    if(child_yang_name == "cipsStaticCryptomapSetTable")
    {
        if(cipsstaticcryptomapsettable == nullptr)
        {
            cipsstaticcryptomapsettable = std::make_shared<CISCOIPSECMIB::CipsStaticCryptomapSetTable>();
        }
        return cipsstaticcryptomapsettable;
    }

    if(child_yang_name == "cipsDynamicCryptomapSetTable")
    {
        if(cipsdynamiccryptomapsettable == nullptr)
        {
            cipsdynamiccryptomapsettable = std::make_shared<CISCOIPSECMIB::CipsDynamicCryptomapSetTable>();
        }
        return cipsdynamiccryptomapsettable;
    }

    if(child_yang_name == "cipsStaticCryptomapTable")
    {
        if(cipsstaticcryptomaptable == nullptr)
        {
            cipsstaticcryptomaptable = std::make_shared<CISCOIPSECMIB::CipsStaticCryptomapTable>();
        }
        return cipsstaticcryptomaptable;
    }

    if(child_yang_name == "cipsCryptomapSetIfTable")
    {
        if(cipscryptomapsetiftable == nullptr)
        {
            cipscryptomapsetiftable = std::make_shared<CISCOIPSECMIB::CipsCryptomapSetIfTable>();
        }
        return cipscryptomapsetiftable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSECMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(cipsisakmpgroup != nullptr)
    {
        children["cipsIsakmpGroup"] = cipsisakmpgroup;
    }

    if(cipsipsecglobals != nullptr)
    {
        children["cipsIPsecGlobals"] = cipsipsecglobals;
    }

    if(cipsipsecstatistics != nullptr)
    {
        children["cipsIPsecStatistics"] = cipsipsecstatistics;
    }

    if(cipssyscapacitygroup != nullptr)
    {
        children["cipsSysCapacityGroup"] = cipssyscapacitygroup;
    }

    if(cipstrapcntlgroup != nullptr)
    {
        children["cipsTrapCntlGroup"] = cipstrapcntlgroup;
    }

    if(cipsisakmppolicytable != nullptr)
    {
        children["cipsIsakmpPolicyTable"] = cipsisakmppolicytable;
    }

    if(cipsstaticcryptomapsettable != nullptr)
    {
        children["cipsStaticCryptomapSetTable"] = cipsstaticcryptomapsettable;
    }

    if(cipsdynamiccryptomapsettable != nullptr)
    {
        children["cipsDynamicCryptomapSetTable"] = cipsdynamiccryptomapsettable;
    }

    if(cipsstaticcryptomaptable != nullptr)
    {
        children["cipsStaticCryptomapTable"] = cipsstaticcryptomaptable;
    }

    if(cipscryptomapsetiftable != nullptr)
    {
        children["cipsCryptomapSetIfTable"] = cipscryptomapsetiftable;
    }

    return children;
}

void CISCOIPSECMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIPSECMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOIPSECMIB::clone_ptr() const
{
    return std::make_shared<CISCOIPSECMIB>();
}

std::string CISCOIPSECMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOIPSECMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOIPSECMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOIPSECMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOIPSECMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipsIsakmpGroup" || name == "cipsIPsecGlobals" || name == "cipsIPsecStatistics" || name == "cipsSysCapacityGroup" || name == "cipsTrapCntlGroup" || name == "cipsIsakmpPolicyTable" || name == "cipsStaticCryptomapSetTable" || name == "cipsDynamicCryptomapSetTable" || name == "cipsStaticCryptomapTable" || name == "cipsCryptomapSetIfTable")
        return true;
    return false;
}

CISCOIPSECMIB::CipsIsakmpGroup::CipsIsakmpGroup()
    :
    cipsisakmpenabled{YType::boolean, "cipsIsakmpEnabled"},
    cipsisakmpidentity{YType::enumeration, "cipsIsakmpIdentity"},
    cipsisakmpkeepaliveinterval{YType::int32, "cipsIsakmpKeepaliveInterval"},
    cipsnumisakmppolicies{YType::int32, "cipsNumIsakmpPolicies"}
{

    yang_name = "cipsIsakmpGroup"; yang_parent_name = "CISCO-IPSEC-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIPSECMIB::CipsIsakmpGroup::~CipsIsakmpGroup()
{
}

bool CISCOIPSECMIB::CipsIsakmpGroup::has_data() const
{
    if (is_presence_container) return true;
    return cipsisakmpenabled.is_set
	|| cipsisakmpidentity.is_set
	|| cipsisakmpkeepaliveinterval.is_set
	|| cipsnumisakmppolicies.is_set;
}

bool CISCOIPSECMIB::CipsIsakmpGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cipsisakmpenabled.yfilter)
	|| ydk::is_set(cipsisakmpidentity.yfilter)
	|| ydk::is_set(cipsisakmpkeepaliveinterval.yfilter)
	|| ydk::is_set(cipsnumisakmppolicies.yfilter);
}

std::string CISCOIPSECMIB::CipsIsakmpGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSEC-MIB:CISCO-IPSEC-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSECMIB::CipsIsakmpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipsIsakmpGroup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSECMIB::CipsIsakmpGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipsisakmpenabled.is_set || is_set(cipsisakmpenabled.yfilter)) leaf_name_data.push_back(cipsisakmpenabled.get_name_leafdata());
    if (cipsisakmpidentity.is_set || is_set(cipsisakmpidentity.yfilter)) leaf_name_data.push_back(cipsisakmpidentity.get_name_leafdata());
    if (cipsisakmpkeepaliveinterval.is_set || is_set(cipsisakmpkeepaliveinterval.yfilter)) leaf_name_data.push_back(cipsisakmpkeepaliveinterval.get_name_leafdata());
    if (cipsnumisakmppolicies.is_set || is_set(cipsnumisakmppolicies.yfilter)) leaf_name_data.push_back(cipsnumisakmppolicies.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSECMIB::CipsIsakmpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSECMIB::CipsIsakmpGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIPSECMIB::CipsIsakmpGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOIPSECMIB::CipsIsakmpGroup::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOIPSECMIB::CipsIsakmpGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipsIsakmpEnabled" || name == "cipsIsakmpIdentity" || name == "cipsIsakmpKeepaliveInterval" || name == "cipsNumIsakmpPolicies")
        return true;
    return false;
}

CISCOIPSECMIB::CipsIPsecGlobals::CipsIPsecGlobals()
    :
    cipssalifetime{YType::uint32, "cipsSALifetime"},
    cipssalifesize{YType::uint32, "cipsSALifesize"},
    cipsnumstaticcryptomapsets{YType::uint32, "cipsNumStaticCryptomapSets"},
    cipsnumcetcryptomapsets{YType::uint32, "cipsNumCETCryptomapSets"},
    cipsnumdynamiccryptomapsets{YType::uint32, "cipsNumDynamicCryptomapSets"},
    cipsnumtedcryptomapsets{YType::uint32, "cipsNumTEDCryptomapSets"}
{

    yang_name = "cipsIPsecGlobals"; yang_parent_name = "CISCO-IPSEC-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIPSECMIB::CipsIPsecGlobals::~CipsIPsecGlobals()
{
}

bool CISCOIPSECMIB::CipsIPsecGlobals::has_data() const
{
    if (is_presence_container) return true;
    return cipssalifetime.is_set
	|| cipssalifesize.is_set
	|| cipsnumstaticcryptomapsets.is_set
	|| cipsnumcetcryptomapsets.is_set
	|| cipsnumdynamiccryptomapsets.is_set
	|| cipsnumtedcryptomapsets.is_set;
}

bool CISCOIPSECMIB::CipsIPsecGlobals::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cipssalifetime.yfilter)
	|| ydk::is_set(cipssalifesize.yfilter)
	|| ydk::is_set(cipsnumstaticcryptomapsets.yfilter)
	|| ydk::is_set(cipsnumcetcryptomapsets.yfilter)
	|| ydk::is_set(cipsnumdynamiccryptomapsets.yfilter)
	|| ydk::is_set(cipsnumtedcryptomapsets.yfilter);
}

std::string CISCOIPSECMIB::CipsIPsecGlobals::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSEC-MIB:CISCO-IPSEC-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSECMIB::CipsIPsecGlobals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipsIPsecGlobals";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSECMIB::CipsIPsecGlobals::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipssalifetime.is_set || is_set(cipssalifetime.yfilter)) leaf_name_data.push_back(cipssalifetime.get_name_leafdata());
    if (cipssalifesize.is_set || is_set(cipssalifesize.yfilter)) leaf_name_data.push_back(cipssalifesize.get_name_leafdata());
    if (cipsnumstaticcryptomapsets.is_set || is_set(cipsnumstaticcryptomapsets.yfilter)) leaf_name_data.push_back(cipsnumstaticcryptomapsets.get_name_leafdata());
    if (cipsnumcetcryptomapsets.is_set || is_set(cipsnumcetcryptomapsets.yfilter)) leaf_name_data.push_back(cipsnumcetcryptomapsets.get_name_leafdata());
    if (cipsnumdynamiccryptomapsets.is_set || is_set(cipsnumdynamiccryptomapsets.yfilter)) leaf_name_data.push_back(cipsnumdynamiccryptomapsets.get_name_leafdata());
    if (cipsnumtedcryptomapsets.is_set || is_set(cipsnumtedcryptomapsets.yfilter)) leaf_name_data.push_back(cipsnumtedcryptomapsets.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSECMIB::CipsIPsecGlobals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSECMIB::CipsIPsecGlobals::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIPSECMIB::CipsIPsecGlobals::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cipsSALifetime")
    {
        cipssalifetime = value;
        cipssalifetime.value_namespace = name_space;
        cipssalifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsSALifesize")
    {
        cipssalifesize = value;
        cipssalifesize.value_namespace = name_space;
        cipssalifesize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsNumStaticCryptomapSets")
    {
        cipsnumstaticcryptomapsets = value;
        cipsnumstaticcryptomapsets.value_namespace = name_space;
        cipsnumstaticcryptomapsets.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "cipsNumTEDCryptomapSets")
    {
        cipsnumtedcryptomapsets = value;
        cipsnumtedcryptomapsets.value_namespace = name_space;
        cipsnumtedcryptomapsets.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIPSECMIB::CipsIPsecGlobals::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cipsSALifetime")
    {
        cipssalifetime.yfilter = yfilter;
    }
    if(value_path == "cipsSALifesize")
    {
        cipssalifesize.yfilter = yfilter;
    }
    if(value_path == "cipsNumStaticCryptomapSets")
    {
        cipsnumstaticcryptomapsets.yfilter = yfilter;
    }
    if(value_path == "cipsNumCETCryptomapSets")
    {
        cipsnumcetcryptomapsets.yfilter = yfilter;
    }
    if(value_path == "cipsNumDynamicCryptomapSets")
    {
        cipsnumdynamiccryptomapsets.yfilter = yfilter;
    }
    if(value_path == "cipsNumTEDCryptomapSets")
    {
        cipsnumtedcryptomapsets.yfilter = yfilter;
    }
}

bool CISCOIPSECMIB::CipsIPsecGlobals::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipsSALifetime" || name == "cipsSALifesize" || name == "cipsNumStaticCryptomapSets" || name == "cipsNumCETCryptomapSets" || name == "cipsNumDynamicCryptomapSets" || name == "cipsNumTEDCryptomapSets")
        return true;
    return false;
}

CISCOIPSECMIB::CipsIPsecStatistics::CipsIPsecStatistics()
    :
    cipsnumtedprobesreceived{YType::uint32, "cipsNumTEDProbesReceived"},
    cipsnumtedprobessent{YType::uint32, "cipsNumTEDProbesSent"},
    cipsnumtedfailures{YType::uint32, "cipsNumTEDFailures"}
{

    yang_name = "cipsIPsecStatistics"; yang_parent_name = "CISCO-IPSEC-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIPSECMIB::CipsIPsecStatistics::~CipsIPsecStatistics()
{
}

bool CISCOIPSECMIB::CipsIPsecStatistics::has_data() const
{
    if (is_presence_container) return true;
    return cipsnumtedprobesreceived.is_set
	|| cipsnumtedprobessent.is_set
	|| cipsnumtedfailures.is_set;
}

bool CISCOIPSECMIB::CipsIPsecStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cipsnumtedprobesreceived.yfilter)
	|| ydk::is_set(cipsnumtedprobessent.yfilter)
	|| ydk::is_set(cipsnumtedfailures.yfilter);
}

std::string CISCOIPSECMIB::CipsIPsecStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSEC-MIB:CISCO-IPSEC-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSECMIB::CipsIPsecStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipsIPsecStatistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSECMIB::CipsIPsecStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipsnumtedprobesreceived.is_set || is_set(cipsnumtedprobesreceived.yfilter)) leaf_name_data.push_back(cipsnumtedprobesreceived.get_name_leafdata());
    if (cipsnumtedprobessent.is_set || is_set(cipsnumtedprobessent.yfilter)) leaf_name_data.push_back(cipsnumtedprobessent.get_name_leafdata());
    if (cipsnumtedfailures.is_set || is_set(cipsnumtedfailures.yfilter)) leaf_name_data.push_back(cipsnumtedfailures.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSECMIB::CipsIPsecStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSECMIB::CipsIPsecStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIPSECMIB::CipsIPsecStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "cipsNumTEDFailures")
    {
        cipsnumtedfailures = value;
        cipsnumtedfailures.value_namespace = name_space;
        cipsnumtedfailures.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIPSECMIB::CipsIPsecStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cipsNumTEDProbesReceived")
    {
        cipsnumtedprobesreceived.yfilter = yfilter;
    }
    if(value_path == "cipsNumTEDProbesSent")
    {
        cipsnumtedprobessent.yfilter = yfilter;
    }
    if(value_path == "cipsNumTEDFailures")
    {
        cipsnumtedfailures.yfilter = yfilter;
    }
}

bool CISCOIPSECMIB::CipsIPsecStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipsNumTEDProbesReceived" || name == "cipsNumTEDProbesSent" || name == "cipsNumTEDFailures")
        return true;
    return false;
}

CISCOIPSECMIB::CipsSysCapacityGroup::CipsSysCapacityGroup()
    :
    cipsmaxsas{YType::int32, "cipsMaxSAs"},
    cips3descapable{YType::boolean, "cips3DesCapable"}
{

    yang_name = "cipsSysCapacityGroup"; yang_parent_name = "CISCO-IPSEC-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIPSECMIB::CipsSysCapacityGroup::~CipsSysCapacityGroup()
{
}

bool CISCOIPSECMIB::CipsSysCapacityGroup::has_data() const
{
    if (is_presence_container) return true;
    return cipsmaxsas.is_set
	|| cips3descapable.is_set;
}

bool CISCOIPSECMIB::CipsSysCapacityGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cipsmaxsas.yfilter)
	|| ydk::is_set(cips3descapable.yfilter);
}

std::string CISCOIPSECMIB::CipsSysCapacityGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSEC-MIB:CISCO-IPSEC-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSECMIB::CipsSysCapacityGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipsSysCapacityGroup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSECMIB::CipsSysCapacityGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipsmaxsas.is_set || is_set(cipsmaxsas.yfilter)) leaf_name_data.push_back(cipsmaxsas.get_name_leafdata());
    if (cips3descapable.is_set || is_set(cips3descapable.yfilter)) leaf_name_data.push_back(cips3descapable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSECMIB::CipsSysCapacityGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSECMIB::CipsSysCapacityGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIPSECMIB::CipsSysCapacityGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cipsMaxSAs")
    {
        cipsmaxsas = value;
        cipsmaxsas.value_namespace = name_space;
        cipsmaxsas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cips3DesCapable")
    {
        cips3descapable = value;
        cips3descapable.value_namespace = name_space;
        cips3descapable.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIPSECMIB::CipsSysCapacityGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cipsMaxSAs")
    {
        cipsmaxsas.yfilter = yfilter;
    }
    if(value_path == "cips3DesCapable")
    {
        cips3descapable.yfilter = yfilter;
    }
}

bool CISCOIPSECMIB::CipsSysCapacityGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipsMaxSAs" || name == "cips3DesCapable")
        return true;
    return false;
}

CISCOIPSECMIB::CipsTrapCntlGroup::CipsTrapCntlGroup()
    :
    cipscntlisakmppolicyadded{YType::enumeration, "cipsCntlIsakmpPolicyAdded"},
    cipscntlisakmppolicydeleted{YType::enumeration, "cipsCntlIsakmpPolicyDeleted"},
    cipscntlcryptomapadded{YType::enumeration, "cipsCntlCryptomapAdded"},
    cipscntlcryptomapdeleted{YType::enumeration, "cipsCntlCryptomapDeleted"},
    cipscntlcryptomapsetattached{YType::enumeration, "cipsCntlCryptomapSetAttached"},
    cipscntlcryptomapsetdetached{YType::enumeration, "cipsCntlCryptomapSetDetached"},
    cipscntltoomanysas{YType::enumeration, "cipsCntlTooManySAs"}
{

    yang_name = "cipsTrapCntlGroup"; yang_parent_name = "CISCO-IPSEC-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIPSECMIB::CipsTrapCntlGroup::~CipsTrapCntlGroup()
{
}

bool CISCOIPSECMIB::CipsTrapCntlGroup::has_data() const
{
    if (is_presence_container) return true;
    return cipscntlisakmppolicyadded.is_set
	|| cipscntlisakmppolicydeleted.is_set
	|| cipscntlcryptomapadded.is_set
	|| cipscntlcryptomapdeleted.is_set
	|| cipscntlcryptomapsetattached.is_set
	|| cipscntlcryptomapsetdetached.is_set
	|| cipscntltoomanysas.is_set;
}

bool CISCOIPSECMIB::CipsTrapCntlGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cipscntlisakmppolicyadded.yfilter)
	|| ydk::is_set(cipscntlisakmppolicydeleted.yfilter)
	|| ydk::is_set(cipscntlcryptomapadded.yfilter)
	|| ydk::is_set(cipscntlcryptomapdeleted.yfilter)
	|| ydk::is_set(cipscntlcryptomapsetattached.yfilter)
	|| ydk::is_set(cipscntlcryptomapsetdetached.yfilter)
	|| ydk::is_set(cipscntltoomanysas.yfilter);
}

std::string CISCOIPSECMIB::CipsTrapCntlGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSEC-MIB:CISCO-IPSEC-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSECMIB::CipsTrapCntlGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipsTrapCntlGroup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSECMIB::CipsTrapCntlGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipscntlisakmppolicyadded.is_set || is_set(cipscntlisakmppolicyadded.yfilter)) leaf_name_data.push_back(cipscntlisakmppolicyadded.get_name_leafdata());
    if (cipscntlisakmppolicydeleted.is_set || is_set(cipscntlisakmppolicydeleted.yfilter)) leaf_name_data.push_back(cipscntlisakmppolicydeleted.get_name_leafdata());
    if (cipscntlcryptomapadded.is_set || is_set(cipscntlcryptomapadded.yfilter)) leaf_name_data.push_back(cipscntlcryptomapadded.get_name_leafdata());
    if (cipscntlcryptomapdeleted.is_set || is_set(cipscntlcryptomapdeleted.yfilter)) leaf_name_data.push_back(cipscntlcryptomapdeleted.get_name_leafdata());
    if (cipscntlcryptomapsetattached.is_set || is_set(cipscntlcryptomapsetattached.yfilter)) leaf_name_data.push_back(cipscntlcryptomapsetattached.get_name_leafdata());
    if (cipscntlcryptomapsetdetached.is_set || is_set(cipscntlcryptomapsetdetached.yfilter)) leaf_name_data.push_back(cipscntlcryptomapsetdetached.get_name_leafdata());
    if (cipscntltoomanysas.is_set || is_set(cipscntltoomanysas.yfilter)) leaf_name_data.push_back(cipscntltoomanysas.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSECMIB::CipsTrapCntlGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSECMIB::CipsTrapCntlGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIPSECMIB::CipsTrapCntlGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "cipsCntlTooManySAs")
    {
        cipscntltoomanysas = value;
        cipscntltoomanysas.value_namespace = name_space;
        cipscntltoomanysas.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIPSECMIB::CipsTrapCntlGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cipsCntlIsakmpPolicyAdded")
    {
        cipscntlisakmppolicyadded.yfilter = yfilter;
    }
    if(value_path == "cipsCntlIsakmpPolicyDeleted")
    {
        cipscntlisakmppolicydeleted.yfilter = yfilter;
    }
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
    if(value_path == "cipsCntlTooManySAs")
    {
        cipscntltoomanysas.yfilter = yfilter;
    }
}

bool CISCOIPSECMIB::CipsTrapCntlGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipsCntlIsakmpPolicyAdded" || name == "cipsCntlIsakmpPolicyDeleted" || name == "cipsCntlCryptomapAdded" || name == "cipsCntlCryptomapDeleted" || name == "cipsCntlCryptomapSetAttached" || name == "cipsCntlCryptomapSetDetached" || name == "cipsCntlTooManySAs")
        return true;
    return false;
}

CISCOIPSECMIB::CipsIsakmpPolicyTable::CipsIsakmpPolicyTable()
    :
    cipsisakmppolicyentry(this, {"cipsisakmppolpriority"})
{

    yang_name = "cipsIsakmpPolicyTable"; yang_parent_name = "CISCO-IPSEC-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIPSECMIB::CipsIsakmpPolicyTable::~CipsIsakmpPolicyTable()
{
}

bool CISCOIPSECMIB::CipsIsakmpPolicyTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cipsisakmppolicyentry.len(); index++)
    {
        if(cipsisakmppolicyentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIPSECMIB::CipsIsakmpPolicyTable::has_operation() const
{
    for (std::size_t index=0; index<cipsisakmppolicyentry.len(); index++)
    {
        if(cipsisakmppolicyentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIPSECMIB::CipsIsakmpPolicyTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSEC-MIB:CISCO-IPSEC-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSECMIB::CipsIsakmpPolicyTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipsIsakmpPolicyTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSECMIB::CipsIsakmpPolicyTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSECMIB::CipsIsakmpPolicyTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipsIsakmpPolicyEntry")
    {
        auto c = std::make_shared<CISCOIPSECMIB::CipsIsakmpPolicyTable::CipsIsakmpPolicyEntry>();
        c->parent = this;
        cipsisakmppolicyentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSECMIB::CipsIsakmpPolicyTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cipsisakmppolicyentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOIPSECMIB::CipsIsakmpPolicyTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIPSECMIB::CipsIsakmpPolicyTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIPSECMIB::CipsIsakmpPolicyTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipsIsakmpPolicyEntry")
        return true;
    return false;
}

CISCOIPSECMIB::CipsIsakmpPolicyTable::CipsIsakmpPolicyEntry::CipsIsakmpPolicyEntry()
    :
    cipsisakmppolpriority{YType::int32, "cipsIsakmpPolPriority"},
    cipsisakmppolencr{YType::enumeration, "cipsIsakmpPolEncr"},
    cipsisakmppolhash{YType::enumeration, "cipsIsakmpPolHash"},
    cipsisakmppolauth{YType::enumeration, "cipsIsakmpPolAuth"},
    cipsisakmppolgroup{YType::enumeration, "cipsIsakmpPolGroup"},
    cipsisakmppollifetime{YType::int32, "cipsIsakmpPolLifetime"}
{

    yang_name = "cipsIsakmpPolicyEntry"; yang_parent_name = "cipsIsakmpPolicyTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIPSECMIB::CipsIsakmpPolicyTable::CipsIsakmpPolicyEntry::~CipsIsakmpPolicyEntry()
{
}

bool CISCOIPSECMIB::CipsIsakmpPolicyTable::CipsIsakmpPolicyEntry::has_data() const
{
    if (is_presence_container) return true;
    return cipsisakmppolpriority.is_set
	|| cipsisakmppolencr.is_set
	|| cipsisakmppolhash.is_set
	|| cipsisakmppolauth.is_set
	|| cipsisakmppolgroup.is_set
	|| cipsisakmppollifetime.is_set;
}

bool CISCOIPSECMIB::CipsIsakmpPolicyTable::CipsIsakmpPolicyEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cipsisakmppolpriority.yfilter)
	|| ydk::is_set(cipsisakmppolencr.yfilter)
	|| ydk::is_set(cipsisakmppolhash.yfilter)
	|| ydk::is_set(cipsisakmppolauth.yfilter)
	|| ydk::is_set(cipsisakmppolgroup.yfilter)
	|| ydk::is_set(cipsisakmppollifetime.yfilter);
}

std::string CISCOIPSECMIB::CipsIsakmpPolicyTable::CipsIsakmpPolicyEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSEC-MIB:CISCO-IPSEC-MIB/cipsIsakmpPolicyTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSECMIB::CipsIsakmpPolicyTable::CipsIsakmpPolicyEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipsIsakmpPolicyEntry";
    ADD_KEY_TOKEN(cipsisakmppolpriority, "cipsIsakmpPolPriority");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSECMIB::CipsIsakmpPolicyTable::CipsIsakmpPolicyEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipsisakmppolpriority.is_set || is_set(cipsisakmppolpriority.yfilter)) leaf_name_data.push_back(cipsisakmppolpriority.get_name_leafdata());
    if (cipsisakmppolencr.is_set || is_set(cipsisakmppolencr.yfilter)) leaf_name_data.push_back(cipsisakmppolencr.get_name_leafdata());
    if (cipsisakmppolhash.is_set || is_set(cipsisakmppolhash.yfilter)) leaf_name_data.push_back(cipsisakmppolhash.get_name_leafdata());
    if (cipsisakmppolauth.is_set || is_set(cipsisakmppolauth.yfilter)) leaf_name_data.push_back(cipsisakmppolauth.get_name_leafdata());
    if (cipsisakmppolgroup.is_set || is_set(cipsisakmppolgroup.yfilter)) leaf_name_data.push_back(cipsisakmppolgroup.get_name_leafdata());
    if (cipsisakmppollifetime.is_set || is_set(cipsisakmppollifetime.yfilter)) leaf_name_data.push_back(cipsisakmppollifetime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSECMIB::CipsIsakmpPolicyTable::CipsIsakmpPolicyEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSECMIB::CipsIsakmpPolicyTable::CipsIsakmpPolicyEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIPSECMIB::CipsIsakmpPolicyTable::CipsIsakmpPolicyEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cipsIsakmpPolPriority")
    {
        cipsisakmppolpriority = value;
        cipsisakmppolpriority.value_namespace = name_space;
        cipsisakmppolpriority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsIsakmpPolEncr")
    {
        cipsisakmppolencr = value;
        cipsisakmppolencr.value_namespace = name_space;
        cipsisakmppolencr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsIsakmpPolHash")
    {
        cipsisakmppolhash = value;
        cipsisakmppolhash.value_namespace = name_space;
        cipsisakmppolhash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsIsakmpPolAuth")
    {
        cipsisakmppolauth = value;
        cipsisakmppolauth.value_namespace = name_space;
        cipsisakmppolauth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsIsakmpPolGroup")
    {
        cipsisakmppolgroup = value;
        cipsisakmppolgroup.value_namespace = name_space;
        cipsisakmppolgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsIsakmpPolLifetime")
    {
        cipsisakmppollifetime = value;
        cipsisakmppollifetime.value_namespace = name_space;
        cipsisakmppollifetime.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIPSECMIB::CipsIsakmpPolicyTable::CipsIsakmpPolicyEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cipsIsakmpPolPriority")
    {
        cipsisakmppolpriority.yfilter = yfilter;
    }
    if(value_path == "cipsIsakmpPolEncr")
    {
        cipsisakmppolencr.yfilter = yfilter;
    }
    if(value_path == "cipsIsakmpPolHash")
    {
        cipsisakmppolhash.yfilter = yfilter;
    }
    if(value_path == "cipsIsakmpPolAuth")
    {
        cipsisakmppolauth.yfilter = yfilter;
    }
    if(value_path == "cipsIsakmpPolGroup")
    {
        cipsisakmppolgroup.yfilter = yfilter;
    }
    if(value_path == "cipsIsakmpPolLifetime")
    {
        cipsisakmppollifetime.yfilter = yfilter;
    }
}

bool CISCOIPSECMIB::CipsIsakmpPolicyTable::CipsIsakmpPolicyEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipsIsakmpPolPriority" || name == "cipsIsakmpPolEncr" || name == "cipsIsakmpPolHash" || name == "cipsIsakmpPolAuth" || name == "cipsIsakmpPolGroup" || name == "cipsIsakmpPolLifetime")
        return true;
    return false;
}

CISCOIPSECMIB::CipsStaticCryptomapSetTable::CipsStaticCryptomapSetTable()
    :
    cipsstaticcryptomapsetentry(this, {"cipsstaticcryptomapsetname"})
{

    yang_name = "cipsStaticCryptomapSetTable"; yang_parent_name = "CISCO-IPSEC-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIPSECMIB::CipsStaticCryptomapSetTable::~CipsStaticCryptomapSetTable()
{
}

bool CISCOIPSECMIB::CipsStaticCryptomapSetTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cipsstaticcryptomapsetentry.len(); index++)
    {
        if(cipsstaticcryptomapsetentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIPSECMIB::CipsStaticCryptomapSetTable::has_operation() const
{
    for (std::size_t index=0; index<cipsstaticcryptomapsetentry.len(); index++)
    {
        if(cipsstaticcryptomapsetentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIPSECMIB::CipsStaticCryptomapSetTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSEC-MIB:CISCO-IPSEC-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSECMIB::CipsStaticCryptomapSetTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipsStaticCryptomapSetTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSECMIB::CipsStaticCryptomapSetTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSECMIB::CipsStaticCryptomapSetTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipsStaticCryptomapSetEntry")
    {
        auto c = std::make_shared<CISCOIPSECMIB::CipsStaticCryptomapSetTable::CipsStaticCryptomapSetEntry>();
        c->parent = this;
        cipsstaticcryptomapsetentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSECMIB::CipsStaticCryptomapSetTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cipsstaticcryptomapsetentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOIPSECMIB::CipsStaticCryptomapSetTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIPSECMIB::CipsStaticCryptomapSetTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIPSECMIB::CipsStaticCryptomapSetTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipsStaticCryptomapSetEntry")
        return true;
    return false;
}

CISCOIPSECMIB::CipsStaticCryptomapSetTable::CipsStaticCryptomapSetEntry::CipsStaticCryptomapSetEntry()
    :
    cipsstaticcryptomapsetname{YType::str, "cipsStaticCryptomapSetName"},
    cipsstaticcryptomapsetsize{YType::uint32, "cipsStaticCryptomapSetSize"},
    cipsstaticcryptomapsetnumisakmp{YType::uint32, "cipsStaticCryptomapSetNumIsakmp"},
    cipsstaticcryptomapsetnummanual{YType::uint32, "cipsStaticCryptomapSetNumManual"},
    cipsstaticcryptomapsetnumcet{YType::uint32, "cipsStaticCryptomapSetNumCET"},
    cipsstaticcryptomapsetnumdynamic{YType::uint32, "cipsStaticCryptomapSetNumDynamic"},
    cipsstaticcryptomapsetnumdisc{YType::uint32, "cipsStaticCryptomapSetNumDisc"},
    cipsstaticcryptomapsetnumsas{YType::uint32, "cipsStaticCryptomapSetNumSAs"}
{

    yang_name = "cipsStaticCryptomapSetEntry"; yang_parent_name = "cipsStaticCryptomapSetTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIPSECMIB::CipsStaticCryptomapSetTable::CipsStaticCryptomapSetEntry::~CipsStaticCryptomapSetEntry()
{
}

bool CISCOIPSECMIB::CipsStaticCryptomapSetTable::CipsStaticCryptomapSetEntry::has_data() const
{
    if (is_presence_container) return true;
    return cipsstaticcryptomapsetname.is_set
	|| cipsstaticcryptomapsetsize.is_set
	|| cipsstaticcryptomapsetnumisakmp.is_set
	|| cipsstaticcryptomapsetnummanual.is_set
	|| cipsstaticcryptomapsetnumcet.is_set
	|| cipsstaticcryptomapsetnumdynamic.is_set
	|| cipsstaticcryptomapsetnumdisc.is_set
	|| cipsstaticcryptomapsetnumsas.is_set;
}

bool CISCOIPSECMIB::CipsStaticCryptomapSetTable::CipsStaticCryptomapSetEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cipsstaticcryptomapsetname.yfilter)
	|| ydk::is_set(cipsstaticcryptomapsetsize.yfilter)
	|| ydk::is_set(cipsstaticcryptomapsetnumisakmp.yfilter)
	|| ydk::is_set(cipsstaticcryptomapsetnummanual.yfilter)
	|| ydk::is_set(cipsstaticcryptomapsetnumcet.yfilter)
	|| ydk::is_set(cipsstaticcryptomapsetnumdynamic.yfilter)
	|| ydk::is_set(cipsstaticcryptomapsetnumdisc.yfilter)
	|| ydk::is_set(cipsstaticcryptomapsetnumsas.yfilter);
}

std::string CISCOIPSECMIB::CipsStaticCryptomapSetTable::CipsStaticCryptomapSetEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSEC-MIB:CISCO-IPSEC-MIB/cipsStaticCryptomapSetTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSECMIB::CipsStaticCryptomapSetTable::CipsStaticCryptomapSetEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipsStaticCryptomapSetEntry";
    ADD_KEY_TOKEN(cipsstaticcryptomapsetname, "cipsStaticCryptomapSetName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSECMIB::CipsStaticCryptomapSetTable::CipsStaticCryptomapSetEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipsstaticcryptomapsetname.is_set || is_set(cipsstaticcryptomapsetname.yfilter)) leaf_name_data.push_back(cipsstaticcryptomapsetname.get_name_leafdata());
    if (cipsstaticcryptomapsetsize.is_set || is_set(cipsstaticcryptomapsetsize.yfilter)) leaf_name_data.push_back(cipsstaticcryptomapsetsize.get_name_leafdata());
    if (cipsstaticcryptomapsetnumisakmp.is_set || is_set(cipsstaticcryptomapsetnumisakmp.yfilter)) leaf_name_data.push_back(cipsstaticcryptomapsetnumisakmp.get_name_leafdata());
    if (cipsstaticcryptomapsetnummanual.is_set || is_set(cipsstaticcryptomapsetnummanual.yfilter)) leaf_name_data.push_back(cipsstaticcryptomapsetnummanual.get_name_leafdata());
    if (cipsstaticcryptomapsetnumcet.is_set || is_set(cipsstaticcryptomapsetnumcet.yfilter)) leaf_name_data.push_back(cipsstaticcryptomapsetnumcet.get_name_leafdata());
    if (cipsstaticcryptomapsetnumdynamic.is_set || is_set(cipsstaticcryptomapsetnumdynamic.yfilter)) leaf_name_data.push_back(cipsstaticcryptomapsetnumdynamic.get_name_leafdata());
    if (cipsstaticcryptomapsetnumdisc.is_set || is_set(cipsstaticcryptomapsetnumdisc.yfilter)) leaf_name_data.push_back(cipsstaticcryptomapsetnumdisc.get_name_leafdata());
    if (cipsstaticcryptomapsetnumsas.is_set || is_set(cipsstaticcryptomapsetnumsas.yfilter)) leaf_name_data.push_back(cipsstaticcryptomapsetnumsas.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSECMIB::CipsStaticCryptomapSetTable::CipsStaticCryptomapSetEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSECMIB::CipsStaticCryptomapSetTable::CipsStaticCryptomapSetEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIPSECMIB::CipsStaticCryptomapSetTable::CipsStaticCryptomapSetEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cipsStaticCryptomapSetName")
    {
        cipsstaticcryptomapsetname = value;
        cipsstaticcryptomapsetname.value_namespace = name_space;
        cipsstaticcryptomapsetname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsStaticCryptomapSetSize")
    {
        cipsstaticcryptomapsetsize = value;
        cipsstaticcryptomapsetsize.value_namespace = name_space;
        cipsstaticcryptomapsetsize.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "cipsStaticCryptomapSetNumCET")
    {
        cipsstaticcryptomapsetnumcet = value;
        cipsstaticcryptomapsetnumcet.value_namespace = name_space;
        cipsstaticcryptomapsetnumcet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsStaticCryptomapSetNumDynamic")
    {
        cipsstaticcryptomapsetnumdynamic = value;
        cipsstaticcryptomapsetnumdynamic.value_namespace = name_space;
        cipsstaticcryptomapsetnumdynamic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsStaticCryptomapSetNumDisc")
    {
        cipsstaticcryptomapsetnumdisc = value;
        cipsstaticcryptomapsetnumdisc.value_namespace = name_space;
        cipsstaticcryptomapsetnumdisc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsStaticCryptomapSetNumSAs")
    {
        cipsstaticcryptomapsetnumsas = value;
        cipsstaticcryptomapsetnumsas.value_namespace = name_space;
        cipsstaticcryptomapsetnumsas.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIPSECMIB::CipsStaticCryptomapSetTable::CipsStaticCryptomapSetEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cipsStaticCryptomapSetName")
    {
        cipsstaticcryptomapsetname.yfilter = yfilter;
    }
    if(value_path == "cipsStaticCryptomapSetSize")
    {
        cipsstaticcryptomapsetsize.yfilter = yfilter;
    }
    if(value_path == "cipsStaticCryptomapSetNumIsakmp")
    {
        cipsstaticcryptomapsetnumisakmp.yfilter = yfilter;
    }
    if(value_path == "cipsStaticCryptomapSetNumManual")
    {
        cipsstaticcryptomapsetnummanual.yfilter = yfilter;
    }
    if(value_path == "cipsStaticCryptomapSetNumCET")
    {
        cipsstaticcryptomapsetnumcet.yfilter = yfilter;
    }
    if(value_path == "cipsStaticCryptomapSetNumDynamic")
    {
        cipsstaticcryptomapsetnumdynamic.yfilter = yfilter;
    }
    if(value_path == "cipsStaticCryptomapSetNumDisc")
    {
        cipsstaticcryptomapsetnumdisc.yfilter = yfilter;
    }
    if(value_path == "cipsStaticCryptomapSetNumSAs")
    {
        cipsstaticcryptomapsetnumsas.yfilter = yfilter;
    }
}

bool CISCOIPSECMIB::CipsStaticCryptomapSetTable::CipsStaticCryptomapSetEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipsStaticCryptomapSetName" || name == "cipsStaticCryptomapSetSize" || name == "cipsStaticCryptomapSetNumIsakmp" || name == "cipsStaticCryptomapSetNumManual" || name == "cipsStaticCryptomapSetNumCET" || name == "cipsStaticCryptomapSetNumDynamic" || name == "cipsStaticCryptomapSetNumDisc" || name == "cipsStaticCryptomapSetNumSAs")
        return true;
    return false;
}

CISCOIPSECMIB::CipsDynamicCryptomapSetTable::CipsDynamicCryptomapSetTable()
    :
    cipsdynamiccryptomapsetentry(this, {"cipsdynamiccryptomapsetname"})
{

    yang_name = "cipsDynamicCryptomapSetTable"; yang_parent_name = "CISCO-IPSEC-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIPSECMIB::CipsDynamicCryptomapSetTable::~CipsDynamicCryptomapSetTable()
{
}

bool CISCOIPSECMIB::CipsDynamicCryptomapSetTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cipsdynamiccryptomapsetentry.len(); index++)
    {
        if(cipsdynamiccryptomapsetentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIPSECMIB::CipsDynamicCryptomapSetTable::has_operation() const
{
    for (std::size_t index=0; index<cipsdynamiccryptomapsetentry.len(); index++)
    {
        if(cipsdynamiccryptomapsetentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIPSECMIB::CipsDynamicCryptomapSetTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSEC-MIB:CISCO-IPSEC-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSECMIB::CipsDynamicCryptomapSetTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipsDynamicCryptomapSetTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSECMIB::CipsDynamicCryptomapSetTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSECMIB::CipsDynamicCryptomapSetTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipsDynamicCryptomapSetEntry")
    {
        auto c = std::make_shared<CISCOIPSECMIB::CipsDynamicCryptomapSetTable::CipsDynamicCryptomapSetEntry>();
        c->parent = this;
        cipsdynamiccryptomapsetentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSECMIB::CipsDynamicCryptomapSetTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cipsdynamiccryptomapsetentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOIPSECMIB::CipsDynamicCryptomapSetTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIPSECMIB::CipsDynamicCryptomapSetTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIPSECMIB::CipsDynamicCryptomapSetTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipsDynamicCryptomapSetEntry")
        return true;
    return false;
}

CISCOIPSECMIB::CipsDynamicCryptomapSetTable::CipsDynamicCryptomapSetEntry::CipsDynamicCryptomapSetEntry()
    :
    cipsdynamiccryptomapsetname{YType::str, "cipsDynamicCryptomapSetName"},
    cipsdynamiccryptomapsetsize{YType::uint32, "cipsDynamicCryptomapSetSize"},
    cipsdynamiccryptomapsetnumassoc{YType::uint32, "cipsDynamicCryptomapSetNumAssoc"}
{

    yang_name = "cipsDynamicCryptomapSetEntry"; yang_parent_name = "cipsDynamicCryptomapSetTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIPSECMIB::CipsDynamicCryptomapSetTable::CipsDynamicCryptomapSetEntry::~CipsDynamicCryptomapSetEntry()
{
}

bool CISCOIPSECMIB::CipsDynamicCryptomapSetTable::CipsDynamicCryptomapSetEntry::has_data() const
{
    if (is_presence_container) return true;
    return cipsdynamiccryptomapsetname.is_set
	|| cipsdynamiccryptomapsetsize.is_set
	|| cipsdynamiccryptomapsetnumassoc.is_set;
}

bool CISCOIPSECMIB::CipsDynamicCryptomapSetTable::CipsDynamicCryptomapSetEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cipsdynamiccryptomapsetname.yfilter)
	|| ydk::is_set(cipsdynamiccryptomapsetsize.yfilter)
	|| ydk::is_set(cipsdynamiccryptomapsetnumassoc.yfilter);
}

std::string CISCOIPSECMIB::CipsDynamicCryptomapSetTable::CipsDynamicCryptomapSetEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSEC-MIB:CISCO-IPSEC-MIB/cipsDynamicCryptomapSetTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSECMIB::CipsDynamicCryptomapSetTable::CipsDynamicCryptomapSetEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipsDynamicCryptomapSetEntry";
    ADD_KEY_TOKEN(cipsdynamiccryptomapsetname, "cipsDynamicCryptomapSetName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSECMIB::CipsDynamicCryptomapSetTable::CipsDynamicCryptomapSetEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipsdynamiccryptomapsetname.is_set || is_set(cipsdynamiccryptomapsetname.yfilter)) leaf_name_data.push_back(cipsdynamiccryptomapsetname.get_name_leafdata());
    if (cipsdynamiccryptomapsetsize.is_set || is_set(cipsdynamiccryptomapsetsize.yfilter)) leaf_name_data.push_back(cipsdynamiccryptomapsetsize.get_name_leafdata());
    if (cipsdynamiccryptomapsetnumassoc.is_set || is_set(cipsdynamiccryptomapsetnumassoc.yfilter)) leaf_name_data.push_back(cipsdynamiccryptomapsetnumassoc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSECMIB::CipsDynamicCryptomapSetTable::CipsDynamicCryptomapSetEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSECMIB::CipsDynamicCryptomapSetTable::CipsDynamicCryptomapSetEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIPSECMIB::CipsDynamicCryptomapSetTable::CipsDynamicCryptomapSetEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cipsDynamicCryptomapSetName")
    {
        cipsdynamiccryptomapsetname = value;
        cipsdynamiccryptomapsetname.value_namespace = name_space;
        cipsdynamiccryptomapsetname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsDynamicCryptomapSetSize")
    {
        cipsdynamiccryptomapsetsize = value;
        cipsdynamiccryptomapsetsize.value_namespace = name_space;
        cipsdynamiccryptomapsetsize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsDynamicCryptomapSetNumAssoc")
    {
        cipsdynamiccryptomapsetnumassoc = value;
        cipsdynamiccryptomapsetnumassoc.value_namespace = name_space;
        cipsdynamiccryptomapsetnumassoc.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIPSECMIB::CipsDynamicCryptomapSetTable::CipsDynamicCryptomapSetEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cipsDynamicCryptomapSetName")
    {
        cipsdynamiccryptomapsetname.yfilter = yfilter;
    }
    if(value_path == "cipsDynamicCryptomapSetSize")
    {
        cipsdynamiccryptomapsetsize.yfilter = yfilter;
    }
    if(value_path == "cipsDynamicCryptomapSetNumAssoc")
    {
        cipsdynamiccryptomapsetnumassoc.yfilter = yfilter;
    }
}

bool CISCOIPSECMIB::CipsDynamicCryptomapSetTable::CipsDynamicCryptomapSetEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipsDynamicCryptomapSetName" || name == "cipsDynamicCryptomapSetSize" || name == "cipsDynamicCryptomapSetNumAssoc")
        return true;
    return false;
}

CISCOIPSECMIB::CipsStaticCryptomapTable::CipsStaticCryptomapTable()
    :
    cipsstaticcryptomapentry(this, {"cipsstaticcryptomapsetname", "cipsstaticcryptomappriority"})
{

    yang_name = "cipsStaticCryptomapTable"; yang_parent_name = "CISCO-IPSEC-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIPSECMIB::CipsStaticCryptomapTable::~CipsStaticCryptomapTable()
{
}

bool CISCOIPSECMIB::CipsStaticCryptomapTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cipsstaticcryptomapentry.len(); index++)
    {
        if(cipsstaticcryptomapentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIPSECMIB::CipsStaticCryptomapTable::has_operation() const
{
    for (std::size_t index=0; index<cipsstaticcryptomapentry.len(); index++)
    {
        if(cipsstaticcryptomapentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIPSECMIB::CipsStaticCryptomapTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSEC-MIB:CISCO-IPSEC-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSECMIB::CipsStaticCryptomapTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipsStaticCryptomapTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSECMIB::CipsStaticCryptomapTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSECMIB::CipsStaticCryptomapTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipsStaticCryptomapEntry")
    {
        auto c = std::make_shared<CISCOIPSECMIB::CipsStaticCryptomapTable::CipsStaticCryptomapEntry>();
        c->parent = this;
        cipsstaticcryptomapentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSECMIB::CipsStaticCryptomapTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cipsstaticcryptomapentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOIPSECMIB::CipsStaticCryptomapTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIPSECMIB::CipsStaticCryptomapTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIPSECMIB::CipsStaticCryptomapTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipsStaticCryptomapEntry")
        return true;
    return false;
}

CISCOIPSECMIB::CipsStaticCryptomapTable::CipsStaticCryptomapEntry::CipsStaticCryptomapEntry()
    :
    cipsstaticcryptomapsetname{YType::str, "cipsStaticCryptomapSetName"},
    cipsstaticcryptomappriority{YType::int32, "cipsStaticCryptomapPriority"},
    cipsstaticcryptomaptype{YType::enumeration, "cipsStaticCryptomapType"},
    cipsstaticcryptomapdescr{YType::str, "cipsStaticCryptomapDescr"},
    cipsstaticcryptomappeer{YType::str, "cipsStaticCryptomapPeer"},
    cipsstaticcryptomapnumpeers{YType::int32, "cipsStaticCryptomapNumPeers"},
    cipsstaticcryptomappfs{YType::enumeration, "cipsStaticCryptomapPfs"},
    cipsstaticcryptomaplifetime{YType::int32, "cipsStaticCryptomapLifetime"},
    cipsstaticcryptomaplifesize{YType::int32, "cipsStaticCryptomapLifesize"},
    cipsstaticcryptomaplevelhost{YType::boolean, "cipsStaticCryptomapLevelHost"}
{

    yang_name = "cipsStaticCryptomapEntry"; yang_parent_name = "cipsStaticCryptomapTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIPSECMIB::CipsStaticCryptomapTable::CipsStaticCryptomapEntry::~CipsStaticCryptomapEntry()
{
}

bool CISCOIPSECMIB::CipsStaticCryptomapTable::CipsStaticCryptomapEntry::has_data() const
{
    if (is_presence_container) return true;
    return cipsstaticcryptomapsetname.is_set
	|| cipsstaticcryptomappriority.is_set
	|| cipsstaticcryptomaptype.is_set
	|| cipsstaticcryptomapdescr.is_set
	|| cipsstaticcryptomappeer.is_set
	|| cipsstaticcryptomapnumpeers.is_set
	|| cipsstaticcryptomappfs.is_set
	|| cipsstaticcryptomaplifetime.is_set
	|| cipsstaticcryptomaplifesize.is_set
	|| cipsstaticcryptomaplevelhost.is_set;
}

bool CISCOIPSECMIB::CipsStaticCryptomapTable::CipsStaticCryptomapEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cipsstaticcryptomapsetname.yfilter)
	|| ydk::is_set(cipsstaticcryptomappriority.yfilter)
	|| ydk::is_set(cipsstaticcryptomaptype.yfilter)
	|| ydk::is_set(cipsstaticcryptomapdescr.yfilter)
	|| ydk::is_set(cipsstaticcryptomappeer.yfilter)
	|| ydk::is_set(cipsstaticcryptomapnumpeers.yfilter)
	|| ydk::is_set(cipsstaticcryptomappfs.yfilter)
	|| ydk::is_set(cipsstaticcryptomaplifetime.yfilter)
	|| ydk::is_set(cipsstaticcryptomaplifesize.yfilter)
	|| ydk::is_set(cipsstaticcryptomaplevelhost.yfilter);
}

std::string CISCOIPSECMIB::CipsStaticCryptomapTable::CipsStaticCryptomapEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSEC-MIB:CISCO-IPSEC-MIB/cipsStaticCryptomapTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSECMIB::CipsStaticCryptomapTable::CipsStaticCryptomapEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipsStaticCryptomapEntry";
    ADD_KEY_TOKEN(cipsstaticcryptomapsetname, "cipsStaticCryptomapSetName");
    ADD_KEY_TOKEN(cipsstaticcryptomappriority, "cipsStaticCryptomapPriority");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSECMIB::CipsStaticCryptomapTable::CipsStaticCryptomapEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cipsstaticcryptomapsetname.is_set || is_set(cipsstaticcryptomapsetname.yfilter)) leaf_name_data.push_back(cipsstaticcryptomapsetname.get_name_leafdata());
    if (cipsstaticcryptomappriority.is_set || is_set(cipsstaticcryptomappriority.yfilter)) leaf_name_data.push_back(cipsstaticcryptomappriority.get_name_leafdata());
    if (cipsstaticcryptomaptype.is_set || is_set(cipsstaticcryptomaptype.yfilter)) leaf_name_data.push_back(cipsstaticcryptomaptype.get_name_leafdata());
    if (cipsstaticcryptomapdescr.is_set || is_set(cipsstaticcryptomapdescr.yfilter)) leaf_name_data.push_back(cipsstaticcryptomapdescr.get_name_leafdata());
    if (cipsstaticcryptomappeer.is_set || is_set(cipsstaticcryptomappeer.yfilter)) leaf_name_data.push_back(cipsstaticcryptomappeer.get_name_leafdata());
    if (cipsstaticcryptomapnumpeers.is_set || is_set(cipsstaticcryptomapnumpeers.yfilter)) leaf_name_data.push_back(cipsstaticcryptomapnumpeers.get_name_leafdata());
    if (cipsstaticcryptomappfs.is_set || is_set(cipsstaticcryptomappfs.yfilter)) leaf_name_data.push_back(cipsstaticcryptomappfs.get_name_leafdata());
    if (cipsstaticcryptomaplifetime.is_set || is_set(cipsstaticcryptomaplifetime.yfilter)) leaf_name_data.push_back(cipsstaticcryptomaplifetime.get_name_leafdata());
    if (cipsstaticcryptomaplifesize.is_set || is_set(cipsstaticcryptomaplifesize.yfilter)) leaf_name_data.push_back(cipsstaticcryptomaplifesize.get_name_leafdata());
    if (cipsstaticcryptomaplevelhost.is_set || is_set(cipsstaticcryptomaplevelhost.yfilter)) leaf_name_data.push_back(cipsstaticcryptomaplevelhost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSECMIB::CipsStaticCryptomapTable::CipsStaticCryptomapEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSECMIB::CipsStaticCryptomapTable::CipsStaticCryptomapEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIPSECMIB::CipsStaticCryptomapTable::CipsStaticCryptomapEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "cipsStaticCryptomapType")
    {
        cipsstaticcryptomaptype = value;
        cipsstaticcryptomaptype.value_namespace = name_space;
        cipsstaticcryptomaptype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsStaticCryptomapDescr")
    {
        cipsstaticcryptomapdescr = value;
        cipsstaticcryptomapdescr.value_namespace = name_space;
        cipsstaticcryptomapdescr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsStaticCryptomapPeer")
    {
        cipsstaticcryptomappeer = value;
        cipsstaticcryptomappeer.value_namespace = name_space;
        cipsstaticcryptomappeer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsStaticCryptomapNumPeers")
    {
        cipsstaticcryptomapnumpeers = value;
        cipsstaticcryptomapnumpeers.value_namespace = name_space;
        cipsstaticcryptomapnumpeers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsStaticCryptomapPfs")
    {
        cipsstaticcryptomappfs = value;
        cipsstaticcryptomappfs.value_namespace = name_space;
        cipsstaticcryptomappfs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsStaticCryptomapLifetime")
    {
        cipsstaticcryptomaplifetime = value;
        cipsstaticcryptomaplifetime.value_namespace = name_space;
        cipsstaticcryptomaplifetime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsStaticCryptomapLifesize")
    {
        cipsstaticcryptomaplifesize = value;
        cipsstaticcryptomaplifesize.value_namespace = name_space;
        cipsstaticcryptomaplifesize.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsStaticCryptomapLevelHost")
    {
        cipsstaticcryptomaplevelhost = value;
        cipsstaticcryptomaplevelhost.value_namespace = name_space;
        cipsstaticcryptomaplevelhost.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIPSECMIB::CipsStaticCryptomapTable::CipsStaticCryptomapEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cipsStaticCryptomapSetName")
    {
        cipsstaticcryptomapsetname.yfilter = yfilter;
    }
    if(value_path == "cipsStaticCryptomapPriority")
    {
        cipsstaticcryptomappriority.yfilter = yfilter;
    }
    if(value_path == "cipsStaticCryptomapType")
    {
        cipsstaticcryptomaptype.yfilter = yfilter;
    }
    if(value_path == "cipsStaticCryptomapDescr")
    {
        cipsstaticcryptomapdescr.yfilter = yfilter;
    }
    if(value_path == "cipsStaticCryptomapPeer")
    {
        cipsstaticcryptomappeer.yfilter = yfilter;
    }
    if(value_path == "cipsStaticCryptomapNumPeers")
    {
        cipsstaticcryptomapnumpeers.yfilter = yfilter;
    }
    if(value_path == "cipsStaticCryptomapPfs")
    {
        cipsstaticcryptomappfs.yfilter = yfilter;
    }
    if(value_path == "cipsStaticCryptomapLifetime")
    {
        cipsstaticcryptomaplifetime.yfilter = yfilter;
    }
    if(value_path == "cipsStaticCryptomapLifesize")
    {
        cipsstaticcryptomaplifesize.yfilter = yfilter;
    }
    if(value_path == "cipsStaticCryptomapLevelHost")
    {
        cipsstaticcryptomaplevelhost.yfilter = yfilter;
    }
}

bool CISCOIPSECMIB::CipsStaticCryptomapTable::CipsStaticCryptomapEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipsStaticCryptomapSetName" || name == "cipsStaticCryptomapPriority" || name == "cipsStaticCryptomapType" || name == "cipsStaticCryptomapDescr" || name == "cipsStaticCryptomapPeer" || name == "cipsStaticCryptomapNumPeers" || name == "cipsStaticCryptomapPfs" || name == "cipsStaticCryptomapLifetime" || name == "cipsStaticCryptomapLifesize" || name == "cipsStaticCryptomapLevelHost")
        return true;
    return false;
}

CISCOIPSECMIB::CipsCryptomapSetIfTable::CipsCryptomapSetIfTable()
    :
    cipscryptomapsetifentry(this, {"ifindex", "cipsstaticcryptomapsetname"})
{

    yang_name = "cipsCryptomapSetIfTable"; yang_parent_name = "CISCO-IPSEC-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIPSECMIB::CipsCryptomapSetIfTable::~CipsCryptomapSetIfTable()
{
}

bool CISCOIPSECMIB::CipsCryptomapSetIfTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cipscryptomapsetifentry.len(); index++)
    {
        if(cipscryptomapsetifentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIPSECMIB::CipsCryptomapSetIfTable::has_operation() const
{
    for (std::size_t index=0; index<cipscryptomapsetifentry.len(); index++)
    {
        if(cipscryptomapsetifentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIPSECMIB::CipsCryptomapSetIfTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSEC-MIB:CISCO-IPSEC-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSECMIB::CipsCryptomapSetIfTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipsCryptomapSetIfTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSECMIB::CipsCryptomapSetIfTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSECMIB::CipsCryptomapSetIfTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cipsCryptomapSetIfEntry")
    {
        auto c = std::make_shared<CISCOIPSECMIB::CipsCryptomapSetIfTable::CipsCryptomapSetIfEntry>();
        c->parent = this;
        cipscryptomapsetifentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSECMIB::CipsCryptomapSetIfTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : cipscryptomapsetifentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void CISCOIPSECMIB::CipsCryptomapSetIfTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIPSECMIB::CipsCryptomapSetIfTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIPSECMIB::CipsCryptomapSetIfTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cipsCryptomapSetIfEntry")
        return true;
    return false;
}

CISCOIPSECMIB::CipsCryptomapSetIfTable::CipsCryptomapSetIfEntry::CipsCryptomapSetIfEntry()
    :
    ifindex{YType::str, "ifIndex"},
    cipsstaticcryptomapsetname{YType::str, "cipsStaticCryptomapSetName"},
    cipscryptomapsetifvirtual{YType::boolean, "cipsCryptomapSetIfVirtual"},
    cipscryptomapsetifstatus{YType::enumeration, "cipsCryptomapSetIfStatus"}
{

    yang_name = "cipsCryptomapSetIfEntry"; yang_parent_name = "cipsCryptomapSetIfTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIPSECMIB::CipsCryptomapSetIfTable::CipsCryptomapSetIfEntry::~CipsCryptomapSetIfEntry()
{
}

bool CISCOIPSECMIB::CipsCryptomapSetIfTable::CipsCryptomapSetIfEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| cipsstaticcryptomapsetname.is_set
	|| cipscryptomapsetifvirtual.is_set
	|| cipscryptomapsetifstatus.is_set;
}

bool CISCOIPSECMIB::CipsCryptomapSetIfTable::CipsCryptomapSetIfEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(cipsstaticcryptomapsetname.yfilter)
	|| ydk::is_set(cipscryptomapsetifvirtual.yfilter)
	|| ydk::is_set(cipscryptomapsetifstatus.yfilter);
}

std::string CISCOIPSECMIB::CipsCryptomapSetIfTable::CipsCryptomapSetIfEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IPSEC-MIB:CISCO-IPSEC-MIB/cipsCryptomapSetIfTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIPSECMIB::CipsCryptomapSetIfTable::CipsCryptomapSetIfEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cipsCryptomapSetIfEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(cipsstaticcryptomapsetname, "cipsStaticCryptomapSetName");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIPSECMIB::CipsCryptomapSetIfTable::CipsCryptomapSetIfEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cipsstaticcryptomapsetname.is_set || is_set(cipsstaticcryptomapsetname.yfilter)) leaf_name_data.push_back(cipsstaticcryptomapsetname.get_name_leafdata());
    if (cipscryptomapsetifvirtual.is_set || is_set(cipscryptomapsetifvirtual.yfilter)) leaf_name_data.push_back(cipscryptomapsetifvirtual.get_name_leafdata());
    if (cipscryptomapsetifstatus.is_set || is_set(cipscryptomapsetifstatus.yfilter)) leaf_name_data.push_back(cipscryptomapsetifstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOIPSECMIB::CipsCryptomapSetIfTable::CipsCryptomapSetIfEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOIPSECMIB::CipsCryptomapSetIfTable::CipsCryptomapSetIfEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void CISCOIPSECMIB::CipsCryptomapSetIfTable::CipsCryptomapSetIfEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "cipsCryptomapSetIfVirtual")
    {
        cipscryptomapsetifvirtual = value;
        cipscryptomapsetifvirtual.value_namespace = name_space;
        cipscryptomapsetifvirtual.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cipsCryptomapSetIfStatus")
    {
        cipscryptomapsetifstatus = value;
        cipscryptomapsetifstatus.value_namespace = name_space;
        cipscryptomapsetifstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIPSECMIB::CipsCryptomapSetIfTable::CipsCryptomapSetIfEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "cipsStaticCryptomapSetName")
    {
        cipsstaticcryptomapsetname.yfilter = yfilter;
    }
    if(value_path == "cipsCryptomapSetIfVirtual")
    {
        cipscryptomapsetifvirtual.yfilter = yfilter;
    }
    if(value_path == "cipsCryptomapSetIfStatus")
    {
        cipscryptomapsetifstatus.yfilter = yfilter;
    }
}

bool CISCOIPSECMIB::CipsCryptomapSetIfTable::CipsCryptomapSetIfEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "cipsStaticCryptomapSetName" || name == "cipsCryptomapSetIfVirtual" || name == "cipsCryptomapSetIfStatus")
        return true;
    return false;
}

const Enum::YLeaf IkeHashAlgo::none {1, "none"};
const Enum::YLeaf IkeHashAlgo::md5 {2, "md5"};
const Enum::YLeaf IkeHashAlgo::sha {3, "sha"};

const Enum::YLeaf CryptomapType::cryptomapTypeNONE {0, "cryptomapTypeNONE"};
const Enum::YLeaf CryptomapType::cryptomapTypeMANUAL {1, "cryptomapTypeMANUAL"};
const Enum::YLeaf CryptomapType::cryptomapTypeISAKMP {2, "cryptomapTypeISAKMP"};
const Enum::YLeaf CryptomapType::cryptomapTypeCET {3, "cryptomapTypeCET"};
const Enum::YLeaf CryptomapType::cryptomapTypeDYNAMIC {4, "cryptomapTypeDYNAMIC"};
const Enum::YLeaf CryptomapType::cryptomapTypeDYNAMICDISCOVERY {5, "cryptomapTypeDYNAMICDISCOVERY"};

const Enum::YLeaf IkeIdentityType::isakmpIdTypeUNKNOWN {0, "isakmpIdTypeUNKNOWN"};
const Enum::YLeaf IkeIdentityType::isakmpIdTypeADDRESS {1, "isakmpIdTypeADDRESS"};
const Enum::YLeaf IkeIdentityType::isakmpIdTypeHOSTNAME {2, "isakmpIdTypeHOSTNAME"};

const Enum::YLeaf TrapStatus::enabled {1, "enabled"};
const Enum::YLeaf TrapStatus::disabled {2, "disabled"};

const Enum::YLeaf EncryptAlgo::none {1, "none"};
const Enum::YLeaf EncryptAlgo::des {2, "des"};
const Enum::YLeaf EncryptAlgo::des3 {3, "des3"};

const Enum::YLeaf IkeAuthMethod::none {1, "none"};
const Enum::YLeaf IkeAuthMethod::preSharedKey {2, "preSharedKey"};
const Enum::YLeaf IkeAuthMethod::rsaSig {3, "rsaSig"};
const Enum::YLeaf IkeAuthMethod::rsaEncrypt {4, "rsaEncrypt"};
const Enum::YLeaf IkeAuthMethod::revPublicKey {5, "revPublicKey"};

const Enum::YLeaf CryptomapSetBindStatus::unknown {0, "unknown"};
const Enum::YLeaf CryptomapSetBindStatus::attached {1, "attached"};
const Enum::YLeaf CryptomapSetBindStatus::detached {2, "detached"};

const Enum::YLeaf DiffHellmanGrp::none {1, "none"};
const Enum::YLeaf DiffHellmanGrp::dhGroup1 {2, "dhGroup1"};
const Enum::YLeaf DiffHellmanGrp::dhGroup2 {3, "dhGroup2"};


}
}

