
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IPSEC_MIB.hpp"

namespace ydk {
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
    return is_set(operation)
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

void CiscoIpsecMib::set_value(const std::string & value_path, std::string value)
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
    return is_set(operation)
	|| is_set(cipsisakmpenabled.operation)
	|| is_set(cipsisakmpidentity.operation)
	|| is_set(cipsisakmpkeepaliveinterval.operation)
	|| is_set(cipsnumisakmppolicies.operation);
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

    if (cipsisakmpenabled.is_set || is_set(cipsisakmpenabled.operation)) leaf_name_data.push_back(cipsisakmpenabled.get_name_leafdata());
    if (cipsisakmpidentity.is_set || is_set(cipsisakmpidentity.operation)) leaf_name_data.push_back(cipsisakmpidentity.get_name_leafdata());
    if (cipsisakmpkeepaliveinterval.is_set || is_set(cipsisakmpkeepaliveinterval.operation)) leaf_name_data.push_back(cipsisakmpkeepaliveinterval.get_name_leafdata());
    if (cipsnumisakmppolicies.is_set || is_set(cipsnumisakmppolicies.operation)) leaf_name_data.push_back(cipsnumisakmppolicies.get_name_leafdata());


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

void CiscoIpsecMib::Cipsisakmpgroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cipsIsakmpEnabled")
    {
        cipsisakmpenabled = value;
    }
    if(value_path == "cipsIsakmpIdentity")
    {
        cipsisakmpidentity = value;
    }
    if(value_path == "cipsIsakmpKeepaliveInterval")
    {
        cipsisakmpkeepaliveinterval = value;
    }
    if(value_path == "cipsNumIsakmpPolicies")
    {
        cipsnumisakmppolicies = value;
    }
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
    return is_set(operation)
	|| is_set(cipsnumcetcryptomapsets.operation)
	|| is_set(cipsnumdynamiccryptomapsets.operation)
	|| is_set(cipsnumstaticcryptomapsets.operation)
	|| is_set(cipsnumtedcryptomapsets.operation)
	|| is_set(cipssalifesize.operation)
	|| is_set(cipssalifetime.operation);
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

    if (cipsnumcetcryptomapsets.is_set || is_set(cipsnumcetcryptomapsets.operation)) leaf_name_data.push_back(cipsnumcetcryptomapsets.get_name_leafdata());
    if (cipsnumdynamiccryptomapsets.is_set || is_set(cipsnumdynamiccryptomapsets.operation)) leaf_name_data.push_back(cipsnumdynamiccryptomapsets.get_name_leafdata());
    if (cipsnumstaticcryptomapsets.is_set || is_set(cipsnumstaticcryptomapsets.operation)) leaf_name_data.push_back(cipsnumstaticcryptomapsets.get_name_leafdata());
    if (cipsnumtedcryptomapsets.is_set || is_set(cipsnumtedcryptomapsets.operation)) leaf_name_data.push_back(cipsnumtedcryptomapsets.get_name_leafdata());
    if (cipssalifesize.is_set || is_set(cipssalifesize.operation)) leaf_name_data.push_back(cipssalifesize.get_name_leafdata());
    if (cipssalifetime.is_set || is_set(cipssalifetime.operation)) leaf_name_data.push_back(cipssalifetime.get_name_leafdata());


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

void CiscoIpsecMib::Cipsipsecglobals::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cipsNumCETCryptomapSets")
    {
        cipsnumcetcryptomapsets = value;
    }
    if(value_path == "cipsNumDynamicCryptomapSets")
    {
        cipsnumdynamiccryptomapsets = value;
    }
    if(value_path == "cipsNumStaticCryptomapSets")
    {
        cipsnumstaticcryptomapsets = value;
    }
    if(value_path == "cipsNumTEDCryptomapSets")
    {
        cipsnumtedcryptomapsets = value;
    }
    if(value_path == "cipsSALifesize")
    {
        cipssalifesize = value;
    }
    if(value_path == "cipsSALifetime")
    {
        cipssalifetime = value;
    }
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
    return is_set(operation)
	|| is_set(cipsnumtedfailures.operation)
	|| is_set(cipsnumtedprobesreceived.operation)
	|| is_set(cipsnumtedprobessent.operation);
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

