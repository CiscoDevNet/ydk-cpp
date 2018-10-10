
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "OLD_CISCO_INTERFACES_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace OLD_CISCO_INTERFACES_MIB {

OLDCISCOINTERFACESMIB::OLDCISCOINTERFACESMIB()
    :
    liftable(std::make_shared<OLDCISCOINTERFACESMIB::LifTable>())
    , lfsiptable(std::make_shared<OLDCISCOINTERFACESMIB::LFSIPTable>())
{
    liftable->parent = this;
    lfsiptable->parent = this;

    yang_name = "OLD-CISCO-INTERFACES-MIB"; yang_parent_name = "OLD-CISCO-INTERFACES-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

OLDCISCOINTERFACESMIB::~OLDCISCOINTERFACESMIB()
{
}

bool OLDCISCOINTERFACESMIB::has_data() const
{
    if (is_presence_container) return true;
    return (liftable !=  nullptr && liftable->has_data())
	|| (lfsiptable !=  nullptr && lfsiptable->has_data());
}

bool OLDCISCOINTERFACESMIB::has_operation() const
{
    return is_set(yfilter)
	|| (liftable !=  nullptr && liftable->has_operation())
	|| (lfsiptable !=  nullptr && lfsiptable->has_operation());
}

std::string OLDCISCOINTERFACESMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OLD-CISCO-INTERFACES-MIB:OLD-CISCO-INTERFACES-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OLDCISCOINTERFACESMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OLDCISCOINTERFACESMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lifTable")
    {
        if(liftable == nullptr)
        {
            liftable = std::make_shared<OLDCISCOINTERFACESMIB::LifTable>();
        }
        return liftable;
    }

    if(child_yang_name == "lFSIPTable")
    {
        if(lfsiptable == nullptr)
        {
            lfsiptable = std::make_shared<OLDCISCOINTERFACESMIB::LFSIPTable>();
        }
        return lfsiptable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OLDCISCOINTERFACESMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(liftable != nullptr)
    {
        children["lifTable"] = liftable;
    }

    if(lfsiptable != nullptr)
    {
        children["lFSIPTable"] = lfsiptable;
    }

    return children;
}

void OLDCISCOINTERFACESMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OLDCISCOINTERFACESMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> OLDCISCOINTERFACESMIB::clone_ptr() const
{
    return std::make_shared<OLDCISCOINTERFACESMIB>();
}

std::string OLDCISCOINTERFACESMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string OLDCISCOINTERFACESMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function OLDCISCOINTERFACESMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> OLDCISCOINTERFACESMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool OLDCISCOINTERFACESMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lifTable" || name == "lFSIPTable")
        return true;
    return false;
}

OLDCISCOINTERFACESMIB::LifTable::LifTable()
    :
    lifentry(this, {"ifindex"})
{

    yang_name = "lifTable"; yang_parent_name = "OLD-CISCO-INTERFACES-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

OLDCISCOINTERFACESMIB::LifTable::~LifTable()
{
}

bool OLDCISCOINTERFACESMIB::LifTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lifentry.len(); index++)
    {
        if(lifentry[index]->has_data())
            return true;
    }
    return false;
}

