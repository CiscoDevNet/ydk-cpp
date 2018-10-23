
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IETF_FRR_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_IETF_FRR_MIB {

CISCOIETFFRRMIB::CISCOIETFFRRMIB()
    :
    cmplsfrrscalars(std::make_shared<CISCOIETFFRRMIB::CmplsFrrScalars>())
    , cmplsfrrconsttable(std::make_shared<CISCOIETFFRRMIB::CmplsFrrConstTable>())
    , cmplsfrrlogtable(std::make_shared<CISCOIETFFRRMIB::CmplsFrrLogTable>())
    , cmplsfrrfacroutedbtable(std::make_shared<CISCOIETFFRRMIB::CmplsFrrFacRouteDBTable>())
{
    cmplsfrrscalars->parent = this;
    cmplsfrrconsttable->parent = this;
    cmplsfrrlogtable->parent = this;
    cmplsfrrfacroutedbtable->parent = this;

    yang_name = "CISCO-IETF-FRR-MIB"; yang_parent_name = "CISCO-IETF-FRR-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCOIETFFRRMIB::~CISCOIETFFRRMIB()
{
}

bool CISCOIETFFRRMIB::has_data() const
{
    if (is_presence_container) return true;
    return (cmplsfrrscalars !=  nullptr && cmplsfrrscalars->has_data())
	|| (cmplsfrrconsttable !=  nullptr && cmplsfrrconsttable->has_data())
	|| (cmplsfrrlogtable !=  nullptr && cmplsfrrlogtable->has_data())
	|| (cmplsfrrfacroutedbtable !=  nullptr && cmplsfrrfacroutedbtable->has_data());
}

bool CISCOIETFFRRMIB::has_operation() const
{
    return is_set(yfilter)
	|| (cmplsfrrscalars !=  nullptr && cmplsfrrscalars->has_operation())
	|| (cmplsfrrconsttable !=  nullptr && cmplsfrrconsttable->has_operation())
	|| (cmplsfrrlogtable !=  nullptr && cmplsfrrlogtable->has_operation())
	|| (cmplsfrrfacroutedbtable !=  nullptr && cmplsfrrfacroutedbtable->has_operation());
}

std::string CISCOIETFFRRMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-FRR-MIB:CISCO-IETF-FRR-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFFRRMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFFRRMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cmplsFrrScalars")
    {
        if(cmplsfrrscalars == nullptr)
        {
            cmplsfrrscalars = std::make_shared<CISCOIETFFRRMIB::CmplsFrrScalars>();
        }
        return cmplsfrrscalars;
    }

    if(child_yang_name == "cmplsFrrConstTable")
    {
        if(cmplsfrrconsttable == nullptr)
        {
            cmplsfrrconsttable = std::make_shared<CISCOIETFFRRMIB::CmplsFrrConstTable>();
        }
        return cmplsfrrconsttable;
    }

    if(child_yang_name == "cmplsFrrLogTable")
    {
        if(cmplsfrrlogtable == nullptr)
        {
            cmplsfrrlogtable = std::make_shared<CISCOIETFFRRMIB::CmplsFrrLogTable>();
        }
        return cmplsfrrlogtable;
    }

    if(child_yang_name == "cmplsFrrFacRouteDBTable")
    {
        if(cmplsfrrfacroutedbtable == nullptr)
        {
            cmplsfrrfacroutedbtable = std::make_shared<CISCOIETFFRRMIB::CmplsFrrFacRouteDBTable>();
        }
        return cmplsfrrfacroutedbtable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFFRRMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(cmplsfrrscalars != nullptr)
    {
        _children["cmplsFrrScalars"] = cmplsfrrscalars;
    }

    if(cmplsfrrconsttable != nullptr)
    {
        _children["cmplsFrrConstTable"] = cmplsfrrconsttable;
    }

    if(cmplsfrrlogtable != nullptr)
    {
        _children["cmplsFrrLogTable"] = cmplsfrrlogtable;
    }

    if(cmplsfrrfacroutedbtable != nullptr)
    {
        _children["cmplsFrrFacRouteDBTable"] = cmplsfrrfacroutedbtable;
    }

    return _children;
}

void CISCOIETFFRRMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFFRRMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> CISCOIETFFRRMIB::clone_ptr() const
{
    return std::make_shared<CISCOIETFFRRMIB>();
}

std::string CISCOIETFFRRMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOIETFFRRMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOIETFFRRMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOIETFFRRMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOIETFFRRMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmplsFrrScalars" || name == "cmplsFrrConstTable" || name == "cmplsFrrLogTable" || name == "cmplsFrrFacRouteDBTable")
        return true;
    return false;
}

CISCOIETFFRRMIB::CmplsFrrScalars::CmplsFrrScalars()
    :
    cmplsfrrdetourincoming{YType::uint32, "cmplsFrrDetourIncoming"},
    cmplsfrrdetouroutgoing{YType::uint32, "cmplsFrrDetourOutgoing"},
    cmplsfrrdetouroriginating{YType::uint32, "cmplsFrrDetourOriginating"},
    cmplsfrrswitchover{YType::uint32, "cmplsFrrSwitchover"},
    cmplsfrrnumofconfifs{YType::uint32, "cmplsFrrNumOfConfIfs"},
    cmplsfrractprotectedifs{YType::uint32, "cmplsFrrActProtectedIfs"},
    cmplsfrrconfprotectingtuns{YType::uint32, "cmplsFrrConfProtectingTuns"},
    cmplsfrractprotectedtuns{YType::uint32, "cmplsFrrActProtectedTuns"},
    cmplsfrractprotectedlsps{YType::uint32, "cmplsFrrActProtectedLSPs"},
    cmplsfrrconstprotectionmethod{YType::enumeration, "cmplsFrrConstProtectionMethod"},
    cmplsfrrnotifsenabled{YType::boolean, "cmplsFrrNotifsEnabled"},
    cmplsfrrlogtablemaxentries{YType::uint32, "cmplsFrrLogTableMaxEntries"},
    cmplsfrrlogtablecurrentries{YType::uint32, "cmplsFrrLogTableCurrEntries"},
    cmplsfrrnotifmaxrate{YType::uint32, "cmplsFrrNotifMaxRate"}
{

    yang_name = "cmplsFrrScalars"; yang_parent_name = "CISCO-IETF-FRR-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFFRRMIB::CmplsFrrScalars::~CmplsFrrScalars()
{
}

bool CISCOIETFFRRMIB::CmplsFrrScalars::has_data() const
{
    if (is_presence_container) return true;
    return cmplsfrrdetourincoming.is_set
	|| cmplsfrrdetouroutgoing.is_set
	|| cmplsfrrdetouroriginating.is_set
	|| cmplsfrrswitchover.is_set
	|| cmplsfrrnumofconfifs.is_set
	|| cmplsfrractprotectedifs.is_set
	|| cmplsfrrconfprotectingtuns.is_set
	|| cmplsfrractprotectedtuns.is_set
	|| cmplsfrractprotectedlsps.is_set
	|| cmplsfrrconstprotectionmethod.is_set
	|| cmplsfrrnotifsenabled.is_set
	|| cmplsfrrlogtablemaxentries.is_set
	|| cmplsfrrlogtablecurrentries.is_set
	|| cmplsfrrnotifmaxrate.is_set;
}

bool CISCOIETFFRRMIB::CmplsFrrScalars::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cmplsfrrdetourincoming.yfilter)
	|| ydk::is_set(cmplsfrrdetouroutgoing.yfilter)
	|| ydk::is_set(cmplsfrrdetouroriginating.yfilter)
	|| ydk::is_set(cmplsfrrswitchover.yfilter)
	|| ydk::is_set(cmplsfrrnumofconfifs.yfilter)
	|| ydk::is_set(cmplsfrractprotectedifs.yfilter)
	|| ydk::is_set(cmplsfrrconfprotectingtuns.yfilter)
	|| ydk::is_set(cmplsfrractprotectedtuns.yfilter)
	|| ydk::is_set(cmplsfrractprotectedlsps.yfilter)
	|| ydk::is_set(cmplsfrrconstprotectionmethod.yfilter)
	|| ydk::is_set(cmplsfrrnotifsenabled.yfilter)
	|| ydk::is_set(cmplsfrrlogtablemaxentries.yfilter)
	|| ydk::is_set(cmplsfrrlogtablecurrentries.yfilter)
	|| ydk::is_set(cmplsfrrnotifmaxrate.yfilter);
}