    if (cipsnumtedfailures.is_set || is_set(cipsnumtedfailures.operation)) leaf_name_data.push_back(cipsnumtedfailures.get_name_leafdata());
    if (cipsnumtedprobesreceived.is_set || is_set(cipsnumtedprobesreceived.operation)) leaf_name_data.push_back(cipsnumtedprobesreceived.get_name_leafdata());
    if (cipsnumtedprobessent.is_set || is_set(cipsnumtedprobessent.operation)) leaf_name_data.push_back(cipsnumtedprobessent.get_name_leafdata());


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

void CiscoIpsecMib::Cipsipsecstatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cipsNumTEDFailures")
    {
        cipsnumtedfailures = value;
    }
    if(value_path == "cipsNumTEDProbesReceived")
    {
        cipsnumtedprobesreceived = value;
    }
    if(value_path == "cipsNumTEDProbesSent")
    {
        cipsnumtedprobessent = value;
    }
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
    return is_set(operation)
	|| is_set(cips3descapable.operation)
	|| is_set(cipsmaxsas.operation);
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

    if (cips3descapable.is_set || is_set(cips3descapable.operation)) leaf_name_data.push_back(cips3descapable.get_name_leafdata());
    if (cipsmaxsas.is_set || is_set(cipsmaxsas.operation)) leaf_name_data.push_back(cipsmaxsas.get_name_leafdata());


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

void CiscoIpsecMib::Cipssyscapacitygroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cips3DesCapable")
    {
        cips3descapable = value;
    }
    if(value_path == "cipsMaxSAs")
    {
        cipsmaxsas = value;
    }
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
    return is_set(operation)
	|| is_set(cipscntlcryptomapadded.operation)
	|| is_set(cipscntlcryptomapdeleted.operation)
	|| is_set(cipscntlcryptomapsetattached.operation)
	|| is_set(cipscntlcryptomapsetdetached.operation)
	|| is_set(cipscntlisakmppolicyadded.operation)
	|| is_set(cipscntlisakmppolicydeleted.operation)
	|| is_set(cipscntltoomanysas.operation);
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

    if (cipscntlcryptomapadded.is_set || is_set(cipscntlcryptomapadded.operation)) leaf_name_data.push_back(cipscntlcryptomapadded.get_name_leafdata());
    if (cipscntlcryptomapdeleted.is_set || is_set(cipscntlcryptomapdeleted.operation)) leaf_name_data.push_back(cipscntlcryptomapdeleted.get_name_leafdata());
    if (cipscntlcryptomapsetattached.is_set || is_set(cipscntlcryptomapsetattached.operation)) leaf_name_data.push_back(cipscntlcryptomapsetattached.get_name_leafdata());
    if (cipscntlcryptomapsetdetached.is_set || is_set(cipscntlcryptomapsetdetached.operation)) leaf_name_data.push_back(cipscntlcryptomapsetdetached.get_name_leafdata());
    if (cipscntlisakmppolicyadded.is_set || is_set(cipscntlisakmppolicyadded.operation)) leaf_name_data.push_back(cipscntlisakmppolicyadded.get_name_leafdata());
    if (cipscntlisakmppolicydeleted.is_set || is_set(cipscntlisakmppolicydeleted.operation)) leaf_name_data.push_back(cipscntlisakmppolicydeleted.get_name_leafdata());
    if (cipscntltoomanysas.is_set || is_set(cipscntltoomanysas.operation)) leaf_name_data.push_back(cipscntltoomanysas.get_name_leafdata());


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

void CiscoIpsecMib::Cipstrapcntlgroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cipsCntlCryptomapAdded")
    {
        cipscntlcryptomapadded = value;
    }
    if(value_path == "cipsCntlCryptomapDeleted")
    {
        cipscntlcryptomapdeleted = value;
    }
    if(value_path == "cipsCntlCryptomapSetAttached")
    {
        cipscntlcryptomapsetattached = value;
    }
    if(value_path == "cipsCntlCryptomapSetDetached")
    {
        cipscntlcryptomapsetdetached = value;
    }
    if(value_path == "cipsCntlIsakmpPolicyAdded")
    {
        cipscntlisakmppolicyadded = value;
    }
    if(value_path == "cipsCntlIsakmpPolicyDeleted")
    {
        cipscntlisakmppolicydeleted = value;
    }
    if(value_path == "cipsCntlTooManySAs")
    {
        cipscntltoomanysas = value;
    }
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
    return is_set(operation);
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

void CiscoIpsecMib::Cipsisakmppolicytable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(cipsisakmppolpriority.operation)
	|| is_set(cipsisakmppolauth.operation)
	|| is_set(cipsisakmppolencr.operation)
	|| is_set(cipsisakmppolgroup.operation)
	|| is_set(cipsisakmppolhash.operation)
	|| is_set(cipsisakmppollifetime.operation);
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