bool OLDCISCOINTERFACESMIB::LifTable::has_operation() const
{
    for (std::size_t index=0; index<lifentry.len(); index++)
    {
        if(lifentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OLDCISCOINTERFACESMIB::LifTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OLD-CISCO-INTERFACES-MIB:OLD-CISCO-INTERFACES-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string OLDCISCOINTERFACESMIB::LifTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OLDCISCOINTERFACESMIB::LifTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OLDCISCOINTERFACESMIB::LifTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lifEntry")
    {
        auto c = std::make_shared<OLDCISCOINTERFACESMIB::LifTable::LifEntry>();
        c->parent = this;
        lifentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OLDCISCOINTERFACESMIB::LifTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : lifentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OLDCISCOINTERFACESMIB::LifTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OLDCISCOINTERFACESMIB::LifTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OLDCISCOINTERFACESMIB::LifTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lifEntry")
        return true;
    return false;
}

OLDCISCOINTERFACESMIB::LifTable::LifEntry::LifEntry()
    :
    ifindex{YType::str, "ifIndex"},
    locifhardtype{YType::str, "locIfHardType"},
    lociflineprot{YType::int32, "locIfLineProt"},
    lociflastin{YType::int32, "locIfLastIn"},
    lociflastout{YType::int32, "locIfLastOut"},
    lociflastouthang{YType::int32, "locIfLastOutHang"},
    locifinbitssec{YType::int32, "locIfInBitsSec"},
    locifinpktssec{YType::int32, "locIfInPktsSec"},
    locifoutbitssec{YType::int32, "locIfOutBitsSec"},
    locifoutpktssec{YType::int32, "locIfOutPktsSec"},
    locifinrunts{YType::int32, "locIfInRunts"},
    locifingiants{YType::int32, "locIfInGiants"},
    locifincrc{YType::int32, "locIfInCRC"},
    locifinframe{YType::int32, "locIfInFrame"},
    locifinoverrun{YType::int32, "locIfInOverrun"},
    locifinignored{YType::int32, "locIfInIgnored"},
    locifinabort{YType::int32, "locIfInAbort"},
    locifresets{YType::int32, "locIfResets"},
    locifrestarts{YType::int32, "locIfRestarts"},
    locifkeep{YType::int32, "locIfKeep"},
    locifreason{YType::str, "locIfReason"},
    locifcartrans{YType::int32, "locIfCarTrans"},
    locifreliab{YType::int32, "locIfReliab"},
    locifdelay{YType::int32, "locIfDelay"},
    locifload{YType::int32, "locIfLoad"},
    locifcollisions{YType::int32, "locIfCollisions"},
    locifinputqueuedrops{YType::int32, "locIfInputQueueDrops"},
    locifoutputqueuedrops{YType::int32, "locIfOutputQueueDrops"},
    locifdescr{YType::str, "locIfDescr"},
    locifslowinpkts{YType::uint32, "locIfSlowInPkts"},
    locifslowoutpkts{YType::uint32, "locIfSlowOutPkts"},
    locifslowinoctets{YType::uint32, "locIfSlowInOctets"},
    locifslowoutoctets{YType::uint32, "locIfSlowOutOctets"},
    lociffastinpkts{YType::uint32, "locIfFastInPkts"},
    lociffastoutpkts{YType::uint32, "locIfFastOutPkts"},
    lociffastinoctets{YType::uint32, "locIfFastInOctets"},
    lociffastoutoctets{YType::uint32, "locIfFastOutOctets"},
    locifotherinpkts{YType::uint32, "locIfotherInPkts"},
    locifotheroutpkts{YType::uint32, "locIfotherOutPkts"},
    locifotherinoctets{YType::uint32, "locIfotherInOctets"},
    locifotheroutoctets{YType::uint32, "locIfotherOutOctets"},
    locifipinpkts{YType::uint32, "locIfipInPkts"},
    locifipoutpkts{YType::uint32, "locIfipOutPkts"},
    locifipinoctets{YType::uint32, "locIfipInOctets"},
    locifipoutoctets{YType::uint32, "locIfipOutOctets"},
    locifdecnetinpkts{YType::uint32, "locIfdecnetInPkts"},
    locifdecnetoutpkts{YType::uint32, "locIfdecnetOutPkts"},
    locifdecnetinoctets{YType::uint32, "locIfdecnetInOctets"},
    locifdecnetoutoctets{YType::uint32, "locIfdecnetOutOctets"},
    locifxnsinpkts{YType::uint32, "locIfxnsInPkts"},
    locifxnsoutpkts{YType::uint32, "locIfxnsOutPkts"},
    locifxnsinoctets{YType::uint32, "locIfxnsInOctets"},
    locifxnsoutoctets{YType::uint32, "locIfxnsOutOctets"},
    locifclnsinpkts{YType::uint32, "locIfclnsInPkts"},
    locifclnsoutpkts{YType::uint32, "locIfclnsOutPkts"},
    locifclnsinoctets{YType::uint32, "locIfclnsInOctets"},
    locifclnsoutoctets{YType::uint32, "locIfclnsOutOctets"},
    locifappletalkinpkts{YType::uint32, "locIfappletalkInPkts"},
    locifappletalkoutpkts{YType::uint32, "locIfappletalkOutPkts"},
    locifappletalkinoctets{YType::uint32, "locIfappletalkInOctets"},
    locifappletalkoutoctets{YType::uint32, "locIfappletalkOutOctets"},
    locifnovellinpkts{YType::uint32, "locIfnovellInPkts"},
    locifnovelloutpkts{YType::uint32, "locIfnovellOutPkts"},
    locifnovellinoctets{YType::uint32, "locIfnovellInOctets"},
    locifnovelloutoctets{YType::uint32, "locIfnovellOutOctets"},
    locifapolloinpkts{YType::uint32, "locIfapolloInPkts"},
    locifapollooutpkts{YType::uint32, "locIfapolloOutPkts"},
    locifapolloinoctets{YType::uint32, "locIfapolloInOctets"},
    locifapollooutoctets{YType::uint32, "locIfapolloOutOctets"},
    locifvinesinpkts{YType::uint32, "locIfvinesInPkts"},
    locifvinesoutpkts{YType::uint32, "locIfvinesOutPkts"},
    locifvinesinoctets{YType::uint32, "locIfvinesInOctets"},
    locifvinesoutoctets{YType::uint32, "locIfvinesOutOctets"},
    locifbridgedinpkts{YType::uint32, "locIfbridgedInPkts"},
    locifbridgedoutpkts{YType::uint32, "locIfbridgedOutPkts"},
    locifbridgedinoctets{YType::uint32, "locIfbridgedInOctets"},
    locifbridgedoutoctets{YType::uint32, "locIfbridgedOutOctets"},
    locifsrbinpkts{YType::uint32, "locIfsrbInPkts"},
    locifsrboutpkts{YType::uint32, "locIfsrbOutPkts"},
    locifsrbinoctets{YType::uint32, "locIfsrbInOctets"},
    locifsrboutoctets{YType::uint32, "locIfsrbOutOctets"},
    locifchaosinpkts{YType::uint32, "locIfchaosInPkts"},
    locifchaosoutpkts{YType::uint32, "locIfchaosOutPkts"},
    locifchaosinoctets{YType::uint32, "locIfchaosInOctets"},
    locifchaosoutoctets{YType::uint32, "locIfchaosOutOctets"},
    locifpupinpkts{YType::uint32, "locIfpupInPkts"},
    locifpupoutpkts{YType::uint32, "locIfpupOutPkts"},
    locifpupinoctets{YType::uint32, "locIfpupInOctets"},
    locifpupoutoctets{YType::uint32, "locIfpupOutOctets"},
    locifmopinpkts{YType::uint32, "locIfmopInPkts"},
    locifmopoutpkts{YType::uint32, "locIfmopOutPkts"},
    locifmopinoctets{YType::uint32, "locIfmopInOctets"},
    locifmopoutoctets{YType::uint32, "locIfmopOutOctets"},
    lociflanmaninpkts{YType::uint32, "locIflanmanInPkts"},
    lociflanmanoutpkts{YType::uint32, "locIflanmanOutPkts"},
    lociflanmaninoctets{YType::uint32, "locIflanmanInOctets"},
    lociflanmanoutoctets{YType::uint32, "locIflanmanOutOctets"},
    locifstuninpkts{YType::uint32, "locIfstunInPkts"},
    locifstunoutpkts{YType::uint32, "locIfstunOutPkts"},
    locifstuninoctets{YType::uint32, "locIfstunInOctets"},
    locifstunoutoctets{YType::uint32, "locIfstunOutOctets"},
    locifspaninpkts{YType::uint32, "locIfspanInPkts"},
    locifspanoutpkts{YType::uint32, "locIfspanOutPkts"},
    locifspaninoctets{YType::uint32, "locIfspanInOctets"},
    locifspanoutoctets{YType::uint32, "locIfspanOutOctets"},
    locifarpinpkts{YType::uint32, "locIfarpInPkts"},
    locifarpoutpkts{YType::uint32, "locIfarpOutPkts"},
    locifarpinoctets{YType::uint32, "locIfarpInOctets"},
    locifarpoutoctets{YType::uint32, "locIfarpOutOctets"},
    locifprobeinpkts{YType::uint32, "locIfprobeInPkts"},
    locifprobeoutpkts{YType::uint32, "locIfprobeOutPkts"},
    locifprobeinoctets{YType::uint32, "locIfprobeInOctets"},
    locifprobeoutoctets{YType::uint32, "locIfprobeOutOctets"},
    locifdribbleinputs{YType::uint32, "locIfDribbleInputs"}
{

    yang_name = "lifEntry"; yang_parent_name = "lifTable"; is_top_level_class = false; has_list_ancestor = false; 
}

OLDCISCOINTERFACESMIB::LifTable::LifEntry::~LifEntry()
{
}

bool OLDCISCOINTERFACESMIB::LifTable::LifEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| locifhardtype.is_set
	|| lociflineprot.is_set
	|| lociflastin.is_set
	|| lociflastout.is_set
	|| lociflastouthang.is_set
	|| locifinbitssec.is_set
	|| locifinpktssec.is_set
	|| locifoutbitssec.is_set
	|| locifoutpktssec.is_set
	|| locifinrunts.is_set
	|| locifingiants.is_set
	|| locifincrc.is_set
	|| locifinframe.is_set
	|| locifinoverrun.is_set
	|| locifinignored.is_set
	|| locifinabort.is_set
	|| locifresets.is_set
	|| locifrestarts.is_set
	|| locifkeep.is_set
	|| locifreason.is_set
	|| locifcartrans.is_set
	|| locifreliab.is_set
	|| locifdelay.is_set
	|| locifload.is_set
	|| locifcollisions.is_set
	|| locifinputqueuedrops.is_set
	|| locifoutputqueuedrops.is_set
	|| locifdescr.is_set
	|| locifslowinpkts.is_set
	|| locifslowoutpkts.is_set
	|| locifslowinoctets.is_set
	|| locifslowoutoctets.is_set
	|| lociffastinpkts.is_set
	|| lociffastoutpkts.is_set
	|| lociffastinoctets.is_set
	|| lociffastoutoctets.is_set
	|| locifotherinpkts.is_set
	|| locifotheroutpkts.is_set
	|| locifotherinoctets.is_set
	|| locifotheroutoctets.is_set
	|| locifipinpkts.is_set
	|| locifipoutpkts.is_set
	|| locifipinoctets.is_set
	|| locifipoutoctets.is_set
	|| locifdecnetinpkts.is_set
	|| locifdecnetoutpkts.is_set
	|| locifdecnetinoctets.is_set
	|| locifdecnetoutoctets.is_set
	|| locifxnsinpkts.is_set
	|| locifxnsoutpkts.is_set
	|| locifxnsinoctets.is_set
	|| locifxnsoutoctets.is_set
	|| locifclnsinpkts.is_set
	|| locifclnsoutpkts.is_set
	|| locifclnsinoctets.is_set
	|| locifclnsoutoctets.is_set
	|| locifappletalkinpkts.is_set
	|| locifappletalkoutpkts.is_set
	|| locifappletalkinoctets.is_set
	|| locifappletalkoutoctets.is_set
	|| locifnovellinpkts.is_set
	|| locifnovelloutpkts.is_set
	|| locifnovellinoctets.is_set
	|| locifnovelloutoctets.is_set
	|| locifapolloinpkts.is_set
	|| locifapollooutpkts.is_set
	|| locifapolloinoctets.is_set
	|| locifapollooutoctets.is_set
	|| locifvinesinpkts.is_set
	|| locifvinesoutpkts.is_set
	|| locifvinesinoctets.is_set
	|| locifvinesoutoctets.is_set
	|| locifbridgedinpkts.is_set
	|| locifbridgedoutpkts.is_set
	|| locifbridgedinoctets.is_set
	|| locifbridgedoutoctets.is_set
	|| locifsrbinpkts.is_set
	|| locifsrboutpkts.is_set
	|| locifsrbinoctets.is_set
	|| locifsrboutoctets.is_set
	|| locifchaosinpkts.is_set
	|| locifchaosoutpkts.is_set
	|| locifchaosinoctets.is_set
	|| locifchaosoutoctets.is_set
	|| locifpupinpkts.is_set
	|| locifpupoutpkts.is_set
	|| locifpupinoctets.is_set
	|| locifpupoutoctets.is_set
	|| locifmopinpkts.is_set
	|| locifmopoutpkts.is_set
	|| locifmopinoctets.is_set
	|| locifmopoutoctets.is_set
	|| lociflanmaninpkts.is_set
	|| lociflanmanoutpkts.is_set
	|| lociflanmaninoctets.is_set
	|| lociflanmanoutoctets.is_set
	|| locifstuninpkts.is_set
	|| locifstunoutpkts.is_set
	|| locifstuninoctets.is_set
	|| locifstunoutoctets.is_set
	|| locifspaninpkts.is_set
	|| locifspanoutpkts.is_set
	|| locifspaninoctets.is_set
	|| locifspanoutoctets.is_set
	|| locifarpinpkts.is_set
	|| locifarpoutpkts.is_set
	|| locifarpinoctets.is_set
	|| locifarpoutoctets.is_set
	|| locifprobeinpkts.is_set
	|| locifprobeoutpkts.is_set
	|| locifprobeinoctets.is_set
	|| locifprobeoutoctets.is_set
	|| locifdribbleinputs.is_set;
}

bool OLDCISCOINTERFACESMIB::LifTable::LifEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(locifhardtype.yfilter)
	|| ydk::is_set(lociflineprot.yfilter)
	|| ydk::is_set(lociflastin.yfilter)
	|| ydk::is_set(lociflastout.yfilter)
	|| ydk::is_set(lociflastouthang.yfilter)
	|| ydk::is_set(locifinbitssec.yfilter)
	|| ydk::is_set(locifinpktssec.yfilter)
	|| ydk::is_set(locifoutbitssec.yfilter)
	|| ydk::is_set(locifoutpktssec.yfilter)
	|| ydk::is_set(locifinrunts.yfilter)
	|| ydk::is_set(locifingiants.yfilter)
	|| ydk::is_set(locifincrc.yfilter)
	|| ydk::is_set(locifinframe.yfilter)
	|| ydk::is_set(locifinoverrun.yfilter)
	|| ydk::is_set(locifinignored.yfilter)
	|| ydk::is_set(locifinabort.yfilter)
	|| ydk::is_set(locifresets.yfilter)
	|| ydk::is_set(locifrestarts.yfilter)
	|| ydk::is_set(locifkeep.yfilter)
	|| ydk::is_set(locifreason.yfilter)
	|| ydk::is_set(locifcartrans.yfilter)
	|| ydk::is_set(locifreliab.yfilter)
	|| ydk::is_set(locifdelay.yfilter)
	|| ydk::is_set(locifload.yfilter)
	|| ydk::is_set(locifcollisions.yfilter)
	|| ydk::is_set(locifinputqueuedrops.yfilter)
	|| ydk::is_set(locifoutputqueuedrops.yfilter)
	|| ydk::is_set(locifdescr.yfilter)
	|| ydk::is_set(locifslowinpkts.yfilter)
	|| ydk::is_set(locifslowoutpkts.yfilter)
	|| ydk::is_set(locifslowinoctets.yfilter)
	|| ydk::is_set(locifslowoutoctets.yfilter)
	|| ydk::is_set(lociffastinpkts.yfilter)
	|| ydk::is_set(lociffastoutpkts.yfilter)
	|| ydk::is_set(lociffastinoctets.yfilter)
	|| ydk::is_set(lociffastoutoctets.yfilter)
	|| ydk::is_set(locifotherinpkts.yfilter)
	|| ydk::is_set(locifotheroutpkts.yfilter)
	|| ydk::is_set(locifotherinoctets.yfilter)
	|| ydk::is_set(locifotheroutoctets.yfilter)
	|| ydk::is_set(locifipinpkts.yfilter)
	|| ydk::is_set(locifipoutpkts.yfilter)
	|| ydk::is_set(locifipinoctets.yfilter)
	|| ydk::is_set(locifipoutoctets.yfilter)
	|| ydk::is_set(locifdecnetinpkts.yfilter)
	|| ydk::is_set(locifdecnetoutpkts.yfilter)
	|| ydk::is_set(locifdecnetinoctets.yfilter)
	|| ydk::is_set(locifdecnetoutoctets.yfilter)
	|| ydk::is_set(locifxnsinpkts.yfilter)
	|| ydk::is_set(locifxnsoutpkts.yfilter)
	|| ydk::is_set(locifxnsinoctets.yfilter)
	|| ydk::is_set(locifxnsoutoctets.yfilter)
	|| ydk::is_set(locifclnsinpkts.yfilter)
	|| ydk::is_set(locifclnsoutpkts.yfilter)
	|| ydk::is_set(locifclnsinoctets.yfilter)
	|| ydk::is_set(locifclnsoutoctets.yfilter)
	|| ydk::is_set(locifappletalkinpkts.yfilter)
	|| ydk::is_set(locifappletalkoutpkts.yfilter)
	|| ydk::is_set(locifappletalkinoctets.yfilter)
	|| ydk::is_set(locifappletalkoutoctets.yfilter)
	|| ydk::is_set(locifnovellinpkts.yfilter)
	|| ydk::is_set(locifnovelloutpkts.yfilter)
	|| ydk::is_set(locifnovellinoctets.yfilter)
	|| ydk::is_set(locifnovelloutoctets.yfilter)
	|| ydk::is_set(locifapolloinpkts.yfilter)
	|| ydk::is_set(locifapollooutpkts.yfilter)
	|| ydk::is_set(locifapolloinoctets.yfilter)
	|| ydk::is_set(locifapollooutoctets.yfilter)
	|| ydk::is_set(locifvinesinpkts.yfilter)
	|| ydk::is_set(locifvinesoutpkts.yfilter)
	|| ydk::is_set(locifvinesinoctets.yfilter)
	|| ydk::is_set(locifvinesoutoctets.yfilter)
	|| ydk::is_set(locifbridgedinpkts.yfilter)
	|| ydk::is_set(locifbridgedoutpkts.yfilter)
	|| ydk::is_set(locifbridgedinoctets.yfilter)
	|| ydk::is_set(locifbridgedoutoctets.yfilter)
	|| ydk::is_set(locifsrbinpkts.yfilter)
	|| ydk::is_set(locifsrboutpkts.yfilter)
	|| ydk::is_set(locifsrbinoctets.yfilter)
	|| ydk::is_set(locifsrboutoctets.yfilter)
	|| ydk::is_set(locifchaosinpkts.yfilter)
	|| ydk::is_set(locifchaosoutpkts.yfilter)
	|| ydk::is_set(locifchaosinoctets.yfilter)
	|| ydk::is_set(locifchaosoutoctets.yfilter)
	|| ydk::is_set(locifpupinpkts.yfilter)
	|| ydk::is_set(locifpupoutpkts.yfilter)
	|| ydk::is_set(locifpupinoctets.yfilter)
	|| ydk::is_set(locifpupoutoctets.yfilter)
	|| ydk::is_set(locifmopinpkts.yfilter)
	|| ydk::is_set(locifmopoutpkts.yfilter)
	|| ydk::is_set(locifmopinoctets.yfilter)
	|| ydk::is_set(locifmopoutoctets.yfilter)
	|| ydk::is_set(lociflanmaninpkts.yfilter)
	|| ydk::is_set(lociflanmanoutpkts.yfilter)
	|| ydk::is_set(lociflanmaninoctets.yfilter)
	|| ydk::is_set(lociflanmanoutoctets.yfilter)
	|| ydk::is_set(locifstuninpkts.yfilter)
	|| ydk::is_set(locifstunoutpkts.yfilter)
	|| ydk::is_set(locifstuninoctets.yfilter)
	|| ydk::is_set(locifstunoutoctets.yfilter)
	|| ydk::is_set(locifspaninpkts.yfilter)
	|| ydk::is_set(locifspanoutpkts.yfilter)
	|| ydk::is_set(locifspaninoctets.yfilter)
	|| ydk::is_set(locifspanoutoctets.yfilter)
	|| ydk::is_set(locifarpinpkts.yfilter)
	|| ydk::is_set(locifarpoutpkts.yfilter)
	|| ydk::is_set(locifarpinoctets.yfilter)
	|| ydk::is_set(locifarpoutoctets.yfilter)
	|| ydk::is_set(locifprobeinpkts.yfilter)
	|| ydk::is_set(locifprobeoutpkts.yfilter)
	|| ydk::is_set(locifprobeinoctets.yfilter)
	|| ydk::is_set(locifprobeoutoctets.yfilter)
	|| ydk::is_set(locifdribbleinputs.yfilter);
}

std::string OLDCISCOINTERFACESMIB::LifTable::LifEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OLD-CISCO-INTERFACES-MIB:OLD-CISCO-INTERFACES-MIB/lifTable/" << get_segment_path();
    return path_buffer.str();
}

