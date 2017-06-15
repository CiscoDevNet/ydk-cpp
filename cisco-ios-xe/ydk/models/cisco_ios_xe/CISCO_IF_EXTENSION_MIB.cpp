
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IF_EXTENSION_MIB.hpp"

namespace ydk {
namespace CISCO_IF_EXTENSION_MIB {

CiscoIfExtensionMib::CiscoIfExtensionMib()
    :
    cieifdot1dbasemappingtable_(std::make_shared<CiscoIfExtensionMib::Cieifdot1Dbasemappingtable>())
	,cieifdot1qcustomethertypetable_(std::make_shared<CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable>())
	,cieifindexpersistencetable_(std::make_shared<CiscoIfExtensionMib::Cieifindexpersistencetable>())
	,cieifinterfacetable_(std::make_shared<CiscoIfExtensionMib::Cieifinterfacetable>())
	,cieifnamemappingtable_(std::make_shared<CiscoIfExtensionMib::Cieifnamemappingtable>())
	,cieifpacketstatstable_(std::make_shared<CiscoIfExtensionMib::Cieifpacketstatstable>())
	,cieifstatuslisttable_(std::make_shared<CiscoIfExtensionMib::Cieifstatuslisttable>())
	,cieifutiltable_(std::make_shared<CiscoIfExtensionMib::Cieifutiltable>())
	,cieifvlstatstable_(std::make_shared<CiscoIfExtensionMib::Cieifvlstatstable>())
	,ciscoifextsystemconfig_(std::make_shared<CiscoIfExtensionMib::Ciscoifextsystemconfig>())
{
    cieifdot1dbasemappingtable_->parent = this;

    cieifdot1qcustomethertypetable_->parent = this;

    cieifindexpersistencetable_->parent = this;

    cieifinterfacetable_->parent = this;

    cieifnamemappingtable_->parent = this;

    cieifpacketstatstable_->parent = this;

    cieifstatuslisttable_->parent = this;

    cieifutiltable_->parent = this;

    cieifvlstatstable_->parent = this;

    ciscoifextsystemconfig_->parent = this;

    yang_name = "CISCO-IF-EXTENSION-MIB"; yang_parent_name = "CISCO-IF-EXTENSION-MIB";
}

CiscoIfExtensionMib::~CiscoIfExtensionMib()
{
}

bool CiscoIfExtensionMib::has_data() const
{
    return (cieifdot1dbasemappingtable_ !=  nullptr && cieifdot1dbasemappingtable_->has_data())
	|| (cieifdot1qcustomethertypetable_ !=  nullptr && cieifdot1qcustomethertypetable_->has_data())
	|| (cieifindexpersistencetable_ !=  nullptr && cieifindexpersistencetable_->has_data())
	|| (cieifinterfacetable_ !=  nullptr && cieifinterfacetable_->has_data())
	|| (cieifnamemappingtable_ !=  nullptr && cieifnamemappingtable_->has_data())
	|| (cieifpacketstatstable_ !=  nullptr && cieifpacketstatstable_->has_data())
	|| (cieifstatuslisttable_ !=  nullptr && cieifstatuslisttable_->has_data())
	|| (cieifutiltable_ !=  nullptr && cieifutiltable_->has_data())
	|| (cieifvlstatstable_ !=  nullptr && cieifvlstatstable_->has_data())
	|| (ciscoifextsystemconfig_ !=  nullptr && ciscoifextsystemconfig_->has_data());
}

bool CiscoIfExtensionMib::has_operation() const
{
    return is_set(operation)
	|| (cieifdot1dbasemappingtable_ !=  nullptr && cieifdot1dbasemappingtable_->has_operation())
	|| (cieifdot1qcustomethertypetable_ !=  nullptr && cieifdot1qcustomethertypetable_->has_operation())
	|| (cieifindexpersistencetable_ !=  nullptr && cieifindexpersistencetable_->has_operation())
	|| (cieifinterfacetable_ !=  nullptr && cieifinterfacetable_->has_operation())
	|| (cieifnamemappingtable_ !=  nullptr && cieifnamemappingtable_->has_operation())
	|| (cieifpacketstatstable_ !=  nullptr && cieifpacketstatstable_->has_operation())
	|| (cieifstatuslisttable_ !=  nullptr && cieifstatuslisttable_->has_operation())
	|| (cieifutiltable_ !=  nullptr && cieifutiltable_->has_operation())
	|| (cieifvlstatstable_ !=  nullptr && cieifvlstatstable_->has_operation())
	|| (ciscoifextsystemconfig_ !=  nullptr && ciscoifextsystemconfig_->has_operation());
}

std::string CiscoIfExtensionMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB";

    return path_buffer.str();

}

const EntityPath CiscoIfExtensionMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoIfExtensionMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cieIfDot1dBaseMappingTable")
    {
        if(cieifdot1dbasemappingtable_ == nullptr)
        {
            cieifdot1dbasemappingtable_ = std::make_shared<CiscoIfExtensionMib::Cieifdot1Dbasemappingtable>();
        }
        return cieifdot1dbasemappingtable_;
    }

    if(child_yang_name == "cieIfDot1qCustomEtherTypeTable")
    {
        if(cieifdot1qcustomethertypetable_ == nullptr)
        {
            cieifdot1qcustomethertypetable_ = std::make_shared<CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable>();
        }
        return cieifdot1qcustomethertypetable_;
    }

    if(child_yang_name == "cieIfIndexPersistenceTable")
    {
        if(cieifindexpersistencetable_ == nullptr)
        {
            cieifindexpersistencetable_ = std::make_shared<CiscoIfExtensionMib::Cieifindexpersistencetable>();
        }
        return cieifindexpersistencetable_;
    }

    if(child_yang_name == "cieIfInterfaceTable")
    {
        if(cieifinterfacetable_ == nullptr)
        {
            cieifinterfacetable_ = std::make_shared<CiscoIfExtensionMib::Cieifinterfacetable>();
        }
        return cieifinterfacetable_;
    }

    if(child_yang_name == "cieIfNameMappingTable")
    {
        if(cieifnamemappingtable_ == nullptr)
        {
            cieifnamemappingtable_ = std::make_shared<CiscoIfExtensionMib::Cieifnamemappingtable>();
        }
        return cieifnamemappingtable_;
    }

    if(child_yang_name == "cieIfPacketStatsTable")
    {
        if(cieifpacketstatstable_ == nullptr)
        {
            cieifpacketstatstable_ = std::make_shared<CiscoIfExtensionMib::Cieifpacketstatstable>();
        }
        return cieifpacketstatstable_;
    }

    if(child_yang_name == "cieIfStatusListTable")
    {
        if(cieifstatuslisttable_ == nullptr)
        {
            cieifstatuslisttable_ = std::make_shared<CiscoIfExtensionMib::Cieifstatuslisttable>();
        }
        return cieifstatuslisttable_;
    }

    if(child_yang_name == "cieIfUtilTable")
    {
        if(cieifutiltable_ == nullptr)
        {
            cieifutiltable_ = std::make_shared<CiscoIfExtensionMib::Cieifutiltable>();
        }
        return cieifutiltable_;
    }

    if(child_yang_name == "cieIfVlStatsTable")
    {
        if(cieifvlstatstable_ == nullptr)
        {
            cieifvlstatstable_ = std::make_shared<CiscoIfExtensionMib::Cieifvlstatstable>();
        }
        return cieifvlstatstable_;
    }

    if(child_yang_name == "ciscoIfExtSystemConfig")
    {
        if(ciscoifextsystemconfig_ == nullptr)
        {
            ciscoifextsystemconfig_ = std::make_shared<CiscoIfExtensionMib::Ciscoifextsystemconfig>();
        }
        return ciscoifextsystemconfig_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIfExtensionMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cieifdot1dbasemappingtable_ != nullptr)
    {
        children["cieIfDot1dBaseMappingTable"] = cieifdot1dbasemappingtable_;
    }

    if(cieifdot1qcustomethertypetable_ != nullptr)
    {
        children["cieIfDot1qCustomEtherTypeTable"] = cieifdot1qcustomethertypetable_;
    }