    if (cipsisakmppolpriority.is_set || is_set(cipsisakmppolpriority.operation)) leaf_name_data.push_back(cipsisakmppolpriority.get_name_leafdata());
    if (cipsisakmppolauth.is_set || is_set(cipsisakmppolauth.operation)) leaf_name_data.push_back(cipsisakmppolauth.get_name_leafdata());
    if (cipsisakmppolencr.is_set || is_set(cipsisakmppolencr.operation)) leaf_name_data.push_back(cipsisakmppolencr.get_name_leafdata());
    if (cipsisakmppolgroup.is_set || is_set(cipsisakmppolgroup.operation)) leaf_name_data.push_back(cipsisakmppolgroup.get_name_leafdata());
    if (cipsisakmppolhash.is_set || is_set(cipsisakmppolhash.operation)) leaf_name_data.push_back(cipsisakmppolhash.get_name_leafdata());
    if (cipsisakmppollifetime.is_set || is_set(cipsisakmppollifetime.operation)) leaf_name_data.push_back(cipsisakmppollifetime.get_name_leafdata());


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

void CiscoIpsecMib::Cipsisakmppolicytable::Cipsisakmppolicyentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cipsIsakmpPolPriority")
    {
        cipsisakmppolpriority = value;
    }
    if(value_path == "cipsIsakmpPolAuth")
    {
        cipsisakmppolauth = value;
    }
    if(value_path == "cipsIsakmpPolEncr")
    {
        cipsisakmppolencr = value;
    }
    if(value_path == "cipsIsakmpPolGroup")
    {
        cipsisakmppolgroup = value;
    }
    if(value_path == "cipsIsakmpPolHash")
    {
        cipsisakmppolhash = value;
    }
    if(value_path == "cipsIsakmpPolLifetime")
    {
        cipsisakmppollifetime = value;
    }
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
    return is_set(operation);
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

void CiscoIpsecMib::Cipsstaticcryptomapsettable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(cipsstaticcryptomapsetname.operation)
	|| is_set(cipsstaticcryptomapsetnumcet.operation)
	|| is_set(cipsstaticcryptomapsetnumdisc.operation)
	|| is_set(cipsstaticcryptomapsetnumdynamic.operation)
	|| is_set(cipsstaticcryptomapsetnumisakmp.operation)
	|| is_set(cipsstaticcryptomapsetnummanual.operation)
	|| is_set(cipsstaticcryptomapsetnumsas.operation)
	|| is_set(cipsstaticcryptomapsetsize.operation);
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

