
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_OSPF_MIB.hpp"

namespace ydk {
namespace CISCO_OSPF_MIB {

CiscoOspfMib::CiscoOspfMib()
    :
    cospfgeneralgroup_(std::make_shared<CiscoOspfMib::Cospfgeneralgroup>())
	,cospflocallsdbtable_(std::make_shared<CiscoOspfMib::Cospflocallsdbtable>())
	,cospflsdbtable_(std::make_shared<CiscoOspfMib::Cospflsdbtable>())
	,cospfshamlinknbrtable_(std::make_shared<CiscoOspfMib::Cospfshamlinknbrtable>())
	,cospfshamlinkstable_(std::make_shared<CiscoOspfMib::Cospfshamlinkstable>())
	,cospfshamlinktable_(std::make_shared<CiscoOspfMib::Cospfshamlinktable>())
	,cospfvirtlocallsdbtable_(std::make_shared<CiscoOspfMib::Cospfvirtlocallsdbtable>())
{
    cospfgeneralgroup_->parent = this;

    cospflocallsdbtable_->parent = this;

    cospflsdbtable_->parent = this;

    cospfshamlinknbrtable_->parent = this;

    cospfshamlinkstable_->parent = this;

    cospfshamlinktable_->parent = this;

    cospfvirtlocallsdbtable_->parent = this;

    yang_name = "CISCO-OSPF-MIB"; yang_parent_name = "CISCO-OSPF-MIB";
}

CiscoOspfMib::~CiscoOspfMib()
{
}

bool CiscoOspfMib::has_data() const
{
    return (cospfgeneralgroup_ !=  nullptr && cospfgeneralgroup_->has_data())
	|| (cospflocallsdbtable_ !=  nullptr && cospflocallsdbtable_->has_data())
	|| (cospflsdbtable_ !=  nullptr && cospflsdbtable_->has_data())
	|| (cospfshamlinknbrtable_ !=  nullptr && cospfshamlinknbrtable_->has_data())
	|| (cospfshamlinkstable_ !=  nullptr && cospfshamlinkstable_->has_data())
	|| (cospfshamlinktable_ !=  nullptr && cospfshamlinktable_->has_data())
	|| (cospfvirtlocallsdbtable_ !=  nullptr && cospfvirtlocallsdbtable_->has_data());
}

bool CiscoOspfMib::has_operation() const
{
    return is_set(operation)
	|| (cospfgeneralgroup_ !=  nullptr && cospfgeneralgroup_->has_operation())
	|| (cospflocallsdbtable_ !=  nullptr && cospflocallsdbtable_->has_operation())
	|| (cospflsdbtable_ !=  nullptr && cospflsdbtable_->has_operation())
	|| (cospfshamlinknbrtable_ !=  nullptr && cospfshamlinknbrtable_->has_operation())
	|| (cospfshamlinkstable_ !=  nullptr && cospfshamlinkstable_->has_operation())
	|| (cospfshamlinktable_ !=  nullptr && cospfshamlinktable_->has_operation())
	|| (cospfvirtlocallsdbtable_ !=  nullptr && cospfvirtlocallsdbtable_->has_operation());
}

std::string CiscoOspfMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-OSPF-MIB:CISCO-OSPF-MIB";

    return path_buffer.str();

}

const EntityPath CiscoOspfMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoOspfMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cospfGeneralGroup")
    {
        if(cospfgeneralgroup_ == nullptr)
        {
            cospfgeneralgroup_ = std::make_shared<CiscoOspfMib::Cospfgeneralgroup>();
        }
        return cospfgeneralgroup_;
    }

    if(child_yang_name == "cospfLocalLsdbTable")
    {
        if(cospflocallsdbtable_ == nullptr)
        {
            cospflocallsdbtable_ = std::make_shared<CiscoOspfMib::Cospflocallsdbtable>();
        }
        return cospflocallsdbtable_;
    }

    if(child_yang_name == "cospfLsdbTable")
    {
        if(cospflsdbtable_ == nullptr)
        {
            cospflsdbtable_ = std::make_shared<CiscoOspfMib::Cospflsdbtable>();
        }
        return cospflsdbtable_;
    }

    if(child_yang_name == "cospfShamLinkNbrTable")
    {
        if(cospfshamlinknbrtable_ == nullptr)
        {
            cospfshamlinknbrtable_ = std::make_shared<CiscoOspfMib::Cospfshamlinknbrtable>();
        }
        return cospfshamlinknbrtable_;
    }

    if(child_yang_name == "cospfShamLinksTable")
    {
        if(cospfshamlinkstable_ == nullptr)
        {
            cospfshamlinkstable_ = std::make_shared<CiscoOspfMib::Cospfshamlinkstable>();
        }
        return cospfshamlinkstable_;
    }

    if(child_yang_name == "cospfShamLinkTable")
    {
        if(cospfshamlinktable_ == nullptr)
        {
            cospfshamlinktable_ = std::make_shared<CiscoOspfMib::Cospfshamlinktable>();
        }
        return cospfshamlinktable_;
    }

    if(child_yang_name == "cospfVirtLocalLsdbTable")
    {
        if(cospfvirtlocallsdbtable_ == nullptr)
        {
            cospfvirtlocallsdbtable_ = std::make_shared<CiscoOspfMib::Cospfvirtlocallsdbtable>();
        }
        return cospfvirtlocallsdbtable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoOspfMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cospfgeneralgroup_ != nullptr)
    {
        children["cospfGeneralGroup"] = cospfgeneralgroup_;
    }

    if(cospflocallsdbtable_ != nullptr)
    {
        children["cospfLocalLsdbTable"] = cospflocallsdbtable_;
    }

    if(cospflsdbtable_ != nullptr)
    {
        children["cospfLsdbTable"] = cospflsdbtable_;
    }

    if(cospfshamlinknbrtable_ != nullptr)
    {
        children["cospfShamLinkNbrTable"] = cospfshamlinknbrtable_;
    }

    if(cospfshamlinkstable_ != nullptr)
    {
        children["cospfShamLinksTable"] = cospfshamlinkstable_;
    }

    if(cospfshamlinktable_ != nullptr)
    {
        children["cospfShamLinkTable"] = cospfshamlinktable_;
    }

    if(cospfvirtlocallsdbtable_ != nullptr)
    {
        children["cospfVirtLocalLsdbTable"] = cospfvirtlocallsdbtable_;
    }

    return children;
}

void CiscoOspfMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CiscoOspfMib::clone_ptr() const
{
    return std::make_shared<CiscoOspfMib>();
}

std::string CiscoOspfMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoOspfMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoOspfMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CiscoOspfMib::Cospfgeneralgroup::Cospfgeneralgroup()
    :
    cospfopaqueaslsacksumsum{YType::uint32, "cospfOpaqueASLsaCksumSum"},
    cospfopaqueaslsacount{YType::uint32, "cospfOpaqueASLsaCount"},
    cospfopaquelsasupport{YType::boolean, "cospfOpaqueLsaSupport"},
    cospfrfc1583compatibility{YType::boolean, "cospfRFC1583Compatibility"},
    cospftrafficengineeringsupport{YType::boolean, "cospfTrafficEngineeringSupport"}
{
    yang_name = "cospfGeneralGroup"; yang_parent_name = "CISCO-OSPF-MIB";
}

CiscoOspfMib::Cospfgeneralgroup::~Cospfgeneralgroup()
{
}