    if(cieifindexpersistencetable_ != nullptr)
    {
        children["cieIfIndexPersistenceTable"] = cieifindexpersistencetable_;
    }

    if(cieifinterfacetable_ != nullptr)
    {
        children["cieIfInterfaceTable"] = cieifinterfacetable_;
    }

    if(cieifnamemappingtable_ != nullptr)
    {
        children["cieIfNameMappingTable"] = cieifnamemappingtable_;
    }

    if(cieifpacketstatstable_ != nullptr)
    {
        children["cieIfPacketStatsTable"] = cieifpacketstatstable_;
    }

    if(cieifstatuslisttable_ != nullptr)
    {
        children["cieIfStatusListTable"] = cieifstatuslisttable_;
    }

    if(cieifutiltable_ != nullptr)
    {
        children["cieIfUtilTable"] = cieifutiltable_;
    }

    if(cieifvlstatstable_ != nullptr)
    {
        children["cieIfVlStatsTable"] = cieifvlstatstable_;
    }

    if(ciscoifextsystemconfig_ != nullptr)
    {
        children["ciscoIfExtSystemConfig"] = ciscoifextsystemconfig_;
    }

    return children;
}

void CiscoIfExtensionMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CiscoIfExtensionMib::clone_ptr() const
{
    return std::make_shared<CiscoIfExtensionMib>();
}

std::string CiscoIfExtensionMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoIfExtensionMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoIfExtensionMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CiscoIfExtensionMib::Ciscoifextsystemconfig::Ciscoifextsystemconfig()
    :
    ciedelayedlinkupdownnotifdelay{YType::uint32, "cieDelayedLinkUpDownNotifDelay"},
    ciedelayedlinkupdownnotifenable{YType::boolean, "cieDelayedLinkUpDownNotifEnable"},
    cieifindexglobalpersistence{YType::enumeration, "cieIfIndexGlobalPersistence"},
    cieifindexpersistence{YType::boolean, "cieIfIndexPersistence"},
    cielinkupdownconfig{YType::bits, "cieLinkUpDownConfig"},
    cielinkupdownenable{YType::bits, "cieLinkUpDownEnable"},
    ciestandardlinkupdownvarbinds{YType::enumeration, "cieStandardLinkUpDownVarbinds"},
    ciesystemmtu{YType::int32, "cieSystemMtu"}
{
    yang_name = "ciscoIfExtSystemConfig"; yang_parent_name = "CISCO-IF-EXTENSION-MIB";
}

CiscoIfExtensionMib::Ciscoifextsystemconfig::~Ciscoifextsystemconfig()
{
}

bool CiscoIfExtensionMib::Ciscoifextsystemconfig::has_data() const
{
    return ciedelayedlinkupdownnotifdelay.is_set
	|| ciedelayedlinkupdownnotifenable.is_set
	|| cieifindexglobalpersistence.is_set
	|| cieifindexpersistence.is_set
	|| cielinkupdownconfig.is_set
	|| cielinkupdownenable.is_set
	|| ciestandardlinkupdownvarbinds.is_set
	|| ciesystemmtu.is_set;
}

bool CiscoIfExtensionMib::Ciscoifextsystemconfig::has_operation() const
{
    return is_set(operation)
	|| is_set(ciedelayedlinkupdownnotifdelay.operation)
	|| is_set(ciedelayedlinkupdownnotifenable.operation)
	|| is_set(cieifindexglobalpersistence.operation)
	|| is_set(cieifindexpersistence.operation)
	|| is_set(cielinkupdownconfig.operation)
	|| is_set(cielinkupdownenable.operation)
	|| is_set(ciestandardlinkupdownvarbinds.operation)
	|| is_set(ciesystemmtu.operation);
}

std::string CiscoIfExtensionMib::Ciscoifextsystemconfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoIfExtSystemConfig";

    return path_buffer.str();

}

const EntityPath CiscoIfExtensionMib::Ciscoifextsystemconfig::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciedelayedlinkupdownnotifdelay.is_set || is_set(ciedelayedlinkupdownnotifdelay.operation)) leaf_name_data.push_back(ciedelayedlinkupdownnotifdelay.get_name_leafdata());
    if (ciedelayedlinkupdownnotifenable.is_set || is_set(ciedelayedlinkupdownnotifenable.operation)) leaf_name_data.push_back(ciedelayedlinkupdownnotifenable.get_name_leafdata());
    if (cieifindexglobalpersistence.is_set || is_set(cieifindexglobalpersistence.operation)) leaf_name_data.push_back(cieifindexglobalpersistence.get_name_leafdata());
    if (cieifindexpersistence.is_set || is_set(cieifindexpersistence.operation)) leaf_name_data.push_back(cieifindexpersistence.get_name_leafdata());
    if (cielinkupdownconfig.is_set || is_set(cielinkupdownconfig.operation)) leaf_name_data.push_back(cielinkupdownconfig.get_name_leafdata());
    if (cielinkupdownenable.is_set || is_set(cielinkupdownenable.operation)) leaf_name_data.push_back(cielinkupdownenable.get_name_leafdata());
    if (ciestandardlinkupdownvarbinds.is_set || is_set(ciestandardlinkupdownvarbinds.operation)) leaf_name_data.push_back(ciestandardlinkupdownvarbinds.get_name_leafdata());
    if (ciesystemmtu.is_set || is_set(ciesystemmtu.operation)) leaf_name_data.push_back(ciesystemmtu.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIfExtensionMib::Ciscoifextsystemconfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIfExtensionMib::Ciscoifextsystemconfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIfExtensionMib::Ciscoifextsystemconfig::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cieDelayedLinkUpDownNotifDelay")
    {
        ciedelayedlinkupdownnotifdelay = value;
    }
    if(value_path == "cieDelayedLinkUpDownNotifEnable")
    {
        ciedelayedlinkupdownnotifenable = value;
    }
    if(value_path == "cieIfIndexGlobalPersistence")
    {
        cieifindexglobalpersistence = value;
    }
    if(value_path == "cieIfIndexPersistence")
    {
        cieifindexpersistence = value;
    }
    if(value_path == "cieLinkUpDownConfig")
    {
        cielinkupdownconfig[value] = true;
    }
    if(value_path == "cieLinkUpDownEnable")
    {
        cielinkupdownenable[value] = true;
    }
    if(value_path == "cieStandardLinkUpDownVarbinds")
    {
        ciestandardlinkupdownvarbinds = value;
    }
    if(value_path == "cieSystemMtu")
    {
        ciesystemmtu = value;
    }
}

CiscoIfExtensionMib::Cieifpacketstatstable::Cieifpacketstatstable()
{
    yang_name = "cieIfPacketStatsTable"; yang_parent_name = "CISCO-IF-EXTENSION-MIB";
}

CiscoIfExtensionMib::Cieifpacketstatstable::~Cieifpacketstatstable()
{
}