    if (cipsstaticcryptomapsetname.is_set || is_set(cipsstaticcryptomapsetname.operation)) leaf_name_data.push_back(cipsstaticcryptomapsetname.get_name_leafdata());
    if (cipsstaticcryptomapsetnumcet.is_set || is_set(cipsstaticcryptomapsetnumcet.operation)) leaf_name_data.push_back(cipsstaticcryptomapsetnumcet.get_name_leafdata());
    if (cipsstaticcryptomapsetnumdisc.is_set || is_set(cipsstaticcryptomapsetnumdisc.operation)) leaf_name_data.push_back(cipsstaticcryptomapsetnumdisc.get_name_leafdata());
    if (cipsstaticcryptomapsetnumdynamic.is_set || is_set(cipsstaticcryptomapsetnumdynamic.operation)) leaf_name_data.push_back(cipsstaticcryptomapsetnumdynamic.get_name_leafdata());
    if (cipsstaticcryptomapsetnumisakmp.is_set || is_set(cipsstaticcryptomapsetnumisakmp.operation)) leaf_name_data.push_back(cipsstaticcryptomapsetnumisakmp.get_name_leafdata());
    if (cipsstaticcryptomapsetnummanual.is_set || is_set(cipsstaticcryptomapsetnummanual.operation)) leaf_name_data.push_back(cipsstaticcryptomapsetnummanual.get_name_leafdata());
    if (cipsstaticcryptomapsetnumsas.is_set || is_set(cipsstaticcryptomapsetnumsas.operation)) leaf_name_data.push_back(cipsstaticcryptomapsetnumsas.get_name_leafdata());
    if (cipsstaticcryptomapsetsize.is_set || is_set(cipsstaticcryptomapsetsize.operation)) leaf_name_data.push_back(cipsstaticcryptomapsetsize.get_name_leafdata());


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

void CiscoIpsecMib::Cipsstaticcryptomapsettable::Cipsstaticcryptomapsetentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cipsStaticCryptomapSetName")
    {
        cipsstaticcryptomapsetname = value;
    }
    if(value_path == "cipsStaticCryptomapSetNumCET")
    {
        cipsstaticcryptomapsetnumcet = value;
    }
    if(value_path == "cipsStaticCryptomapSetNumDisc")
    {
        cipsstaticcryptomapsetnumdisc = value;
    }
    if(value_path == "cipsStaticCryptomapSetNumDynamic")
    {
        cipsstaticcryptomapsetnumdynamic = value;
    }
    if(value_path == "cipsStaticCryptomapSetNumIsakmp")
    {
        cipsstaticcryptomapsetnumisakmp = value;
    }
    if(value_path == "cipsStaticCryptomapSetNumManual")
    {
        cipsstaticcryptomapsetnummanual = value;
    }
    if(value_path == "cipsStaticCryptomapSetNumSAs")
    {
        cipsstaticcryptomapsetnumsas = value;
    }
    if(value_path == "cipsStaticCryptomapSetSize")
    {
        cipsstaticcryptomapsetsize = value;
    }
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
    return is_set(operation);
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

void CiscoIpsecMib::Cipsdynamiccryptomapsettable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(cipsdynamiccryptomapsetname.operation)
	|| is_set(cipsdynamiccryptomapsetnumassoc.operation)
	|| is_set(cipsdynamiccryptomapsetsize.operation);
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

    if (cipsdynamiccryptomapsetname.is_set || is_set(cipsdynamiccryptomapsetname.operation)) leaf_name_data.push_back(cipsdynamiccryptomapsetname.get_name_leafdata());
    if (cipsdynamiccryptomapsetnumassoc.is_set || is_set(cipsdynamiccryptomapsetnumassoc.operation)) leaf_name_data.push_back(cipsdynamiccryptomapsetnumassoc.get_name_leafdata());
    if (cipsdynamiccryptomapsetsize.is_set || is_set(cipsdynamiccryptomapsetsize.operation)) leaf_name_data.push_back(cipsdynamiccryptomapsetsize.get_name_leafdata());


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

void CiscoIpsecMib::Cipsdynamiccryptomapsettable::Cipsdynamiccryptomapsetentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cipsDynamicCryptomapSetName")
    {
        cipsdynamiccryptomapsetname = value;
    }
    if(value_path == "cipsDynamicCryptomapSetNumAssoc")
    {
        cipsdynamiccryptomapsetnumassoc = value;
    }
    if(value_path == "cipsDynamicCryptomapSetSize")
    {
        cipsdynamiccryptomapsetsize = value;
    }
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
    return is_set(operation);
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

void CiscoIpsecMib::Cipsstaticcryptomaptable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(cipsstaticcryptomapsetname.operation)
	|| is_set(cipsstaticcryptomappriority.operation)
	|| is_set(cipsstaticcryptomapdescr.operation)
	|| is_set(cipsstaticcryptomaplevelhost.operation)
	|| is_set(cipsstaticcryptomaplifesize.operation)
	|| is_set(cipsstaticcryptomaplifetime.operation)
	|| is_set(cipsstaticcryptomapnumpeers.operation)
	|| is_set(cipsstaticcryptomappeer.operation)
	|| is_set(cipsstaticcryptomappfs.operation)
	|| is_set(cipsstaticcryptomaptype.operation);
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