std::string OLDCISCOINTERFACESMIB::LifTable::LifEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lifEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OLDCISCOINTERFACESMIB::LifTable::LifEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (locifhardtype.is_set || is_set(locifhardtype.yfilter)) leaf_name_data.push_back(locifhardtype.get_name_leafdata());
    if (lociflineprot.is_set || is_set(lociflineprot.yfilter)) leaf_name_data.push_back(lociflineprot.get_name_leafdata());
    if (lociflastin.is_set || is_set(lociflastin.yfilter)) leaf_name_data.push_back(lociflastin.get_name_leafdata());
    if (lociflastout.is_set || is_set(lociflastout.yfilter)) leaf_name_data.push_back(lociflastout.get_name_leafdata());
    if (lociflastouthang.is_set || is_set(lociflastouthang.yfilter)) leaf_name_data.push_back(lociflastouthang.get_name_leafdata());
    if (locifinbitssec.is_set || is_set(locifinbitssec.yfilter)) leaf_name_data.push_back(locifinbitssec.get_name_leafdata());
    if (locifinpktssec.is_set || is_set(locifinpktssec.yfilter)) leaf_name_data.push_back(locifinpktssec.get_name_leafdata());
    if (locifoutbitssec.is_set || is_set(locifoutbitssec.yfilter)) leaf_name_data.push_back(locifoutbitssec.get_name_leafdata());
    if (locifoutpktssec.is_set || is_set(locifoutpktssec.yfilter)) leaf_name_data.push_back(locifoutpktssec.get_name_leafdata());
    if (locifinrunts.is_set || is_set(locifinrunts.yfilter)) leaf_name_data.push_back(locifinrunts.get_name_leafdata());
    if (locifingiants.is_set || is_set(locifingiants.yfilter)) leaf_name_data.push_back(locifingiants.get_name_leafdata());
    if (locifincrc.is_set || is_set(locifincrc.yfilter)) leaf_name_data.push_back(locifincrc.get_name_leafdata());
    if (locifinframe.is_set || is_set(locifinframe.yfilter)) leaf_name_data.push_back(locifinframe.get_name_leafdata());
    if (locifinoverrun.is_set || is_set(locifinoverrun.yfilter)) leaf_name_data.push_back(locifinoverrun.get_name_leafdata());
    if (locifinignored.is_set || is_set(locifinignored.yfilter)) leaf_name_data.push_back(locifinignored.get_name_leafdata());
    if (locifinabort.is_set || is_set(locifinabort.yfilter)) leaf_name_data.push_back(locifinabort.get_name_leafdata());
    if (locifresets.is_set || is_set(locifresets.yfilter)) leaf_name_data.push_back(locifresets.get_name_leafdata());
    if (locifrestarts.is_set || is_set(locifrestarts.yfilter)) leaf_name_data.push_back(locifrestarts.get_name_leafdata());
    if (locifkeep.is_set || is_set(locifkeep.yfilter)) leaf_name_data.push_back(locifkeep.get_name_leafdata());
    if (locifreason.is_set || is_set(locifreason.yfilter)) leaf_name_data.push_back(locifreason.get_name_leafdata());
    if (locifcartrans.is_set || is_set(locifcartrans.yfilter)) leaf_name_data.push_back(locifcartrans.get_name_leafdata());
    if (locifreliab.is_set || is_set(locifreliab.yfilter)) leaf_name_data.push_back(locifreliab.get_name_leafdata());
    if (locifdelay.is_set || is_set(locifdelay.yfilter)) leaf_name_data.push_back(locifdelay.get_name_leafdata());
    if (locifload.is_set || is_set(locifload.yfilter)) leaf_name_data.push_back(locifload.get_name_leafdata());
    if (locifcollisions.is_set || is_set(locifcollisions.yfilter)) leaf_name_data.push_back(locifcollisions.get_name_leafdata());
    if (locifinputqueuedrops.is_set || is_set(locifinputqueuedrops.yfilter)) leaf_name_data.push_back(locifinputqueuedrops.get_name_leafdata());
    if (locifoutputqueuedrops.is_set || is_set(locifoutputqueuedrops.yfilter)) leaf_name_data.push_back(locifoutputqueuedrops.get_name_leafdata());
    if (locifdescr.is_set || is_set(locifdescr.yfilter)) leaf_name_data.push_back(locifdescr.get_name_leafdata());
    if (locifslowinpkts.is_set || is_set(locifslowinpkts.yfilter)) leaf_name_data.push_back(locifslowinpkts.get_name_leafdata());
    if (locifslowoutpkts.is_set || is_set(locifslowoutpkts.yfilter)) leaf_name_data.push_back(locifslowoutpkts.get_name_leafdata());
    if (locifslowinoctets.is_set || is_set(locifslowinoctets.yfilter)) leaf_name_data.push_back(locifslowinoctets.get_name_leafdata());
    if (locifslowoutoctets.is_set || is_set(locifslowoutoctets.yfilter)) leaf_name_data.push_back(locifslowoutoctets.get_name_leafdata());
    if (lociffastinpkts.is_set || is_set(lociffastinpkts.yfilter)) leaf_name_data.push_back(lociffastinpkts.get_name_leafdata());
    if (lociffastoutpkts.is_set || is_set(lociffastoutpkts.yfilter)) leaf_name_data.push_back(lociffastoutpkts.get_name_leafdata());
    if (lociffastinoctets.is_set || is_set(lociffastinoctets.yfilter)) leaf_name_data.push_back(lociffastinoctets.get_name_leafdata());
    if (lociffastoutoctets.is_set || is_set(lociffastoutoctets.yfilter)) leaf_name_data.push_back(lociffastoutoctets.get_name_leafdata());
    if (locifotherinpkts.is_set || is_set(locifotherinpkts.yfilter)) leaf_name_data.push_back(locifotherinpkts.get_name_leafdata());
    if (locifotheroutpkts.is_set || is_set(locifotheroutpkts.yfilter)) leaf_name_data.push_back(locifotheroutpkts.get_name_leafdata());
    if (locifotherinoctets.is_set || is_set(locifotherinoctets.yfilter)) leaf_name_data.push_back(locifotherinoctets.get_name_leafdata());
    if (locifotheroutoctets.is_set || is_set(locifotheroutoctets.yfilter)) leaf_name_data.push_back(locifotheroutoctets.get_name_leafdata());
    if (locifipinpkts.is_set || is_set(locifipinpkts.yfilter)) leaf_name_data.push_back(locifipinpkts.get_name_leafdata());
    if (locifipoutpkts.is_set || is_set(locifipoutpkts.yfilter)) leaf_name_data.push_back(locifipoutpkts.get_name_leafdata());
    if (locifipinoctets.is_set || is_set(locifipinoctets.yfilter)) leaf_name_data.push_back(locifipinoctets.get_name_leafdata());
    if (locifipoutoctets.is_set || is_set(locifipoutoctets.yfilter)) leaf_name_data.push_back(locifipoutoctets.get_name_leafdata());
    if (locifdecnetinpkts.is_set || is_set(locifdecnetinpkts.yfilter)) leaf_name_data.push_back(locifdecnetinpkts.get_name_leafdata());
    if (locifdecnetoutpkts.is_set || is_set(locifdecnetoutpkts.yfilter)) leaf_name_data.push_back(locifdecnetoutpkts.get_name_leafdata());
    if (locifdecnetinoctets.is_set || is_set(locifdecnetinoctets.yfilter)) leaf_name_data.push_back(locifdecnetinoctets.get_name_leafdata());
    if (locifdecnetoutoctets.is_set || is_set(locifdecnetoutoctets.yfilter)) leaf_name_data.push_back(locifdecnetoutoctets.get_name_leafdata());
    if (locifxnsinpkts.is_set || is_set(locifxnsinpkts.yfilter)) leaf_name_data.push_back(locifxnsinpkts.get_name_leafdata());
    if (locifxnsoutpkts.is_set || is_set(locifxnsoutpkts.yfilter)) leaf_name_data.push_back(locifxnsoutpkts.get_name_leafdata());
    if (locifxnsinoctets.is_set || is_set(locifxnsinoctets.yfilter)) leaf_name_data.push_back(locifxnsinoctets.get_name_leafdata());
    if (locifxnsoutoctets.is_set || is_set(locifxnsoutoctets.yfilter)) leaf_name_data.push_back(locifxnsoutoctets.get_name_leafdata());
    if (locifclnsinpkts.is_set || is_set(locifclnsinpkts.yfilter)) leaf_name_data.push_back(locifclnsinpkts.get_name_leafdata());
    if (locifclnsoutpkts.is_set || is_set(locifclnsoutpkts.yfilter)) leaf_name_data.push_back(locifclnsoutpkts.get_name_leafdata());
    if (locifclnsinoctets.is_set || is_set(locifclnsinoctets.yfilter)) leaf_name_data.push_back(locifclnsinoctets.get_name_leafdata());
    if (locifclnsoutoctets.is_set || is_set(locifclnsoutoctets.yfilter)) leaf_name_data.push_back(locifclnsoutoctets.get_name_leafdata());
    if (locifappletalkinpkts.is_set || is_set(locifappletalkinpkts.yfilter)) leaf_name_data.push_back(locifappletalkinpkts.get_name_leafdata());
    if (locifappletalkoutpkts.is_set || is_set(locifappletalkoutpkts.yfilter)) leaf_name_data.push_back(locifappletalkoutpkts.get_name_leafdata());
    if (locifappletalkinoctets.is_set || is_set(locifappletalkinoctets.yfilter)) leaf_name_data.push_back(locifappletalkinoctets.get_name_leafdata());
    if (locifappletalkoutoctets.is_set || is_set(locifappletalkoutoctets.yfilter)) leaf_name_data.push_back(locifappletalkoutoctets.get_name_leafdata());
    if (locifnovellinpkts.is_set || is_set(locifnovellinpkts.yfilter)) leaf_name_data.push_back(locifnovellinpkts.get_name_leafdata());
    if (locifnovelloutpkts.is_set || is_set(locifnovelloutpkts.yfilter)) leaf_name_data.push_back(locifnovelloutpkts.get_name_leafdata());
    if (locifnovellinoctets.is_set || is_set(locifnovellinoctets.yfilter)) leaf_name_data.push_back(locifnovellinoctets.get_name_leafdata());
    if (locifnovelloutoctets.is_set || is_set(locifnovelloutoctets.yfilter)) leaf_name_data.push_back(locifnovelloutoctets.get_name_leafdata());
    if (locifapolloinpkts.is_set || is_set(locifapolloinpkts.yfilter)) leaf_name_data.push_back(locifapolloinpkts.get_name_leafdata());
    if (locifapollooutpkts.is_set || is_set(locifapollooutpkts.yfilter)) leaf_name_data.push_back(locifapollooutpkts.get_name_leafdata());
    if (locifapolloinoctets.is_set || is_set(locifapolloinoctets.yfilter)) leaf_name_data.push_back(locifapolloinoctets.get_name_leafdata());
    if (locifapollooutoctets.is_set || is_set(locifapollooutoctets.yfilter)) leaf_name_data.push_back(locifapollooutoctets.get_name_leafdata());
    if (locifvinesinpkts.is_set || is_set(locifvinesinpkts.yfilter)) leaf_name_data.push_back(locifvinesinpkts.get_name_leafdata());
    if (locifvinesoutpkts.is_set || is_set(locifvinesoutpkts.yfilter)) leaf_name_data.push_back(locifvinesoutpkts.get_name_leafdata());
    if (locifvinesinoctets.is_set || is_set(locifvinesinoctets.yfilter)) leaf_name_data.push_back(locifvinesinoctets.get_name_leafdata());
    if (locifvinesoutoctets.is_set || is_set(locifvinesoutoctets.yfilter)) leaf_name_data.push_back(locifvinesoutoctets.get_name_leafdata());
    if (locifbridgedinpkts.is_set || is_set(locifbridgedinpkts.yfilter)) leaf_name_data.push_back(locifbridgedinpkts.get_name_leafdata());
    if (locifbridgedoutpkts.is_set || is_set(locifbridgedoutpkts.yfilter)) leaf_name_data.push_back(locifbridgedoutpkts.get_name_leafdata());
    if (locifbridgedinoctets.is_set || is_set(locifbridgedinoctets.yfilter)) leaf_name_data.push_back(locifbridgedinoctets.get_name_leafdata());
    if (locifbridgedoutoctets.is_set || is_set(locifbridgedoutoctets.yfilter)) leaf_name_data.push_back(locifbridgedoutoctets.get_name_leafdata());
    if (locifsrbinpkts.is_set || is_set(locifsrbinpkts.yfilter)) leaf_name_data.push_back(locifsrbinpkts.get_name_leafdata());
    if (locifsrboutpkts.is_set || is_set(locifsrboutpkts.yfilter)) leaf_name_data.push_back(locifsrboutpkts.get_name_leafdata());
    if (locifsrbinoctets.is_set || is_set(locifsrbinoctets.yfilter)) leaf_name_data.push_back(locifsrbinoctets.get_name_leafdata());
    if (locifsrboutoctets.is_set || is_set(locifsrboutoctets.yfilter)) leaf_name_data.push_back(locifsrboutoctets.get_name_leafdata());
    if (locifchaosinpkts.is_set || is_set(locifchaosinpkts.yfilter)) leaf_name_data.push_back(locifchaosinpkts.get_name_leafdata());
    if (locifchaosoutpkts.is_set || is_set(locifchaosoutpkts.yfilter)) leaf_name_data.push_back(locifchaosoutpkts.get_name_leafdata());
    if (locifchaosinoctets.is_set || is_set(locifchaosinoctets.yfilter)) leaf_name_data.push_back(locifchaosinoctets.get_name_leafdata());
    if (locifchaosoutoctets.is_set || is_set(locifchaosoutoctets.yfilter)) leaf_name_data.push_back(locifchaosoutoctets.get_name_leafdata());
    if (locifpupinpkts.is_set || is_set(locifpupinpkts.yfilter)) leaf_name_data.push_back(locifpupinpkts.get_name_leafdata());
    if (locifpupoutpkts.is_set || is_set(locifpupoutpkts.yfilter)) leaf_name_data.push_back(locifpupoutpkts.get_name_leafdata());
    if (locifpupinoctets.is_set || is_set(locifpupinoctets.yfilter)) leaf_name_data.push_back(locifpupinoctets.get_name_leafdata());
    if (locifpupoutoctets.is_set || is_set(locifpupoutoctets.yfilter)) leaf_name_data.push_back(locifpupoutoctets.get_name_leafdata());
    if (locifmopinpkts.is_set || is_set(locifmopinpkts.yfilter)) leaf_name_data.push_back(locifmopinpkts.get_name_leafdata());
    if (locifmopoutpkts.is_set || is_set(locifmopoutpkts.yfilter)) leaf_name_data.push_back(locifmopoutpkts.get_name_leafdata());
    if (locifmopinoctets.is_set || is_set(locifmopinoctets.yfilter)) leaf_name_data.push_back(locifmopinoctets.get_name_leafdata());
    if (locifmopoutoctets.is_set || is_set(locifmopoutoctets.yfilter)) leaf_name_data.push_back(locifmopoutoctets.get_name_leafdata());
    if (lociflanmaninpkts.is_set || is_set(lociflanmaninpkts.yfilter)) leaf_name_data.push_back(lociflanmaninpkts.get_name_leafdata());
    if (lociflanmanoutpkts.is_set || is_set(lociflanmanoutpkts.yfilter)) leaf_name_data.push_back(lociflanmanoutpkts.get_name_leafdata());
    if (lociflanmaninoctets.is_set || is_set(lociflanmaninoctets.yfilter)) leaf_name_data.push_back(lociflanmaninoctets.get_name_leafdata());
    if (lociflanmanoutoctets.is_set || is_set(lociflanmanoutoctets.yfilter)) leaf_name_data.push_back(lociflanmanoutoctets.get_name_leafdata());
    if (locifstuninpkts.is_set || is_set(locifstuninpkts.yfilter)) leaf_name_data.push_back(locifstuninpkts.get_name_leafdata());
    if (locifstunoutpkts.is_set || is_set(locifstunoutpkts.yfilter)) leaf_name_data.push_back(locifstunoutpkts.get_name_leafdata());
    if (locifstuninoctets.is_set || is_set(locifstuninoctets.yfilter)) leaf_name_data.push_back(locifstuninoctets.get_name_leafdata());
    if (locifstunoutoctets.is_set || is_set(locifstunoutoctets.yfilter)) leaf_name_data.push_back(locifstunoutoctets.get_name_leafdata());
    if (locifspaninpkts.is_set || is_set(locifspaninpkts.yfilter)) leaf_name_data.push_back(locifspaninpkts.get_name_leafdata());
    if (locifspanoutpkts.is_set || is_set(locifspanoutpkts.yfilter)) leaf_name_data.push_back(locifspanoutpkts.get_name_leafdata());
    if (locifspaninoctets.is_set || is_set(locifspaninoctets.yfilter)) leaf_name_data.push_back(locifspaninoctets.get_name_leafdata());
    if (locifspanoutoctets.is_set || is_set(locifspanoutoctets.yfilter)) leaf_name_data.push_back(locifspanoutoctets.get_name_leafdata());
    if (locifarpinpkts.is_set || is_set(locifarpinpkts.yfilter)) leaf_name_data.push_back(locifarpinpkts.get_name_leafdata());
    if (locifarpoutpkts.is_set || is_set(locifarpoutpkts.yfilter)) leaf_name_data.push_back(locifarpoutpkts.get_name_leafdata());
    if (locifarpinoctets.is_set || is_set(locifarpinoctets.yfilter)) leaf_name_data.push_back(locifarpinoctets.get_name_leafdata());
    if (locifarpoutoctets.is_set || is_set(locifarpoutoctets.yfilter)) leaf_name_data.push_back(locifarpoutoctets.get_name_leafdata());
    if (locifprobeinpkts.is_set || is_set(locifprobeinpkts.yfilter)) leaf_name_data.push_back(locifprobeinpkts.get_name_leafdata());
    if (locifprobeoutpkts.is_set || is_set(locifprobeoutpkts.yfilter)) leaf_name_data.push_back(locifprobeoutpkts.get_name_leafdata());
    if (locifprobeinoctets.is_set || is_set(locifprobeinoctets.yfilter)) leaf_name_data.push_back(locifprobeinoctets.get_name_leafdata());
    if (locifprobeoutoctets.is_set || is_set(locifprobeoutoctets.yfilter)) leaf_name_data.push_back(locifprobeoutoctets.get_name_leafdata());
    if (locifdribbleinputs.is_set || is_set(locifdribbleinputs.yfilter)) leaf_name_data.push_back(locifdribbleinputs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OLDCISCOINTERFACESMIB::LifTable::LifEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OLDCISCOINTERFACESMIB::LifTable::LifEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OLDCISCOINTERFACESMIB::LifTable::LifEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfHardType")
    {
        locifhardtype = value;
        locifhardtype.value_namespace = name_space;
        locifhardtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfLineProt")
    {
        lociflineprot = value;
        lociflineprot.value_namespace = name_space;
        lociflineprot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfLastIn")
    {
        lociflastin = value;
        lociflastin.value_namespace = name_space;
        lociflastin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfLastOut")
    {
        lociflastout = value;
        lociflastout.value_namespace = name_space;
        lociflastout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfLastOutHang")
    {
        lociflastouthang = value;
        lociflastouthang.value_namespace = name_space;
        lociflastouthang.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfInBitsSec")
    {
        locifinbitssec = value;
        locifinbitssec.value_namespace = name_space;
        locifinbitssec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfInPktsSec")
    {
        locifinpktssec = value;
        locifinpktssec.value_namespace = name_space;
        locifinpktssec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfOutBitsSec")
    {
        locifoutbitssec = value;
        locifoutbitssec.value_namespace = name_space;
        locifoutbitssec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfOutPktsSec")
    {
        locifoutpktssec = value;
        locifoutpktssec.value_namespace = name_space;
        locifoutpktssec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfInRunts")
    {
        locifinrunts = value;
        locifinrunts.value_namespace = name_space;
        locifinrunts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfInGiants")
    {
        locifingiants = value;
        locifingiants.value_namespace = name_space;
        locifingiants.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfInCRC")
    {
        locifincrc = value;
        locifincrc.value_namespace = name_space;
        locifincrc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfInFrame")
    {
        locifinframe = value;
        locifinframe.value_namespace = name_space;
        locifinframe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfInOverrun")
    {
        locifinoverrun = value;
        locifinoverrun.value_namespace = name_space;
        locifinoverrun.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfInIgnored")
    {
        locifinignored = value;
        locifinignored.value_namespace = name_space;
        locifinignored.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfInAbort")
    {
        locifinabort = value;
        locifinabort.value_namespace = name_space;
        locifinabort.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfResets")
    {
        locifresets = value;
        locifresets.value_namespace = name_space;
        locifresets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfRestarts")
    {
        locifrestarts = value;
        locifrestarts.value_namespace = name_space;
        locifrestarts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfKeep")
    {
        locifkeep = value;
        locifkeep.value_namespace = name_space;
        locifkeep.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfReason")
    {
        locifreason = value;
        locifreason.value_namespace = name_space;
        locifreason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfCarTrans")
    {
        locifcartrans = value;
        locifcartrans.value_namespace = name_space;
        locifcartrans.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfReliab")
    {
        locifreliab = value;
        locifreliab.value_namespace = name_space;
        locifreliab.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfDelay")
    {
        locifdelay = value;
        locifdelay.value_namespace = name_space;
        locifdelay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfLoad")
    {
        locifload = value;
        locifload.value_namespace = name_space;
        locifload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfCollisions")
    {
        locifcollisions = value;
        locifcollisions.value_namespace = name_space;
        locifcollisions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfInputQueueDrops")
    {
        locifinputqueuedrops = value;
        locifinputqueuedrops.value_namespace = name_space;
        locifinputqueuedrops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfOutputQueueDrops")
    {
        locifoutputqueuedrops = value;
        locifoutputqueuedrops.value_namespace = name_space;
        locifoutputqueuedrops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfDescr")
    {
        locifdescr = value;
        locifdescr.value_namespace = name_space;
        locifdescr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfSlowInPkts")
    {
        locifslowinpkts = value;
        locifslowinpkts.value_namespace = name_space;
        locifslowinpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfSlowOutPkts")
    {
        locifslowoutpkts = value;
        locifslowoutpkts.value_namespace = name_space;
        locifslowoutpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfSlowInOctets")
    {
        locifslowinoctets = value;
        locifslowinoctets.value_namespace = name_space;
        locifslowinoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfSlowOutOctets")
    {
        locifslowoutoctets = value;
        locifslowoutoctets.value_namespace = name_space;
        locifslowoutoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfFastInPkts")
    {
        lociffastinpkts = value;
        lociffastinpkts.value_namespace = name_space;
        lociffastinpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfFastOutPkts")
    {
        lociffastoutpkts = value;
        lociffastoutpkts.value_namespace = name_space;
        lociffastoutpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfFastInOctets")
    {
        lociffastinoctets = value;
        lociffastinoctets.value_namespace = name_space;
        lociffastinoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfFastOutOctets")
    {
        lociffastoutoctets = value;
        lociffastoutoctets.value_namespace = name_space;
        lociffastoutoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfotherInPkts")
    {
        locifotherinpkts = value;
        locifotherinpkts.value_namespace = name_space;
        locifotherinpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfotherOutPkts")
    {
        locifotheroutpkts = value;
        locifotheroutpkts.value_namespace = name_space;
        locifotheroutpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfotherInOctets")
    {
        locifotherinoctets = value;
        locifotherinoctets.value_namespace = name_space;
        locifotherinoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfotherOutOctets")
    {
        locifotheroutoctets = value;
        locifotheroutoctets.value_namespace = name_space;
        locifotheroutoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfipInPkts")
    {
        locifipinpkts = value;
        locifipinpkts.value_namespace = name_space;
        locifipinpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfipOutPkts")
    {
        locifipoutpkts = value;
        locifipoutpkts.value_namespace = name_space;
        locifipoutpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfipInOctets")
    {
        locifipinoctets = value;
        locifipinoctets.value_namespace = name_space;
        locifipinoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfipOutOctets")
    {
        locifipoutoctets = value;
        locifipoutoctets.value_namespace = name_space;
        locifipoutoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfdecnetInPkts")
    {
        locifdecnetinpkts = value;
        locifdecnetinpkts.value_namespace = name_space;
        locifdecnetinpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfdecnetOutPkts")
    {
        locifdecnetoutpkts = value;
        locifdecnetoutpkts.value_namespace = name_space;
        locifdecnetoutpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfdecnetInOctets")
    {
        locifdecnetinoctets = value;
        locifdecnetinoctets.value_namespace = name_space;
        locifdecnetinoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfdecnetOutOctets")
    {
        locifdecnetoutoctets = value;
        locifdecnetoutoctets.value_namespace = name_space;
        locifdecnetoutoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfxnsInPkts")
    {
        locifxnsinpkts = value;
        locifxnsinpkts.value_namespace = name_space;
        locifxnsinpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfxnsOutPkts")
    {
        locifxnsoutpkts = value;
        locifxnsoutpkts.value_namespace = name_space;
        locifxnsoutpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfxnsInOctets")
    {
        locifxnsinoctets = value;
        locifxnsinoctets.value_namespace = name_space;
        locifxnsinoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfxnsOutOctets")
    {
        locifxnsoutoctets = value;
        locifxnsoutoctets.value_namespace = name_space;
        locifxnsoutoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfclnsInPkts")
    {
        locifclnsinpkts = value;
        locifclnsinpkts.value_namespace = name_space;
        locifclnsinpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfclnsOutPkts")
    {
        locifclnsoutpkts = value;
        locifclnsoutpkts.value_namespace = name_space;
        locifclnsoutpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfclnsInOctets")
    {
        locifclnsinoctets = value;
        locifclnsinoctets.value_namespace = name_space;
        locifclnsinoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfclnsOutOctets")
    {
        locifclnsoutoctets = value;
        locifclnsoutoctets.value_namespace = name_space;
        locifclnsoutoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfappletalkInPkts")
    {
        locifappletalkinpkts = value;
        locifappletalkinpkts.value_namespace = name_space;
        locifappletalkinpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfappletalkOutPkts")
    {
        locifappletalkoutpkts = value;
        locifappletalkoutpkts.value_namespace = name_space;
        locifappletalkoutpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfappletalkInOctets")
    {
        locifappletalkinoctets = value;
        locifappletalkinoctets.value_namespace = name_space;
        locifappletalkinoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfappletalkOutOctets")
    {
        locifappletalkoutoctets = value;
        locifappletalkoutoctets.value_namespace = name_space;
        locifappletalkoutoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfnovellInPkts")
    {
        locifnovellinpkts = value;
        locifnovellinpkts.value_namespace = name_space;
        locifnovellinpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfnovellOutPkts")
    {
        locifnovelloutpkts = value;
        locifnovelloutpkts.value_namespace = name_space;
        locifnovelloutpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfnovellInOctets")
    {
        locifnovellinoctets = value;
        locifnovellinoctets.value_namespace = name_space;
        locifnovellinoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfnovellOutOctets")
    {
        locifnovelloutoctets = value;
        locifnovelloutoctets.value_namespace = name_space;
        locifnovelloutoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfapolloInPkts")
    {
        locifapolloinpkts = value;
        locifapolloinpkts.value_namespace = name_space;
        locifapolloinpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfapolloOutPkts")
    {
        locifapollooutpkts = value;
        locifapollooutpkts.value_namespace = name_space;
        locifapollooutpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfapolloInOctets")
    {
        locifapolloinoctets = value;
        locifapolloinoctets.value_namespace = name_space;
        locifapolloinoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfapolloOutOctets")
    {
        locifapollooutoctets = value;
        locifapollooutoctets.value_namespace = name_space;
        locifapollooutoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfvinesInPkts")
    {
        locifvinesinpkts = value;
        locifvinesinpkts.value_namespace = name_space;
        locifvinesinpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfvinesOutPkts")
    {
        locifvinesoutpkts = value;
        locifvinesoutpkts.value_namespace = name_space;
        locifvinesoutpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfvinesInOctets")
    {
        locifvinesinoctets = value;
        locifvinesinoctets.value_namespace = name_space;
        locifvinesinoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfvinesOutOctets")
    {
        locifvinesoutoctets = value;
        locifvinesoutoctets.value_namespace = name_space;
        locifvinesoutoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfbridgedInPkts")
    {
        locifbridgedinpkts = value;
        locifbridgedinpkts.value_namespace = name_space;
        locifbridgedinpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfbridgedOutPkts")
    {
        locifbridgedoutpkts = value;
        locifbridgedoutpkts.value_namespace = name_space;
        locifbridgedoutpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfbridgedInOctets")
    {
        locifbridgedinoctets = value;
        locifbridgedinoctets.value_namespace = name_space;
        locifbridgedinoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfbridgedOutOctets")
    {
        locifbridgedoutoctets = value;
        locifbridgedoutoctets.value_namespace = name_space;
        locifbridgedoutoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfsrbInPkts")
    {
        locifsrbinpkts = value;
        locifsrbinpkts.value_namespace = name_space;
        locifsrbinpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfsrbOutPkts")
    {
        locifsrboutpkts = value;
        locifsrboutpkts.value_namespace = name_space;
        locifsrboutpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfsrbInOctets")
    {
        locifsrbinoctets = value;
        locifsrbinoctets.value_namespace = name_space;
        locifsrbinoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfsrbOutOctets")
    {
        locifsrboutoctets = value;
        locifsrboutoctets.value_namespace = name_space;
        locifsrboutoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfchaosInPkts")
    {
        locifchaosinpkts = value;
        locifchaosinpkts.value_namespace = name_space;
        locifchaosinpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfchaosOutPkts")
    {
        locifchaosoutpkts = value;
        locifchaosoutpkts.value_namespace = name_space;
        locifchaosoutpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfchaosInOctets")
    {
        locifchaosinoctets = value;
        locifchaosinoctets.value_namespace = name_space;
        locifchaosinoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfchaosOutOctets")
    {
        locifchaosoutoctets = value;
        locifchaosoutoctets.value_namespace = name_space;
        locifchaosoutoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfpupInPkts")
    {
        locifpupinpkts = value;
        locifpupinpkts.value_namespace = name_space;
        locifpupinpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfpupOutPkts")
    {
        locifpupoutpkts = value;
        locifpupoutpkts.value_namespace = name_space;
        locifpupoutpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfpupInOctets")
    {
        locifpupinoctets = value;
        locifpupinoctets.value_namespace = name_space;
        locifpupinoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfpupOutOctets")
    {
        locifpupoutoctets = value;
        locifpupoutoctets.value_namespace = name_space;
        locifpupoutoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfmopInPkts")
    {
        locifmopinpkts = value;
        locifmopinpkts.value_namespace = name_space;
        locifmopinpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfmopOutPkts")
    {
        locifmopoutpkts = value;
        locifmopoutpkts.value_namespace = name_space;
        locifmopoutpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfmopInOctets")
    {
        locifmopinoctets = value;
        locifmopinoctets.value_namespace = name_space;
        locifmopinoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfmopOutOctets")
    {
        locifmopoutoctets = value;
        locifmopoutoctets.value_namespace = name_space;
        locifmopoutoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIflanmanInPkts")
    {
        lociflanmaninpkts = value;
        lociflanmaninpkts.value_namespace = name_space;
        lociflanmaninpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIflanmanOutPkts")
    {
        lociflanmanoutpkts = value;
        lociflanmanoutpkts.value_namespace = name_space;
        lociflanmanoutpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIflanmanInOctets")
    {
        lociflanmaninoctets = value;
        lociflanmaninoctets.value_namespace = name_space;
        lociflanmaninoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIflanmanOutOctets")
    {
        lociflanmanoutoctets = value;
        lociflanmanoutoctets.value_namespace = name_space;
        lociflanmanoutoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfstunInPkts")
    {
        locifstuninpkts = value;
        locifstuninpkts.value_namespace = name_space;
        locifstuninpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfstunOutPkts")
    {
        locifstunoutpkts = value;
        locifstunoutpkts.value_namespace = name_space;
        locifstunoutpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfstunInOctets")
    {
        locifstuninoctets = value;
        locifstuninoctets.value_namespace = name_space;
        locifstuninoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfstunOutOctets")
    {
        locifstunoutoctets = value;
        locifstunoutoctets.value_namespace = name_space;
        locifstunoutoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfspanInPkts")
    {
        locifspaninpkts = value;
        locifspaninpkts.value_namespace = name_space;
        locifspaninpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfspanOutPkts")
    {
        locifspanoutpkts = value;
        locifspanoutpkts.value_namespace = name_space;
        locifspanoutpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfspanInOctets")
    {
        locifspaninoctets = value;
        locifspaninoctets.value_namespace = name_space;
        locifspaninoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfspanOutOctets")
    {
        locifspanoutoctets = value;
        locifspanoutoctets.value_namespace = name_space;
        locifspanoutoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfarpInPkts")
    {
        locifarpinpkts = value;
        locifarpinpkts.value_namespace = name_space;
        locifarpinpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfarpOutPkts")
    {
        locifarpoutpkts = value;
        locifarpoutpkts.value_namespace = name_space;
        locifarpoutpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfarpInOctets")
    {
        locifarpinoctets = value;
        locifarpinoctets.value_namespace = name_space;
        locifarpinoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfarpOutOctets")
    {
        locifarpoutoctets = value;
        locifarpoutoctets.value_namespace = name_space;
        locifarpoutoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfprobeInPkts")
    {
        locifprobeinpkts = value;
        locifprobeinpkts.value_namespace = name_space;
        locifprobeinpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfprobeOutPkts")
    {
        locifprobeoutpkts = value;
        locifprobeoutpkts.value_namespace = name_space;
        locifprobeoutpkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfprobeInOctets")
    {
        locifprobeinoctets = value;
        locifprobeinoctets.value_namespace = name_space;
        locifprobeinoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfprobeOutOctets")
    {
        locifprobeoutoctets = value;
        locifprobeoutoctets.value_namespace = name_space;
        locifprobeoutoctets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfDribbleInputs")
    {
        locifdribbleinputs = value;
        locifdribbleinputs.value_namespace = name_space;
        locifdribbleinputs.value_namespace_prefix = name_space_prefix;
    }
}

void OLDCISCOINTERFACESMIB::LifTable::LifEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "locIfHardType")
    {
        locifhardtype.yfilter = yfilter;
    }
    if(value_path == "locIfLineProt")
    {
        lociflineprot.yfilter = yfilter;
    }
    if(value_path == "locIfLastIn")
    {
        lociflastin.yfilter = yfilter;
    }
    if(value_path == "locIfLastOut")
    {
        lociflastout.yfilter = yfilter;
    }
    if(value_path == "locIfLastOutHang")
    {
        lociflastouthang.yfilter = yfilter;
    }
    if(value_path == "locIfInBitsSec")
    {
        locifinbitssec.yfilter = yfilter;
    }
    if(value_path == "locIfInPktsSec")
    {
        locifinpktssec.yfilter = yfilter;
    }
    if(value_path == "locIfOutBitsSec")
    {
        locifoutbitssec.yfilter = yfilter;
    }
    if(value_path == "locIfOutPktsSec")
    {
        locifoutpktssec.yfilter = yfilter;
    }
    if(value_path == "locIfInRunts")
    {
        locifinrunts.yfilter = yfilter;
    }
    if(value_path == "locIfInGiants")
    {
        locifingiants.yfilter = yfilter;
    }
    if(value_path == "locIfInCRC")
    {
        locifincrc.yfilter = yfilter;
    }
    if(value_path == "locIfInFrame")
    {
        locifinframe.yfilter = yfilter;
    }
    if(value_path == "locIfInOverrun")
    {
        locifinoverrun.yfilter = yfilter;
    }
    if(value_path == "locIfInIgnored")
    {
        locifinignored.yfilter = yfilter;
    }
    if(value_path == "locIfInAbort")
    {
        locifinabort.yfilter = yfilter;
    }
    if(value_path == "locIfResets")
    {
        locifresets.yfilter = yfilter;
    }
    if(value_path == "locIfRestarts")
    {
        locifrestarts.yfilter = yfilter;
    }
    if(value_path == "locIfKeep")
    {
        locifkeep.yfilter = yfilter;
    }
    if(value_path == "locIfReason")
    {
        locifreason.yfilter = yfilter;
    }
    if(value_path == "locIfCarTrans")
    {
        locifcartrans.yfilter = yfilter;
    }
    if(value_path == "locIfReliab")
    {
        locifreliab.yfilter = yfilter;
    }
    if(value_path == "locIfDelay")
    {
        locifdelay.yfilter = yfilter;
    }
    if(value_path == "locIfLoad")
    {
        locifload.yfilter = yfilter;
    }
    if(value_path == "locIfCollisions")
    {
        locifcollisions.yfilter = yfilter;
    }
    if(value_path == "locIfInputQueueDrops")
    {
        locifinputqueuedrops.yfilter = yfilter;
    }
    if(value_path == "locIfOutputQueueDrops")
    {
        locifoutputqueuedrops.yfilter = yfilter;
    }
    if(value_path == "locIfDescr")
    {
        locifdescr.yfilter = yfilter;
    }
    if(value_path == "locIfSlowInPkts")
    {
        locifslowinpkts.yfilter = yfilter;
    }
    if(value_path == "locIfSlowOutPkts")
    {
        locifslowoutpkts.yfilter = yfilter;
    }
    if(value_path == "locIfSlowInOctets")
    {
        locifslowinoctets.yfilter = yfilter;
    }
    if(value_path == "locIfSlowOutOctets")
    {
        locifslowoutoctets.yfilter = yfilter;
    }
    if(value_path == "locIfFastInPkts")
    {
        lociffastinpkts.yfilter = yfilter;
    }
    if(value_path == "locIfFastOutPkts")
    {
        lociffastoutpkts.yfilter = yfilter;
    }
    if(value_path == "locIfFastInOctets")
    {
        lociffastinoctets.yfilter = yfilter;
    }
    if(value_path == "locIfFastOutOctets")
    {
        lociffastoutoctets.yfilter = yfilter;
    }
    if(value_path == "locIfotherInPkts")
    {
        locifotherinpkts.yfilter = yfilter;
    }
    if(value_path == "locIfotherOutPkts")
    {
        locifotheroutpkts.yfilter = yfilter;
    }
    if(value_path == "locIfotherInOctets")
    {
        locifotherinoctets.yfilter = yfilter;
    }
    if(value_path == "locIfotherOutOctets")
    {
        locifotheroutoctets.yfilter = yfilter;
    }
    if(value_path == "locIfipInPkts")
    {
        locifipinpkts.yfilter = yfilter;
    }
    if(value_path == "locIfipOutPkts")
    {
        locifipoutpkts.yfilter = yfilter;
    }
    if(value_path == "locIfipInOctets")
    {
        locifipinoctets.yfilter = yfilter;
    }
    if(value_path == "locIfipOutOctets")
    {
        locifipoutoctets.yfilter = yfilter;
    }
    if(value_path == "locIfdecnetInPkts")
    {
        locifdecnetinpkts.yfilter = yfilter;
    }
    if(value_path == "locIfdecnetOutPkts")
    {
        locifdecnetoutpkts.yfilter = yfilter;
    }
    if(value_path == "locIfdecnetInOctets")
    {
        locifdecnetinoctets.yfilter = yfilter;
    }
    if(value_path == "locIfdecnetOutOctets")
    {
        locifdecnetoutoctets.yfilter = yfilter;
    }
    if(value_path == "locIfxnsInPkts")
    {
        locifxnsinpkts.yfilter = yfilter;
    }
    if(value_path == "locIfxnsOutPkts")
    {
        locifxnsoutpkts.yfilter = yfilter;
    }
    if(value_path == "locIfxnsInOctets")
    {
        locifxnsinoctets.yfilter = yfilter;
    }
    if(value_path == "locIfxnsOutOctets")
    {
        locifxnsoutoctets.yfilter = yfilter;
    }
    if(value_path == "locIfclnsInPkts")
    {
        locifclnsinpkts.yfilter = yfilter;
    }
    if(value_path == "locIfclnsOutPkts")
    {
        locifclnsoutpkts.yfilter = yfilter;
    }
    if(value_path == "locIfclnsInOctets")
    {
        locifclnsinoctets.yfilter = yfilter;
    }
    if(value_path == "locIfclnsOutOctets")
    {
        locifclnsoutoctets.yfilter = yfilter;
    }
    if(value_path == "locIfappletalkInPkts")
    {
        locifappletalkinpkts.yfilter = yfilter;
    }
    if(value_path == "locIfappletalkOutPkts")
    {
        locifappletalkoutpkts.yfilter = yfilter;
    }
    if(value_path == "locIfappletalkInOctets")
    {
        locifappletalkinoctets.yfilter = yfilter;
    }
    if(value_path == "locIfappletalkOutOctets")
    {
        locifappletalkoutoctets.yfilter = yfilter;
    }
    if(value_path == "locIfnovellInPkts")
    {
        locifnovellinpkts.yfilter = yfilter;
    }
    if(value_path == "locIfnovellOutPkts")
    {
        locifnovelloutpkts.yfilter = yfilter;
    }
    if(value_path == "locIfnovellInOctets")
    {
        locifnovellinoctets.yfilter = yfilter;
    }
    if(value_path == "locIfnovellOutOctets")
    {
        locifnovelloutoctets.yfilter = yfilter;
    }
    if(value_path == "locIfapolloInPkts")
    {
        locifapolloinpkts.yfilter = yfilter;
    }
    if(value_path == "locIfapolloOutPkts")
    {
        locifapollooutpkts.yfilter = yfilter;
    }
    if(value_path == "locIfapolloInOctets")
    {
        locifapolloinoctets.yfilter = yfilter;
    }
    if(value_path == "locIfapolloOutOctets")
    {
        locifapollooutoctets.yfilter = yfilter;
    }
    if(value_path == "locIfvinesInPkts")
    {
        locifvinesinpkts.yfilter = yfilter;
    }
    if(value_path == "locIfvinesOutPkts")
    {
        locifvinesoutpkts.yfilter = yfilter;
    }
    if(value_path == "locIfvinesInOctets")
    {
        locifvinesinoctets.yfilter = yfilter;
    }
    if(value_path == "locIfvinesOutOctets")
    {
        locifvinesoutoctets.yfilter = yfilter;
    }
    if(value_path == "locIfbridgedInPkts")
    {
        locifbridgedinpkts.yfilter = yfilter;
    }
    if(value_path == "locIfbridgedOutPkts")
    {
        locifbridgedoutpkts.yfilter = yfilter;
    }
    if(value_path == "locIfbridgedInOctets")
    {
        locifbridgedinoctets.yfilter = yfilter;
    }
    if(value_path == "locIfbridgedOutOctets")
    {
        locifbridgedoutoctets.yfilter = yfilter;
    }
    if(value_path == "locIfsrbInPkts")
    {
        locifsrbinpkts.yfilter = yfilter;
    }
    if(value_path == "locIfsrbOutPkts")
    {
        locifsrboutpkts.yfilter = yfilter;
    }
    if(value_path == "locIfsrbInOctets")
    {
        locifsrbinoctets.yfilter = yfilter;
    }
    if(value_path == "locIfsrbOutOctets")
    {
        locifsrboutoctets.yfilter = yfilter;
    }
    if(value_path == "locIfchaosInPkts")
    {
        locifchaosinpkts.yfilter = yfilter;
    }
    if(value_path == "locIfchaosOutPkts")
    {
        locifchaosoutpkts.yfilter = yfilter;
    }
    if(value_path == "locIfchaosInOctets")
    {
        locifchaosinoctets.yfilter = yfilter;
    }
    if(value_path == "locIfchaosOutOctets")
    {
        locifchaosoutoctets.yfilter = yfilter;
    }
    if(value_path == "locIfpupInPkts")
    {
        locifpupinpkts.yfilter = yfilter;
    }
    if(value_path == "locIfpupOutPkts")
    {
        locifpupoutpkts.yfilter = yfilter;
    }
    if(value_path == "locIfpupInOctets")
    {
        locifpupinoctets.yfilter = yfilter;
    }
    if(value_path == "locIfpupOutOctets")
    {
        locifpupoutoctets.yfilter = yfilter;
    }
    if(value_path == "locIfmopInPkts")
    {
        locifmopinpkts.yfilter = yfilter;
    }
    if(value_path == "locIfmopOutPkts")
    {
        locifmopoutpkts.yfilter = yfilter;
    }
    if(value_path == "locIfmopInOctets")
    {
        locifmopinoctets.yfilter = yfilter;
    }
    if(value_path == "locIfmopOutOctets")
    {
        locifmopoutoctets.yfilter = yfilter;
    }
    if(value_path == "locIflanmanInPkts")
    {
        lociflanmaninpkts.yfilter = yfilter;
    }
    if(value_path == "locIflanmanOutPkts")
    {
        lociflanmanoutpkts.yfilter = yfilter;
    }
    if(value_path == "locIflanmanInOctets")
    {
        lociflanmaninoctets.yfilter = yfilter;
    }
    if(value_path == "locIflanmanOutOctets")
    {
        lociflanmanoutoctets.yfilter = yfilter;
    }
    if(value_path == "locIfstunInPkts")
    {
        locifstuninpkts.yfilter = yfilter;
    }
    if(value_path == "locIfstunOutPkts")
    {
        locifstunoutpkts.yfilter = yfilter;
    }
    if(value_path == "locIfstunInOctets")
    {
        locifstuninoctets.yfilter = yfilter;
    }
    if(value_path == "locIfstunOutOctets")
    {
        locifstunoutoctets.yfilter = yfilter;
    }
    if(value_path == "locIfspanInPkts")
    {
        locifspaninpkts.yfilter = yfilter;
    }
    if(value_path == "locIfspanOutPkts")
    {
        locifspanoutpkts.yfilter = yfilter;
    }
    if(value_path == "locIfspanInOctets")
    {
        locifspaninoctets.yfilter = yfilter;
    }
    if(value_path == "locIfspanOutOctets")
    {
        locifspanoutoctets.yfilter = yfilter;
    }
    if(value_path == "locIfarpInPkts")
    {
        locifarpinpkts.yfilter = yfilter;
    }
    if(value_path == "locIfarpOutPkts")
    {
        locifarpoutpkts.yfilter = yfilter;
    }
    if(value_path == "locIfarpInOctets")
    {
        locifarpinoctets.yfilter = yfilter;
    }
    if(value_path == "locIfarpOutOctets")
    {
        locifarpoutoctets.yfilter = yfilter;
    }
    if(value_path == "locIfprobeInPkts")
    {
        locifprobeinpkts.yfilter = yfilter;
    }
    if(value_path == "locIfprobeOutPkts")
    {
        locifprobeoutpkts.yfilter = yfilter;
    }
    if(value_path == "locIfprobeInOctets")
    {
        locifprobeinoctets.yfilter = yfilter;
    }
    if(value_path == "locIfprobeOutOctets")
    {
        locifprobeoutoctets.yfilter = yfilter;
    }
    if(value_path == "locIfDribbleInputs")
    {
        locifdribbleinputs.yfilter = yfilter;
    }
}

bool OLDCISCOINTERFACESMIB::LifTable::LifEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "locIfHardType" || name == "locIfLineProt" || name == "locIfLastIn" || name == "locIfLastOut" || name == "locIfLastOutHang" || name == "locIfInBitsSec" || name == "locIfInPktsSec" || name == "locIfOutBitsSec" || name == "locIfOutPktsSec" || name == "locIfInRunts" || name == "locIfInGiants" || name == "locIfInCRC" || name == "locIfInFrame" || name == "locIfInOverrun" || name == "locIfInIgnored" || name == "locIfInAbort" || name == "locIfResets" || name == "locIfRestarts" || name == "locIfKeep" || name == "locIfReason" || name == "locIfCarTrans" || name == "locIfReliab" || name == "locIfDelay" || name == "locIfLoad" || name == "locIfCollisions" || name == "locIfInputQueueDrops" || name == "locIfOutputQueueDrops" || name == "locIfDescr" || name == "locIfSlowInPkts" || name == "locIfSlowOutPkts" || name == "locIfSlowInOctets" || name == "locIfSlowOutOctets" || name == "locIfFastInPkts" || name == "locIfFastOutPkts" || name == "locIfFastInOctets" || name == "locIfFastOutOctets" || name == "locIfotherInPkts" || name == "locIfotherOutPkts" || name == "locIfotherInOctets" || name == "locIfotherOutOctets" || name == "locIfipInPkts" || name == "locIfipOutPkts" || name == "locIfipInOctets" || name == "locIfipOutOctets" || name == "locIfdecnetInPkts" || name == "locIfdecnetOutPkts" || name == "locIfdecnetInOctets" || name == "locIfdecnetOutOctets" || name == "locIfxnsInPkts" || name == "locIfxnsOutPkts" || name == "locIfxnsInOctets" || name == "locIfxnsOutOctets" || name == "locIfclnsInPkts" || name == "locIfclnsOutPkts" || name == "locIfclnsInOctets" || name == "locIfclnsOutOctets" || name == "locIfappletalkInPkts" || name == "locIfappletalkOutPkts" || name == "locIfappletalkInOctets" || name == "locIfappletalkOutOctets" || name == "locIfnovellInPkts" || name == "locIfnovellOutPkts" || name == "locIfnovellInOctets" || name == "locIfnovellOutOctets" || name == "locIfapolloInPkts" || name == "locIfapolloOutPkts" || name == "locIfapolloInOctets" || name == "locIfapolloOutOctets" || name == "locIfvinesInPkts" || name == "locIfvinesOutPkts" || name == "locIfvinesInOctets" || name == "locIfvinesOutOctets" || name == "locIfbridgedInPkts" || name == "locIfbridgedOutPkts" || name == "locIfbridgedInOctets" || name == "locIfbridgedOutOctets" || name == "locIfsrbInPkts" || name == "locIfsrbOutPkts" || name == "locIfsrbInOctets" || name == "locIfsrbOutOctets" || name == "locIfchaosInPkts" || name == "locIfchaosOutPkts" || name == "locIfchaosInOctets" || name == "locIfchaosOutOctets" || name == "locIfpupInPkts" || name == "locIfpupOutPkts" || name == "locIfpupInOctets" || name == "locIfpupOutOctets" || name == "locIfmopInPkts" || name == "locIfmopOutPkts" || name == "locIfmopInOctets" || name == "locIfmopOutOctets" || name == "locIflanmanInPkts" || name == "locIflanmanOutPkts" || name == "locIflanmanInOctets" || name == "locIflanmanOutOctets" || name == "locIfstunInPkts" || name == "locIfstunOutPkts" || name == "locIfstunInOctets" || name == "locIfstunOutOctets" || name == "locIfspanInPkts" || name == "locIfspanOutPkts" || name == "locIfspanInOctets" || name == "locIfspanOutOctets" || name == "locIfarpInPkts" || name == "locIfarpOutPkts" || name == "locIfarpInOctets" || name == "locIfarpOutOctets" || name == "locIfprobeInPkts" || name == "locIfprobeOutPkts" || name == "locIfprobeInOctets" || name == "locIfprobeOutOctets" || name == "locIfDribbleInputs")
        return true;
    return false;
}

OLDCISCOINTERFACESMIB::LFSIPTable::LFSIPTable()
    :
    lfsipentry(this, {"lociffsipindex"})
{

    yang_name = "lFSIPTable"; yang_parent_name = "OLD-CISCO-INTERFACES-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

OLDCISCOINTERFACESMIB::LFSIPTable::~LFSIPTable()
{
}

bool OLDCISCOINTERFACESMIB::LFSIPTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lfsipentry.len(); index++)
    {
        if(lfsipentry[index]->has_data())
            return true;
    }
    return false;
}

bool OLDCISCOINTERFACESMIB::LFSIPTable::has_operation() const
{
    for (std::size_t index=0; index<lfsipentry.len(); index++)
    {
        if(lfsipentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string OLDCISCOINTERFACESMIB::LFSIPTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OLD-CISCO-INTERFACES-MIB:OLD-CISCO-INTERFACES-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string OLDCISCOINTERFACESMIB::LFSIPTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lFSIPTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OLDCISCOINTERFACESMIB::LFSIPTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> OLDCISCOINTERFACESMIB::LFSIPTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lFSIPEntry")
    {
        auto c = std::make_shared<OLDCISCOINTERFACESMIB::LFSIPTable::LFSIPEntry>();
        c->parent = this;
        lfsipentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OLDCISCOINTERFACESMIB::LFSIPTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : lfsipentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void OLDCISCOINTERFACESMIB::LFSIPTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void OLDCISCOINTERFACESMIB::LFSIPTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool OLDCISCOINTERFACESMIB::LFSIPTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lFSIPEntry")
        return true;
    return false;
}

OLDCISCOINTERFACESMIB::LFSIPTable::LFSIPEntry::LFSIPEntry()
    :
    lociffsipindex{YType::int32, "locIfFSIPIndex"},
    lociffsiptype{YType::enumeration, "locIfFSIPtype"},
    lociffsiprts{YType::enumeration, "locIfFSIPrts"},
    lociffsipcts{YType::enumeration, "locIfFSIPcts"},
    lociffsipdtr{YType::enumeration, "locIfFSIPdtr"},
    lociffsipdcd{YType::enumeration, "locIfFSIPdcd"},
    lociffsipdsr{YType::enumeration, "locIfFSIPdsr"},
    lociffsiprxclockrate{YType::int32, "locIfFSIPrxClockrate"},
    lociffsiprxclockratehi{YType::int32, "locIfFSIPrxClockrateHi"},
    lociffsipporttype{YType::enumeration, "locIfFSIPportType"}
{

    yang_name = "lFSIPEntry"; yang_parent_name = "lFSIPTable"; is_top_level_class = false; has_list_ancestor = false; 
}

OLDCISCOINTERFACESMIB::LFSIPTable::LFSIPEntry::~LFSIPEntry()
{
}

bool OLDCISCOINTERFACESMIB::LFSIPTable::LFSIPEntry::has_data() const
{
    if (is_presence_container) return true;
    return lociffsipindex.is_set
	|| lociffsiptype.is_set
	|| lociffsiprts.is_set
	|| lociffsipcts.is_set
	|| lociffsipdtr.is_set
	|| lociffsipdcd.is_set
	|| lociffsipdsr.is_set
	|| lociffsiprxclockrate.is_set
	|| lociffsiprxclockratehi.is_set
	|| lociffsipporttype.is_set;
}

bool OLDCISCOINTERFACESMIB::LFSIPTable::LFSIPEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lociffsipindex.yfilter)
	|| ydk::is_set(lociffsiptype.yfilter)
	|| ydk::is_set(lociffsiprts.yfilter)
	|| ydk::is_set(lociffsipcts.yfilter)
	|| ydk::is_set(lociffsipdtr.yfilter)
	|| ydk::is_set(lociffsipdcd.yfilter)
	|| ydk::is_set(lociffsipdsr.yfilter)
	|| ydk::is_set(lociffsiprxclockrate.yfilter)
	|| ydk::is_set(lociffsiprxclockratehi.yfilter)
	|| ydk::is_set(lociffsipporttype.yfilter);
}

std::string OLDCISCOINTERFACESMIB::LFSIPTable::LFSIPEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "OLD-CISCO-INTERFACES-MIB:OLD-CISCO-INTERFACES-MIB/lFSIPTable/" << get_segment_path();
    return path_buffer.str();
}

std::string OLDCISCOINTERFACESMIB::LFSIPTable::LFSIPEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lFSIPEntry";
    ADD_KEY_TOKEN(lociffsipindex, "locIfFSIPIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > OLDCISCOINTERFACESMIB::LFSIPTable::LFSIPEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lociffsipindex.is_set || is_set(lociffsipindex.yfilter)) leaf_name_data.push_back(lociffsipindex.get_name_leafdata());
    if (lociffsiptype.is_set || is_set(lociffsiptype.yfilter)) leaf_name_data.push_back(lociffsiptype.get_name_leafdata());
    if (lociffsiprts.is_set || is_set(lociffsiprts.yfilter)) leaf_name_data.push_back(lociffsiprts.get_name_leafdata());
    if (lociffsipcts.is_set || is_set(lociffsipcts.yfilter)) leaf_name_data.push_back(lociffsipcts.get_name_leafdata());
    if (lociffsipdtr.is_set || is_set(lociffsipdtr.yfilter)) leaf_name_data.push_back(lociffsipdtr.get_name_leafdata());
    if (lociffsipdcd.is_set || is_set(lociffsipdcd.yfilter)) leaf_name_data.push_back(lociffsipdcd.get_name_leafdata());
    if (lociffsipdsr.is_set || is_set(lociffsipdsr.yfilter)) leaf_name_data.push_back(lociffsipdsr.get_name_leafdata());
    if (lociffsiprxclockrate.is_set || is_set(lociffsiprxclockrate.yfilter)) leaf_name_data.push_back(lociffsiprxclockrate.get_name_leafdata());
    if (lociffsiprxclockratehi.is_set || is_set(lociffsiprxclockratehi.yfilter)) leaf_name_data.push_back(lociffsiprxclockratehi.get_name_leafdata());
    if (lociffsipporttype.is_set || is_set(lociffsipporttype.yfilter)) leaf_name_data.push_back(lociffsipporttype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> OLDCISCOINTERFACESMIB::LFSIPTable::LFSIPEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> OLDCISCOINTERFACESMIB::LFSIPTable::LFSIPEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void OLDCISCOINTERFACESMIB::LFSIPTable::LFSIPEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "locIfFSIPIndex")
    {
        lociffsipindex = value;
        lociffsipindex.value_namespace = name_space;
        lociffsipindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfFSIPtype")
    {
        lociffsiptype = value;
        lociffsiptype.value_namespace = name_space;
        lociffsiptype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfFSIPrts")
    {
        lociffsiprts = value;
        lociffsiprts.value_namespace = name_space;
        lociffsiprts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfFSIPcts")
    {
        lociffsipcts = value;
        lociffsipcts.value_namespace = name_space;
        lociffsipcts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfFSIPdtr")
    {
        lociffsipdtr = value;
        lociffsipdtr.value_namespace = name_space;
        lociffsipdtr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfFSIPdcd")
    {
        lociffsipdcd = value;
        lociffsipdcd.value_namespace = name_space;
        lociffsipdcd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfFSIPdsr")
    {
        lociffsipdsr = value;
        lociffsipdsr.value_namespace = name_space;
        lociffsipdsr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfFSIPrxClockrate")
    {
        lociffsiprxclockrate = value;
        lociffsiprxclockrate.value_namespace = name_space;
        lociffsiprxclockrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfFSIPrxClockrateHi")
    {
        lociffsiprxclockratehi = value;
        lociffsiprxclockratehi.value_namespace = name_space;
        lociffsiprxclockratehi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "locIfFSIPportType")
    {
        lociffsipporttype = value;
        lociffsipporttype.value_namespace = name_space;
        lociffsipporttype.value_namespace_prefix = name_space_prefix;
    }
}

void OLDCISCOINTERFACESMIB::LFSIPTable::LFSIPEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "locIfFSIPIndex")
    {
        lociffsipindex.yfilter = yfilter;
    }
    if(value_path == "locIfFSIPtype")
    {
        lociffsiptype.yfilter = yfilter;
    }
    if(value_path == "locIfFSIPrts")
    {
        lociffsiprts.yfilter = yfilter;
    }
    if(value_path == "locIfFSIPcts")
    {
        lociffsipcts.yfilter = yfilter;
    }
    if(value_path == "locIfFSIPdtr")
    {
        lociffsipdtr.yfilter = yfilter;
    }
    if(value_path == "locIfFSIPdcd")
    {
        lociffsipdcd.yfilter = yfilter;
    }
    if(value_path == "locIfFSIPdsr")
    {
        lociffsipdsr.yfilter = yfilter;
    }
    if(value_path == "locIfFSIPrxClockrate")
    {
        lociffsiprxclockrate.yfilter = yfilter;
    }
    if(value_path == "locIfFSIPrxClockrateHi")
    {
        lociffsiprxclockratehi.yfilter = yfilter;
    }
    if(value_path == "locIfFSIPportType")
    {
        lociffsipporttype.yfilter = yfilter;
    }
}

bool OLDCISCOINTERFACESMIB::LFSIPTable::LFSIPEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "locIfFSIPIndex" || name == "locIfFSIPtype" || name == "locIfFSIPrts" || name == "locIfFSIPcts" || name == "locIfFSIPdtr" || name == "locIfFSIPdcd" || name == "locIfFSIPdsr" || name == "locIfFSIPrxClockrate" || name == "locIfFSIPrxClockrateHi" || name == "locIfFSIPportType")
        return true;
    return false;
}

const Enum::YLeaf OLDCISCOINTERFACESMIB::LFSIPTable::LFSIPEntry::LocIfFSIPtype::notAvailable {1, "notAvailable"};
const Enum::YLeaf OLDCISCOINTERFACESMIB::LFSIPTable::LFSIPEntry::LocIfFSIPtype::dte {2, "dte"};
const Enum::YLeaf OLDCISCOINTERFACESMIB::LFSIPTable::LFSIPEntry::LocIfFSIPtype::dce {3, "dce"};

const Enum::YLeaf OLDCISCOINTERFACESMIB::LFSIPTable::LFSIPEntry::LocIfFSIPrts::notAvailable {1, "notAvailable"};
const Enum::YLeaf OLDCISCOINTERFACESMIB::LFSIPTable::LFSIPEntry::LocIfFSIPrts::up {2, "up"};
const Enum::YLeaf OLDCISCOINTERFACESMIB::LFSIPTable::LFSIPEntry::LocIfFSIPrts::down {3, "down"};

const Enum::YLeaf OLDCISCOINTERFACESMIB::LFSIPTable::LFSIPEntry::LocIfFSIPcts::notAvailable {1, "notAvailable"};
const Enum::YLeaf OLDCISCOINTERFACESMIB::LFSIPTable::LFSIPEntry::LocIfFSIPcts::up {2, "up"};
const Enum::YLeaf OLDCISCOINTERFACESMIB::LFSIPTable::LFSIPEntry::LocIfFSIPcts::down {3, "down"};

const Enum::YLeaf OLDCISCOINTERFACESMIB::LFSIPTable::LFSIPEntry::LocIfFSIPdtr::notAvailable {1, "notAvailable"};
const Enum::YLeaf OLDCISCOINTERFACESMIB::LFSIPTable::LFSIPEntry::LocIfFSIPdtr::up {2, "up"};
const Enum::YLeaf OLDCISCOINTERFACESMIB::LFSIPTable::LFSIPEntry::LocIfFSIPdtr::down {3, "down"};

const Enum::YLeaf OLDCISCOINTERFACESMIB::LFSIPTable::LFSIPEntry::LocIfFSIPdcd::notAvailable {1, "notAvailable"};
const Enum::YLeaf OLDCISCOINTERFACESMIB::LFSIPTable::LFSIPEntry::LocIfFSIPdcd::up {2, "up"};
const Enum::YLeaf OLDCISCOINTERFACESMIB::LFSIPTable::LFSIPEntry::LocIfFSIPdcd::down {3, "down"};

const Enum::YLeaf OLDCISCOINTERFACESMIB::LFSIPTable::LFSIPEntry::LocIfFSIPdsr::notAvailable {1, "notAvailable"};
const Enum::YLeaf OLDCISCOINTERFACESMIB::LFSIPTable::LFSIPEntry::LocIfFSIPdsr::up {2, "up"};
const Enum::YLeaf OLDCISCOINTERFACESMIB::LFSIPTable::LFSIPEntry::LocIfFSIPdsr::down {3, "down"};

const Enum::YLeaf OLDCISCOINTERFACESMIB::LFSIPTable::LFSIPEntry::LocIfFSIPportType::noCable {1, "noCable"};
const Enum::YLeaf OLDCISCOINTERFACESMIB::LFSIPTable::LFSIPEntry::LocIfFSIPportType::rs232 {2, "rs232"};
const Enum::YLeaf OLDCISCOINTERFACESMIB::LFSIPTable::LFSIPEntry::LocIfFSIPportType::rs422 {3, "rs422"};
const Enum::YLeaf OLDCISCOINTERFACESMIB::LFSIPTable::LFSIPEntry::LocIfFSIPportType::rs423 {4, "rs423"};
const Enum::YLeaf OLDCISCOINTERFACESMIB::LFSIPTable::LFSIPEntry::LocIfFSIPportType::v35 {5, "v35"};
const Enum::YLeaf OLDCISCOINTERFACESMIB::LFSIPTable::LFSIPEntry::LocIfFSIPportType::x21 {6, "x21"};
const Enum::YLeaf OLDCISCOINTERFACESMIB::LFSIPTable::LFSIPEntry::LocIfFSIPportType::rs449 {7, "rs449"};
const Enum::YLeaf OLDCISCOINTERFACESMIB::LFSIPTable::LFSIPEntry::LocIfFSIPportType::rs530 {8, "rs530"};
const Enum::YLeaf OLDCISCOINTERFACESMIB::LFSIPTable::LFSIPEntry::LocIfFSIPportType::hssi {9, "hssi"};
const Enum::YLeaf OLDCISCOINTERFACESMIB::LFSIPTable::LFSIPEntry::LocIfFSIPportType::g703unbal {10, "g703unbal"};
const Enum::YLeaf OLDCISCOINTERFACESMIB::LFSIPTable::LFSIPEntry::LocIfFSIPportType::g703bal {11, "g703bal"};
const Enum::YLeaf OLDCISCOINTERFACESMIB::LFSIPTable::LFSIPEntry::LocIfFSIPportType::jt2unbal {12, "jt2unbal"};


}
}