std::string CISCOIETFFRRMIB::CmplsFrrScalars::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-FRR-MIB:CISCO-IETF-FRR-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFFRRMIB::CmplsFrrScalars::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmplsFrrScalars";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFFRRMIB::CmplsFrrScalars::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmplsfrrdetourincoming.is_set || is_set(cmplsfrrdetourincoming.yfilter)) leaf_name_data.push_back(cmplsfrrdetourincoming.get_name_leafdata());
    if (cmplsfrrdetouroutgoing.is_set || is_set(cmplsfrrdetouroutgoing.yfilter)) leaf_name_data.push_back(cmplsfrrdetouroutgoing.get_name_leafdata());
    if (cmplsfrrdetouroriginating.is_set || is_set(cmplsfrrdetouroriginating.yfilter)) leaf_name_data.push_back(cmplsfrrdetouroriginating.get_name_leafdata());
    if (cmplsfrrswitchover.is_set || is_set(cmplsfrrswitchover.yfilter)) leaf_name_data.push_back(cmplsfrrswitchover.get_name_leafdata());
    if (cmplsfrrnumofconfifs.is_set || is_set(cmplsfrrnumofconfifs.yfilter)) leaf_name_data.push_back(cmplsfrrnumofconfifs.get_name_leafdata());
    if (cmplsfrractprotectedifs.is_set || is_set(cmplsfrractprotectedifs.yfilter)) leaf_name_data.push_back(cmplsfrractprotectedifs.get_name_leafdata());
    if (cmplsfrrconfprotectingtuns.is_set || is_set(cmplsfrrconfprotectingtuns.yfilter)) leaf_name_data.push_back(cmplsfrrconfprotectingtuns.get_name_leafdata());
    if (cmplsfrractprotectedtuns.is_set || is_set(cmplsfrractprotectedtuns.yfilter)) leaf_name_data.push_back(cmplsfrractprotectedtuns.get_name_leafdata());
    if (cmplsfrractprotectedlsps.is_set || is_set(cmplsfrractprotectedlsps.yfilter)) leaf_name_data.push_back(cmplsfrractprotectedlsps.get_name_leafdata());
    if (cmplsfrrconstprotectionmethod.is_set || is_set(cmplsfrrconstprotectionmethod.yfilter)) leaf_name_data.push_back(cmplsfrrconstprotectionmethod.get_name_leafdata());
    if (cmplsfrrnotifsenabled.is_set || is_set(cmplsfrrnotifsenabled.yfilter)) leaf_name_data.push_back(cmplsfrrnotifsenabled.get_name_leafdata());
    if (cmplsfrrlogtablemaxentries.is_set || is_set(cmplsfrrlogtablemaxentries.yfilter)) leaf_name_data.push_back(cmplsfrrlogtablemaxentries.get_name_leafdata());
    if (cmplsfrrlogtablecurrentries.is_set || is_set(cmplsfrrlogtablecurrentries.yfilter)) leaf_name_data.push_back(cmplsfrrlogtablecurrentries.get_name_leafdata());
    if (cmplsfrrnotifmaxrate.is_set || is_set(cmplsfrrnotifmaxrate.yfilter)) leaf_name_data.push_back(cmplsfrrnotifmaxrate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFFRRMIB::CmplsFrrScalars::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFFRRMIB::CmplsFrrScalars::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOIETFFRRMIB::CmplsFrrScalars::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cmplsFrrDetourIncoming")
    {
        cmplsfrrdetourincoming = value;
        cmplsfrrdetourincoming.value_namespace = name_space;
        cmplsfrrdetourincoming.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrDetourOutgoing")
    {
        cmplsfrrdetouroutgoing = value;
        cmplsfrrdetouroutgoing.value_namespace = name_space;
        cmplsfrrdetouroutgoing.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrDetourOriginating")
    {
        cmplsfrrdetouroriginating = value;
        cmplsfrrdetouroriginating.value_namespace = name_space;
        cmplsfrrdetouroriginating.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrSwitchover")
    {
        cmplsfrrswitchover = value;
        cmplsfrrswitchover.value_namespace = name_space;
        cmplsfrrswitchover.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrNumOfConfIfs")
    {
        cmplsfrrnumofconfifs = value;
        cmplsfrrnumofconfifs.value_namespace = name_space;
        cmplsfrrnumofconfifs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrActProtectedIfs")
    {
        cmplsfrractprotectedifs = value;
        cmplsfrractprotectedifs.value_namespace = name_space;
        cmplsfrractprotectedifs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrConfProtectingTuns")
    {
        cmplsfrrconfprotectingtuns = value;
        cmplsfrrconfprotectingtuns.value_namespace = name_space;
        cmplsfrrconfprotectingtuns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrActProtectedTuns")
    {
        cmplsfrractprotectedtuns = value;
        cmplsfrractprotectedtuns.value_namespace = name_space;
        cmplsfrractprotectedtuns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrActProtectedLSPs")
    {
        cmplsfrractprotectedlsps = value;
        cmplsfrractprotectedlsps.value_namespace = name_space;
        cmplsfrractprotectedlsps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrConstProtectionMethod")
    {
        cmplsfrrconstprotectionmethod = value;
        cmplsfrrconstprotectionmethod.value_namespace = name_space;
        cmplsfrrconstprotectionmethod.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrNotifsEnabled")
    {
        cmplsfrrnotifsenabled = value;
        cmplsfrrnotifsenabled.value_namespace = name_space;
        cmplsfrrnotifsenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrLogTableMaxEntries")
    {
        cmplsfrrlogtablemaxentries = value;
        cmplsfrrlogtablemaxentries.value_namespace = name_space;
        cmplsfrrlogtablemaxentries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrLogTableCurrEntries")
    {
        cmplsfrrlogtablecurrentries = value;
        cmplsfrrlogtablecurrentries.value_namespace = name_space;
        cmplsfrrlogtablecurrentries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrNotifMaxRate")
    {
        cmplsfrrnotifmaxrate = value;
        cmplsfrrnotifmaxrate.value_namespace = name_space;
        cmplsfrrnotifmaxrate.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIETFFRRMIB::CmplsFrrScalars::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cmplsFrrDetourIncoming")
    {
        cmplsfrrdetourincoming.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrDetourOutgoing")
    {
        cmplsfrrdetouroutgoing.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrDetourOriginating")
    {
        cmplsfrrdetouroriginating.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrSwitchover")
    {
        cmplsfrrswitchover.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrNumOfConfIfs")
    {
        cmplsfrrnumofconfifs.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrActProtectedIfs")
    {
        cmplsfrractprotectedifs.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrConfProtectingTuns")
    {
        cmplsfrrconfprotectingtuns.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrActProtectedTuns")
    {
        cmplsfrractprotectedtuns.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrActProtectedLSPs")
    {
        cmplsfrractprotectedlsps.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrConstProtectionMethod")
    {
        cmplsfrrconstprotectionmethod.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrNotifsEnabled")
    {
        cmplsfrrnotifsenabled.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrLogTableMaxEntries")
    {
        cmplsfrrlogtablemaxentries.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrLogTableCurrEntries")
    {
        cmplsfrrlogtablecurrentries.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrNotifMaxRate")
    {
        cmplsfrrnotifmaxrate.yfilter = yfilter;
    }
}

bool CISCOIETFFRRMIB::CmplsFrrScalars::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmplsFrrDetourIncoming" || name == "cmplsFrrDetourOutgoing" || name == "cmplsFrrDetourOriginating" || name == "cmplsFrrSwitchover" || name == "cmplsFrrNumOfConfIfs" || name == "cmplsFrrActProtectedIfs" || name == "cmplsFrrConfProtectingTuns" || name == "cmplsFrrActProtectedTuns" || name == "cmplsFrrActProtectedLSPs" || name == "cmplsFrrConstProtectionMethod" || name == "cmplsFrrNotifsEnabled" || name == "cmplsFrrLogTableMaxEntries" || name == "cmplsFrrLogTableCurrEntries" || name == "cmplsFrrNotifMaxRate")
        return true;
    return false;
}

CISCOIETFFRRMIB::CmplsFrrConstTable::CmplsFrrConstTable()
    :
    cmplsfrrconstentry(this, {"cmplsfrrconstifindex", "cmplsfrrconsttunnelindex", "cmplsfrrconsttunnelinstance"})
{

    yang_name = "cmplsFrrConstTable"; yang_parent_name = "CISCO-IETF-FRR-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFFRRMIB::CmplsFrrConstTable::~CmplsFrrConstTable()
{
}

bool CISCOIETFFRRMIB::CmplsFrrConstTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cmplsfrrconstentry.len(); index++)
    {
        if(cmplsfrrconstentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFFRRMIB::CmplsFrrConstTable::has_operation() const
{
    for (std::size_t index=0; index<cmplsfrrconstentry.len(); index++)
    {
        if(cmplsfrrconstentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFFRRMIB::CmplsFrrConstTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-FRR-MIB:CISCO-IETF-FRR-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFFRRMIB::CmplsFrrConstTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmplsFrrConstTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFFRRMIB::CmplsFrrConstTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFFRRMIB::CmplsFrrConstTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cmplsFrrConstEntry")
    {
        auto ent_ = std::make_shared<CISCOIETFFRRMIB::CmplsFrrConstTable::CmplsFrrConstEntry>();
        ent_->parent = this;
        cmplsfrrconstentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFFRRMIB::CmplsFrrConstTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cmplsfrrconstentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOIETFFRRMIB::CmplsFrrConstTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFFRRMIB::CmplsFrrConstTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFFRRMIB::CmplsFrrConstTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmplsFrrConstEntry")
        return true;
    return false;
}

CISCOIETFFRRMIB::CmplsFrrConstTable::CmplsFrrConstEntry::CmplsFrrConstEntry()
    :
    cmplsfrrconstifindex{YType::int32, "cmplsFrrConstIfIndex"},
    cmplsfrrconsttunnelindex{YType::uint32, "cmplsFrrConstTunnelIndex"},
    cmplsfrrconsttunnelinstance{YType::uint32, "cmplsFrrConstTunnelInstance"},
    cmplsfrrconstsetupprio{YType::uint32, "cmplsFrrConstSetupPrio"},
    cmplsfrrconstholdingprio{YType::uint32, "cmplsFrrConstHoldingPrio"},
    cmplsfrrconstinclanyaffinity{YType::uint32, "cmplsFrrConstInclAnyAffinity"},
    cmplsfrrconstinclallaffinity{YType::uint32, "cmplsFrrConstInclAllAffinity"},
    cmplsfrrconstexclallaffinity{YType::uint32, "cmplsFrrConstExclAllAffinity"},
    cmplsfrrconsthoplimit{YType::uint32, "cmplsFrrConstHopLimit"},
    cmplsfrrconstbandwidth{YType::uint32, "cmplsFrrConstBandwidth"},
    cmplsfrrconstrowstatus{YType::enumeration, "cmplsFrrConstRowStatus"},
    cmplsfrrconstnumprotectingtunonif{YType::uint32, "cmplsFrrConstNumProtectingTunOnIf"},
    cmplsfrrconstnumprotectedtunonif{YType::uint32, "cmplsFrrConstNumProtectedTunOnIf"}
{

    yang_name = "cmplsFrrConstEntry"; yang_parent_name = "cmplsFrrConstTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFFRRMIB::CmplsFrrConstTable::CmplsFrrConstEntry::~CmplsFrrConstEntry()
{
}

bool CISCOIETFFRRMIB::CmplsFrrConstTable::CmplsFrrConstEntry::has_data() const
{
    if (is_presence_container) return true;
    return cmplsfrrconstifindex.is_set
	|| cmplsfrrconsttunnelindex.is_set
	|| cmplsfrrconsttunnelinstance.is_set
	|| cmplsfrrconstsetupprio.is_set
	|| cmplsfrrconstholdingprio.is_set
	|| cmplsfrrconstinclanyaffinity.is_set
	|| cmplsfrrconstinclallaffinity.is_set
	|| cmplsfrrconstexclallaffinity.is_set
	|| cmplsfrrconsthoplimit.is_set
	|| cmplsfrrconstbandwidth.is_set
	|| cmplsfrrconstrowstatus.is_set
	|| cmplsfrrconstnumprotectingtunonif.is_set
	|| cmplsfrrconstnumprotectedtunonif.is_set;
}

bool CISCOIETFFRRMIB::CmplsFrrConstTable::CmplsFrrConstEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cmplsfrrconstifindex.yfilter)
	|| ydk::is_set(cmplsfrrconsttunnelindex.yfilter)
	|| ydk::is_set(cmplsfrrconsttunnelinstance.yfilter)
	|| ydk::is_set(cmplsfrrconstsetupprio.yfilter)
	|| ydk::is_set(cmplsfrrconstholdingprio.yfilter)
	|| ydk::is_set(cmplsfrrconstinclanyaffinity.yfilter)
	|| ydk::is_set(cmplsfrrconstinclallaffinity.yfilter)
	|| ydk::is_set(cmplsfrrconstexclallaffinity.yfilter)
	|| ydk::is_set(cmplsfrrconsthoplimit.yfilter)
	|| ydk::is_set(cmplsfrrconstbandwidth.yfilter)
	|| ydk::is_set(cmplsfrrconstrowstatus.yfilter)
	|| ydk::is_set(cmplsfrrconstnumprotectingtunonif.yfilter)
	|| ydk::is_set(cmplsfrrconstnumprotectedtunonif.yfilter);
}

std::string CISCOIETFFRRMIB::CmplsFrrConstTable::CmplsFrrConstEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-FRR-MIB:CISCO-IETF-FRR-MIB/cmplsFrrConstTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFFRRMIB::CmplsFrrConstTable::CmplsFrrConstEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmplsFrrConstEntry";
    ADD_KEY_TOKEN(cmplsfrrconstifindex, "cmplsFrrConstIfIndex");
    ADD_KEY_TOKEN(cmplsfrrconsttunnelindex, "cmplsFrrConstTunnelIndex");
    ADD_KEY_TOKEN(cmplsfrrconsttunnelinstance, "cmplsFrrConstTunnelInstance");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFFRRMIB::CmplsFrrConstTable::CmplsFrrConstEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmplsfrrconstifindex.is_set || is_set(cmplsfrrconstifindex.yfilter)) leaf_name_data.push_back(cmplsfrrconstifindex.get_name_leafdata());
    if (cmplsfrrconsttunnelindex.is_set || is_set(cmplsfrrconsttunnelindex.yfilter)) leaf_name_data.push_back(cmplsfrrconsttunnelindex.get_name_leafdata());
    if (cmplsfrrconsttunnelinstance.is_set || is_set(cmplsfrrconsttunnelinstance.yfilter)) leaf_name_data.push_back(cmplsfrrconsttunnelinstance.get_name_leafdata());
    if (cmplsfrrconstsetupprio.is_set || is_set(cmplsfrrconstsetupprio.yfilter)) leaf_name_data.push_back(cmplsfrrconstsetupprio.get_name_leafdata());
    if (cmplsfrrconstholdingprio.is_set || is_set(cmplsfrrconstholdingprio.yfilter)) leaf_name_data.push_back(cmplsfrrconstholdingprio.get_name_leafdata());
    if (cmplsfrrconstinclanyaffinity.is_set || is_set(cmplsfrrconstinclanyaffinity.yfilter)) leaf_name_data.push_back(cmplsfrrconstinclanyaffinity.get_name_leafdata());
    if (cmplsfrrconstinclallaffinity.is_set || is_set(cmplsfrrconstinclallaffinity.yfilter)) leaf_name_data.push_back(cmplsfrrconstinclallaffinity.get_name_leafdata());
    if (cmplsfrrconstexclallaffinity.is_set || is_set(cmplsfrrconstexclallaffinity.yfilter)) leaf_name_data.push_back(cmplsfrrconstexclallaffinity.get_name_leafdata());
    if (cmplsfrrconsthoplimit.is_set || is_set(cmplsfrrconsthoplimit.yfilter)) leaf_name_data.push_back(cmplsfrrconsthoplimit.get_name_leafdata());
    if (cmplsfrrconstbandwidth.is_set || is_set(cmplsfrrconstbandwidth.yfilter)) leaf_name_data.push_back(cmplsfrrconstbandwidth.get_name_leafdata());
    if (cmplsfrrconstrowstatus.is_set || is_set(cmplsfrrconstrowstatus.yfilter)) leaf_name_data.push_back(cmplsfrrconstrowstatus.get_name_leafdata());
    if (cmplsfrrconstnumprotectingtunonif.is_set || is_set(cmplsfrrconstnumprotectingtunonif.yfilter)) leaf_name_data.push_back(cmplsfrrconstnumprotectingtunonif.get_name_leafdata());
    if (cmplsfrrconstnumprotectedtunonif.is_set || is_set(cmplsfrrconstnumprotectedtunonif.yfilter)) leaf_name_data.push_back(cmplsfrrconstnumprotectedtunonif.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFFRRMIB::CmplsFrrConstTable::CmplsFrrConstEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFFRRMIB::CmplsFrrConstTable::CmplsFrrConstEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOIETFFRRMIB::CmplsFrrConstTable::CmplsFrrConstEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cmplsFrrConstIfIndex")
    {
        cmplsfrrconstifindex = value;
        cmplsfrrconstifindex.value_namespace = name_space;
        cmplsfrrconstifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrConstTunnelIndex")
    {
        cmplsfrrconsttunnelindex = value;
        cmplsfrrconsttunnelindex.value_namespace = name_space;
        cmplsfrrconsttunnelindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrConstTunnelInstance")
    {
        cmplsfrrconsttunnelinstance = value;
        cmplsfrrconsttunnelinstance.value_namespace = name_space;
        cmplsfrrconsttunnelinstance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrConstSetupPrio")
    {
        cmplsfrrconstsetupprio = value;
        cmplsfrrconstsetupprio.value_namespace = name_space;
        cmplsfrrconstsetupprio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrConstHoldingPrio")
    {
        cmplsfrrconstholdingprio = value;
        cmplsfrrconstholdingprio.value_namespace = name_space;
        cmplsfrrconstholdingprio.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrConstInclAnyAffinity")
    {
        cmplsfrrconstinclanyaffinity = value;
        cmplsfrrconstinclanyaffinity.value_namespace = name_space;
        cmplsfrrconstinclanyaffinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrConstInclAllAffinity")
    {
        cmplsfrrconstinclallaffinity = value;
        cmplsfrrconstinclallaffinity.value_namespace = name_space;
        cmplsfrrconstinclallaffinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrConstExclAllAffinity")
    {
        cmplsfrrconstexclallaffinity = value;
        cmplsfrrconstexclallaffinity.value_namespace = name_space;
        cmplsfrrconstexclallaffinity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrConstHopLimit")
    {
        cmplsfrrconsthoplimit = value;
        cmplsfrrconsthoplimit.value_namespace = name_space;
        cmplsfrrconsthoplimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrConstBandwidth")
    {
        cmplsfrrconstbandwidth = value;
        cmplsfrrconstbandwidth.value_namespace = name_space;
        cmplsfrrconstbandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrConstRowStatus")
    {
        cmplsfrrconstrowstatus = value;
        cmplsfrrconstrowstatus.value_namespace = name_space;
        cmplsfrrconstrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrConstNumProtectingTunOnIf")
    {
        cmplsfrrconstnumprotectingtunonif = value;
        cmplsfrrconstnumprotectingtunonif.value_namespace = name_space;
        cmplsfrrconstnumprotectingtunonif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrConstNumProtectedTunOnIf")
    {
        cmplsfrrconstnumprotectedtunonif = value;
        cmplsfrrconstnumprotectedtunonif.value_namespace = name_space;
        cmplsfrrconstnumprotectedtunonif.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIETFFRRMIB::CmplsFrrConstTable::CmplsFrrConstEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cmplsFrrConstIfIndex")
    {
        cmplsfrrconstifindex.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrConstTunnelIndex")
    {
        cmplsfrrconsttunnelindex.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrConstTunnelInstance")
    {
        cmplsfrrconsttunnelinstance.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrConstSetupPrio")
    {
        cmplsfrrconstsetupprio.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrConstHoldingPrio")
    {
        cmplsfrrconstholdingprio.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrConstInclAnyAffinity")
    {
        cmplsfrrconstinclanyaffinity.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrConstInclAllAffinity")
    {
        cmplsfrrconstinclallaffinity.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrConstExclAllAffinity")
    {
        cmplsfrrconstexclallaffinity.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrConstHopLimit")
    {
        cmplsfrrconsthoplimit.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrConstBandwidth")
    {
        cmplsfrrconstbandwidth.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrConstRowStatus")
    {
        cmplsfrrconstrowstatus.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrConstNumProtectingTunOnIf")
    {
        cmplsfrrconstnumprotectingtunonif.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrConstNumProtectedTunOnIf")
    {
        cmplsfrrconstnumprotectedtunonif.yfilter = yfilter;
    }
}

bool CISCOIETFFRRMIB::CmplsFrrConstTable::CmplsFrrConstEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmplsFrrConstIfIndex" || name == "cmplsFrrConstTunnelIndex" || name == "cmplsFrrConstTunnelInstance" || name == "cmplsFrrConstSetupPrio" || name == "cmplsFrrConstHoldingPrio" || name == "cmplsFrrConstInclAnyAffinity" || name == "cmplsFrrConstInclAllAffinity" || name == "cmplsFrrConstExclAllAffinity" || name == "cmplsFrrConstHopLimit" || name == "cmplsFrrConstBandwidth" || name == "cmplsFrrConstRowStatus" || name == "cmplsFrrConstNumProtectingTunOnIf" || name == "cmplsFrrConstNumProtectedTunOnIf")
        return true;
    return false;
}

CISCOIETFFRRMIB::CmplsFrrLogTable::CmplsFrrLogTable()
    :
    cmplsfrrlogentry(this, {"cmplsfrrlogindex"})
{

    yang_name = "cmplsFrrLogTable"; yang_parent_name = "CISCO-IETF-FRR-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFFRRMIB::CmplsFrrLogTable::~CmplsFrrLogTable()
{
}

bool CISCOIETFFRRMIB::CmplsFrrLogTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cmplsfrrlogentry.len(); index++)
    {
        if(cmplsfrrlogentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFFRRMIB::CmplsFrrLogTable::has_operation() const
{
    for (std::size_t index=0; index<cmplsfrrlogentry.len(); index++)
    {
        if(cmplsfrrlogentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFFRRMIB::CmplsFrrLogTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-FRR-MIB:CISCO-IETF-FRR-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFFRRMIB::CmplsFrrLogTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmplsFrrLogTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFFRRMIB::CmplsFrrLogTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFFRRMIB::CmplsFrrLogTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cmplsFrrLogEntry")
    {
        auto ent_ = std::make_shared<CISCOIETFFRRMIB::CmplsFrrLogTable::CmplsFrrLogEntry>();
        ent_->parent = this;
        cmplsfrrlogentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFFRRMIB::CmplsFrrLogTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cmplsfrrlogentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOIETFFRRMIB::CmplsFrrLogTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFFRRMIB::CmplsFrrLogTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFFRRMIB::CmplsFrrLogTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmplsFrrLogEntry")
        return true;
    return false;
}

CISCOIETFFRRMIB::CmplsFrrLogTable::CmplsFrrLogEntry::CmplsFrrLogEntry()
    :
    cmplsfrrlogindex{YType::uint32, "cmplsFrrLogIndex"},
    cmplsfrrlogeventtime{YType::uint32, "cmplsFrrLogEventTime"},
    cmplsfrrloginterface{YType::int32, "cmplsFrrLogInterface"},
    cmplsfrrlogeventtype{YType::enumeration, "cmplsFrrLogEventType"},
    cmplsfrrlogeventduration{YType::uint32, "cmplsFrrLogEventDuration"},
    cmplsfrrlogeventreasonstring{YType::str, "cmplsFrrLogEventReasonString"}
{

    yang_name = "cmplsFrrLogEntry"; yang_parent_name = "cmplsFrrLogTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFFRRMIB::CmplsFrrLogTable::CmplsFrrLogEntry::~CmplsFrrLogEntry()
{
}

bool CISCOIETFFRRMIB::CmplsFrrLogTable::CmplsFrrLogEntry::has_data() const
{
    if (is_presence_container) return true;
    return cmplsfrrlogindex.is_set
	|| cmplsfrrlogeventtime.is_set
	|| cmplsfrrloginterface.is_set
	|| cmplsfrrlogeventtype.is_set
	|| cmplsfrrlogeventduration.is_set
	|| cmplsfrrlogeventreasonstring.is_set;
}

bool CISCOIETFFRRMIB::CmplsFrrLogTable::CmplsFrrLogEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cmplsfrrlogindex.yfilter)
	|| ydk::is_set(cmplsfrrlogeventtime.yfilter)
	|| ydk::is_set(cmplsfrrloginterface.yfilter)
	|| ydk::is_set(cmplsfrrlogeventtype.yfilter)
	|| ydk::is_set(cmplsfrrlogeventduration.yfilter)
	|| ydk::is_set(cmplsfrrlogeventreasonstring.yfilter);
}

std::string CISCOIETFFRRMIB::CmplsFrrLogTable::CmplsFrrLogEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-FRR-MIB:CISCO-IETF-FRR-MIB/cmplsFrrLogTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFFRRMIB::CmplsFrrLogTable::CmplsFrrLogEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmplsFrrLogEntry";
    ADD_KEY_TOKEN(cmplsfrrlogindex, "cmplsFrrLogIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFFRRMIB::CmplsFrrLogTable::CmplsFrrLogEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmplsfrrlogindex.is_set || is_set(cmplsfrrlogindex.yfilter)) leaf_name_data.push_back(cmplsfrrlogindex.get_name_leafdata());
    if (cmplsfrrlogeventtime.is_set || is_set(cmplsfrrlogeventtime.yfilter)) leaf_name_data.push_back(cmplsfrrlogeventtime.get_name_leafdata());
    if (cmplsfrrloginterface.is_set || is_set(cmplsfrrloginterface.yfilter)) leaf_name_data.push_back(cmplsfrrloginterface.get_name_leafdata());
    if (cmplsfrrlogeventtype.is_set || is_set(cmplsfrrlogeventtype.yfilter)) leaf_name_data.push_back(cmplsfrrlogeventtype.get_name_leafdata());
    if (cmplsfrrlogeventduration.is_set || is_set(cmplsfrrlogeventduration.yfilter)) leaf_name_data.push_back(cmplsfrrlogeventduration.get_name_leafdata());
    if (cmplsfrrlogeventreasonstring.is_set || is_set(cmplsfrrlogeventreasonstring.yfilter)) leaf_name_data.push_back(cmplsfrrlogeventreasonstring.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFFRRMIB::CmplsFrrLogTable::CmplsFrrLogEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFFRRMIB::CmplsFrrLogTable::CmplsFrrLogEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOIETFFRRMIB::CmplsFrrLogTable::CmplsFrrLogEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cmplsFrrLogIndex")
    {
        cmplsfrrlogindex = value;
        cmplsfrrlogindex.value_namespace = name_space;
        cmplsfrrlogindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrLogEventTime")
    {
        cmplsfrrlogeventtime = value;
        cmplsfrrlogeventtime.value_namespace = name_space;
        cmplsfrrlogeventtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrLogInterface")
    {
        cmplsfrrloginterface = value;
        cmplsfrrloginterface.value_namespace = name_space;
        cmplsfrrloginterface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrLogEventType")
    {
        cmplsfrrlogeventtype = value;
        cmplsfrrlogeventtype.value_namespace = name_space;
        cmplsfrrlogeventtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrLogEventDuration")
    {
        cmplsfrrlogeventduration = value;
        cmplsfrrlogeventduration.value_namespace = name_space;
        cmplsfrrlogeventduration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrLogEventReasonString")
    {
        cmplsfrrlogeventreasonstring = value;
        cmplsfrrlogeventreasonstring.value_namespace = name_space;
        cmplsfrrlogeventreasonstring.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIETFFRRMIB::CmplsFrrLogTable::CmplsFrrLogEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cmplsFrrLogIndex")
    {
        cmplsfrrlogindex.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrLogEventTime")
    {
        cmplsfrrlogeventtime.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrLogInterface")
    {
        cmplsfrrloginterface.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrLogEventType")
    {
        cmplsfrrlogeventtype.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrLogEventDuration")
    {
        cmplsfrrlogeventduration.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrLogEventReasonString")
    {
        cmplsfrrlogeventreasonstring.yfilter = yfilter;
    }
}

bool CISCOIETFFRRMIB::CmplsFrrLogTable::CmplsFrrLogEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmplsFrrLogIndex" || name == "cmplsFrrLogEventTime" || name == "cmplsFrrLogInterface" || name == "cmplsFrrLogEventType" || name == "cmplsFrrLogEventDuration" || name == "cmplsFrrLogEventReasonString")
        return true;
    return false;
}

CISCOIETFFRRMIB::CmplsFrrFacRouteDBTable::CmplsFrrFacRouteDBTable()
    :
    cmplsfrrfacroutedbentry(this, {"cmplsfrrfacrouteprotectedifindex", "cmplsfrrfacrouteprotectingtunindex", "cmplsfrrfacrouteprotectedtunindex", "cmplsfrrfacrouteprotectedtuninstance", "cmplsfrrfacrouteprotectedtuningresslsrid", "cmplsfrrfacrouteprotectedtunegresslsrid"})
{

    yang_name = "cmplsFrrFacRouteDBTable"; yang_parent_name = "CISCO-IETF-FRR-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFFRRMIB::CmplsFrrFacRouteDBTable::~CmplsFrrFacRouteDBTable()
{
}

bool CISCOIETFFRRMIB::CmplsFrrFacRouteDBTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cmplsfrrfacroutedbentry.len(); index++)
    {
        if(cmplsfrrfacroutedbentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFFRRMIB::CmplsFrrFacRouteDBTable::has_operation() const
{
    for (std::size_t index=0; index<cmplsfrrfacroutedbentry.len(); index++)
    {
        if(cmplsfrrfacroutedbentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFFRRMIB::CmplsFrrFacRouteDBTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-FRR-MIB:CISCO-IETF-FRR-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFFRRMIB::CmplsFrrFacRouteDBTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmplsFrrFacRouteDBTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFFRRMIB::CmplsFrrFacRouteDBTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFFRRMIB::CmplsFrrFacRouteDBTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cmplsFrrFacRouteDBEntry")
    {
        auto ent_ = std::make_shared<CISCOIETFFRRMIB::CmplsFrrFacRouteDBTable::CmplsFrrFacRouteDBEntry>();
        ent_->parent = this;
        cmplsfrrfacroutedbentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFFRRMIB::CmplsFrrFacRouteDBTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cmplsfrrfacroutedbentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOIETFFRRMIB::CmplsFrrFacRouteDBTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFFRRMIB::CmplsFrrFacRouteDBTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFFRRMIB::CmplsFrrFacRouteDBTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmplsFrrFacRouteDBEntry")
        return true;
    return false;
}

CISCOIETFFRRMIB::CmplsFrrFacRouteDBTable::CmplsFrrFacRouteDBEntry::CmplsFrrFacRouteDBEntry()
    :
    cmplsfrrfacrouteprotectedifindex{YType::int32, "cmplsFrrFacRouteProtectedIfIndex"},
    cmplsfrrfacrouteprotectingtunindex{YType::uint32, "cmplsFrrFacRouteProtectingTunIndex"},
    cmplsfrrfacrouteprotectedtunindex{YType::uint32, "cmplsFrrFacRouteProtectedTunIndex"},
    cmplsfrrfacrouteprotectedtuninstance{YType::uint32, "cmplsFrrFacRouteProtectedTunInstance"},
    cmplsfrrfacrouteprotectedtuningresslsrid{YType::str, "cmplsFrrFacRouteProtectedTunIngressLSRId"},
    cmplsfrrfacrouteprotectedtunegresslsrid{YType::str, "cmplsFrrFacRouteProtectedTunEgressLSRId"},
    cmplsfrrfacrouteprotectedtunstatus{YType::enumeration, "cmplsFrrFacRouteProtectedTunStatus"},
    cmplsfrrfacrouteprotectingtunresvbw{YType::uint32, "cmplsFrrFacRouteProtectingTunResvBw"},
    cmplsfrrfacrouteprotectingtunprotectiontype{YType::enumeration, "cmplsFrrFacRouteProtectingTunProtectionType"}
{

    yang_name = "cmplsFrrFacRouteDBEntry"; yang_parent_name = "cmplsFrrFacRouteDBTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFFRRMIB::CmplsFrrFacRouteDBTable::CmplsFrrFacRouteDBEntry::~CmplsFrrFacRouteDBEntry()
{
}

bool CISCOIETFFRRMIB::CmplsFrrFacRouteDBTable::CmplsFrrFacRouteDBEntry::has_data() const
{
    if (is_presence_container) return true;
    return cmplsfrrfacrouteprotectedifindex.is_set
	|| cmplsfrrfacrouteprotectingtunindex.is_set
	|| cmplsfrrfacrouteprotectedtunindex.is_set
	|| cmplsfrrfacrouteprotectedtuninstance.is_set
	|| cmplsfrrfacrouteprotectedtuningresslsrid.is_set
	|| cmplsfrrfacrouteprotectedtunegresslsrid.is_set
	|| cmplsfrrfacrouteprotectedtunstatus.is_set
	|| cmplsfrrfacrouteprotectingtunresvbw.is_set
	|| cmplsfrrfacrouteprotectingtunprotectiontype.is_set;
}

bool CISCOIETFFRRMIB::CmplsFrrFacRouteDBTable::CmplsFrrFacRouteDBEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cmplsfrrfacrouteprotectedifindex.yfilter)
	|| ydk::is_set(cmplsfrrfacrouteprotectingtunindex.yfilter)
	|| ydk::is_set(cmplsfrrfacrouteprotectedtunindex.yfilter)
	|| ydk::is_set(cmplsfrrfacrouteprotectedtuninstance.yfilter)
	|| ydk::is_set(cmplsfrrfacrouteprotectedtuningresslsrid.yfilter)
	|| ydk::is_set(cmplsfrrfacrouteprotectedtunegresslsrid.yfilter)
	|| ydk::is_set(cmplsfrrfacrouteprotectedtunstatus.yfilter)
	|| ydk::is_set(cmplsfrrfacrouteprotectingtunresvbw.yfilter)
	|| ydk::is_set(cmplsfrrfacrouteprotectingtunprotectiontype.yfilter);
}

std::string CISCOIETFFRRMIB::CmplsFrrFacRouteDBTable::CmplsFrrFacRouteDBEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-FRR-MIB:CISCO-IETF-FRR-MIB/cmplsFrrFacRouteDBTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFFRRMIB::CmplsFrrFacRouteDBTable::CmplsFrrFacRouteDBEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmplsFrrFacRouteDBEntry";
    ADD_KEY_TOKEN(cmplsfrrfacrouteprotectedifindex, "cmplsFrrFacRouteProtectedIfIndex");
    ADD_KEY_TOKEN(cmplsfrrfacrouteprotectingtunindex, "cmplsFrrFacRouteProtectingTunIndex");
    ADD_KEY_TOKEN(cmplsfrrfacrouteprotectedtunindex, "cmplsFrrFacRouteProtectedTunIndex");
    ADD_KEY_TOKEN(cmplsfrrfacrouteprotectedtuninstance, "cmplsFrrFacRouteProtectedTunInstance");
    ADD_KEY_TOKEN(cmplsfrrfacrouteprotectedtuningresslsrid, "cmplsFrrFacRouteProtectedTunIngressLSRId");
    ADD_KEY_TOKEN(cmplsfrrfacrouteprotectedtunegresslsrid, "cmplsFrrFacRouteProtectedTunEgressLSRId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFFRRMIB::CmplsFrrFacRouteDBTable::CmplsFrrFacRouteDBEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmplsfrrfacrouteprotectedifindex.is_set || is_set(cmplsfrrfacrouteprotectedifindex.yfilter)) leaf_name_data.push_back(cmplsfrrfacrouteprotectedifindex.get_name_leafdata());
    if (cmplsfrrfacrouteprotectingtunindex.is_set || is_set(cmplsfrrfacrouteprotectingtunindex.yfilter)) leaf_name_data.push_back(cmplsfrrfacrouteprotectingtunindex.get_name_leafdata());
    if (cmplsfrrfacrouteprotectedtunindex.is_set || is_set(cmplsfrrfacrouteprotectedtunindex.yfilter)) leaf_name_data.push_back(cmplsfrrfacrouteprotectedtunindex.get_name_leafdata());
    if (cmplsfrrfacrouteprotectedtuninstance.is_set || is_set(cmplsfrrfacrouteprotectedtuninstance.yfilter)) leaf_name_data.push_back(cmplsfrrfacrouteprotectedtuninstance.get_name_leafdata());
    if (cmplsfrrfacrouteprotectedtuningresslsrid.is_set || is_set(cmplsfrrfacrouteprotectedtuningresslsrid.yfilter)) leaf_name_data.push_back(cmplsfrrfacrouteprotectedtuningresslsrid.get_name_leafdata());
    if (cmplsfrrfacrouteprotectedtunegresslsrid.is_set || is_set(cmplsfrrfacrouteprotectedtunegresslsrid.yfilter)) leaf_name_data.push_back(cmplsfrrfacrouteprotectedtunegresslsrid.get_name_leafdata());
    if (cmplsfrrfacrouteprotectedtunstatus.is_set || is_set(cmplsfrrfacrouteprotectedtunstatus.yfilter)) leaf_name_data.push_back(cmplsfrrfacrouteprotectedtunstatus.get_name_leafdata());
    if (cmplsfrrfacrouteprotectingtunresvbw.is_set || is_set(cmplsfrrfacrouteprotectingtunresvbw.yfilter)) leaf_name_data.push_back(cmplsfrrfacrouteprotectingtunresvbw.get_name_leafdata());
    if (cmplsfrrfacrouteprotectingtunprotectiontype.is_set || is_set(cmplsfrrfacrouteprotectingtunprotectiontype.yfilter)) leaf_name_data.push_back(cmplsfrrfacrouteprotectingtunprotectiontype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFFRRMIB::CmplsFrrFacRouteDBTable::CmplsFrrFacRouteDBEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFFRRMIB::CmplsFrrFacRouteDBTable::CmplsFrrFacRouteDBEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOIETFFRRMIB::CmplsFrrFacRouteDBTable::CmplsFrrFacRouteDBEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cmplsFrrFacRouteProtectedIfIndex")
    {
        cmplsfrrfacrouteprotectedifindex = value;
        cmplsfrrfacrouteprotectedifindex.value_namespace = name_space;
        cmplsfrrfacrouteprotectedifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrFacRouteProtectingTunIndex")
    {
        cmplsfrrfacrouteprotectingtunindex = value;
        cmplsfrrfacrouteprotectingtunindex.value_namespace = name_space;
        cmplsfrrfacrouteprotectingtunindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrFacRouteProtectedTunIndex")
    {
        cmplsfrrfacrouteprotectedtunindex = value;
        cmplsfrrfacrouteprotectedtunindex.value_namespace = name_space;
        cmplsfrrfacrouteprotectedtunindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrFacRouteProtectedTunInstance")
    {
        cmplsfrrfacrouteprotectedtuninstance = value;
        cmplsfrrfacrouteprotectedtuninstance.value_namespace = name_space;
        cmplsfrrfacrouteprotectedtuninstance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrFacRouteProtectedTunIngressLSRId")
    {
        cmplsfrrfacrouteprotectedtuningresslsrid = value;
        cmplsfrrfacrouteprotectedtuningresslsrid.value_namespace = name_space;
        cmplsfrrfacrouteprotectedtuningresslsrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrFacRouteProtectedTunEgressLSRId")
    {
        cmplsfrrfacrouteprotectedtunegresslsrid = value;
        cmplsfrrfacrouteprotectedtunegresslsrid.value_namespace = name_space;
        cmplsfrrfacrouteprotectedtunegresslsrid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrFacRouteProtectedTunStatus")
    {
        cmplsfrrfacrouteprotectedtunstatus = value;
        cmplsfrrfacrouteprotectedtunstatus.value_namespace = name_space;
        cmplsfrrfacrouteprotectedtunstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrFacRouteProtectingTunResvBw")
    {
        cmplsfrrfacrouteprotectingtunresvbw = value;
        cmplsfrrfacrouteprotectingtunresvbw.value_namespace = name_space;
        cmplsfrrfacrouteprotectingtunresvbw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cmplsFrrFacRouteProtectingTunProtectionType")
    {
        cmplsfrrfacrouteprotectingtunprotectiontype = value;
        cmplsfrrfacrouteprotectingtunprotectiontype.value_namespace = name_space;
        cmplsfrrfacrouteprotectingtunprotectiontype.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIETFFRRMIB::CmplsFrrFacRouteDBTable::CmplsFrrFacRouteDBEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cmplsFrrFacRouteProtectedIfIndex")
    {
        cmplsfrrfacrouteprotectedifindex.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrFacRouteProtectingTunIndex")
    {
        cmplsfrrfacrouteprotectingtunindex.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrFacRouteProtectedTunIndex")
    {
        cmplsfrrfacrouteprotectedtunindex.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrFacRouteProtectedTunInstance")
    {
        cmplsfrrfacrouteprotectedtuninstance.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrFacRouteProtectedTunIngressLSRId")
    {
        cmplsfrrfacrouteprotectedtuningresslsrid.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrFacRouteProtectedTunEgressLSRId")
    {
        cmplsfrrfacrouteprotectedtunegresslsrid.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrFacRouteProtectedTunStatus")
    {
        cmplsfrrfacrouteprotectedtunstatus.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrFacRouteProtectingTunResvBw")
    {
        cmplsfrrfacrouteprotectingtunresvbw.yfilter = yfilter;
    }
    if(value_path == "cmplsFrrFacRouteProtectingTunProtectionType")
    {
        cmplsfrrfacrouteprotectingtunprotectiontype.yfilter = yfilter;
    }
}

bool CISCOIETFFRRMIB::CmplsFrrFacRouteDBTable::CmplsFrrFacRouteDBEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cmplsFrrFacRouteProtectedIfIndex" || name == "cmplsFrrFacRouteProtectingTunIndex" || name == "cmplsFrrFacRouteProtectedTunIndex" || name == "cmplsFrrFacRouteProtectedTunInstance" || name == "cmplsFrrFacRouteProtectedTunIngressLSRId" || name == "cmplsFrrFacRouteProtectedTunEgressLSRId" || name == "cmplsFrrFacRouteProtectedTunStatus" || name == "cmplsFrrFacRouteProtectingTunResvBw" || name == "cmplsFrrFacRouteProtectingTunProtectionType")
        return true;
    return false;
}

const Enum::YLeaf CISCOIETFFRRMIB::CmplsFrrScalars::CmplsFrrConstProtectionMethod::oneToOneBackup {0, "oneToOneBackup"};
const Enum::YLeaf CISCOIETFFRRMIB::CmplsFrrScalars::CmplsFrrConstProtectionMethod::facilityBackup {1, "facilityBackup"};

const Enum::YLeaf CISCOIETFFRRMIB::CmplsFrrLogTable::CmplsFrrLogEntry::CmplsFrrLogEventType::other {1, "other"};
const Enum::YLeaf CISCOIETFFRRMIB::CmplsFrrLogTable::CmplsFrrLogEntry::CmplsFrrLogEventType::protected_ {2, "protected"};

const Enum::YLeaf CISCOIETFFRRMIB::CmplsFrrFacRouteDBTable::CmplsFrrFacRouteDBEntry::CmplsFrrFacRouteProtectedTunStatus::active {1, "active"};
const Enum::YLeaf CISCOIETFFRRMIB::CmplsFrrFacRouteDBTable::CmplsFrrFacRouteDBEntry::CmplsFrrFacRouteProtectedTunStatus::ready {2, "ready"};
const Enum::YLeaf CISCOIETFFRRMIB::CmplsFrrFacRouteDBTable::CmplsFrrFacRouteDBEntry::CmplsFrrFacRouteProtectedTunStatus::partial {3, "partial"};

const Enum::YLeaf CISCOIETFFRRMIB::CmplsFrrFacRouteDBTable::CmplsFrrFacRouteDBEntry::CmplsFrrFacRouteProtectingTunProtectionType::linkProtection {0, "linkProtection"};
const Enum::YLeaf CISCOIETFFRRMIB::CmplsFrrFacRouteDBTable::CmplsFrrFacRouteDBEntry::CmplsFrrFacRouteProtectingTunProtectionType::nodeProtection {1, "nodeProtection"};


}
}