    if (cipsstaticcryptomapsetname.is_set || is_set(cipsstaticcryptomapsetname.operation)) leaf_name_data.push_back(cipsstaticcryptomapsetname.get_name_leafdata());
    if (cipsstaticcryptomappriority.is_set || is_set(cipsstaticcryptomappriority.operation)) leaf_name_data.push_back(cipsstaticcryptomappriority.get_name_leafdata());
    if (cipsstaticcryptomapdescr.is_set || is_set(cipsstaticcryptomapdescr.operation)) leaf_name_data.push_back(cipsstaticcryptomapdescr.get_name_leafdata());
    if (cipsstaticcryptomaplevelhost.is_set || is_set(cipsstaticcryptomaplevelhost.operation)) leaf_name_data.push_back(cipsstaticcryptomaplevelhost.get_name_leafdata());
    if (cipsstaticcryptomaplifesize.is_set || is_set(cipsstaticcryptomaplifesize.operation)) leaf_name_data.push_back(cipsstaticcryptomaplifesize.get_name_leafdata());
    if (cipsstaticcryptomaplifetime.is_set || is_set(cipsstaticcryptomaplifetime.operation)) leaf_name_data.push_back(cipsstaticcryptomaplifetime.get_name_leafdata());
    if (cipsstaticcryptomapnumpeers.is_set || is_set(cipsstaticcryptomapnumpeers.operation)) leaf_name_data.push_back(cipsstaticcryptomapnumpeers.get_name_leafdata());
    if (cipsstaticcryptomappeer.is_set || is_set(cipsstaticcryptomappeer.operation)) leaf_name_data.push_back(cipsstaticcryptomappeer.get_name_leafdata());
    if (cipsstaticcryptomappfs.is_set || is_set(cipsstaticcryptomappfs.operation)) leaf_name_data.push_back(cipsstaticcryptomappfs.get_name_leafdata());
    if (cipsstaticcryptomaptype.is_set || is_set(cipsstaticcryptomaptype.operation)) leaf_name_data.push_back(cipsstaticcryptomaptype.get_name_leafdata());


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

void CiscoIpsecMib::Cipsstaticcryptomaptable::Cipsstaticcryptomapentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cipsStaticCryptomapSetName")
    {
        cipsstaticcryptomapsetname = value;
    }
    if(value_path == "cipsStaticCryptomapPriority")
    {
        cipsstaticcryptomappriority = value;
    }
    if(value_path == "cipsStaticCryptomapDescr")
    {
        cipsstaticcryptomapdescr = value;
    }
    if(value_path == "cipsStaticCryptomapLevelHost")
    {
        cipsstaticcryptomaplevelhost = value;
    }
    if(value_path == "cipsStaticCryptomapLifesize")
    {
        cipsstaticcryptomaplifesize = value;
    }
    if(value_path == "cipsStaticCryptomapLifetime")
    {
        cipsstaticcryptomaplifetime = value;
    }
    if(value_path == "cipsStaticCryptomapNumPeers")
    {
        cipsstaticcryptomapnumpeers = value;
    }
    if(value_path == "cipsStaticCryptomapPeer")
    {
        cipsstaticcryptomappeer = value;
    }
    if(value_path == "cipsStaticCryptomapPfs")
    {
        cipsstaticcryptomappfs = value;
    }
    if(value_path == "cipsStaticCryptomapType")
    {
        cipsstaticcryptomaptype = value;
    }
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
    return is_set(operation);
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

void CiscoIpsecMib::Cipscryptomapsetiftable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(cipsstaticcryptomapsetname.operation)
	|| is_set(cipscryptomapsetifstatus.operation)
	|| is_set(cipscryptomapsetifvirtual.operation);
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

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cipsstaticcryptomapsetname.is_set || is_set(cipsstaticcryptomapsetname.operation)) leaf_name_data.push_back(cipsstaticcryptomapsetname.get_name_leafdata());
    if (cipscryptomapsetifstatus.is_set || is_set(cipscryptomapsetifstatus.operation)) leaf_name_data.push_back(cipscryptomapsetifstatus.get_name_leafdata());
    if (cipscryptomapsetifvirtual.is_set || is_set(cipscryptomapsetifvirtual.operation)) leaf_name_data.push_back(cipscryptomapsetifvirtual.get_name_leafdata());


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