bool CiscoOspfMib::Cospfgeneralgroup::has_data() const
{
    return cospfopaqueaslsacksumsum.is_set
	|| cospfopaqueaslsacount.is_set
	|| cospfopaquelsasupport.is_set
	|| cospfrfc1583compatibility.is_set
	|| cospftrafficengineeringsupport.is_set;
}

bool CiscoOspfMib::Cospfgeneralgroup::has_operation() const
{
    return is_set(operation)
	|| is_set(cospfopaqueaslsacksumsum.operation)
	|| is_set(cospfopaqueaslsacount.operation)
	|| is_set(cospfopaquelsasupport.operation)
	|| is_set(cospfrfc1583compatibility.operation)
	|| is_set(cospftrafficengineeringsupport.operation);
}

std::string CiscoOspfMib::Cospfgeneralgroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cospfGeneralGroup";

    return path_buffer.str();

}

const EntityPath CiscoOspfMib::Cospfgeneralgroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-OSPF-MIB:CISCO-OSPF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cospfopaqueaslsacksumsum.is_set || is_set(cospfopaqueaslsacksumsum.operation)) leaf_name_data.push_back(cospfopaqueaslsacksumsum.get_name_leafdata());
    if (cospfopaqueaslsacount.is_set || is_set(cospfopaqueaslsacount.operation)) leaf_name_data.push_back(cospfopaqueaslsacount.get_name_leafdata());
    if (cospfopaquelsasupport.is_set || is_set(cospfopaquelsasupport.operation)) leaf_name_data.push_back(cospfopaquelsasupport.get_name_leafdata());
    if (cospfrfc1583compatibility.is_set || is_set(cospfrfc1583compatibility.operation)) leaf_name_data.push_back(cospfrfc1583compatibility.get_name_leafdata());
    if (cospftrafficengineeringsupport.is_set || is_set(cospftrafficengineeringsupport.operation)) leaf_name_data.push_back(cospftrafficengineeringsupport.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoOspfMib::Cospfgeneralgroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoOspfMib::Cospfgeneralgroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoOspfMib::Cospfgeneralgroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cospfOpaqueASLsaCksumSum")
    {
        cospfopaqueaslsacksumsum = value;
    }
    if(value_path == "cospfOpaqueASLsaCount")
    {
        cospfopaqueaslsacount = value;
    }
    if(value_path == "cospfOpaqueLsaSupport")
    {
        cospfopaquelsasupport = value;
    }
    if(value_path == "cospfRFC1583Compatibility")
    {
        cospfrfc1583compatibility = value;
    }
    if(value_path == "cospfTrafficEngineeringSupport")
    {
        cospftrafficengineeringsupport = value;
    }
}

CiscoOspfMib::Cospflsdbtable::Cospflsdbtable()
{
    yang_name = "cospfLsdbTable"; yang_parent_name = "CISCO-OSPF-MIB";
}

CiscoOspfMib::Cospflsdbtable::~Cospflsdbtable()
{
}