bool CiscoIfExtensionMib::Cieifpacketstatstable::has_data() const
{
    for (std::size_t index=0; index<cieifpacketstatsentry_.size(); index++)
    {
        if(cieifpacketstatsentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIfExtensionMib::Cieifpacketstatstable::has_operation() const
{
    for (std::size_t index=0; index<cieifpacketstatsentry_.size(); index++)
    {
        if(cieifpacketstatsentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIfExtensionMib::Cieifpacketstatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cieIfPacketStatsTable";

    return path_buffer.str();

}

const EntityPath CiscoIfExtensionMib::Cieifpacketstatstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIfExtensionMib::Cieifpacketstatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cieIfPacketStatsEntry")
    {
        for(auto const & c : cieifpacketstatsentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIfExtensionMib::Cieifpacketstatstable::Cieifpacketstatsentry>();
        c->parent = this;
        cieifpacketstatsentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIfExtensionMib::Cieifpacketstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cieifpacketstatsentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIfExtensionMib::Cieifpacketstatstable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIfExtensionMib::Cieifpacketstatstable::Cieifpacketstatsentry::Cieifpacketstatsentry()
    :
    ifindex{YType::str, "ifIndex"},
    cieifinaborterrs{YType::uint32, "cieIfInAbortErrs"},
    cieifinframingerrs{YType::uint32, "cieIfInFramingErrs"},
    cieifingiantserrs{YType::uint32, "cieIfInGiantsErrs"},
    cieifinignored{YType::uint32, "cieIfInIgnored"},
    cieifinoverrunerrs{YType::uint32, "cieIfInOverrunErrs"},
    cieifinputqueuedrops{YType::uint32, "cieIfInputQueueDrops"},
    cieifinruntserrs{YType::uint32, "cieIfInRuntsErrs"},
    cieiflastintime{YType::uint32, "cieIfLastInTime"},
    cieiflastouthangtime{YType::uint32, "cieIfLastOutHangTime"},
    cieiflastouttime{YType::uint32, "cieIfLastOutTime"},
    cieifoutputqueuedrops{YType::uint32, "cieIfOutputQueueDrops"},
    cieifpacketdiscontinuitytime{YType::uint32, "cieIfPacketDiscontinuityTime"}
{
    yang_name = "cieIfPacketStatsEntry"; yang_parent_name = "cieIfPacketStatsTable";
}

CiscoIfExtensionMib::Cieifpacketstatstable::Cieifpacketstatsentry::~Cieifpacketstatsentry()
{
}

bool CiscoIfExtensionMib::Cieifpacketstatstable::Cieifpacketstatsentry::has_data() const
{
    return ifindex.is_set
	|| cieifinaborterrs.is_set
	|| cieifinframingerrs.is_set
	|| cieifingiantserrs.is_set
	|| cieifinignored.is_set
	|| cieifinoverrunerrs.is_set
	|| cieifinputqueuedrops.is_set
	|| cieifinruntserrs.is_set
	|| cieiflastintime.is_set
	|| cieiflastouthangtime.is_set
	|| cieiflastouttime.is_set
	|| cieifoutputqueuedrops.is_set
	|| cieifpacketdiscontinuitytime.is_set;
}

bool CiscoIfExtensionMib::Cieifpacketstatstable::Cieifpacketstatsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(cieifinaborterrs.operation)
	|| is_set(cieifinframingerrs.operation)
	|| is_set(cieifingiantserrs.operation)
	|| is_set(cieifinignored.operation)
	|| is_set(cieifinoverrunerrs.operation)
	|| is_set(cieifinputqueuedrops.operation)
	|| is_set(cieifinruntserrs.operation)
	|| is_set(cieiflastintime.operation)
	|| is_set(cieiflastouthangtime.operation)
	|| is_set(cieiflastouttime.operation)
	|| is_set(cieifoutputqueuedrops.operation)
	|| is_set(cieifpacketdiscontinuitytime.operation);
}

std::string CiscoIfExtensionMib::Cieifpacketstatstable::Cieifpacketstatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cieIfPacketStatsEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIfExtensionMib::Cieifpacketstatstable::Cieifpacketstatsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB/cieIfPacketStatsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cieifinaborterrs.is_set || is_set(cieifinaborterrs.operation)) leaf_name_data.push_back(cieifinaborterrs.get_name_leafdata());
    if (cieifinframingerrs.is_set || is_set(cieifinframingerrs.operation)) leaf_name_data.push_back(cieifinframingerrs.get_name_leafdata());
    if (cieifingiantserrs.is_set || is_set(cieifingiantserrs.operation)) leaf_name_data.push_back(cieifingiantserrs.get_name_leafdata());
    if (cieifinignored.is_set || is_set(cieifinignored.operation)) leaf_name_data.push_back(cieifinignored.get_name_leafdata());
    if (cieifinoverrunerrs.is_set || is_set(cieifinoverrunerrs.operation)) leaf_name_data.push_back(cieifinoverrunerrs.get_name_leafdata());
    if (cieifinputqueuedrops.is_set || is_set(cieifinputqueuedrops.operation)) leaf_name_data.push_back(cieifinputqueuedrops.get_name_leafdata());
    if (cieifinruntserrs.is_set || is_set(cieifinruntserrs.operation)) leaf_name_data.push_back(cieifinruntserrs.get_name_leafdata());
    if (cieiflastintime.is_set || is_set(cieiflastintime.operation)) leaf_name_data.push_back(cieiflastintime.get_name_leafdata());
    if (cieiflastouthangtime.is_set || is_set(cieiflastouthangtime.operation)) leaf_name_data.push_back(cieiflastouthangtime.get_name_leafdata());
    if (cieiflastouttime.is_set || is_set(cieiflastouttime.operation)) leaf_name_data.push_back(cieiflastouttime.get_name_leafdata());
    if (cieifoutputqueuedrops.is_set || is_set(cieifoutputqueuedrops.operation)) leaf_name_data.push_back(cieifoutputqueuedrops.get_name_leafdata());
    if (cieifpacketdiscontinuitytime.is_set || is_set(cieifpacketdiscontinuitytime.operation)) leaf_name_data.push_back(cieifpacketdiscontinuitytime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIfExtensionMib::Cieifpacketstatstable::Cieifpacketstatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIfExtensionMib::Cieifpacketstatstable::Cieifpacketstatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIfExtensionMib::Cieifpacketstatstable::Cieifpacketstatsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "cieIfInAbortErrs")
    {
        cieifinaborterrs = value;
    }
    if(value_path == "cieIfInFramingErrs")
    {
        cieifinframingerrs = value;
    }
    if(value_path == "cieIfInGiantsErrs")
    {
        cieifingiantserrs = value;
    }
    if(value_path == "cieIfInIgnored")
    {
        cieifinignored = value;
    }
    if(value_path == "cieIfInOverrunErrs")
    {
        cieifinoverrunerrs = value;
    }
    if(value_path == "cieIfInputQueueDrops")
    {
        cieifinputqueuedrops = value;
    }
    if(value_path == "cieIfInRuntsErrs")
    {
        cieifinruntserrs = value;
    }
    if(value_path == "cieIfLastInTime")
    {
        cieiflastintime = value;
    }
    if(value_path == "cieIfLastOutHangTime")
    {
        cieiflastouthangtime = value;
    }
    if(value_path == "cieIfLastOutTime")
    {
        cieiflastouttime = value;
    }
    if(value_path == "cieIfOutputQueueDrops")
    {
        cieifoutputqueuedrops = value;
    }
    if(value_path == "cieIfPacketDiscontinuityTime")
    {
        cieifpacketdiscontinuitytime = value;
    }
}

CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfacetable()
{
    yang_name = "cieIfInterfaceTable"; yang_parent_name = "CISCO-IF-EXTENSION-MIB";
}

CiscoIfExtensionMib::Cieifinterfacetable::~Cieifinterfacetable()
{
}

bool CiscoIfExtensionMib::Cieifinterfacetable::has_data() const
{
    for (std::size_t index=0; index<cieifinterfaceentry_.size(); index++)
    {
        if(cieifinterfaceentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIfExtensionMib::Cieifinterfacetable::has_operation() const
{
    for (std::size_t index=0; index<cieifinterfaceentry_.size(); index++)
    {
        if(cieifinterfaceentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIfExtensionMib::Cieifinterfacetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cieIfInterfaceTable";

    return path_buffer.str();

}

const EntityPath CiscoIfExtensionMib::Cieifinterfacetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIfExtensionMib::Cieifinterfacetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cieIfInterfaceEntry")
    {
        for(auto const & c : cieifinterfaceentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry>();
        c->parent = this;
        cieifinterfaceentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIfExtensionMib::Cieifinterfacetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cieifinterfaceentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIfExtensionMib::Cieifinterfacetable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry::Cieifinterfaceentry()
    :
    ifindex{YType::str, "ifIndex"},
    cieifcarriertransitioncount{YType::uint32, "cieIfCarrierTransitionCount"},
    cieifcontextname{YType::str, "cieIfContextName"},
    cieifdhcpmode{YType::boolean, "cieIfDhcpMode"},
    cieiffillpatternconfig{YType::enumeration, "cieIfFillPatternConfig"},
    cieifhighspeedreceive{YType::uint32, "cieIfHighSpeedReceive"},
    cieifignorebiterrorsconfig{YType::boolean, "cieIfIgnoreBitErrorsConfig"},
    cieifignoreinterruptthresholdconfig{YType::boolean, "cieIfIgnoreInterruptThresholdConfig"},
    cieifinterfacediscontinuitytime{YType::uint32, "cieIfInterfaceDiscontinuityTime"},
    cieifkeepaliveenabled{YType::boolean, "cieIfKeepAliveEnabled"},
    cieifmtu{YType::int32, "cieIfMtu"},
    cieifoperstatuscause{YType::enumeration, "cieIfOperStatusCause"},
    cieifoperstatuscausedescr{YType::str, "cieIfOperStatusCauseDescr"},
    cieifowner{YType::str, "cieIfOwner"},
    cieifresetcount{YType::uint32, "cieIfResetCount"},
    cieifsharedconfig{YType::enumeration, "cieIfSharedConfig"},
    cieifspeedgroupconfig{YType::enumeration, "cieIfSpeedGroupConfig"},
    cieifspeedreceive{YType::uint32, "cieIfSpeedReceive"},
    cieifstatechangereason{YType::str, "cieIfStateChangeReason"},
    cieiftransceiverfrequencyconfig{YType::enumeration, "cieIfTransceiverFrequencyConfig"}
{
    yang_name = "cieIfInterfaceEntry"; yang_parent_name = "cieIfInterfaceTable";
}

CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry::~Cieifinterfaceentry()
{
}

bool CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry::has_data() const
{
    return ifindex.is_set
	|| cieifcarriertransitioncount.is_set
	|| cieifcontextname.is_set
	|| cieifdhcpmode.is_set
	|| cieiffillpatternconfig.is_set
	|| cieifhighspeedreceive.is_set
	|| cieifignorebiterrorsconfig.is_set
	|| cieifignoreinterruptthresholdconfig.is_set
	|| cieifinterfacediscontinuitytime.is_set
	|| cieifkeepaliveenabled.is_set
	|| cieifmtu.is_set
	|| cieifoperstatuscause.is_set
	|| cieifoperstatuscausedescr.is_set
	|| cieifowner.is_set
	|| cieifresetcount.is_set
	|| cieifsharedconfig.is_set
	|| cieifspeedgroupconfig.is_set
	|| cieifspeedreceive.is_set
	|| cieifstatechangereason.is_set
	|| cieiftransceiverfrequencyconfig.is_set;
}

bool CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(cieifcarriertransitioncount.operation)
	|| is_set(cieifcontextname.operation)
	|| is_set(cieifdhcpmode.operation)
	|| is_set(cieiffillpatternconfig.operation)
	|| is_set(cieifhighspeedreceive.operation)
	|| is_set(cieifignorebiterrorsconfig.operation)
	|| is_set(cieifignoreinterruptthresholdconfig.operation)
	|| is_set(cieifinterfacediscontinuitytime.operation)
	|| is_set(cieifkeepaliveenabled.operation)
	|| is_set(cieifmtu.operation)
	|| is_set(cieifoperstatuscause.operation)
	|| is_set(cieifoperstatuscausedescr.operation)
	|| is_set(cieifowner.operation)
	|| is_set(cieifresetcount.operation)
	|| is_set(cieifsharedconfig.operation)
	|| is_set(cieifspeedgroupconfig.operation)
	|| is_set(cieifspeedreceive.operation)
	|| is_set(cieifstatechangereason.operation)
	|| is_set(cieiftransceiverfrequencyconfig.operation);
}

std::string CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cieIfInterfaceEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB/cieIfInterfaceTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cieifcarriertransitioncount.is_set || is_set(cieifcarriertransitioncount.operation)) leaf_name_data.push_back(cieifcarriertransitioncount.get_name_leafdata());
    if (cieifcontextname.is_set || is_set(cieifcontextname.operation)) leaf_name_data.push_back(cieifcontextname.get_name_leafdata());
    if (cieifdhcpmode.is_set || is_set(cieifdhcpmode.operation)) leaf_name_data.push_back(cieifdhcpmode.get_name_leafdata());
    if (cieiffillpatternconfig.is_set || is_set(cieiffillpatternconfig.operation)) leaf_name_data.push_back(cieiffillpatternconfig.get_name_leafdata());
    if (cieifhighspeedreceive.is_set || is_set(cieifhighspeedreceive.operation)) leaf_name_data.push_back(cieifhighspeedreceive.get_name_leafdata());
    if (cieifignorebiterrorsconfig.is_set || is_set(cieifignorebiterrorsconfig.operation)) leaf_name_data.push_back(cieifignorebiterrorsconfig.get_name_leafdata());
    if (cieifignoreinterruptthresholdconfig.is_set || is_set(cieifignoreinterruptthresholdconfig.operation)) leaf_name_data.push_back(cieifignoreinterruptthresholdconfig.get_name_leafdata());
    if (cieifinterfacediscontinuitytime.is_set || is_set(cieifinterfacediscontinuitytime.operation)) leaf_name_data.push_back(cieifinterfacediscontinuitytime.get_name_leafdata());
    if (cieifkeepaliveenabled.is_set || is_set(cieifkeepaliveenabled.operation)) leaf_name_data.push_back(cieifkeepaliveenabled.get_name_leafdata());
    if (cieifmtu.is_set || is_set(cieifmtu.operation)) leaf_name_data.push_back(cieifmtu.get_name_leafdata());
    if (cieifoperstatuscause.is_set || is_set(cieifoperstatuscause.operation)) leaf_name_data.push_back(cieifoperstatuscause.get_name_leafdata());
    if (cieifoperstatuscausedescr.is_set || is_set(cieifoperstatuscausedescr.operation)) leaf_name_data.push_back(cieifoperstatuscausedescr.get_name_leafdata());
    if (cieifowner.is_set || is_set(cieifowner.operation)) leaf_name_data.push_back(cieifowner.get_name_leafdata());
    if (cieifresetcount.is_set || is_set(cieifresetcount.operation)) leaf_name_data.push_back(cieifresetcount.get_name_leafdata());
    if (cieifsharedconfig.is_set || is_set(cieifsharedconfig.operation)) leaf_name_data.push_back(cieifsharedconfig.get_name_leafdata());
    if (cieifspeedgroupconfig.is_set || is_set(cieifspeedgroupconfig.operation)) leaf_name_data.push_back(cieifspeedgroupconfig.get_name_leafdata());
    if (cieifspeedreceive.is_set || is_set(cieifspeedreceive.operation)) leaf_name_data.push_back(cieifspeedreceive.get_name_leafdata());
    if (cieifstatechangereason.is_set || is_set(cieifstatechangereason.operation)) leaf_name_data.push_back(cieifstatechangereason.get_name_leafdata());
    if (cieiftransceiverfrequencyconfig.is_set || is_set(cieiftransceiverfrequencyconfig.operation)) leaf_name_data.push_back(cieiftransceiverfrequencyconfig.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "cieIfCarrierTransitionCount")
    {
        cieifcarriertransitioncount = value;
    }
    if(value_path == "cieIfContextName")
    {
        cieifcontextname = value;
    }
    if(value_path == "cieIfDhcpMode")
    {
        cieifdhcpmode = value;
    }
    if(value_path == "cieIfFillPatternConfig")
    {
        cieiffillpatternconfig = value;
    }
    if(value_path == "cieIfHighSpeedReceive")
    {
        cieifhighspeedreceive = value;
    }
    if(value_path == "cieIfIgnoreBitErrorsConfig")
    {
        cieifignorebiterrorsconfig = value;
    }
    if(value_path == "cieIfIgnoreInterruptThresholdConfig")
    {
        cieifignoreinterruptthresholdconfig = value;
    }
    if(value_path == "cieIfInterfaceDiscontinuityTime")
    {
        cieifinterfacediscontinuitytime = value;
    }
    if(value_path == "cieIfKeepAliveEnabled")
    {
        cieifkeepaliveenabled = value;
    }
    if(value_path == "cieIfMtu")
    {
        cieifmtu = value;
    }
    if(value_path == "cieIfOperStatusCause")
    {
        cieifoperstatuscause = value;
    }
    if(value_path == "cieIfOperStatusCauseDescr")
    {
        cieifoperstatuscausedescr = value;
    }
    if(value_path == "cieIfOwner")
    {
        cieifowner = value;
    }
    if(value_path == "cieIfResetCount")
    {
        cieifresetcount = value;
    }
    if(value_path == "cieIfSharedConfig")
    {
        cieifsharedconfig = value;
    }
    if(value_path == "cieIfSpeedGroupConfig")
    {
        cieifspeedgroupconfig = value;
    }
    if(value_path == "cieIfSpeedReceive")
    {
        cieifspeedreceive = value;
    }
    if(value_path == "cieIfStateChangeReason")
    {
        cieifstatechangereason = value;
    }
    if(value_path == "cieIfTransceiverFrequencyConfig")
    {
        cieiftransceiverfrequencyconfig = value;
    }
}

CiscoIfExtensionMib::Cieifstatuslisttable::Cieifstatuslisttable()
{
    yang_name = "cieIfStatusListTable"; yang_parent_name = "CISCO-IF-EXTENSION-MIB";
}

CiscoIfExtensionMib::Cieifstatuslisttable::~Cieifstatuslisttable()
{
}

bool CiscoIfExtensionMib::Cieifstatuslisttable::has_data() const
{
    for (std::size_t index=0; index<cieifstatuslistentry_.size(); index++)
    {
        if(cieifstatuslistentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIfExtensionMib::Cieifstatuslisttable::has_operation() const
{
    for (std::size_t index=0; index<cieifstatuslistentry_.size(); index++)
    {
        if(cieifstatuslistentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIfExtensionMib::Cieifstatuslisttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cieIfStatusListTable";

    return path_buffer.str();

}

const EntityPath CiscoIfExtensionMib::Cieifstatuslisttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIfExtensionMib::Cieifstatuslisttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cieIfStatusListEntry")
    {
        for(auto const & c : cieifstatuslistentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIfExtensionMib::Cieifstatuslisttable::Cieifstatuslistentry>();
        c->parent = this;
        cieifstatuslistentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIfExtensionMib::Cieifstatuslisttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cieifstatuslistentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIfExtensionMib::Cieifstatuslisttable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIfExtensionMib::Cieifstatuslisttable::Cieifstatuslistentry::Cieifstatuslistentry()
    :
    entphysicalindex{YType::str, "entPhysicalIndex"},
    cieifstatuslistindex{YType::uint32, "cieIfStatusListIndex"},
    cieinterfaceownershipbitmap{YType::str, "cieInterfaceOwnershipBitmap"},
    cieinterfacesindex{YType::str, "cieInterfacesIndex"},
    cieinterfacesopercause{YType::str, "cieInterfacesOperCause"},
    cieinterfacesopermode{YType::str, "cieInterfacesOperMode"}
{
    yang_name = "cieIfStatusListEntry"; yang_parent_name = "cieIfStatusListTable";
}

CiscoIfExtensionMib::Cieifstatuslisttable::Cieifstatuslistentry::~Cieifstatuslistentry()
{
}

bool CiscoIfExtensionMib::Cieifstatuslisttable::Cieifstatuslistentry::has_data() const
{
    return entphysicalindex.is_set
	|| cieifstatuslistindex.is_set
	|| cieinterfaceownershipbitmap.is_set
	|| cieinterfacesindex.is_set
	|| cieinterfacesopercause.is_set
	|| cieinterfacesopermode.is_set;
}

bool CiscoIfExtensionMib::Cieifstatuslisttable::Cieifstatuslistentry::has_operation() const
{
    return is_set(operation)
	|| is_set(entphysicalindex.operation)
	|| is_set(cieifstatuslistindex.operation)
	|| is_set(cieinterfaceownershipbitmap.operation)
	|| is_set(cieinterfacesindex.operation)
	|| is_set(cieinterfacesopercause.operation)
	|| is_set(cieinterfacesopermode.operation);
}

std::string CiscoIfExtensionMib::Cieifstatuslisttable::Cieifstatuslistentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cieIfStatusListEntry" <<"[entPhysicalIndex='" <<entphysicalindex <<"']" <<"[cieIfStatusListIndex='" <<cieifstatuslistindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIfExtensionMib::Cieifstatuslisttable::Cieifstatuslistentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB/cieIfStatusListTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entphysicalindex.is_set || is_set(entphysicalindex.operation)) leaf_name_data.push_back(entphysicalindex.get_name_leafdata());
    if (cieifstatuslistindex.is_set || is_set(cieifstatuslistindex.operation)) leaf_name_data.push_back(cieifstatuslistindex.get_name_leafdata());
    if (cieinterfaceownershipbitmap.is_set || is_set(cieinterfaceownershipbitmap.operation)) leaf_name_data.push_back(cieinterfaceownershipbitmap.get_name_leafdata());
    if (cieinterfacesindex.is_set || is_set(cieinterfacesindex.operation)) leaf_name_data.push_back(cieinterfacesindex.get_name_leafdata());
    if (cieinterfacesopercause.is_set || is_set(cieinterfacesopercause.operation)) leaf_name_data.push_back(cieinterfacesopercause.get_name_leafdata());
    if (cieinterfacesopermode.is_set || is_set(cieinterfacesopermode.operation)) leaf_name_data.push_back(cieinterfacesopermode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIfExtensionMib::Cieifstatuslisttable::Cieifstatuslistentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIfExtensionMib::Cieifstatuslisttable::Cieifstatuslistentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIfExtensionMib::Cieifstatuslisttable::Cieifstatuslistentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entPhysicalIndex")
    {
        entphysicalindex = value;
    }
    if(value_path == "cieIfStatusListIndex")
    {
        cieifstatuslistindex = value;
    }
    if(value_path == "cieInterfaceOwnershipBitmap")
    {
        cieinterfaceownershipbitmap = value;
    }
    if(value_path == "cieInterfacesIndex")
    {
        cieinterfacesindex = value;
    }
    if(value_path == "cieInterfacesOperCause")
    {
        cieinterfacesopercause = value;
    }
    if(value_path == "cieInterfacesOperMode")
    {
        cieinterfacesopermode = value;
    }
}

CiscoIfExtensionMib::Cieifvlstatstable::Cieifvlstatstable()
{
    yang_name = "cieIfVlStatsTable"; yang_parent_name = "CISCO-IF-EXTENSION-MIB";
}

CiscoIfExtensionMib::Cieifvlstatstable::~Cieifvlstatstable()
{
}

bool CiscoIfExtensionMib::Cieifvlstatstable::has_data() const
{
    for (std::size_t index=0; index<cieifvlstatsentry_.size(); index++)
    {
        if(cieifvlstatsentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIfExtensionMib::Cieifvlstatstable::has_operation() const
{
    for (std::size_t index=0; index<cieifvlstatsentry_.size(); index++)
    {
        if(cieifvlstatsentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIfExtensionMib::Cieifvlstatstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cieIfVlStatsTable";

    return path_buffer.str();

}

const EntityPath CiscoIfExtensionMib::Cieifvlstatstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIfExtensionMib::Cieifvlstatstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cieIfVlStatsEntry")
    {
        for(auto const & c : cieifvlstatsentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIfExtensionMib::Cieifvlstatstable::Cieifvlstatsentry>();
        c->parent = this;
        cieifvlstatsentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIfExtensionMib::Cieifvlstatstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cieifvlstatsentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIfExtensionMib::Cieifvlstatstable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIfExtensionMib::Cieifvlstatstable::Cieifvlstatsentry::Cieifvlstatsentry()
    :
    ifindex{YType::str, "ifIndex"},
    cieifdropvlinoctets{YType::uint64, "cieIfDropVlInOctets"},
    cieifdropvlinpkts{YType::uint64, "cieIfDropVlInPkts"},
    cieifdropvloutoctets{YType::uint64, "cieIfDropVlOutOctets"},
    cieifdropvloutpkts{YType::uint64, "cieIfDropVlOutPkts"},
    cieifnodropvlinoctets{YType::uint64, "cieIfNoDropVlInOctets"},
    cieifnodropvlinpkts{YType::uint64, "cieIfNoDropVlInPkts"},
    cieifnodropvloutoctets{YType::uint64, "cieIfNoDropVlOutOctets"},
    cieifnodropvloutpkts{YType::uint64, "cieIfNoDropVlOutPkts"}
{
    yang_name = "cieIfVlStatsEntry"; yang_parent_name = "cieIfVlStatsTable";
}

CiscoIfExtensionMib::Cieifvlstatstable::Cieifvlstatsentry::~Cieifvlstatsentry()
{
}

bool CiscoIfExtensionMib::Cieifvlstatstable::Cieifvlstatsentry::has_data() const
{
    return ifindex.is_set
	|| cieifdropvlinoctets.is_set
	|| cieifdropvlinpkts.is_set
	|| cieifdropvloutoctets.is_set
	|| cieifdropvloutpkts.is_set
	|| cieifnodropvlinoctets.is_set
	|| cieifnodropvlinpkts.is_set
	|| cieifnodropvloutoctets.is_set
	|| cieifnodropvloutpkts.is_set;
}

bool CiscoIfExtensionMib::Cieifvlstatstable::Cieifvlstatsentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(cieifdropvlinoctets.operation)
	|| is_set(cieifdropvlinpkts.operation)
	|| is_set(cieifdropvloutoctets.operation)
	|| is_set(cieifdropvloutpkts.operation)
	|| is_set(cieifnodropvlinoctets.operation)
	|| is_set(cieifnodropvlinpkts.operation)
	|| is_set(cieifnodropvloutoctets.operation)
	|| is_set(cieifnodropvloutpkts.operation);
}

std::string CiscoIfExtensionMib::Cieifvlstatstable::Cieifvlstatsentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cieIfVlStatsEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIfExtensionMib::Cieifvlstatstable::Cieifvlstatsentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB/cieIfVlStatsTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cieifdropvlinoctets.is_set || is_set(cieifdropvlinoctets.operation)) leaf_name_data.push_back(cieifdropvlinoctets.get_name_leafdata());
    if (cieifdropvlinpkts.is_set || is_set(cieifdropvlinpkts.operation)) leaf_name_data.push_back(cieifdropvlinpkts.get_name_leafdata());
    if (cieifdropvloutoctets.is_set || is_set(cieifdropvloutoctets.operation)) leaf_name_data.push_back(cieifdropvloutoctets.get_name_leafdata());
    if (cieifdropvloutpkts.is_set || is_set(cieifdropvloutpkts.operation)) leaf_name_data.push_back(cieifdropvloutpkts.get_name_leafdata());
    if (cieifnodropvlinoctets.is_set || is_set(cieifnodropvlinoctets.operation)) leaf_name_data.push_back(cieifnodropvlinoctets.get_name_leafdata());
    if (cieifnodropvlinpkts.is_set || is_set(cieifnodropvlinpkts.operation)) leaf_name_data.push_back(cieifnodropvlinpkts.get_name_leafdata());
    if (cieifnodropvloutoctets.is_set || is_set(cieifnodropvloutoctets.operation)) leaf_name_data.push_back(cieifnodropvloutoctets.get_name_leafdata());
    if (cieifnodropvloutpkts.is_set || is_set(cieifnodropvloutpkts.operation)) leaf_name_data.push_back(cieifnodropvloutpkts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIfExtensionMib::Cieifvlstatstable::Cieifvlstatsentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIfExtensionMib::Cieifvlstatstable::Cieifvlstatsentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIfExtensionMib::Cieifvlstatstable::Cieifvlstatsentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "cieIfDropVlInOctets")
    {
        cieifdropvlinoctets = value;
    }
    if(value_path == "cieIfDropVlInPkts")
    {
        cieifdropvlinpkts = value;
    }
    if(value_path == "cieIfDropVlOutOctets")
    {
        cieifdropvloutoctets = value;
    }
    if(value_path == "cieIfDropVlOutPkts")
    {
        cieifdropvloutpkts = value;
    }
    if(value_path == "cieIfNoDropVlInOctets")
    {
        cieifnodropvlinoctets = value;
    }
    if(value_path == "cieIfNoDropVlInPkts")
    {
        cieifnodropvlinpkts = value;
    }
    if(value_path == "cieIfNoDropVlOutOctets")
    {
        cieifnodropvloutoctets = value;
    }
    if(value_path == "cieIfNoDropVlOutPkts")
    {
        cieifnodropvloutpkts = value;
    }
}

CiscoIfExtensionMib::Cieifindexpersistencetable::Cieifindexpersistencetable()
{
    yang_name = "cieIfIndexPersistenceTable"; yang_parent_name = "CISCO-IF-EXTENSION-MIB";
}

CiscoIfExtensionMib::Cieifindexpersistencetable::~Cieifindexpersistencetable()
{
}

bool CiscoIfExtensionMib::Cieifindexpersistencetable::has_data() const
{
    for (std::size_t index=0; index<cieifindexpersistenceentry_.size(); index++)
    {
        if(cieifindexpersistenceentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIfExtensionMib::Cieifindexpersistencetable::has_operation() const
{
    for (std::size_t index=0; index<cieifindexpersistenceentry_.size(); index++)
    {
        if(cieifindexpersistenceentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIfExtensionMib::Cieifindexpersistencetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cieIfIndexPersistenceTable";

    return path_buffer.str();

}

const EntityPath CiscoIfExtensionMib::Cieifindexpersistencetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIfExtensionMib::Cieifindexpersistencetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cieIfIndexPersistenceEntry")
    {
        for(auto const & c : cieifindexpersistenceentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIfExtensionMib::Cieifindexpersistencetable::Cieifindexpersistenceentry>();
        c->parent = this;
        cieifindexpersistenceentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIfExtensionMib::Cieifindexpersistencetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cieifindexpersistenceentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIfExtensionMib::Cieifindexpersistencetable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIfExtensionMib::Cieifindexpersistencetable::Cieifindexpersistenceentry::Cieifindexpersistenceentry()
    :
    ifindex{YType::str, "ifIndex"},
    cieifindexpersistencecontrol{YType::enumeration, "cieIfIndexPersistenceControl"},
    cieifindexpersistenceenabled{YType::boolean, "cieIfIndexPersistenceEnabled"}
{
    yang_name = "cieIfIndexPersistenceEntry"; yang_parent_name = "cieIfIndexPersistenceTable";
}

CiscoIfExtensionMib::Cieifindexpersistencetable::Cieifindexpersistenceentry::~Cieifindexpersistenceentry()
{
}

bool CiscoIfExtensionMib::Cieifindexpersistencetable::Cieifindexpersistenceentry::has_data() const
{
    return ifindex.is_set
	|| cieifindexpersistencecontrol.is_set
	|| cieifindexpersistenceenabled.is_set;
}

bool CiscoIfExtensionMib::Cieifindexpersistencetable::Cieifindexpersistenceentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(cieifindexpersistencecontrol.operation)
	|| is_set(cieifindexpersistenceenabled.operation);
}

std::string CiscoIfExtensionMib::Cieifindexpersistencetable::Cieifindexpersistenceentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cieIfIndexPersistenceEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIfExtensionMib::Cieifindexpersistencetable::Cieifindexpersistenceentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB/cieIfIndexPersistenceTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cieifindexpersistencecontrol.is_set || is_set(cieifindexpersistencecontrol.operation)) leaf_name_data.push_back(cieifindexpersistencecontrol.get_name_leafdata());
    if (cieifindexpersistenceenabled.is_set || is_set(cieifindexpersistenceenabled.operation)) leaf_name_data.push_back(cieifindexpersistenceenabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIfExtensionMib::Cieifindexpersistencetable::Cieifindexpersistenceentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIfExtensionMib::Cieifindexpersistencetable::Cieifindexpersistenceentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIfExtensionMib::Cieifindexpersistencetable::Cieifindexpersistenceentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "cieIfIndexPersistenceControl")
    {
        cieifindexpersistencecontrol = value;
    }
    if(value_path == "cieIfIndexPersistenceEnabled")
    {
        cieifindexpersistenceenabled = value;
    }
}

CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable::Cieifdot1Qcustomethertypetable()
{
    yang_name = "cieIfDot1qCustomEtherTypeTable"; yang_parent_name = "CISCO-IF-EXTENSION-MIB";
}

CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable::~Cieifdot1Qcustomethertypetable()
{
}

bool CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable::has_data() const
{
    for (std::size_t index=0; index<cieifdot1qcustomethertypeentry_.size(); index++)
    {
        if(cieifdot1qcustomethertypeentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable::has_operation() const
{
    for (std::size_t index=0; index<cieifdot1qcustomethertypeentry_.size(); index++)
    {
        if(cieifdot1qcustomethertypeentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cieIfDot1qCustomEtherTypeTable";

    return path_buffer.str();

}

const EntityPath CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cieIfDot1qCustomEtherTypeEntry")
    {
        for(auto const & c : cieifdot1qcustomethertypeentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable::Cieifdot1Qcustomethertypeentry>();
        c->parent = this;
        cieifdot1qcustomethertypeentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cieifdot1qcustomethertypeentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable::Cieifdot1Qcustomethertypeentry::Cieifdot1Qcustomethertypeentry()
    :
    ifindex{YType::str, "ifIndex"},
    cieifdot1qcustomadminethertype{YType::int32, "cieIfDot1qCustomAdminEtherType"},
    cieifdot1qcustomoperethertype{YType::int32, "cieIfDot1qCustomOperEtherType"}
{
    yang_name = "cieIfDot1qCustomEtherTypeEntry"; yang_parent_name = "cieIfDot1qCustomEtherTypeTable";
}

CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable::Cieifdot1Qcustomethertypeentry::~Cieifdot1Qcustomethertypeentry()
{
}

bool CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable::Cieifdot1Qcustomethertypeentry::has_data() const
{
    return ifindex.is_set
	|| cieifdot1qcustomadminethertype.is_set
	|| cieifdot1qcustomoperethertype.is_set;
}

bool CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable::Cieifdot1Qcustomethertypeentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(cieifdot1qcustomadminethertype.operation)
	|| is_set(cieifdot1qcustomoperethertype.operation);
}

std::string CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable::Cieifdot1Qcustomethertypeentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cieIfDot1qCustomEtherTypeEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable::Cieifdot1Qcustomethertypeentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB/cieIfDot1qCustomEtherTypeTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cieifdot1qcustomadminethertype.is_set || is_set(cieifdot1qcustomadminethertype.operation)) leaf_name_data.push_back(cieifdot1qcustomadminethertype.get_name_leafdata());
    if (cieifdot1qcustomoperethertype.is_set || is_set(cieifdot1qcustomoperethertype.operation)) leaf_name_data.push_back(cieifdot1qcustomoperethertype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable::Cieifdot1Qcustomethertypeentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable::Cieifdot1Qcustomethertypeentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIfExtensionMib::Cieifdot1Qcustomethertypetable::Cieifdot1Qcustomethertypeentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "cieIfDot1qCustomAdminEtherType")
    {
        cieifdot1qcustomadminethertype = value;
    }
    if(value_path == "cieIfDot1qCustomOperEtherType")
    {
        cieifdot1qcustomoperethertype = value;
    }
}

CiscoIfExtensionMib::Cieifutiltable::Cieifutiltable()
{
    yang_name = "cieIfUtilTable"; yang_parent_name = "CISCO-IF-EXTENSION-MIB";
}

CiscoIfExtensionMib::Cieifutiltable::~Cieifutiltable()
{
}

bool CiscoIfExtensionMib::Cieifutiltable::has_data() const
{
    for (std::size_t index=0; index<cieifutilentry_.size(); index++)
    {
        if(cieifutilentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIfExtensionMib::Cieifutiltable::has_operation() const
{
    for (std::size_t index=0; index<cieifutilentry_.size(); index++)
    {
        if(cieifutilentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIfExtensionMib::Cieifutiltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cieIfUtilTable";

    return path_buffer.str();

}

const EntityPath CiscoIfExtensionMib::Cieifutiltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIfExtensionMib::Cieifutiltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cieIfUtilEntry")
    {
        for(auto const & c : cieifutilentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIfExtensionMib::Cieifutiltable::Cieifutilentry>();
        c->parent = this;
        cieifutilentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIfExtensionMib::Cieifutiltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cieifutilentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIfExtensionMib::Cieifutiltable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIfExtensionMib::Cieifutiltable::Cieifutilentry::Cieifutilentry()
    :
    ifindex{YType::str, "ifIndex"},
    cieifinoctetrate{YType::uint64, "cieIfInOctetRate"},
    cieifinpktrate{YType::uint64, "cieIfInPktRate"},
    cieifinterval{YType::uint32, "cieIfInterval"},
    cieifoutoctetrate{YType::uint64, "cieIfOutOctetRate"},
    cieifoutpktrate{YType::uint64, "cieIfOutPktRate"}
{
    yang_name = "cieIfUtilEntry"; yang_parent_name = "cieIfUtilTable";
}

CiscoIfExtensionMib::Cieifutiltable::Cieifutilentry::~Cieifutilentry()
{
}

bool CiscoIfExtensionMib::Cieifutiltable::Cieifutilentry::has_data() const
{
    return ifindex.is_set
	|| cieifinoctetrate.is_set
	|| cieifinpktrate.is_set
	|| cieifinterval.is_set
	|| cieifoutoctetrate.is_set
	|| cieifoutpktrate.is_set;
}

bool CiscoIfExtensionMib::Cieifutiltable::Cieifutilentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(cieifinoctetrate.operation)
	|| is_set(cieifinpktrate.operation)
	|| is_set(cieifinterval.operation)
	|| is_set(cieifoutoctetrate.operation)
	|| is_set(cieifoutpktrate.operation);
}

std::string CiscoIfExtensionMib::Cieifutiltable::Cieifutilentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cieIfUtilEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIfExtensionMib::Cieifutiltable::Cieifutilentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB/cieIfUtilTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cieifinoctetrate.is_set || is_set(cieifinoctetrate.operation)) leaf_name_data.push_back(cieifinoctetrate.get_name_leafdata());
    if (cieifinpktrate.is_set || is_set(cieifinpktrate.operation)) leaf_name_data.push_back(cieifinpktrate.get_name_leafdata());
    if (cieifinterval.is_set || is_set(cieifinterval.operation)) leaf_name_data.push_back(cieifinterval.get_name_leafdata());
    if (cieifoutoctetrate.is_set || is_set(cieifoutoctetrate.operation)) leaf_name_data.push_back(cieifoutoctetrate.get_name_leafdata());
    if (cieifoutpktrate.is_set || is_set(cieifoutpktrate.operation)) leaf_name_data.push_back(cieifoutpktrate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIfExtensionMib::Cieifutiltable::Cieifutilentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIfExtensionMib::Cieifutiltable::Cieifutilentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIfExtensionMib::Cieifutiltable::Cieifutilentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "cieIfInOctetRate")
    {
        cieifinoctetrate = value;
    }
    if(value_path == "cieIfInPktRate")
    {
        cieifinpktrate = value;
    }
    if(value_path == "cieIfInterval")
    {
        cieifinterval = value;
    }
    if(value_path == "cieIfOutOctetRate")
    {
        cieifoutoctetrate = value;
    }
    if(value_path == "cieIfOutPktRate")
    {
        cieifoutpktrate = value;
    }
}

CiscoIfExtensionMib::Cieifdot1Dbasemappingtable::Cieifdot1Dbasemappingtable()
{
    yang_name = "cieIfDot1dBaseMappingTable"; yang_parent_name = "CISCO-IF-EXTENSION-MIB";
}

CiscoIfExtensionMib::Cieifdot1Dbasemappingtable::~Cieifdot1Dbasemappingtable()
{
}

bool CiscoIfExtensionMib::Cieifdot1Dbasemappingtable::has_data() const
{
    for (std::size_t index=0; index<cieifdot1dbasemappingentry_.size(); index++)
    {
        if(cieifdot1dbasemappingentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIfExtensionMib::Cieifdot1Dbasemappingtable::has_operation() const
{
    for (std::size_t index=0; index<cieifdot1dbasemappingentry_.size(); index++)
    {
        if(cieifdot1dbasemappingentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIfExtensionMib::Cieifdot1Dbasemappingtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cieIfDot1dBaseMappingTable";

    return path_buffer.str();

}

const EntityPath CiscoIfExtensionMib::Cieifdot1Dbasemappingtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIfExtensionMib::Cieifdot1Dbasemappingtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cieIfDot1dBaseMappingEntry")
    {
        for(auto const & c : cieifdot1dbasemappingentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIfExtensionMib::Cieifdot1Dbasemappingtable::Cieifdot1Dbasemappingentry>();
        c->parent = this;
        cieifdot1dbasemappingentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIfExtensionMib::Cieifdot1Dbasemappingtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cieifdot1dbasemappingentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIfExtensionMib::Cieifdot1Dbasemappingtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIfExtensionMib::Cieifdot1Dbasemappingtable::Cieifdot1Dbasemappingentry::Cieifdot1Dbasemappingentry()
    :
    ifindex{YType::str, "ifIndex"},
    cieifdot1dbasemappingport{YType::int32, "cieIfDot1dBaseMappingPort"}
{
    yang_name = "cieIfDot1dBaseMappingEntry"; yang_parent_name = "cieIfDot1dBaseMappingTable";
}

CiscoIfExtensionMib::Cieifdot1Dbasemappingtable::Cieifdot1Dbasemappingentry::~Cieifdot1Dbasemappingentry()
{
}

bool CiscoIfExtensionMib::Cieifdot1Dbasemappingtable::Cieifdot1Dbasemappingentry::has_data() const
{
    return ifindex.is_set
	|| cieifdot1dbasemappingport.is_set;
}

bool CiscoIfExtensionMib::Cieifdot1Dbasemappingtable::Cieifdot1Dbasemappingentry::has_operation() const
{
    return is_set(operation)
	|| is_set(ifindex.operation)
	|| is_set(cieifdot1dbasemappingport.operation);
}

std::string CiscoIfExtensionMib::Cieifdot1Dbasemappingtable::Cieifdot1Dbasemappingentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cieIfDot1dBaseMappingEntry" <<"[ifIndex='" <<ifindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIfExtensionMib::Cieifdot1Dbasemappingtable::Cieifdot1Dbasemappingentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB/cieIfDot1dBaseMappingTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.operation)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (cieifdot1dbasemappingport.is_set || is_set(cieifdot1dbasemappingport.operation)) leaf_name_data.push_back(cieifdot1dbasemappingport.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIfExtensionMib::Cieifdot1Dbasemappingtable::Cieifdot1Dbasemappingentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIfExtensionMib::Cieifdot1Dbasemappingtable::Cieifdot1Dbasemappingentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIfExtensionMib::Cieifdot1Dbasemappingtable::Cieifdot1Dbasemappingentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
    }
    if(value_path == "cieIfDot1dBaseMappingPort")
    {
        cieifdot1dbasemappingport = value;
    }
}

CiscoIfExtensionMib::Cieifnamemappingtable::Cieifnamemappingtable()
{
    yang_name = "cieIfNameMappingTable"; yang_parent_name = "CISCO-IF-EXTENSION-MIB";
}

CiscoIfExtensionMib::Cieifnamemappingtable::~Cieifnamemappingtable()
{
}

bool CiscoIfExtensionMib::Cieifnamemappingtable::has_data() const
{
    for (std::size_t index=0; index<cieifnamemappingentry_.size(); index++)
    {
        if(cieifnamemappingentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIfExtensionMib::Cieifnamemappingtable::has_operation() const
{
    for (std::size_t index=0; index<cieifnamemappingentry_.size(); index++)
    {
        if(cieifnamemappingentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIfExtensionMib::Cieifnamemappingtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cieIfNameMappingTable";

    return path_buffer.str();

}

const EntityPath CiscoIfExtensionMib::Cieifnamemappingtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIfExtensionMib::Cieifnamemappingtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cieIfNameMappingEntry")
    {
        for(auto const & c : cieifnamemappingentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIfExtensionMib::Cieifnamemappingtable::Cieifnamemappingentry>();
        c->parent = this;
        cieifnamemappingentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIfExtensionMib::Cieifnamemappingtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cieifnamemappingentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIfExtensionMib::Cieifnamemappingtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIfExtensionMib::Cieifnamemappingtable::Cieifnamemappingentry::Cieifnamemappingentry()
    :
    cieifname{YType::str, "cieIfName"},
    cieifindex{YType::int32, "cieIfIndex"}
{
    yang_name = "cieIfNameMappingEntry"; yang_parent_name = "cieIfNameMappingTable";
}

CiscoIfExtensionMib::Cieifnamemappingtable::Cieifnamemappingentry::~Cieifnamemappingentry()
{
}

bool CiscoIfExtensionMib::Cieifnamemappingtable::Cieifnamemappingentry::has_data() const
{
    return cieifname.is_set
	|| cieifindex.is_set;
}

bool CiscoIfExtensionMib::Cieifnamemappingtable::Cieifnamemappingentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cieifname.operation)
	|| is_set(cieifindex.operation);
}

std::string CiscoIfExtensionMib::Cieifnamemappingtable::Cieifnamemappingentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cieIfNameMappingEntry" <<"[cieIfName='" <<cieifname <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIfExtensionMib::Cieifnamemappingtable::Cieifnamemappingentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IF-EXTENSION-MIB:CISCO-IF-EXTENSION-MIB/cieIfNameMappingTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cieifname.is_set || is_set(cieifname.operation)) leaf_name_data.push_back(cieifname.get_name_leafdata());
    if (cieifindex.is_set || is_set(cieifindex.operation)) leaf_name_data.push_back(cieifindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIfExtensionMib::Cieifnamemappingtable::Cieifnamemappingentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIfExtensionMib::Cieifnamemappingtable::Cieifnamemappingentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIfExtensionMib::Cieifnamemappingtable::Cieifnamemappingentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cieIfName")
    {
        cieifname = value;
    }
    if(value_path == "cieIfIndex")
    {
        cieifindex = value;
    }
}

const Enum::YLeaf IfindexpersistencestateEnum::disable {1, "disable"};
const Enum::YLeaf IfindexpersistencestateEnum::enable {2, "enable"};
const Enum::YLeaf IfindexpersistencestateEnum::global {3, "global"};

const Enum::YLeaf CiscoIfExtensionMib::Ciscoifextsystemconfig::CiestandardlinkupdownvarbindsEnum::standard {1, "standard"};
const Enum::YLeaf CiscoIfExtensionMib::Ciscoifextsystemconfig::CiestandardlinkupdownvarbindsEnum::additional {2, "additional"};
const Enum::YLeaf CiscoIfExtensionMib::Ciscoifextsystemconfig::CiestandardlinkupdownvarbindsEnum::other {3, "other"};

const Enum::YLeaf CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry::CieifsharedconfigEnum::notApplicable {1, "notApplicable"};
const Enum::YLeaf CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry::CieifsharedconfigEnum::ownerDedicated {2, "ownerDedicated"};
const Enum::YLeaf CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry::CieifsharedconfigEnum::ownerShared {3, "ownerShared"};
const Enum::YLeaf CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry::CieifsharedconfigEnum::sharedOnly {4, "sharedOnly"};

const Enum::YLeaf CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry::CieifspeedgroupconfigEnum::notApplicable {1, "notApplicable"};
const Enum::YLeaf CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry::CieifspeedgroupconfigEnum::tenG {2, "tenG"};
const Enum::YLeaf CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry::CieifspeedgroupconfigEnum::oneTwoFourEightG {3, "oneTwoFourEightG"};
const Enum::YLeaf CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry::CieifspeedgroupconfigEnum::twoFourEightSixteenG {4, "twoFourEightSixteenG"};

const Enum::YLeaf CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry::CieiftransceiverfrequencyconfigEnum::notApplicable {1, "notApplicable"};
const Enum::YLeaf CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry::CieiftransceiverfrequencyconfigEnum::fibreChannel {2, "fibreChannel"};
const Enum::YLeaf CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry::CieiftransceiverfrequencyconfigEnum::ethernet {3, "ethernet"};

const Enum::YLeaf CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry::CieiffillpatternconfigEnum::arbff8G {1, "arbff8G"};
const Enum::YLeaf CiscoIfExtensionMib::Cieifinterfacetable::Cieifinterfaceentry::CieiffillpatternconfigEnum::idle8G {2, "idle8G"};


}
}