void CiscoIpsecMib::Cipscryptomapsetiftable::Cipscryptomapsetifentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "cipsStaticCryptomapSetName")
    {
        cipsstaticcryptomapsetname = value;
    }
    if(value_path == "cipsCryptomapSetIfStatus")
    {
        cipscryptomapsetifstatus = value;
    }
    if(value_path == "cipsCryptomapSetIfVirtual")
    {
        cipscryptomapsetifvirtual = value;
    }
}

const Enum::YLeaf IkehashalgoEnum::none {1, "none"};
const Enum::YLeaf IkehashalgoEnum::md5 {2, "md5"};
const Enum::YLeaf IkehashalgoEnum::sha {3, "sha"};

const Enum::YLeaf CryptomaptypeEnum::cryptomapTypeNONE {0, "cryptomapTypeNONE"};
const Enum::YLeaf CryptomaptypeEnum::cryptomapTypeMANUAL {1, "cryptomapTypeMANUAL"};
const Enum::YLeaf CryptomaptypeEnum::cryptomapTypeISAKMP {2, "cryptomapTypeISAKMP"};
const Enum::YLeaf CryptomaptypeEnum::cryptomapTypeCET {3, "cryptomapTypeCET"};
const Enum::YLeaf CryptomaptypeEnum::cryptomapTypeDYNAMIC {4, "cryptomapTypeDYNAMIC"};
const Enum::YLeaf CryptomaptypeEnum::cryptomapTypeDYNAMICDISCOVERY {5, "cryptomapTypeDYNAMICDISCOVERY"};

const Enum::YLeaf IkeidentitytypeEnum::isakmpIdTypeUNKNOWN {0, "isakmpIdTypeUNKNOWN"};
const Enum::YLeaf IkeidentitytypeEnum::isakmpIdTypeADDRESS {1, "isakmpIdTypeADDRESS"};
const Enum::YLeaf IkeidentitytypeEnum::isakmpIdTypeHOSTNAME {2, "isakmpIdTypeHOSTNAME"};

const Enum::YLeaf TrapstatusEnum::enabled {1, "enabled"};
const Enum::YLeaf TrapstatusEnum::disabled {2, "disabled"};

const Enum::YLeaf EncryptalgoEnum::none {1, "none"};
const Enum::YLeaf EncryptalgoEnum::des {2, "des"};
const Enum::YLeaf EncryptalgoEnum::des3 {3, "des3"};

const Enum::YLeaf IkeauthmethodEnum::none {1, "none"};
const Enum::YLeaf IkeauthmethodEnum::preSharedKey {2, "preSharedKey"};
const Enum::YLeaf IkeauthmethodEnum::rsaSig {3, "rsaSig"};
const Enum::YLeaf IkeauthmethodEnum::rsaEncrypt {4, "rsaEncrypt"};
const Enum::YLeaf IkeauthmethodEnum::revPublicKey {5, "revPublicKey"};

const Enum::YLeaf CryptomapsetbindstatusEnum::unknown {0, "unknown"};
const Enum::YLeaf CryptomapsetbindstatusEnum::attached {1, "attached"};
const Enum::YLeaf CryptomapsetbindstatusEnum::detached {2, "detached"};

const Enum::YLeaf DiffhellmangrpEnum::none {1, "none"};
const Enum::YLeaf DiffhellmangrpEnum::dhGroup1 {2, "dhGroup1"};
const Enum::YLeaf DiffhellmangrpEnum::dhGroup2 {3, "dhGroup2"};


}
}