bool CiscoOspfMib::Cospflsdbtable::has_data() const
{
    for (std::size_t index=0; index<cospflsdbentry_.size(); index++)
    {
        if(cospflsdbentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoOspfMib::Cospflsdbtable::has_operation() const
{
    for (std::size_t index=0; index<cospflsdbentry_.size(); index++)
    {
        if(cospflsdbentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoOspfMib::Cospflsdbtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cospfLsdbTable";

    return path_buffer.str();

}

const EntityPath CiscoOspfMib::Cospflsdbtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-OSPF-MIB:CISCO-OSPF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoOspfMib::Cospflsdbtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cospfLsdbEntry")
    {
        for(auto const & c : cospflsdbentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoOspfMib::Cospflsdbtable::Cospflsdbentry>();
        c->parent = this;
        cospflsdbentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoOspfMib::Cospflsdbtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cospflsdbentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoOspfMib::Cospflsdbtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoOspfMib::Cospflsdbtable::Cospflsdbentry::Cospflsdbentry()
    :
    ospflsdbareaid{YType::str, "ospfLsdbAreaId"},
    cospflsdbtype{YType::enumeration, "cospfLsdbType"},
    ospflsdblsid{YType::str, "ospfLsdbLsid"},
    ospflsdbrouterid{YType::str, "ospfLsdbRouterId"},
    cospflsdbadvertisement{YType::str, "cospfLsdbAdvertisement"},
    cospflsdbage{YType::int32, "cospfLsdbAge"},
    cospflsdbchecksum{YType::int32, "cospfLsdbChecksum"},
    cospflsdbsequence{YType::int32, "cospfLsdbSequence"}
{
    yang_name = "cospfLsdbEntry"; yang_parent_name = "cospfLsdbTable";
}

CiscoOspfMib::Cospflsdbtable::Cospflsdbentry::~Cospflsdbentry()
{
}

bool CiscoOspfMib::Cospflsdbtable::Cospflsdbentry::has_data() const
{
    return ospflsdbareaid.is_set
	|| cospflsdbtype.is_set
	|| ospflsdblsid.is_set
	|| ospflsdbrouterid.is_set
	|| cospflsdbadvertisement.is_set
	|| cospflsdbage.is_set
	|| cospflsdbchecksum.is_set
	|| cospflsdbsequence.is_set;
}

bool CiscoOspfMib::Cospflsdbtable::Cospflsdbentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ospflsdbareaid.operation)
	|| is_set(cospflsdbtype.operation)
	|| is_set(ospflsdblsid.operation)
	|| is_set(ospflsdbrouterid.operation)
	|| is_set(cospflsdbadvertisement.operation)
	|| is_set(cospflsdbage.operation)
	|| is_set(cospflsdbchecksum.operation)
	|| is_set(cospflsdbsequence.operation);
}

std::string CiscoOspfMib::Cospflsdbtable::Cospflsdbentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cospfLsdbEntry" <<"[ospfLsdbAreaId='" <<ospflsdbareaid <<"']" <<"[cospfLsdbType='" <<cospflsdbtype <<"']" <<"[ospfLsdbLsid='" <<ospflsdblsid <<"']" <<"[ospfLsdbRouterId='" <<ospflsdbrouterid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoOspfMib::Cospflsdbtable::Cospflsdbentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-OSPF-MIB:CISCO-OSPF-MIB/cospfLsdbTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospflsdbareaid.is_set || is_set(ospflsdbareaid.operation)) leaf_name_data.push_back(ospflsdbareaid.get_name_leafdata());
    if (cospflsdbtype.is_set || is_set(cospflsdbtype.operation)) leaf_name_data.push_back(cospflsdbtype.get_name_leafdata());
    if (ospflsdblsid.is_set || is_set(ospflsdblsid.operation)) leaf_name_data.push_back(ospflsdblsid.get_name_leafdata());
    if (ospflsdbrouterid.is_set || is_set(ospflsdbrouterid.operation)) leaf_name_data.push_back(ospflsdbrouterid.get_name_leafdata());
    if (cospflsdbadvertisement.is_set || is_set(cospflsdbadvertisement.operation)) leaf_name_data.push_back(cospflsdbadvertisement.get_name_leafdata());
    if (cospflsdbage.is_set || is_set(cospflsdbage.operation)) leaf_name_data.push_back(cospflsdbage.get_name_leafdata());
    if (cospflsdbchecksum.is_set || is_set(cospflsdbchecksum.operation)) leaf_name_data.push_back(cospflsdbchecksum.get_name_leafdata());
    if (cospflsdbsequence.is_set || is_set(cospflsdbsequence.operation)) leaf_name_data.push_back(cospflsdbsequence.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoOspfMib::Cospflsdbtable::Cospflsdbentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoOspfMib::Cospflsdbtable::Cospflsdbentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoOspfMib::Cospflsdbtable::Cospflsdbentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ospfLsdbAreaId")
    {
        ospflsdbareaid = value;
    }
    if(value_path == "cospfLsdbType")
    {
        cospflsdbtype = value;
    }
    if(value_path == "ospfLsdbLsid")
    {
        ospflsdblsid = value;
    }
    if(value_path == "ospfLsdbRouterId")
    {
        ospflsdbrouterid = value;
    }
    if(value_path == "cospfLsdbAdvertisement")
    {
        cospflsdbadvertisement = value;
    }
    if(value_path == "cospfLsdbAge")
    {
        cospflsdbage = value;
    }
    if(value_path == "cospfLsdbChecksum")
    {
        cospflsdbchecksum = value;
    }
    if(value_path == "cospfLsdbSequence")
    {
        cospflsdbsequence = value;
    }
}

CiscoOspfMib::Cospfshamlinktable::Cospfshamlinktable()
{
    yang_name = "cospfShamLinkTable"; yang_parent_name = "CISCO-OSPF-MIB";
}

CiscoOspfMib::Cospfshamlinktable::~Cospfshamlinktable()
{
}

bool CiscoOspfMib::Cospfshamlinktable::has_data() const
{
    for (std::size_t index=0; index<cospfshamlinkentry_.size(); index++)
    {
        if(cospfshamlinkentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoOspfMib::Cospfshamlinktable::has_operation() const
{
    for (std::size_t index=0; index<cospfshamlinkentry_.size(); index++)
    {
        if(cospfshamlinkentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoOspfMib::Cospfshamlinktable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cospfShamLinkTable";

    return path_buffer.str();

}

const EntityPath CiscoOspfMib::Cospfshamlinktable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-OSPF-MIB:CISCO-OSPF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoOspfMib::Cospfshamlinktable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cospfShamLinkEntry")
    {
        for(auto const & c : cospfshamlinkentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoOspfMib::Cospfshamlinktable::Cospfshamlinkentry>();
        c->parent = this;
        cospfshamlinkentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoOspfMib::Cospfshamlinktable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cospfshamlinkentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoOspfMib::Cospfshamlinktable::set_value(const std::string & value_path, std::string value)
{
}

CiscoOspfMib::Cospfshamlinktable::Cospfshamlinkentry::Cospfshamlinkentry()
    :
    cospfshamlinkareaid{YType::str, "cospfShamLinkAreaId"},
    cospfshamlinklocalipaddress{YType::str, "cospfShamLinkLocalIpAddress"},
    cospfshamlinkneighborid{YType::str, "cospfShamLinkNeighborId"},
    cospfshamlinkevents{YType::uint32, "cospfShamLinkEvents"},
    cospfshamlinkhellointerval{YType::int32, "cospfShamLinkHelloInterval"},
    cospfshamlinkmetric{YType::int32, "cospfShamLinkMetric"},
    cospfshamlinkretransinterval{YType::int32, "cospfShamLinkRetransInterval"},
    cospfshamlinkrtrdeadinterval{YType::int32, "cospfShamLinkRtrDeadInterval"},
    cospfshamlinkstate{YType::enumeration, "cospfShamLinkState"}
{
    yang_name = "cospfShamLinkEntry"; yang_parent_name = "cospfShamLinkTable";
}

CiscoOspfMib::Cospfshamlinktable::Cospfshamlinkentry::~Cospfshamlinkentry()
{
}

bool CiscoOspfMib::Cospfshamlinktable::Cospfshamlinkentry::has_data() const
{
    return cospfshamlinkareaid.is_set
	|| cospfshamlinklocalipaddress.is_set
	|| cospfshamlinkneighborid.is_set
	|| cospfshamlinkevents.is_set
	|| cospfshamlinkhellointerval.is_set
	|| cospfshamlinkmetric.is_set
	|| cospfshamlinkretransinterval.is_set
	|| cospfshamlinkrtrdeadinterval.is_set
	|| cospfshamlinkstate.is_set;
}

bool CiscoOspfMib::Cospfshamlinktable::Cospfshamlinkentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cospfshamlinkareaid.operation)
	|| is_set(cospfshamlinklocalipaddress.operation)
	|| is_set(cospfshamlinkneighborid.operation)
	|| is_set(cospfshamlinkevents.operation)
	|| is_set(cospfshamlinkhellointerval.operation)
	|| is_set(cospfshamlinkmetric.operation)
	|| is_set(cospfshamlinkretransinterval.operation)
	|| is_set(cospfshamlinkrtrdeadinterval.operation)
	|| is_set(cospfshamlinkstate.operation);
}

std::string CiscoOspfMib::Cospfshamlinktable::Cospfshamlinkentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cospfShamLinkEntry" <<"[cospfShamLinkAreaId='" <<cospfshamlinkareaid <<"']" <<"[cospfShamLinkLocalIpAddress='" <<cospfshamlinklocalipaddress <<"']" <<"[cospfShamLinkNeighborId='" <<cospfshamlinkneighborid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoOspfMib::Cospfshamlinktable::Cospfshamlinkentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-OSPF-MIB:CISCO-OSPF-MIB/cospfShamLinkTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cospfshamlinkareaid.is_set || is_set(cospfshamlinkareaid.operation)) leaf_name_data.push_back(cospfshamlinkareaid.get_name_leafdata());
    if (cospfshamlinklocalipaddress.is_set || is_set(cospfshamlinklocalipaddress.operation)) leaf_name_data.push_back(cospfshamlinklocalipaddress.get_name_leafdata());
    if (cospfshamlinkneighborid.is_set || is_set(cospfshamlinkneighborid.operation)) leaf_name_data.push_back(cospfshamlinkneighborid.get_name_leafdata());
    if (cospfshamlinkevents.is_set || is_set(cospfshamlinkevents.operation)) leaf_name_data.push_back(cospfshamlinkevents.get_name_leafdata());
    if (cospfshamlinkhellointerval.is_set || is_set(cospfshamlinkhellointerval.operation)) leaf_name_data.push_back(cospfshamlinkhellointerval.get_name_leafdata());
    if (cospfshamlinkmetric.is_set || is_set(cospfshamlinkmetric.operation)) leaf_name_data.push_back(cospfshamlinkmetric.get_name_leafdata());
    if (cospfshamlinkretransinterval.is_set || is_set(cospfshamlinkretransinterval.operation)) leaf_name_data.push_back(cospfshamlinkretransinterval.get_name_leafdata());
    if (cospfshamlinkrtrdeadinterval.is_set || is_set(cospfshamlinkrtrdeadinterval.operation)) leaf_name_data.push_back(cospfshamlinkrtrdeadinterval.get_name_leafdata());
    if (cospfshamlinkstate.is_set || is_set(cospfshamlinkstate.operation)) leaf_name_data.push_back(cospfshamlinkstate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoOspfMib::Cospfshamlinktable::Cospfshamlinkentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoOspfMib::Cospfshamlinktable::Cospfshamlinkentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoOspfMib::Cospfshamlinktable::Cospfshamlinkentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cospfShamLinkAreaId")
    {
        cospfshamlinkareaid = value;
    }
    if(value_path == "cospfShamLinkLocalIpAddress")
    {
        cospfshamlinklocalipaddress = value;
    }
    if(value_path == "cospfShamLinkNeighborId")
    {
        cospfshamlinkneighborid = value;
    }
    if(value_path == "cospfShamLinkEvents")
    {
        cospfshamlinkevents = value;
    }
    if(value_path == "cospfShamLinkHelloInterval")
    {
        cospfshamlinkhellointerval = value;
    }
    if(value_path == "cospfShamLinkMetric")
    {
        cospfshamlinkmetric = value;
    }
    if(value_path == "cospfShamLinkRetransInterval")
    {
        cospfshamlinkretransinterval = value;
    }
    if(value_path == "cospfShamLinkRtrDeadInterval")
    {
        cospfshamlinkrtrdeadinterval = value;
    }
    if(value_path == "cospfShamLinkState")
    {
        cospfshamlinkstate = value;
    }
}

CiscoOspfMib::Cospflocallsdbtable::Cospflocallsdbtable()
{
    yang_name = "cospfLocalLsdbTable"; yang_parent_name = "CISCO-OSPF-MIB";
}

CiscoOspfMib::Cospflocallsdbtable::~Cospflocallsdbtable()
{
}

bool CiscoOspfMib::Cospflocallsdbtable::has_data() const
{
    for (std::size_t index=0; index<cospflocallsdbentry_.size(); index++)
    {
        if(cospflocallsdbentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoOspfMib::Cospflocallsdbtable::has_operation() const
{
    for (std::size_t index=0; index<cospflocallsdbentry_.size(); index++)
    {
        if(cospflocallsdbentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoOspfMib::Cospflocallsdbtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cospfLocalLsdbTable";

    return path_buffer.str();

}

const EntityPath CiscoOspfMib::Cospflocallsdbtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-OSPF-MIB:CISCO-OSPF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoOspfMib::Cospflocallsdbtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cospfLocalLsdbEntry")
    {
        for(auto const & c : cospflocallsdbentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoOspfMib::Cospflocallsdbtable::Cospflocallsdbentry>();
        c->parent = this;
        cospflocallsdbentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoOspfMib::Cospflocallsdbtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cospflocallsdbentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoOspfMib::Cospflocallsdbtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoOspfMib::Cospflocallsdbtable::Cospflocallsdbentry::Cospflocallsdbentry()
    :
    cospflocallsdbipaddress{YType::str, "cospfLocalLsdbIpAddress"},
    cospflocallsdbaddresslessif{YType::int32, "cospfLocalLsdbAddressLessIf"},
    cospflocallsdbtype{YType::enumeration, "cospfLocalLsdbType"},
    cospflocallsdblsid{YType::str, "cospfLocalLsdbLsid"},
    cospflocallsdbrouterid{YType::str, "cospfLocalLsdbRouterId"},
    cospflocallsdbadvertisement{YType::str, "cospfLocalLsdbAdvertisement"},
    cospflocallsdbage{YType::int32, "cospfLocalLsdbAge"},
    cospflocallsdbchecksum{YType::uint32, "cospfLocalLsdbChecksum"},
    cospflocallsdbsequence{YType::int32, "cospfLocalLsdbSequence"}
{
    yang_name = "cospfLocalLsdbEntry"; yang_parent_name = "cospfLocalLsdbTable";
}

CiscoOspfMib::Cospflocallsdbtable::Cospflocallsdbentry::~Cospflocallsdbentry()
{
}

bool CiscoOspfMib::Cospflocallsdbtable::Cospflocallsdbentry::has_data() const
{
    return cospflocallsdbipaddress.is_set
	|| cospflocallsdbaddresslessif.is_set
	|| cospflocallsdbtype.is_set
	|| cospflocallsdblsid.is_set
	|| cospflocallsdbrouterid.is_set
	|| cospflocallsdbadvertisement.is_set
	|| cospflocallsdbage.is_set
	|| cospflocallsdbchecksum.is_set
	|| cospflocallsdbsequence.is_set;
}

bool CiscoOspfMib::Cospflocallsdbtable::Cospflocallsdbentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cospflocallsdbipaddress.operation)
	|| is_set(cospflocallsdbaddresslessif.operation)
	|| is_set(cospflocallsdbtype.operation)
	|| is_set(cospflocallsdblsid.operation)
	|| is_set(cospflocallsdbrouterid.operation)
	|| is_set(cospflocallsdbadvertisement.operation)
	|| is_set(cospflocallsdbage.operation)
	|| is_set(cospflocallsdbchecksum.operation)
	|| is_set(cospflocallsdbsequence.operation);
}

std::string CiscoOspfMib::Cospflocallsdbtable::Cospflocallsdbentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cospfLocalLsdbEntry" <<"[cospfLocalLsdbIpAddress='" <<cospflocallsdbipaddress <<"']" <<"[cospfLocalLsdbAddressLessIf='" <<cospflocallsdbaddresslessif <<"']" <<"[cospfLocalLsdbType='" <<cospflocallsdbtype <<"']" <<"[cospfLocalLsdbLsid='" <<cospflocallsdblsid <<"']" <<"[cospfLocalLsdbRouterId='" <<cospflocallsdbrouterid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoOspfMib::Cospflocallsdbtable::Cospflocallsdbentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-OSPF-MIB:CISCO-OSPF-MIB/cospfLocalLsdbTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cospflocallsdbipaddress.is_set || is_set(cospflocallsdbipaddress.operation)) leaf_name_data.push_back(cospflocallsdbipaddress.get_name_leafdata());
    if (cospflocallsdbaddresslessif.is_set || is_set(cospflocallsdbaddresslessif.operation)) leaf_name_data.push_back(cospflocallsdbaddresslessif.get_name_leafdata());
    if (cospflocallsdbtype.is_set || is_set(cospflocallsdbtype.operation)) leaf_name_data.push_back(cospflocallsdbtype.get_name_leafdata());
    if (cospflocallsdblsid.is_set || is_set(cospflocallsdblsid.operation)) leaf_name_data.push_back(cospflocallsdblsid.get_name_leafdata());
    if (cospflocallsdbrouterid.is_set || is_set(cospflocallsdbrouterid.operation)) leaf_name_data.push_back(cospflocallsdbrouterid.get_name_leafdata());
    if (cospflocallsdbadvertisement.is_set || is_set(cospflocallsdbadvertisement.operation)) leaf_name_data.push_back(cospflocallsdbadvertisement.get_name_leafdata());
    if (cospflocallsdbage.is_set || is_set(cospflocallsdbage.operation)) leaf_name_data.push_back(cospflocallsdbage.get_name_leafdata());
    if (cospflocallsdbchecksum.is_set || is_set(cospflocallsdbchecksum.operation)) leaf_name_data.push_back(cospflocallsdbchecksum.get_name_leafdata());
    if (cospflocallsdbsequence.is_set || is_set(cospflocallsdbsequence.operation)) leaf_name_data.push_back(cospflocallsdbsequence.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoOspfMib::Cospflocallsdbtable::Cospflocallsdbentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoOspfMib::Cospflocallsdbtable::Cospflocallsdbentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoOspfMib::Cospflocallsdbtable::Cospflocallsdbentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cospfLocalLsdbIpAddress")
    {
        cospflocallsdbipaddress = value;
    }
    if(value_path == "cospfLocalLsdbAddressLessIf")
    {
        cospflocallsdbaddresslessif = value;
    }
    if(value_path == "cospfLocalLsdbType")
    {
        cospflocallsdbtype = value;
    }
    if(value_path == "cospfLocalLsdbLsid")
    {
        cospflocallsdblsid = value;
    }
    if(value_path == "cospfLocalLsdbRouterId")
    {
        cospflocallsdbrouterid = value;
    }
    if(value_path == "cospfLocalLsdbAdvertisement")
    {
        cospflocallsdbadvertisement = value;
    }
    if(value_path == "cospfLocalLsdbAge")
    {
        cospflocallsdbage = value;
    }
    if(value_path == "cospfLocalLsdbChecksum")
    {
        cospflocallsdbchecksum = value;
    }
    if(value_path == "cospfLocalLsdbSequence")
    {
        cospflocallsdbsequence = value;
    }
}

CiscoOspfMib::Cospfvirtlocallsdbtable::Cospfvirtlocallsdbtable()
{
    yang_name = "cospfVirtLocalLsdbTable"; yang_parent_name = "CISCO-OSPF-MIB";
}

CiscoOspfMib::Cospfvirtlocallsdbtable::~Cospfvirtlocallsdbtable()
{
}

bool CiscoOspfMib::Cospfvirtlocallsdbtable::has_data() const
{
    for (std::size_t index=0; index<cospfvirtlocallsdbentry_.size(); index++)
    {
        if(cospfvirtlocallsdbentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoOspfMib::Cospfvirtlocallsdbtable::has_operation() const
{
    for (std::size_t index=0; index<cospfvirtlocallsdbentry_.size(); index++)
    {
        if(cospfvirtlocallsdbentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoOspfMib::Cospfvirtlocallsdbtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cospfVirtLocalLsdbTable";

    return path_buffer.str();

}

const EntityPath CiscoOspfMib::Cospfvirtlocallsdbtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-OSPF-MIB:CISCO-OSPF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoOspfMib::Cospfvirtlocallsdbtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cospfVirtLocalLsdbEntry")
    {
        for(auto const & c : cospfvirtlocallsdbentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoOspfMib::Cospfvirtlocallsdbtable::Cospfvirtlocallsdbentry>();
        c->parent = this;
        cospfvirtlocallsdbentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoOspfMib::Cospfvirtlocallsdbtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cospfvirtlocallsdbentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoOspfMib::Cospfvirtlocallsdbtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoOspfMib::Cospfvirtlocallsdbtable::Cospfvirtlocallsdbentry::Cospfvirtlocallsdbentry()
    :
    cospfvirtlocallsdbtransitarea{YType::str, "cospfVirtLocalLsdbTransitArea"},
    cospfvirtlocallsdbneighbor{YType::str, "cospfVirtLocalLsdbNeighbor"},
    cospfvirtlocallsdbtype{YType::enumeration, "cospfVirtLocalLsdbType"},
    cospfvirtlocallsdblsid{YType::str, "cospfVirtLocalLsdbLsid"},
    cospfvirtlocallsdbrouterid{YType::str, "cospfVirtLocalLsdbRouterId"},
    cospfvirtlocallsdbadvertisement{YType::str, "cospfVirtLocalLsdbAdvertisement"},
    cospfvirtlocallsdbage{YType::int32, "cospfVirtLocalLsdbAge"},
    cospfvirtlocallsdbchecksum{YType::uint32, "cospfVirtLocalLsdbChecksum"},
    cospfvirtlocallsdbsequence{YType::int32, "cospfVirtLocalLsdbSequence"}
{
    yang_name = "cospfVirtLocalLsdbEntry"; yang_parent_name = "cospfVirtLocalLsdbTable";
}

CiscoOspfMib::Cospfvirtlocallsdbtable::Cospfvirtlocallsdbentry::~Cospfvirtlocallsdbentry()
{
}

bool CiscoOspfMib::Cospfvirtlocallsdbtable::Cospfvirtlocallsdbentry::has_data() const
{
    return cospfvirtlocallsdbtransitarea.is_set
	|| cospfvirtlocallsdbneighbor.is_set
	|| cospfvirtlocallsdbtype.is_set
	|| cospfvirtlocallsdblsid.is_set
	|| cospfvirtlocallsdbrouterid.is_set
	|| cospfvirtlocallsdbadvertisement.is_set
	|| cospfvirtlocallsdbage.is_set
	|| cospfvirtlocallsdbchecksum.is_set
	|| cospfvirtlocallsdbsequence.is_set;
}

bool CiscoOspfMib::Cospfvirtlocallsdbtable::Cospfvirtlocallsdbentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cospfvirtlocallsdbtransitarea.operation)
	|| is_set(cospfvirtlocallsdbneighbor.operation)
	|| is_set(cospfvirtlocallsdbtype.operation)
	|| is_set(cospfvirtlocallsdblsid.operation)
	|| is_set(cospfvirtlocallsdbrouterid.operation)
	|| is_set(cospfvirtlocallsdbadvertisement.operation)
	|| is_set(cospfvirtlocallsdbage.operation)
	|| is_set(cospfvirtlocallsdbchecksum.operation)
	|| is_set(cospfvirtlocallsdbsequence.operation);
}

std::string CiscoOspfMib::Cospfvirtlocallsdbtable::Cospfvirtlocallsdbentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cospfVirtLocalLsdbEntry" <<"[cospfVirtLocalLsdbTransitArea='" <<cospfvirtlocallsdbtransitarea <<"']" <<"[cospfVirtLocalLsdbNeighbor='" <<cospfvirtlocallsdbneighbor <<"']" <<"[cospfVirtLocalLsdbType='" <<cospfvirtlocallsdbtype <<"']" <<"[cospfVirtLocalLsdbLsid='" <<cospfvirtlocallsdblsid <<"']" <<"[cospfVirtLocalLsdbRouterId='" <<cospfvirtlocallsdbrouterid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoOspfMib::Cospfvirtlocallsdbtable::Cospfvirtlocallsdbentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-OSPF-MIB:CISCO-OSPF-MIB/cospfVirtLocalLsdbTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cospfvirtlocallsdbtransitarea.is_set || is_set(cospfvirtlocallsdbtransitarea.operation)) leaf_name_data.push_back(cospfvirtlocallsdbtransitarea.get_name_leafdata());
    if (cospfvirtlocallsdbneighbor.is_set || is_set(cospfvirtlocallsdbneighbor.operation)) leaf_name_data.push_back(cospfvirtlocallsdbneighbor.get_name_leafdata());
    if (cospfvirtlocallsdbtype.is_set || is_set(cospfvirtlocallsdbtype.operation)) leaf_name_data.push_back(cospfvirtlocallsdbtype.get_name_leafdata());
    if (cospfvirtlocallsdblsid.is_set || is_set(cospfvirtlocallsdblsid.operation)) leaf_name_data.push_back(cospfvirtlocallsdblsid.get_name_leafdata());
    if (cospfvirtlocallsdbrouterid.is_set || is_set(cospfvirtlocallsdbrouterid.operation)) leaf_name_data.push_back(cospfvirtlocallsdbrouterid.get_name_leafdata());
    if (cospfvirtlocallsdbadvertisement.is_set || is_set(cospfvirtlocallsdbadvertisement.operation)) leaf_name_data.push_back(cospfvirtlocallsdbadvertisement.get_name_leafdata());
    if (cospfvirtlocallsdbage.is_set || is_set(cospfvirtlocallsdbage.operation)) leaf_name_data.push_back(cospfvirtlocallsdbage.get_name_leafdata());
    if (cospfvirtlocallsdbchecksum.is_set || is_set(cospfvirtlocallsdbchecksum.operation)) leaf_name_data.push_back(cospfvirtlocallsdbchecksum.get_name_leafdata());
    if (cospfvirtlocallsdbsequence.is_set || is_set(cospfvirtlocallsdbsequence.operation)) leaf_name_data.push_back(cospfvirtlocallsdbsequence.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoOspfMib::Cospfvirtlocallsdbtable::Cospfvirtlocallsdbentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoOspfMib::Cospfvirtlocallsdbtable::Cospfvirtlocallsdbentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoOspfMib::Cospfvirtlocallsdbtable::Cospfvirtlocallsdbentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cospfVirtLocalLsdbTransitArea")
    {
        cospfvirtlocallsdbtransitarea = value;
    }
    if(value_path == "cospfVirtLocalLsdbNeighbor")
    {
        cospfvirtlocallsdbneighbor = value;
    }
    if(value_path == "cospfVirtLocalLsdbType")
    {
        cospfvirtlocallsdbtype = value;
    }
    if(value_path == "cospfVirtLocalLsdbLsid")
    {
        cospfvirtlocallsdblsid = value;
    }
    if(value_path == "cospfVirtLocalLsdbRouterId")
    {
        cospfvirtlocallsdbrouterid = value;
    }
    if(value_path == "cospfVirtLocalLsdbAdvertisement")
    {
        cospfvirtlocallsdbadvertisement = value;
    }
    if(value_path == "cospfVirtLocalLsdbAge")
    {
        cospfvirtlocallsdbage = value;
    }
    if(value_path == "cospfVirtLocalLsdbChecksum")
    {
        cospfvirtlocallsdbchecksum = value;
    }
    if(value_path == "cospfVirtLocalLsdbSequence")
    {
        cospfvirtlocallsdbsequence = value;
    }
}

CiscoOspfMib::Cospfshamlinknbrtable::Cospfshamlinknbrtable()
{
    yang_name = "cospfShamLinkNbrTable"; yang_parent_name = "CISCO-OSPF-MIB";
}

CiscoOspfMib::Cospfshamlinknbrtable::~Cospfshamlinknbrtable()
{
}

bool CiscoOspfMib::Cospfshamlinknbrtable::has_data() const
{
    for (std::size_t index=0; index<cospfshamlinknbrentry_.size(); index++)
    {
        if(cospfshamlinknbrentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoOspfMib::Cospfshamlinknbrtable::has_operation() const
{
    for (std::size_t index=0; index<cospfshamlinknbrentry_.size(); index++)
    {
        if(cospfshamlinknbrentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoOspfMib::Cospfshamlinknbrtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cospfShamLinkNbrTable";

    return path_buffer.str();

}

const EntityPath CiscoOspfMib::Cospfshamlinknbrtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-OSPF-MIB:CISCO-OSPF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoOspfMib::Cospfshamlinknbrtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cospfShamLinkNbrEntry")
    {
        for(auto const & c : cospfshamlinknbrentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoOspfMib::Cospfshamlinknbrtable::Cospfshamlinknbrentry>();
        c->parent = this;
        cospfshamlinknbrentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoOspfMib::Cospfshamlinknbrtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cospfshamlinknbrentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoOspfMib::Cospfshamlinknbrtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoOspfMib::Cospfshamlinknbrtable::Cospfshamlinknbrentry::Cospfshamlinknbrentry()
    :
    cospfshamlinkslocalipaddrtype{YType::enumeration, "cospfShamLinksLocalIpAddrType"},
    cospfshamlinkslocalipaddr{YType::str, "cospfShamLinksLocalIpAddr"},
    cospfshamlinknbrarea{YType::str, "cospfShamLinkNbrArea"},
    cospfshamlinknbripaddrtype{YType::enumeration, "cospfShamLinkNbrIpAddrType"},
    cospfshamlinknbripaddr{YType::str, "cospfShamLinkNbrIpAddr"},
    cospfshamlinknbrevents{YType::uint32, "cospfShamLinkNbrEvents"},
    cospfshamlinknbrhellosuppressed{YType::boolean, "cospfShamLinkNbrHelloSuppressed"},
    cospfshamlinknbrlsretransqlen{YType::uint32, "cospfShamLinkNbrLsRetransQLen"},
    cospfshamlinknbroptions{YType::int32, "cospfShamLinkNbrOptions"},
    cospfshamlinknbrrtrid{YType::str, "cospfShamLinkNbrRtrId"},
    cospfshamlinknbrstate{YType::enumeration, "cospfShamLinkNbrState"}
{
    yang_name = "cospfShamLinkNbrEntry"; yang_parent_name = "cospfShamLinkNbrTable";
}

CiscoOspfMib::Cospfshamlinknbrtable::Cospfshamlinknbrentry::~Cospfshamlinknbrentry()
{
}

bool CiscoOspfMib::Cospfshamlinknbrtable::Cospfshamlinknbrentry::has_data() const
{
    return cospfshamlinkslocalipaddrtype.is_set
	|| cospfshamlinkslocalipaddr.is_set
	|| cospfshamlinknbrarea.is_set
	|| cospfshamlinknbripaddrtype.is_set
	|| cospfshamlinknbripaddr.is_set
	|| cospfshamlinknbrevents.is_set
	|| cospfshamlinknbrhellosuppressed.is_set
	|| cospfshamlinknbrlsretransqlen.is_set
	|| cospfshamlinknbroptions.is_set
	|| cospfshamlinknbrrtrid.is_set
	|| cospfshamlinknbrstate.is_set;
}

bool CiscoOspfMib::Cospfshamlinknbrtable::Cospfshamlinknbrentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cospfshamlinkslocalipaddrtype.operation)
	|| is_set(cospfshamlinkslocalipaddr.operation)
	|| is_set(cospfshamlinknbrarea.operation)
	|| is_set(cospfshamlinknbripaddrtype.operation)
	|| is_set(cospfshamlinknbripaddr.operation)
	|| is_set(cospfshamlinknbrevents.operation)
	|| is_set(cospfshamlinknbrhellosuppressed.operation)
	|| is_set(cospfshamlinknbrlsretransqlen.operation)
	|| is_set(cospfshamlinknbroptions.operation)
	|| is_set(cospfshamlinknbrrtrid.operation)
	|| is_set(cospfshamlinknbrstate.operation);
}

std::string CiscoOspfMib::Cospfshamlinknbrtable::Cospfshamlinknbrentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cospfShamLinkNbrEntry" <<"[cospfShamLinksLocalIpAddrType='" <<cospfshamlinkslocalipaddrtype <<"']" <<"[cospfShamLinksLocalIpAddr='" <<cospfshamlinkslocalipaddr <<"']" <<"[cospfShamLinkNbrArea='" <<cospfshamlinknbrarea <<"']" <<"[cospfShamLinkNbrIpAddrType='" <<cospfshamlinknbripaddrtype <<"']" <<"[cospfShamLinkNbrIpAddr='" <<cospfshamlinknbripaddr <<"']";

    return path_buffer.str();

}

const EntityPath CiscoOspfMib::Cospfshamlinknbrtable::Cospfshamlinknbrentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-OSPF-MIB:CISCO-OSPF-MIB/cospfShamLinkNbrTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cospfshamlinkslocalipaddrtype.is_set || is_set(cospfshamlinkslocalipaddrtype.operation)) leaf_name_data.push_back(cospfshamlinkslocalipaddrtype.get_name_leafdata());
    if (cospfshamlinkslocalipaddr.is_set || is_set(cospfshamlinkslocalipaddr.operation)) leaf_name_data.push_back(cospfshamlinkslocalipaddr.get_name_leafdata());
    if (cospfshamlinknbrarea.is_set || is_set(cospfshamlinknbrarea.operation)) leaf_name_data.push_back(cospfshamlinknbrarea.get_name_leafdata());
    if (cospfshamlinknbripaddrtype.is_set || is_set(cospfshamlinknbripaddrtype.operation)) leaf_name_data.push_back(cospfshamlinknbripaddrtype.get_name_leafdata());
    if (cospfshamlinknbripaddr.is_set || is_set(cospfshamlinknbripaddr.operation)) leaf_name_data.push_back(cospfshamlinknbripaddr.get_name_leafdata());
    if (cospfshamlinknbrevents.is_set || is_set(cospfshamlinknbrevents.operation)) leaf_name_data.push_back(cospfshamlinknbrevents.get_name_leafdata());
    if (cospfshamlinknbrhellosuppressed.is_set || is_set(cospfshamlinknbrhellosuppressed.operation)) leaf_name_data.push_back(cospfshamlinknbrhellosuppressed.get_name_leafdata());
    if (cospfshamlinknbrlsretransqlen.is_set || is_set(cospfshamlinknbrlsretransqlen.operation)) leaf_name_data.push_back(cospfshamlinknbrlsretransqlen.get_name_leafdata());
    if (cospfshamlinknbroptions.is_set || is_set(cospfshamlinknbroptions.operation)) leaf_name_data.push_back(cospfshamlinknbroptions.get_name_leafdata());
    if (cospfshamlinknbrrtrid.is_set || is_set(cospfshamlinknbrrtrid.operation)) leaf_name_data.push_back(cospfshamlinknbrrtrid.get_name_leafdata());
    if (cospfshamlinknbrstate.is_set || is_set(cospfshamlinknbrstate.operation)) leaf_name_data.push_back(cospfshamlinknbrstate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoOspfMib::Cospfshamlinknbrtable::Cospfshamlinknbrentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoOspfMib::Cospfshamlinknbrtable::Cospfshamlinknbrentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoOspfMib::Cospfshamlinknbrtable::Cospfshamlinknbrentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cospfShamLinksLocalIpAddrType")
    {
        cospfshamlinkslocalipaddrtype = value;
    }
    if(value_path == "cospfShamLinksLocalIpAddr")
    {
        cospfshamlinkslocalipaddr = value;
    }
    if(value_path == "cospfShamLinkNbrArea")
    {
        cospfshamlinknbrarea = value;
    }
    if(value_path == "cospfShamLinkNbrIpAddrType")
    {
        cospfshamlinknbripaddrtype = value;
    }
    if(value_path == "cospfShamLinkNbrIpAddr")
    {
        cospfshamlinknbripaddr = value;
    }
    if(value_path == "cospfShamLinkNbrEvents")
    {
        cospfshamlinknbrevents = value;
    }
    if(value_path == "cospfShamLinkNbrHelloSuppressed")
    {
        cospfshamlinknbrhellosuppressed = value;
    }
    if(value_path == "cospfShamLinkNbrLsRetransQLen")
    {
        cospfshamlinknbrlsretransqlen = value;
    }
    if(value_path == "cospfShamLinkNbrOptions")
    {
        cospfshamlinknbroptions = value;
    }
    if(value_path == "cospfShamLinkNbrRtrId")
    {
        cospfshamlinknbrrtrid = value;
    }
    if(value_path == "cospfShamLinkNbrState")
    {
        cospfshamlinknbrstate = value;
    }
}

CiscoOspfMib::Cospfshamlinkstable::Cospfshamlinkstable()
{
    yang_name = "cospfShamLinksTable"; yang_parent_name = "CISCO-OSPF-MIB";
}

CiscoOspfMib::Cospfshamlinkstable::~Cospfshamlinkstable()
{
}

bool CiscoOspfMib::Cospfshamlinkstable::has_data() const
{
    for (std::size_t index=0; index<cospfshamlinksentry_.size(); index++)
    {
        if(cospfshamlinksentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoOspfMib::Cospfshamlinkstable::has_operation() const
{
    for (std::size_t index=0; index<cospfshamlinksentry_.size(); index++)
    {
        if(cospfshamlinksentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoOspfMib::Cospfshamlinkstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cospfShamLinksTable";

    return path_buffer.str();

}

const EntityPath CiscoOspfMib::Cospfshamlinkstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-OSPF-MIB:CISCO-OSPF-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoOspfMib::Cospfshamlinkstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cospfShamLinksEntry")
    {
        for(auto const & c : cospfshamlinksentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoOspfMib::Cospfshamlinkstable::Cospfshamlinksentry>();
        c->parent = this;
        cospfshamlinksentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoOspfMib::Cospfshamlinkstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cospfshamlinksentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoOspfMib::Cospfshamlinkstable::set_value(const std::string & value_path, std::string value)
{
}

CiscoOspfMib::Cospfshamlinkstable::Cospfshamlinksentry::Cospfshamlinksentry()
    :
    cospfshamlinksareaid{YType::str, "cospfShamLinksAreaId"},
    cospfshamlinkslocalipaddrtype{YType::enumeration, "cospfShamLinksLocalIpAddrType"},
    cospfshamlinkslocalipaddr{YType::str, "cospfShamLinksLocalIpAddr"},
    cospfshamlinksremoteipaddrtype{YType::enumeration, "cospfShamLinksRemoteIpAddrType"},
    cospfshamlinksremoteipaddr{YType::str, "cospfShamLinksRemoteIpAddr"},
    cospfshamlinksevents{YType::uint32, "cospfShamLinksEvents"},
    cospfshamlinkshellointerval{YType::int32, "cospfShamLinksHelloInterval"},
    cospfshamlinksmetric{YType::int32, "cospfShamLinksMetric"},
    cospfshamlinksretransinterval{YType::int32, "cospfShamLinksRetransInterval"},
    cospfshamlinksrtrdeadinterval{YType::int32, "cospfShamLinksRtrDeadInterval"},
    cospfshamlinksstate{YType::enumeration, "cospfShamLinksState"}
{
    yang_name = "cospfShamLinksEntry"; yang_parent_name = "cospfShamLinksTable";
}

CiscoOspfMib::Cospfshamlinkstable::Cospfshamlinksentry::~Cospfshamlinksentry()
{
}

bool CiscoOspfMib::Cospfshamlinkstable::Cospfshamlinksentry::has_data() const
{
    return cospfshamlinksareaid.is_set
	|| cospfshamlinkslocalipaddrtype.is_set
	|| cospfshamlinkslocalipaddr.is_set
	|| cospfshamlinksremoteipaddrtype.is_set
	|| cospfshamlinksremoteipaddr.is_set
	|| cospfshamlinksevents.is_set
	|| cospfshamlinkshellointerval.is_set
	|| cospfshamlinksmetric.is_set
	|| cospfshamlinksretransinterval.is_set
	|| cospfshamlinksrtrdeadinterval.is_set
	|| cospfshamlinksstate.is_set;
}

bool CiscoOspfMib::Cospfshamlinkstable::Cospfshamlinksentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cospfshamlinksareaid.operation)
	|| is_set(cospfshamlinkslocalipaddrtype.operation)
	|| is_set(cospfshamlinkslocalipaddr.operation)
	|| is_set(cospfshamlinksremoteipaddrtype.operation)
	|| is_set(cospfshamlinksremoteipaddr.operation)
	|| is_set(cospfshamlinksevents.operation)
	|| is_set(cospfshamlinkshellointerval.operation)
	|| is_set(cospfshamlinksmetric.operation)
	|| is_set(cospfshamlinksretransinterval.operation)
	|| is_set(cospfshamlinksrtrdeadinterval.operation)
	|| is_set(cospfshamlinksstate.operation);
}

std::string CiscoOspfMib::Cospfshamlinkstable::Cospfshamlinksentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cospfShamLinksEntry" <<"[cospfShamLinksAreaId='" <<cospfshamlinksareaid <<"']" <<"[cospfShamLinksLocalIpAddrType='" <<cospfshamlinkslocalipaddrtype <<"']" <<"[cospfShamLinksLocalIpAddr='" <<cospfshamlinkslocalipaddr <<"']" <<"[cospfShamLinksRemoteIpAddrType='" <<cospfshamlinksremoteipaddrtype <<"']" <<"[cospfShamLinksRemoteIpAddr='" <<cospfshamlinksremoteipaddr <<"']";

    return path_buffer.str();

}

const EntityPath CiscoOspfMib::Cospfshamlinkstable::Cospfshamlinksentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-OSPF-MIB:CISCO-OSPF-MIB/cospfShamLinksTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cospfshamlinksareaid.is_set || is_set(cospfshamlinksareaid.operation)) leaf_name_data.push_back(cospfshamlinksareaid.get_name_leafdata());
    if (cospfshamlinkslocalipaddrtype.is_set || is_set(cospfshamlinkslocalipaddrtype.operation)) leaf_name_data.push_back(cospfshamlinkslocalipaddrtype.get_name_leafdata());
    if (cospfshamlinkslocalipaddr.is_set || is_set(cospfshamlinkslocalipaddr.operation)) leaf_name_data.push_back(cospfshamlinkslocalipaddr.get_name_leafdata());
    if (cospfshamlinksremoteipaddrtype.is_set || is_set(cospfshamlinksremoteipaddrtype.operation)) leaf_name_data.push_back(cospfshamlinksremoteipaddrtype.get_name_leafdata());
    if (cospfshamlinksremoteipaddr.is_set || is_set(cospfshamlinksremoteipaddr.operation)) leaf_name_data.push_back(cospfshamlinksremoteipaddr.get_name_leafdata());
    if (cospfshamlinksevents.is_set || is_set(cospfshamlinksevents.operation)) leaf_name_data.push_back(cospfshamlinksevents.get_name_leafdata());
    if (cospfshamlinkshellointerval.is_set || is_set(cospfshamlinkshellointerval.operation)) leaf_name_data.push_back(cospfshamlinkshellointerval.get_name_leafdata());
    if (cospfshamlinksmetric.is_set || is_set(cospfshamlinksmetric.operation)) leaf_name_data.push_back(cospfshamlinksmetric.get_name_leafdata());
    if (cospfshamlinksretransinterval.is_set || is_set(cospfshamlinksretransinterval.operation)) leaf_name_data.push_back(cospfshamlinksretransinterval.get_name_leafdata());
    if (cospfshamlinksrtrdeadinterval.is_set || is_set(cospfshamlinksrtrdeadinterval.operation)) leaf_name_data.push_back(cospfshamlinksrtrdeadinterval.get_name_leafdata());
    if (cospfshamlinksstate.is_set || is_set(cospfshamlinksstate.operation)) leaf_name_data.push_back(cospfshamlinksstate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoOspfMib::Cospfshamlinkstable::Cospfshamlinksentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoOspfMib::Cospfshamlinkstable::Cospfshamlinksentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoOspfMib::Cospfshamlinkstable::Cospfshamlinksentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cospfShamLinksAreaId")
    {
        cospfshamlinksareaid = value;
    }
    if(value_path == "cospfShamLinksLocalIpAddrType")
    {
        cospfshamlinkslocalipaddrtype = value;
    }
    if(value_path == "cospfShamLinksLocalIpAddr")
    {
        cospfshamlinkslocalipaddr = value;
    }
    if(value_path == "cospfShamLinksRemoteIpAddrType")
    {
        cospfshamlinksremoteipaddrtype = value;
    }
    if(value_path == "cospfShamLinksRemoteIpAddr")
    {
        cospfshamlinksremoteipaddr = value;
    }
    if(value_path == "cospfShamLinksEvents")
    {
        cospfshamlinksevents = value;
    }
    if(value_path == "cospfShamLinksHelloInterval")
    {
        cospfshamlinkshellointerval = value;
    }
    if(value_path == "cospfShamLinksMetric")
    {
        cospfshamlinksmetric = value;
    }
    if(value_path == "cospfShamLinksRetransInterval")
    {
        cospfshamlinksretransinterval = value;
    }
    if(value_path == "cospfShamLinksRtrDeadInterval")
    {
        cospfshamlinksrtrdeadinterval = value;
    }
    if(value_path == "cospfShamLinksState")
    {
        cospfshamlinksstate = value;
    }
}

const Enum::YLeaf CiscoOspfMib::Cospflsdbtable::Cospflsdbentry::CospflsdbtypeEnum::areaOpaqueLink {10, "areaOpaqueLink"};
const Enum::YLeaf CiscoOspfMib::Cospflsdbtable::Cospflsdbentry::CospflsdbtypeEnum::asOpaqueLink {11, "asOpaqueLink"};

const Enum::YLeaf CiscoOspfMib::Cospfshamlinktable::Cospfshamlinkentry::CospfshamlinkstateEnum::down {1, "down"};
const Enum::YLeaf CiscoOspfMib::Cospfshamlinktable::Cospfshamlinkentry::CospfshamlinkstateEnum::pointToPoint {4, "pointToPoint"};

const Enum::YLeaf CiscoOspfMib::Cospflocallsdbtable::Cospflocallsdbentry::CospflocallsdbtypeEnum::localOpaqueLink {9, "localOpaqueLink"};

const Enum::YLeaf CiscoOspfMib::Cospfvirtlocallsdbtable::Cospfvirtlocallsdbentry::CospfvirtlocallsdbtypeEnum::localOpaqueLink {9, "localOpaqueLink"};

const Enum::YLeaf CiscoOspfMib::Cospfshamlinknbrtable::Cospfshamlinknbrentry::CospfshamlinknbrstateEnum::down {1, "down"};
const Enum::YLeaf CiscoOspfMib::Cospfshamlinknbrtable::Cospfshamlinknbrentry::CospfshamlinknbrstateEnum::attempt {2, "attempt"};
const Enum::YLeaf CiscoOspfMib::Cospfshamlinknbrtable::Cospfshamlinknbrentry::CospfshamlinknbrstateEnum::init {3, "init"};
const Enum::YLeaf CiscoOspfMib::Cospfshamlinknbrtable::Cospfshamlinknbrentry::CospfshamlinknbrstateEnum::twoWay {4, "twoWay"};
const Enum::YLeaf CiscoOspfMib::Cospfshamlinknbrtable::Cospfshamlinknbrentry::CospfshamlinknbrstateEnum::exchangeStart {5, "exchangeStart"};
const Enum::YLeaf CiscoOspfMib::Cospfshamlinknbrtable::Cospfshamlinknbrentry::CospfshamlinknbrstateEnum::exchange {6, "exchange"};
const Enum::YLeaf CiscoOspfMib::Cospfshamlinknbrtable::Cospfshamlinknbrentry::CospfshamlinknbrstateEnum::loading {7, "loading"};
const Enum::YLeaf CiscoOspfMib::Cospfshamlinknbrtable::Cospfshamlinknbrentry::CospfshamlinknbrstateEnum::full {8, "full"};

const Enum::YLeaf CiscoOspfMib::Cospfshamlinkstable::Cospfshamlinksentry::CospfshamlinksstateEnum::down {1, "down"};
const Enum::YLeaf CiscoOspfMib::Cospfshamlinkstable::Cospfshamlinksentry::CospfshamlinksstateEnum::pointToPoint {4, "pointToPoint"};


}
}

