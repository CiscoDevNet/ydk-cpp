
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IETF_BFD_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_IETF_BFD_MIB {

CISCOIETFBFDMIB::CISCOIETFBFDMIB()
    :
    ciscobfdscalarobjects(std::make_shared<CISCOIETFBFDMIB::CiscoBfdScalarObjects>())
    , ciscobfdsesstable(std::make_shared<CISCOIETFBFDMIB::CiscoBfdSessTable>())
    , ciscobfdsessmaptable(std::make_shared<CISCOIETFBFDMIB::CiscoBfdSessMapTable>())
    , ciscobfdsessdiscmaptable(std::make_shared<CISCOIETFBFDMIB::CiscoBfdSessDiscMapTable>())
    , ciscobfdsessipmaptable(std::make_shared<CISCOIETFBFDMIB::CiscoBfdSessIpMapTable>())
{
    ciscobfdscalarobjects->parent = this;
    ciscobfdsesstable->parent = this;
    ciscobfdsessmaptable->parent = this;
    ciscobfdsessdiscmaptable->parent = this;
    ciscobfdsessipmaptable->parent = this;

    yang_name = "CISCO-IETF-BFD-MIB"; yang_parent_name = "CISCO-IETF-BFD-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCOIETFBFDMIB::~CISCOIETFBFDMIB()
{
}

bool CISCOIETFBFDMIB::has_data() const
{
    if (is_presence_container) return true;
    return (ciscobfdscalarobjects !=  nullptr && ciscobfdscalarobjects->has_data())
	|| (ciscobfdsesstable !=  nullptr && ciscobfdsesstable->has_data())
	|| (ciscobfdsessmaptable !=  nullptr && ciscobfdsessmaptable->has_data())
	|| (ciscobfdsessdiscmaptable !=  nullptr && ciscobfdsessdiscmaptable->has_data())
	|| (ciscobfdsessipmaptable !=  nullptr && ciscobfdsessipmaptable->has_data());
}

bool CISCOIETFBFDMIB::has_operation() const
{
    return is_set(yfilter)
	|| (ciscobfdscalarobjects !=  nullptr && ciscobfdscalarobjects->has_operation())
	|| (ciscobfdsesstable !=  nullptr && ciscobfdsesstable->has_operation())
	|| (ciscobfdsessmaptable !=  nullptr && ciscobfdsessmaptable->has_operation())
	|| (ciscobfdsessdiscmaptable !=  nullptr && ciscobfdsessdiscmaptable->has_operation())
	|| (ciscobfdsessipmaptable !=  nullptr && ciscobfdsessipmaptable->has_operation());
}

std::string CISCOIETFBFDMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-BFD-MIB:CISCO-IETF-BFD-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFBFDMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFBFDMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoBfdScalarObjects")
    {
        if(ciscobfdscalarobjects == nullptr)
        {
            ciscobfdscalarobjects = std::make_shared<CISCOIETFBFDMIB::CiscoBfdScalarObjects>();
        }
        return ciscobfdscalarobjects;
    }

    if(child_yang_name == "ciscoBfdSessTable")
    {
        if(ciscobfdsesstable == nullptr)
        {
            ciscobfdsesstable = std::make_shared<CISCOIETFBFDMIB::CiscoBfdSessTable>();
        }
        return ciscobfdsesstable;
    }

    if(child_yang_name == "ciscoBfdSessMapTable")
    {
        if(ciscobfdsessmaptable == nullptr)
        {
            ciscobfdsessmaptable = std::make_shared<CISCOIETFBFDMIB::CiscoBfdSessMapTable>();
        }
        return ciscobfdsessmaptable;
    }

    if(child_yang_name == "ciscoBfdSessDiscMapTable")
    {
        if(ciscobfdsessdiscmaptable == nullptr)
        {
            ciscobfdsessdiscmaptable = std::make_shared<CISCOIETFBFDMIB::CiscoBfdSessDiscMapTable>();
        }
        return ciscobfdsessdiscmaptable;
    }

    if(child_yang_name == "ciscoBfdSessIpMapTable")
    {
        if(ciscobfdsessipmaptable == nullptr)
        {
            ciscobfdsessipmaptable = std::make_shared<CISCOIETFBFDMIB::CiscoBfdSessIpMapTable>();
        }
        return ciscobfdsessipmaptable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFBFDMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ciscobfdscalarobjects != nullptr)
    {
        _children["ciscoBfdScalarObjects"] = ciscobfdscalarobjects;
    }

    if(ciscobfdsesstable != nullptr)
    {
        _children["ciscoBfdSessTable"] = ciscobfdsesstable;
    }

    if(ciscobfdsessmaptable != nullptr)
    {
        _children["ciscoBfdSessMapTable"] = ciscobfdsessmaptable;
    }

    if(ciscobfdsessdiscmaptable != nullptr)
    {
        _children["ciscoBfdSessDiscMapTable"] = ciscobfdsessdiscmaptable;
    }

    if(ciscobfdsessipmaptable != nullptr)
    {
        _children["ciscoBfdSessIpMapTable"] = ciscobfdsessipmaptable;
    }

    return _children;
}

void CISCOIETFBFDMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFBFDMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> CISCOIETFBFDMIB::clone_ptr() const
{
    return std::make_shared<CISCOIETFBFDMIB>();
}

std::string CISCOIETFBFDMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOIETFBFDMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOIETFBFDMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOIETFBFDMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOIETFBFDMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoBfdScalarObjects" || name == "ciscoBfdSessTable" || name == "ciscoBfdSessMapTable" || name == "ciscoBfdSessDiscMapTable" || name == "ciscoBfdSessIpMapTable")
        return true;
    return false;
}

CISCOIETFBFDMIB::CiscoBfdScalarObjects::CiscoBfdScalarObjects()
    :
    ciscobfdadminstatus{YType::enumeration, "ciscoBfdAdminStatus"},
    ciscobfdversionnumber{YType::uint32, "ciscoBfdVersionNumber"},
    ciscobfdsessnotificationsenable{YType::boolean, "ciscoBfdSessNotificationsEnable"}
{

    yang_name = "ciscoBfdScalarObjects"; yang_parent_name = "CISCO-IETF-BFD-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFBFDMIB::CiscoBfdScalarObjects::~CiscoBfdScalarObjects()
{
}

bool CISCOIETFBFDMIB::CiscoBfdScalarObjects::has_data() const
{
    if (is_presence_container) return true;
    return ciscobfdadminstatus.is_set
	|| ciscobfdversionnumber.is_set
	|| ciscobfdsessnotificationsenable.is_set;
}

bool CISCOIETFBFDMIB::CiscoBfdScalarObjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciscobfdadminstatus.yfilter)
	|| ydk::is_set(ciscobfdversionnumber.yfilter)
	|| ydk::is_set(ciscobfdsessnotificationsenable.yfilter);
}

std::string CISCOIETFBFDMIB::CiscoBfdScalarObjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-BFD-MIB:CISCO-IETF-BFD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFBFDMIB::CiscoBfdScalarObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoBfdScalarObjects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFBFDMIB::CiscoBfdScalarObjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscobfdadminstatus.is_set || is_set(ciscobfdadminstatus.yfilter)) leaf_name_data.push_back(ciscobfdadminstatus.get_name_leafdata());
    if (ciscobfdversionnumber.is_set || is_set(ciscobfdversionnumber.yfilter)) leaf_name_data.push_back(ciscobfdversionnumber.get_name_leafdata());
    if (ciscobfdsessnotificationsenable.is_set || is_set(ciscobfdsessnotificationsenable.yfilter)) leaf_name_data.push_back(ciscobfdsessnotificationsenable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFBFDMIB::CiscoBfdScalarObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFBFDMIB::CiscoBfdScalarObjects::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOIETFBFDMIB::CiscoBfdScalarObjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciscoBfdAdminStatus")
    {
        ciscobfdadminstatus = value;
        ciscobfdadminstatus.value_namespace = name_space;
        ciscobfdadminstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdVersionNumber")
    {
        ciscobfdversionnumber = value;
        ciscobfdversionnumber.value_namespace = name_space;
        ciscobfdversionnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessNotificationsEnable")
    {
        ciscobfdsessnotificationsenable = value;
        ciscobfdsessnotificationsenable.value_namespace = name_space;
        ciscobfdsessnotificationsenable.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIETFBFDMIB::CiscoBfdScalarObjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciscoBfdAdminStatus")
    {
        ciscobfdadminstatus.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdVersionNumber")
    {
        ciscobfdversionnumber.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessNotificationsEnable")
    {
        ciscobfdsessnotificationsenable.yfilter = yfilter;
    }
}

bool CISCOIETFBFDMIB::CiscoBfdScalarObjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoBfdAdminStatus" || name == "ciscoBfdVersionNumber" || name == "ciscoBfdSessNotificationsEnable")
        return true;
    return false;
}

CISCOIETFBFDMIB::CiscoBfdSessTable::CiscoBfdSessTable()
    :
    ciscobfdsessentry(this, {"ciscobfdsessindex"})
{

    yang_name = "ciscoBfdSessTable"; yang_parent_name = "CISCO-IETF-BFD-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFBFDMIB::CiscoBfdSessTable::~CiscoBfdSessTable()
{
}

bool CISCOIETFBFDMIB::CiscoBfdSessTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ciscobfdsessentry.len(); index++)
    {
        if(ciscobfdsessentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFBFDMIB::CiscoBfdSessTable::has_operation() const
{
    for (std::size_t index=0; index<ciscobfdsessentry.len(); index++)
    {
        if(ciscobfdsessentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFBFDMIB::CiscoBfdSessTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-BFD-MIB:CISCO-IETF-BFD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFBFDMIB::CiscoBfdSessTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoBfdSessTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFBFDMIB::CiscoBfdSessTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFBFDMIB::CiscoBfdSessTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoBfdSessEntry")
    {
        auto ent_ = std::make_shared<CISCOIETFBFDMIB::CiscoBfdSessTable::CiscoBfdSessEntry>();
        ent_->parent = this;
        ciscobfdsessentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFBFDMIB::CiscoBfdSessTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ciscobfdsessentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOIETFBFDMIB::CiscoBfdSessTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFBFDMIB::CiscoBfdSessTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFBFDMIB::CiscoBfdSessTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoBfdSessEntry")
        return true;
    return false;
}

CISCOIETFBFDMIB::CiscoBfdSessTable::CiscoBfdSessEntry::CiscoBfdSessEntry()
    :
    ciscobfdsessindex{YType::uint32, "ciscoBfdSessIndex"},
    ciscobfdsessapplicationid{YType::uint32, "ciscoBfdSessApplicationId"},
    ciscobfdsessdiscriminator{YType::uint32, "ciscoBfdSessDiscriminator"},
    ciscobfdsessremotediscr{YType::uint32, "ciscoBfdSessRemoteDiscr"},
    ciscobfdsessudpport{YType::uint16, "ciscoBfdSessUdpPort"},
    ciscobfdsessstate{YType::enumeration, "ciscoBfdSessState"},
    ciscobfdsessremoteheardflag{YType::boolean, "ciscoBfdSessRemoteHeardFlag"},
    ciscobfdsessdiag{YType::enumeration, "ciscoBfdSessDiag"},
    ciscobfdsessopermode{YType::enumeration, "ciscoBfdSessOperMode"},
    ciscobfdsessdemandmodedesiredflag{YType::boolean, "ciscoBfdSessDemandModeDesiredFlag"},
    ciscobfdsessechofuncmodedesiredflag{YType::boolean, "ciscoBfdSessEchoFuncModeDesiredFlag"},
    ciscobfdsesscontrolplanindepflag{YType::boolean, "ciscoBfdSessControlPlanIndepFlag"},
    ciscobfdsessaddrtype{YType::enumeration, "ciscoBfdSessAddrType"},
    ciscobfdsessaddr{YType::str, "ciscoBfdSessAddr"},
    ciscobfdsessdesiredmintxinterval{YType::uint32, "ciscoBfdSessDesiredMinTxInterval"},
    ciscobfdsessreqminrxinterval{YType::uint32, "ciscoBfdSessReqMinRxInterval"},
    ciscobfdsessreqminechorxinterval{YType::uint32, "ciscoBfdSessReqMinEchoRxInterval"},
    ciscobfdsessdetectmult{YType::uint32, "ciscoBfdSessDetectMult"},
    ciscobfdsessstortype{YType::enumeration, "ciscoBfdSessStorType"},
    ciscobfdsessrowstatus{YType::enumeration, "ciscoBfdSessRowStatus"},
    ciscobfdsessauthpresflag{YType::boolean, "ciscoBfdSessAuthPresFlag"},
    ciscobfdsessauthenticationtype{YType::enumeration, "ciscoBfdSessAuthenticationType"},
    ciscobfdsessversionnumber{YType::uint32, "ciscoBfdSessVersionNumber"},
    ciscobfdsesstype{YType::enumeration, "ciscoBfdSessType"},
    ciscobfdsessinterface{YType::int32, "ciscoBfdSessInterface"},
    ciscobfdsessperfpktin{YType::uint32, "ciscoBfdSessPerfPktIn"},
    ciscobfdsessperfpktout{YType::uint32, "ciscoBfdSessPerfPktOut"},
    ciscobfdsessuptime{YType::uint32, "ciscoBfdSessUpTime"},
    ciscobfdsessperflastsessdowntime{YType::uint32, "ciscoBfdSessPerfLastSessDownTime"},
    ciscobfdsessperflastcommlostdiag{YType::enumeration, "ciscoBfdSessPerfLastCommLostDiag"},
    ciscobfdsessperfsessupcount{YType::uint32, "ciscoBfdSessPerfSessUpCount"},
    ciscobfdsessperfdisctime{YType::uint32, "ciscoBfdSessPerfDiscTime"},
    ciscobfdsessperfpktinhc{YType::uint64, "ciscoBfdSessPerfPktInHC"},
    ciscobfdsessperfpktouthc{YType::uint64, "ciscoBfdSessPerfPktOutHC"}
{

    yang_name = "ciscoBfdSessEntry"; yang_parent_name = "ciscoBfdSessTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFBFDMIB::CiscoBfdSessTable::CiscoBfdSessEntry::~CiscoBfdSessEntry()
{
}

bool CISCOIETFBFDMIB::CiscoBfdSessTable::CiscoBfdSessEntry::has_data() const
{
    if (is_presence_container) return true;
    return ciscobfdsessindex.is_set
	|| ciscobfdsessapplicationid.is_set
	|| ciscobfdsessdiscriminator.is_set
	|| ciscobfdsessremotediscr.is_set
	|| ciscobfdsessudpport.is_set
	|| ciscobfdsessstate.is_set
	|| ciscobfdsessremoteheardflag.is_set
	|| ciscobfdsessdiag.is_set
	|| ciscobfdsessopermode.is_set
	|| ciscobfdsessdemandmodedesiredflag.is_set
	|| ciscobfdsessechofuncmodedesiredflag.is_set
	|| ciscobfdsesscontrolplanindepflag.is_set
	|| ciscobfdsessaddrtype.is_set
	|| ciscobfdsessaddr.is_set
	|| ciscobfdsessdesiredmintxinterval.is_set
	|| ciscobfdsessreqminrxinterval.is_set
	|| ciscobfdsessreqminechorxinterval.is_set
	|| ciscobfdsessdetectmult.is_set
	|| ciscobfdsessstortype.is_set
	|| ciscobfdsessrowstatus.is_set
	|| ciscobfdsessauthpresflag.is_set
	|| ciscobfdsessauthenticationtype.is_set
	|| ciscobfdsessversionnumber.is_set
	|| ciscobfdsesstype.is_set
	|| ciscobfdsessinterface.is_set
	|| ciscobfdsessperfpktin.is_set
	|| ciscobfdsessperfpktout.is_set
	|| ciscobfdsessuptime.is_set
	|| ciscobfdsessperflastsessdowntime.is_set
	|| ciscobfdsessperflastcommlostdiag.is_set
	|| ciscobfdsessperfsessupcount.is_set
	|| ciscobfdsessperfdisctime.is_set
	|| ciscobfdsessperfpktinhc.is_set
	|| ciscobfdsessperfpktouthc.is_set;
}

bool CISCOIETFBFDMIB::CiscoBfdSessTable::CiscoBfdSessEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciscobfdsessindex.yfilter)
	|| ydk::is_set(ciscobfdsessapplicationid.yfilter)
	|| ydk::is_set(ciscobfdsessdiscriminator.yfilter)
	|| ydk::is_set(ciscobfdsessremotediscr.yfilter)
	|| ydk::is_set(ciscobfdsessudpport.yfilter)
	|| ydk::is_set(ciscobfdsessstate.yfilter)
	|| ydk::is_set(ciscobfdsessremoteheardflag.yfilter)
	|| ydk::is_set(ciscobfdsessdiag.yfilter)
	|| ydk::is_set(ciscobfdsessopermode.yfilter)
	|| ydk::is_set(ciscobfdsessdemandmodedesiredflag.yfilter)
	|| ydk::is_set(ciscobfdsessechofuncmodedesiredflag.yfilter)
	|| ydk::is_set(ciscobfdsesscontrolplanindepflag.yfilter)
	|| ydk::is_set(ciscobfdsessaddrtype.yfilter)
	|| ydk::is_set(ciscobfdsessaddr.yfilter)
	|| ydk::is_set(ciscobfdsessdesiredmintxinterval.yfilter)
	|| ydk::is_set(ciscobfdsessreqminrxinterval.yfilter)
	|| ydk::is_set(ciscobfdsessreqminechorxinterval.yfilter)
	|| ydk::is_set(ciscobfdsessdetectmult.yfilter)
	|| ydk::is_set(ciscobfdsessstortype.yfilter)
	|| ydk::is_set(ciscobfdsessrowstatus.yfilter)
	|| ydk::is_set(ciscobfdsessauthpresflag.yfilter)
	|| ydk::is_set(ciscobfdsessauthenticationtype.yfilter)
	|| ydk::is_set(ciscobfdsessversionnumber.yfilter)
	|| ydk::is_set(ciscobfdsesstype.yfilter)
	|| ydk::is_set(ciscobfdsessinterface.yfilter)
	|| ydk::is_set(ciscobfdsessperfpktin.yfilter)
	|| ydk::is_set(ciscobfdsessperfpktout.yfilter)
	|| ydk::is_set(ciscobfdsessuptime.yfilter)
	|| ydk::is_set(ciscobfdsessperflastsessdowntime.yfilter)
	|| ydk::is_set(ciscobfdsessperflastcommlostdiag.yfilter)
	|| ydk::is_set(ciscobfdsessperfsessupcount.yfilter)
	|| ydk::is_set(ciscobfdsessperfdisctime.yfilter)
	|| ydk::is_set(ciscobfdsessperfpktinhc.yfilter)
	|| ydk::is_set(ciscobfdsessperfpktouthc.yfilter);
}

std::string CISCOIETFBFDMIB::CiscoBfdSessTable::CiscoBfdSessEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-BFD-MIB:CISCO-IETF-BFD-MIB/ciscoBfdSessTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFBFDMIB::CiscoBfdSessTable::CiscoBfdSessEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoBfdSessEntry";
    ADD_KEY_TOKEN(ciscobfdsessindex, "ciscoBfdSessIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFBFDMIB::CiscoBfdSessTable::CiscoBfdSessEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscobfdsessindex.is_set || is_set(ciscobfdsessindex.yfilter)) leaf_name_data.push_back(ciscobfdsessindex.get_name_leafdata());
    if (ciscobfdsessapplicationid.is_set || is_set(ciscobfdsessapplicationid.yfilter)) leaf_name_data.push_back(ciscobfdsessapplicationid.get_name_leafdata());
    if (ciscobfdsessdiscriminator.is_set || is_set(ciscobfdsessdiscriminator.yfilter)) leaf_name_data.push_back(ciscobfdsessdiscriminator.get_name_leafdata());
    if (ciscobfdsessremotediscr.is_set || is_set(ciscobfdsessremotediscr.yfilter)) leaf_name_data.push_back(ciscobfdsessremotediscr.get_name_leafdata());
    if (ciscobfdsessudpport.is_set || is_set(ciscobfdsessudpport.yfilter)) leaf_name_data.push_back(ciscobfdsessudpport.get_name_leafdata());
    if (ciscobfdsessstate.is_set || is_set(ciscobfdsessstate.yfilter)) leaf_name_data.push_back(ciscobfdsessstate.get_name_leafdata());
    if (ciscobfdsessremoteheardflag.is_set || is_set(ciscobfdsessremoteheardflag.yfilter)) leaf_name_data.push_back(ciscobfdsessremoteheardflag.get_name_leafdata());
    if (ciscobfdsessdiag.is_set || is_set(ciscobfdsessdiag.yfilter)) leaf_name_data.push_back(ciscobfdsessdiag.get_name_leafdata());
    if (ciscobfdsessopermode.is_set || is_set(ciscobfdsessopermode.yfilter)) leaf_name_data.push_back(ciscobfdsessopermode.get_name_leafdata());
    if (ciscobfdsessdemandmodedesiredflag.is_set || is_set(ciscobfdsessdemandmodedesiredflag.yfilter)) leaf_name_data.push_back(ciscobfdsessdemandmodedesiredflag.get_name_leafdata());
    if (ciscobfdsessechofuncmodedesiredflag.is_set || is_set(ciscobfdsessechofuncmodedesiredflag.yfilter)) leaf_name_data.push_back(ciscobfdsessechofuncmodedesiredflag.get_name_leafdata());
    if (ciscobfdsesscontrolplanindepflag.is_set || is_set(ciscobfdsesscontrolplanindepflag.yfilter)) leaf_name_data.push_back(ciscobfdsesscontrolplanindepflag.get_name_leafdata());
    if (ciscobfdsessaddrtype.is_set || is_set(ciscobfdsessaddrtype.yfilter)) leaf_name_data.push_back(ciscobfdsessaddrtype.get_name_leafdata());
    if (ciscobfdsessaddr.is_set || is_set(ciscobfdsessaddr.yfilter)) leaf_name_data.push_back(ciscobfdsessaddr.get_name_leafdata());
    if (ciscobfdsessdesiredmintxinterval.is_set || is_set(ciscobfdsessdesiredmintxinterval.yfilter)) leaf_name_data.push_back(ciscobfdsessdesiredmintxinterval.get_name_leafdata());
    if (ciscobfdsessreqminrxinterval.is_set || is_set(ciscobfdsessreqminrxinterval.yfilter)) leaf_name_data.push_back(ciscobfdsessreqminrxinterval.get_name_leafdata());
    if (ciscobfdsessreqminechorxinterval.is_set || is_set(ciscobfdsessreqminechorxinterval.yfilter)) leaf_name_data.push_back(ciscobfdsessreqminechorxinterval.get_name_leafdata());
    if (ciscobfdsessdetectmult.is_set || is_set(ciscobfdsessdetectmult.yfilter)) leaf_name_data.push_back(ciscobfdsessdetectmult.get_name_leafdata());
    if (ciscobfdsessstortype.is_set || is_set(ciscobfdsessstortype.yfilter)) leaf_name_data.push_back(ciscobfdsessstortype.get_name_leafdata());
    if (ciscobfdsessrowstatus.is_set || is_set(ciscobfdsessrowstatus.yfilter)) leaf_name_data.push_back(ciscobfdsessrowstatus.get_name_leafdata());
    if (ciscobfdsessauthpresflag.is_set || is_set(ciscobfdsessauthpresflag.yfilter)) leaf_name_data.push_back(ciscobfdsessauthpresflag.get_name_leafdata());
    if (ciscobfdsessauthenticationtype.is_set || is_set(ciscobfdsessauthenticationtype.yfilter)) leaf_name_data.push_back(ciscobfdsessauthenticationtype.get_name_leafdata());
    if (ciscobfdsessversionnumber.is_set || is_set(ciscobfdsessversionnumber.yfilter)) leaf_name_data.push_back(ciscobfdsessversionnumber.get_name_leafdata());
    if (ciscobfdsesstype.is_set || is_set(ciscobfdsesstype.yfilter)) leaf_name_data.push_back(ciscobfdsesstype.get_name_leafdata());
    if (ciscobfdsessinterface.is_set || is_set(ciscobfdsessinterface.yfilter)) leaf_name_data.push_back(ciscobfdsessinterface.get_name_leafdata());
    if (ciscobfdsessperfpktin.is_set || is_set(ciscobfdsessperfpktin.yfilter)) leaf_name_data.push_back(ciscobfdsessperfpktin.get_name_leafdata());
    if (ciscobfdsessperfpktout.is_set || is_set(ciscobfdsessperfpktout.yfilter)) leaf_name_data.push_back(ciscobfdsessperfpktout.get_name_leafdata());
    if (ciscobfdsessuptime.is_set || is_set(ciscobfdsessuptime.yfilter)) leaf_name_data.push_back(ciscobfdsessuptime.get_name_leafdata());
    if (ciscobfdsessperflastsessdowntime.is_set || is_set(ciscobfdsessperflastsessdowntime.yfilter)) leaf_name_data.push_back(ciscobfdsessperflastsessdowntime.get_name_leafdata());
    if (ciscobfdsessperflastcommlostdiag.is_set || is_set(ciscobfdsessperflastcommlostdiag.yfilter)) leaf_name_data.push_back(ciscobfdsessperflastcommlostdiag.get_name_leafdata());
    if (ciscobfdsessperfsessupcount.is_set || is_set(ciscobfdsessperfsessupcount.yfilter)) leaf_name_data.push_back(ciscobfdsessperfsessupcount.get_name_leafdata());
    if (ciscobfdsessperfdisctime.is_set || is_set(ciscobfdsessperfdisctime.yfilter)) leaf_name_data.push_back(ciscobfdsessperfdisctime.get_name_leafdata());
    if (ciscobfdsessperfpktinhc.is_set || is_set(ciscobfdsessperfpktinhc.yfilter)) leaf_name_data.push_back(ciscobfdsessperfpktinhc.get_name_leafdata());
    if (ciscobfdsessperfpktouthc.is_set || is_set(ciscobfdsessperfpktouthc.yfilter)) leaf_name_data.push_back(ciscobfdsessperfpktouthc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFBFDMIB::CiscoBfdSessTable::CiscoBfdSessEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFBFDMIB::CiscoBfdSessTable::CiscoBfdSessEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOIETFBFDMIB::CiscoBfdSessTable::CiscoBfdSessEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciscoBfdSessIndex")
    {
        ciscobfdsessindex = value;
        ciscobfdsessindex.value_namespace = name_space;
        ciscobfdsessindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessApplicationId")
    {
        ciscobfdsessapplicationid = value;
        ciscobfdsessapplicationid.value_namespace = name_space;
        ciscobfdsessapplicationid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessDiscriminator")
    {
        ciscobfdsessdiscriminator = value;
        ciscobfdsessdiscriminator.value_namespace = name_space;
        ciscobfdsessdiscriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessRemoteDiscr")
    {
        ciscobfdsessremotediscr = value;
        ciscobfdsessremotediscr.value_namespace = name_space;
        ciscobfdsessremotediscr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessUdpPort")
    {
        ciscobfdsessudpport = value;
        ciscobfdsessudpport.value_namespace = name_space;
        ciscobfdsessudpport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessState")
    {
        ciscobfdsessstate = value;
        ciscobfdsessstate.value_namespace = name_space;
        ciscobfdsessstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessRemoteHeardFlag")
    {
        ciscobfdsessremoteheardflag = value;
        ciscobfdsessremoteheardflag.value_namespace = name_space;
        ciscobfdsessremoteheardflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessDiag")
    {
        ciscobfdsessdiag = value;
        ciscobfdsessdiag.value_namespace = name_space;
        ciscobfdsessdiag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessOperMode")
    {
        ciscobfdsessopermode = value;
        ciscobfdsessopermode.value_namespace = name_space;
        ciscobfdsessopermode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessDemandModeDesiredFlag")
    {
        ciscobfdsessdemandmodedesiredflag = value;
        ciscobfdsessdemandmodedesiredflag.value_namespace = name_space;
        ciscobfdsessdemandmodedesiredflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessEchoFuncModeDesiredFlag")
    {
        ciscobfdsessechofuncmodedesiredflag = value;
        ciscobfdsessechofuncmodedesiredflag.value_namespace = name_space;
        ciscobfdsessechofuncmodedesiredflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessControlPlanIndepFlag")
    {
        ciscobfdsesscontrolplanindepflag = value;
        ciscobfdsesscontrolplanindepflag.value_namespace = name_space;
        ciscobfdsesscontrolplanindepflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessAddrType")
    {
        ciscobfdsessaddrtype = value;
        ciscobfdsessaddrtype.value_namespace = name_space;
        ciscobfdsessaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessAddr")
    {
        ciscobfdsessaddr = value;
        ciscobfdsessaddr.value_namespace = name_space;
        ciscobfdsessaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessDesiredMinTxInterval")
    {
        ciscobfdsessdesiredmintxinterval = value;
        ciscobfdsessdesiredmintxinterval.value_namespace = name_space;
        ciscobfdsessdesiredmintxinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessReqMinRxInterval")
    {
        ciscobfdsessreqminrxinterval = value;
        ciscobfdsessreqminrxinterval.value_namespace = name_space;
        ciscobfdsessreqminrxinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessReqMinEchoRxInterval")
    {
        ciscobfdsessreqminechorxinterval = value;
        ciscobfdsessreqminechorxinterval.value_namespace = name_space;
        ciscobfdsessreqminechorxinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessDetectMult")
    {
        ciscobfdsessdetectmult = value;
        ciscobfdsessdetectmult.value_namespace = name_space;
        ciscobfdsessdetectmult.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessStorType")
    {
        ciscobfdsessstortype = value;
        ciscobfdsessstortype.value_namespace = name_space;
        ciscobfdsessstortype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessRowStatus")
    {
        ciscobfdsessrowstatus = value;
        ciscobfdsessrowstatus.value_namespace = name_space;
        ciscobfdsessrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessAuthPresFlag")
    {
        ciscobfdsessauthpresflag = value;
        ciscobfdsessauthpresflag.value_namespace = name_space;
        ciscobfdsessauthpresflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessAuthenticationType")
    {
        ciscobfdsessauthenticationtype = value;
        ciscobfdsessauthenticationtype.value_namespace = name_space;
        ciscobfdsessauthenticationtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessVersionNumber")
    {
        ciscobfdsessversionnumber = value;
        ciscobfdsessversionnumber.value_namespace = name_space;
        ciscobfdsessversionnumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessType")
    {
        ciscobfdsesstype = value;
        ciscobfdsesstype.value_namespace = name_space;
        ciscobfdsesstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessInterface")
    {
        ciscobfdsessinterface = value;
        ciscobfdsessinterface.value_namespace = name_space;
        ciscobfdsessinterface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessPerfPktIn")
    {
        ciscobfdsessperfpktin = value;
        ciscobfdsessperfpktin.value_namespace = name_space;
        ciscobfdsessperfpktin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessPerfPktOut")
    {
        ciscobfdsessperfpktout = value;
        ciscobfdsessperfpktout.value_namespace = name_space;
        ciscobfdsessperfpktout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessUpTime")
    {
        ciscobfdsessuptime = value;
        ciscobfdsessuptime.value_namespace = name_space;
        ciscobfdsessuptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessPerfLastSessDownTime")
    {
        ciscobfdsessperflastsessdowntime = value;
        ciscobfdsessperflastsessdowntime.value_namespace = name_space;
        ciscobfdsessperflastsessdowntime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessPerfLastCommLostDiag")
    {
        ciscobfdsessperflastcommlostdiag = value;
        ciscobfdsessperflastcommlostdiag.value_namespace = name_space;
        ciscobfdsessperflastcommlostdiag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessPerfSessUpCount")
    {
        ciscobfdsessperfsessupcount = value;
        ciscobfdsessperfsessupcount.value_namespace = name_space;
        ciscobfdsessperfsessupcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessPerfDiscTime")
    {
        ciscobfdsessperfdisctime = value;
        ciscobfdsessperfdisctime.value_namespace = name_space;
        ciscobfdsessperfdisctime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessPerfPktInHC")
    {
        ciscobfdsessperfpktinhc = value;
        ciscobfdsessperfpktinhc.value_namespace = name_space;
        ciscobfdsessperfpktinhc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessPerfPktOutHC")
    {
        ciscobfdsessperfpktouthc = value;
        ciscobfdsessperfpktouthc.value_namespace = name_space;
        ciscobfdsessperfpktouthc.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIETFBFDMIB::CiscoBfdSessTable::CiscoBfdSessEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciscoBfdSessIndex")
    {
        ciscobfdsessindex.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessApplicationId")
    {
        ciscobfdsessapplicationid.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessDiscriminator")
    {
        ciscobfdsessdiscriminator.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessRemoteDiscr")
    {
        ciscobfdsessremotediscr.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessUdpPort")
    {
        ciscobfdsessudpport.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessState")
    {
        ciscobfdsessstate.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessRemoteHeardFlag")
    {
        ciscobfdsessremoteheardflag.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessDiag")
    {
        ciscobfdsessdiag.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessOperMode")
    {
        ciscobfdsessopermode.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessDemandModeDesiredFlag")
    {
        ciscobfdsessdemandmodedesiredflag.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessEchoFuncModeDesiredFlag")
    {
        ciscobfdsessechofuncmodedesiredflag.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessControlPlanIndepFlag")
    {
        ciscobfdsesscontrolplanindepflag.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessAddrType")
    {
        ciscobfdsessaddrtype.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessAddr")
    {
        ciscobfdsessaddr.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessDesiredMinTxInterval")
    {
        ciscobfdsessdesiredmintxinterval.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessReqMinRxInterval")
    {
        ciscobfdsessreqminrxinterval.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessReqMinEchoRxInterval")
    {
        ciscobfdsessreqminechorxinterval.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessDetectMult")
    {
        ciscobfdsessdetectmult.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessStorType")
    {
        ciscobfdsessstortype.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessRowStatus")
    {
        ciscobfdsessrowstatus.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessAuthPresFlag")
    {
        ciscobfdsessauthpresflag.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessAuthenticationType")
    {
        ciscobfdsessauthenticationtype.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessVersionNumber")
    {
        ciscobfdsessversionnumber.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessType")
    {
        ciscobfdsesstype.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessInterface")
    {
        ciscobfdsessinterface.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessPerfPktIn")
    {
        ciscobfdsessperfpktin.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessPerfPktOut")
    {
        ciscobfdsessperfpktout.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessUpTime")
    {
        ciscobfdsessuptime.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessPerfLastSessDownTime")
    {
        ciscobfdsessperflastsessdowntime.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessPerfLastCommLostDiag")
    {
        ciscobfdsessperflastcommlostdiag.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessPerfSessUpCount")
    {
        ciscobfdsessperfsessupcount.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessPerfDiscTime")
    {
        ciscobfdsessperfdisctime.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessPerfPktInHC")
    {
        ciscobfdsessperfpktinhc.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessPerfPktOutHC")
    {
        ciscobfdsessperfpktouthc.yfilter = yfilter;
    }
}

bool CISCOIETFBFDMIB::CiscoBfdSessTable::CiscoBfdSessEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoBfdSessIndex" || name == "ciscoBfdSessApplicationId" || name == "ciscoBfdSessDiscriminator" || name == "ciscoBfdSessRemoteDiscr" || name == "ciscoBfdSessUdpPort" || name == "ciscoBfdSessState" || name == "ciscoBfdSessRemoteHeardFlag" || name == "ciscoBfdSessDiag" || name == "ciscoBfdSessOperMode" || name == "ciscoBfdSessDemandModeDesiredFlag" || name == "ciscoBfdSessEchoFuncModeDesiredFlag" || name == "ciscoBfdSessControlPlanIndepFlag" || name == "ciscoBfdSessAddrType" || name == "ciscoBfdSessAddr" || name == "ciscoBfdSessDesiredMinTxInterval" || name == "ciscoBfdSessReqMinRxInterval" || name == "ciscoBfdSessReqMinEchoRxInterval" || name == "ciscoBfdSessDetectMult" || name == "ciscoBfdSessStorType" || name == "ciscoBfdSessRowStatus" || name == "ciscoBfdSessAuthPresFlag" || name == "ciscoBfdSessAuthenticationType" || name == "ciscoBfdSessVersionNumber" || name == "ciscoBfdSessType" || name == "ciscoBfdSessInterface" || name == "ciscoBfdSessPerfPktIn" || name == "ciscoBfdSessPerfPktOut" || name == "ciscoBfdSessUpTime" || name == "ciscoBfdSessPerfLastSessDownTime" || name == "ciscoBfdSessPerfLastCommLostDiag" || name == "ciscoBfdSessPerfSessUpCount" || name == "ciscoBfdSessPerfDiscTime" || name == "ciscoBfdSessPerfPktInHC" || name == "ciscoBfdSessPerfPktOutHC")
        return true;
    return false;
}

CISCOIETFBFDMIB::CiscoBfdSessMapTable::CiscoBfdSessMapTable()
    :
    ciscobfdsessmapentry(this, {"ciscobfdsessapplicationid", "ciscobfdsessdiscriminator", "ciscobfdsessaddrtype", "ciscobfdsessaddr"})
{

    yang_name = "ciscoBfdSessMapTable"; yang_parent_name = "CISCO-IETF-BFD-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFBFDMIB::CiscoBfdSessMapTable::~CiscoBfdSessMapTable()
{
}

bool CISCOIETFBFDMIB::CiscoBfdSessMapTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ciscobfdsessmapentry.len(); index++)
    {
        if(ciscobfdsessmapentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFBFDMIB::CiscoBfdSessMapTable::has_operation() const
{
    for (std::size_t index=0; index<ciscobfdsessmapentry.len(); index++)
    {
        if(ciscobfdsessmapentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFBFDMIB::CiscoBfdSessMapTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-BFD-MIB:CISCO-IETF-BFD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFBFDMIB::CiscoBfdSessMapTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoBfdSessMapTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFBFDMIB::CiscoBfdSessMapTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFBFDMIB::CiscoBfdSessMapTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoBfdSessMapEntry")
    {
        auto ent_ = std::make_shared<CISCOIETFBFDMIB::CiscoBfdSessMapTable::CiscoBfdSessMapEntry>();
        ent_->parent = this;
        ciscobfdsessmapentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFBFDMIB::CiscoBfdSessMapTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ciscobfdsessmapentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOIETFBFDMIB::CiscoBfdSessMapTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFBFDMIB::CiscoBfdSessMapTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFBFDMIB::CiscoBfdSessMapTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoBfdSessMapEntry")
        return true;
    return false;
}

CISCOIETFBFDMIB::CiscoBfdSessMapTable::CiscoBfdSessMapEntry::CiscoBfdSessMapEntry()
    :
    ciscobfdsessapplicationid{YType::str, "ciscoBfdSessApplicationId"},
    ciscobfdsessdiscriminator{YType::str, "ciscoBfdSessDiscriminator"},
    ciscobfdsessaddrtype{YType::enumeration, "ciscoBfdSessAddrType"},
    ciscobfdsessaddr{YType::str, "ciscoBfdSessAddr"},
    ciscobfdsessmapbfdindex{YType::uint32, "ciscoBfdSessMapBfdIndex"}
{

    yang_name = "ciscoBfdSessMapEntry"; yang_parent_name = "ciscoBfdSessMapTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFBFDMIB::CiscoBfdSessMapTable::CiscoBfdSessMapEntry::~CiscoBfdSessMapEntry()
{
}

bool CISCOIETFBFDMIB::CiscoBfdSessMapTable::CiscoBfdSessMapEntry::has_data() const
{
    if (is_presence_container) return true;
    return ciscobfdsessapplicationid.is_set
	|| ciscobfdsessdiscriminator.is_set
	|| ciscobfdsessaddrtype.is_set
	|| ciscobfdsessaddr.is_set
	|| ciscobfdsessmapbfdindex.is_set;
}

bool CISCOIETFBFDMIB::CiscoBfdSessMapTable::CiscoBfdSessMapEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciscobfdsessapplicationid.yfilter)
	|| ydk::is_set(ciscobfdsessdiscriminator.yfilter)
	|| ydk::is_set(ciscobfdsessaddrtype.yfilter)
	|| ydk::is_set(ciscobfdsessaddr.yfilter)
	|| ydk::is_set(ciscobfdsessmapbfdindex.yfilter);
}

std::string CISCOIETFBFDMIB::CiscoBfdSessMapTable::CiscoBfdSessMapEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-BFD-MIB:CISCO-IETF-BFD-MIB/ciscoBfdSessMapTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFBFDMIB::CiscoBfdSessMapTable::CiscoBfdSessMapEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoBfdSessMapEntry";
    ADD_KEY_TOKEN(ciscobfdsessapplicationid, "ciscoBfdSessApplicationId");
    ADD_KEY_TOKEN(ciscobfdsessdiscriminator, "ciscoBfdSessDiscriminator");
    ADD_KEY_TOKEN(ciscobfdsessaddrtype, "ciscoBfdSessAddrType");
    ADD_KEY_TOKEN(ciscobfdsessaddr, "ciscoBfdSessAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFBFDMIB::CiscoBfdSessMapTable::CiscoBfdSessMapEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscobfdsessapplicationid.is_set || is_set(ciscobfdsessapplicationid.yfilter)) leaf_name_data.push_back(ciscobfdsessapplicationid.get_name_leafdata());
    if (ciscobfdsessdiscriminator.is_set || is_set(ciscobfdsessdiscriminator.yfilter)) leaf_name_data.push_back(ciscobfdsessdiscriminator.get_name_leafdata());
    if (ciscobfdsessaddrtype.is_set || is_set(ciscobfdsessaddrtype.yfilter)) leaf_name_data.push_back(ciscobfdsessaddrtype.get_name_leafdata());
    if (ciscobfdsessaddr.is_set || is_set(ciscobfdsessaddr.yfilter)) leaf_name_data.push_back(ciscobfdsessaddr.get_name_leafdata());
    if (ciscobfdsessmapbfdindex.is_set || is_set(ciscobfdsessmapbfdindex.yfilter)) leaf_name_data.push_back(ciscobfdsessmapbfdindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFBFDMIB::CiscoBfdSessMapTable::CiscoBfdSessMapEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFBFDMIB::CiscoBfdSessMapTable::CiscoBfdSessMapEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOIETFBFDMIB::CiscoBfdSessMapTable::CiscoBfdSessMapEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciscoBfdSessApplicationId")
    {
        ciscobfdsessapplicationid = value;
        ciscobfdsessapplicationid.value_namespace = name_space;
        ciscobfdsessapplicationid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessDiscriminator")
    {
        ciscobfdsessdiscriminator = value;
        ciscobfdsessdiscriminator.value_namespace = name_space;
        ciscobfdsessdiscriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessAddrType")
    {
        ciscobfdsessaddrtype = value;
        ciscobfdsessaddrtype.value_namespace = name_space;
        ciscobfdsessaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessAddr")
    {
        ciscobfdsessaddr = value;
        ciscobfdsessaddr.value_namespace = name_space;
        ciscobfdsessaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessMapBfdIndex")
    {
        ciscobfdsessmapbfdindex = value;
        ciscobfdsessmapbfdindex.value_namespace = name_space;
        ciscobfdsessmapbfdindex.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIETFBFDMIB::CiscoBfdSessMapTable::CiscoBfdSessMapEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciscoBfdSessApplicationId")
    {
        ciscobfdsessapplicationid.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessDiscriminator")
    {
        ciscobfdsessdiscriminator.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessAddrType")
    {
        ciscobfdsessaddrtype.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessAddr")
    {
        ciscobfdsessaddr.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessMapBfdIndex")
    {
        ciscobfdsessmapbfdindex.yfilter = yfilter;
    }
}

bool CISCOIETFBFDMIB::CiscoBfdSessMapTable::CiscoBfdSessMapEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoBfdSessApplicationId" || name == "ciscoBfdSessDiscriminator" || name == "ciscoBfdSessAddrType" || name == "ciscoBfdSessAddr" || name == "ciscoBfdSessMapBfdIndex")
        return true;
    return false;
}

CISCOIETFBFDMIB::CiscoBfdSessDiscMapTable::CiscoBfdSessDiscMapTable()
    :
    ciscobfdsessdiscmapentry(this, {"ciscobfdsessdiscriminator"})
{

    yang_name = "ciscoBfdSessDiscMapTable"; yang_parent_name = "CISCO-IETF-BFD-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFBFDMIB::CiscoBfdSessDiscMapTable::~CiscoBfdSessDiscMapTable()
{
}

bool CISCOIETFBFDMIB::CiscoBfdSessDiscMapTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ciscobfdsessdiscmapentry.len(); index++)
    {
        if(ciscobfdsessdiscmapentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFBFDMIB::CiscoBfdSessDiscMapTable::has_operation() const
{
    for (std::size_t index=0; index<ciscobfdsessdiscmapentry.len(); index++)
    {
        if(ciscobfdsessdiscmapentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFBFDMIB::CiscoBfdSessDiscMapTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-BFD-MIB:CISCO-IETF-BFD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFBFDMIB::CiscoBfdSessDiscMapTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoBfdSessDiscMapTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFBFDMIB::CiscoBfdSessDiscMapTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFBFDMIB::CiscoBfdSessDiscMapTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoBfdSessDiscMapEntry")
    {
        auto ent_ = std::make_shared<CISCOIETFBFDMIB::CiscoBfdSessDiscMapTable::CiscoBfdSessDiscMapEntry>();
        ent_->parent = this;
        ciscobfdsessdiscmapentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFBFDMIB::CiscoBfdSessDiscMapTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ciscobfdsessdiscmapentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOIETFBFDMIB::CiscoBfdSessDiscMapTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFBFDMIB::CiscoBfdSessDiscMapTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFBFDMIB::CiscoBfdSessDiscMapTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoBfdSessDiscMapEntry")
        return true;
    return false;
}

CISCOIETFBFDMIB::CiscoBfdSessDiscMapTable::CiscoBfdSessDiscMapEntry::CiscoBfdSessDiscMapEntry()
    :
    ciscobfdsessdiscriminator{YType::str, "ciscoBfdSessDiscriminator"},
    ciscobfdsessdiscmapindex{YType::uint32, "ciscoBfdSessDiscMapIndex"}
{

    yang_name = "ciscoBfdSessDiscMapEntry"; yang_parent_name = "ciscoBfdSessDiscMapTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFBFDMIB::CiscoBfdSessDiscMapTable::CiscoBfdSessDiscMapEntry::~CiscoBfdSessDiscMapEntry()
{
}

bool CISCOIETFBFDMIB::CiscoBfdSessDiscMapTable::CiscoBfdSessDiscMapEntry::has_data() const
{
    if (is_presence_container) return true;
    return ciscobfdsessdiscriminator.is_set
	|| ciscobfdsessdiscmapindex.is_set;
}

bool CISCOIETFBFDMIB::CiscoBfdSessDiscMapTable::CiscoBfdSessDiscMapEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciscobfdsessdiscriminator.yfilter)
	|| ydk::is_set(ciscobfdsessdiscmapindex.yfilter);
}

std::string CISCOIETFBFDMIB::CiscoBfdSessDiscMapTable::CiscoBfdSessDiscMapEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-BFD-MIB:CISCO-IETF-BFD-MIB/ciscoBfdSessDiscMapTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFBFDMIB::CiscoBfdSessDiscMapTable::CiscoBfdSessDiscMapEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoBfdSessDiscMapEntry";
    ADD_KEY_TOKEN(ciscobfdsessdiscriminator, "ciscoBfdSessDiscriminator");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFBFDMIB::CiscoBfdSessDiscMapTable::CiscoBfdSessDiscMapEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscobfdsessdiscriminator.is_set || is_set(ciscobfdsessdiscriminator.yfilter)) leaf_name_data.push_back(ciscobfdsessdiscriminator.get_name_leafdata());
    if (ciscobfdsessdiscmapindex.is_set || is_set(ciscobfdsessdiscmapindex.yfilter)) leaf_name_data.push_back(ciscobfdsessdiscmapindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFBFDMIB::CiscoBfdSessDiscMapTable::CiscoBfdSessDiscMapEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFBFDMIB::CiscoBfdSessDiscMapTable::CiscoBfdSessDiscMapEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOIETFBFDMIB::CiscoBfdSessDiscMapTable::CiscoBfdSessDiscMapEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciscoBfdSessDiscriminator")
    {
        ciscobfdsessdiscriminator = value;
        ciscobfdsessdiscriminator.value_namespace = name_space;
        ciscobfdsessdiscriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessDiscMapIndex")
    {
        ciscobfdsessdiscmapindex = value;
        ciscobfdsessdiscmapindex.value_namespace = name_space;
        ciscobfdsessdiscmapindex.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIETFBFDMIB::CiscoBfdSessDiscMapTable::CiscoBfdSessDiscMapEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciscoBfdSessDiscriminator")
    {
        ciscobfdsessdiscriminator.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessDiscMapIndex")
    {
        ciscobfdsessdiscmapindex.yfilter = yfilter;
    }
}

bool CISCOIETFBFDMIB::CiscoBfdSessDiscMapTable::CiscoBfdSessDiscMapEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoBfdSessDiscriminator" || name == "ciscoBfdSessDiscMapIndex")
        return true;
    return false;
}

CISCOIETFBFDMIB::CiscoBfdSessIpMapTable::CiscoBfdSessIpMapTable()
    :
    ciscobfdsessipmapentry(this, {"ciscobfdsessinterface", "ciscobfdsessaddrtype", "ciscobfdsessaddr"})
{

    yang_name = "ciscoBfdSessIpMapTable"; yang_parent_name = "CISCO-IETF-BFD-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFBFDMIB::CiscoBfdSessIpMapTable::~CiscoBfdSessIpMapTable()
{
}

bool CISCOIETFBFDMIB::CiscoBfdSessIpMapTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ciscobfdsessipmapentry.len(); index++)
    {
        if(ciscobfdsessipmapentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOIETFBFDMIB::CiscoBfdSessIpMapTable::has_operation() const
{
    for (std::size_t index=0; index<ciscobfdsessipmapentry.len(); index++)
    {
        if(ciscobfdsessipmapentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOIETFBFDMIB::CiscoBfdSessIpMapTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-BFD-MIB:CISCO-IETF-BFD-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFBFDMIB::CiscoBfdSessIpMapTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoBfdSessIpMapTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFBFDMIB::CiscoBfdSessIpMapTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFBFDMIB::CiscoBfdSessIpMapTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoBfdSessIpMapEntry")
    {
        auto ent_ = std::make_shared<CISCOIETFBFDMIB::CiscoBfdSessIpMapTable::CiscoBfdSessIpMapEntry>();
        ent_->parent = this;
        ciscobfdsessipmapentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFBFDMIB::CiscoBfdSessIpMapTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ciscobfdsessipmapentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOIETFBFDMIB::CiscoBfdSessIpMapTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOIETFBFDMIB::CiscoBfdSessIpMapTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOIETFBFDMIB::CiscoBfdSessIpMapTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoBfdSessIpMapEntry")
        return true;
    return false;
}

CISCOIETFBFDMIB::CiscoBfdSessIpMapTable::CiscoBfdSessIpMapEntry::CiscoBfdSessIpMapEntry()
    :
    ciscobfdsessinterface{YType::str, "ciscoBfdSessInterface"},
    ciscobfdsessaddrtype{YType::enumeration, "ciscoBfdSessAddrType"},
    ciscobfdsessaddr{YType::str, "ciscoBfdSessAddr"},
    ciscobfdsessipmapindex{YType::uint32, "ciscoBfdSessIpMapIndex"}
{

    yang_name = "ciscoBfdSessIpMapEntry"; yang_parent_name = "ciscoBfdSessIpMapTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOIETFBFDMIB::CiscoBfdSessIpMapTable::CiscoBfdSessIpMapEntry::~CiscoBfdSessIpMapEntry()
{
}

bool CISCOIETFBFDMIB::CiscoBfdSessIpMapTable::CiscoBfdSessIpMapEntry::has_data() const
{
    if (is_presence_container) return true;
    return ciscobfdsessinterface.is_set
	|| ciscobfdsessaddrtype.is_set
	|| ciscobfdsessaddr.is_set
	|| ciscobfdsessipmapindex.is_set;
}

bool CISCOIETFBFDMIB::CiscoBfdSessIpMapTable::CiscoBfdSessIpMapEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciscobfdsessinterface.yfilter)
	|| ydk::is_set(ciscobfdsessaddrtype.yfilter)
	|| ydk::is_set(ciscobfdsessaddr.yfilter)
	|| ydk::is_set(ciscobfdsessipmapindex.yfilter);
}

std::string CISCOIETFBFDMIB::CiscoBfdSessIpMapTable::CiscoBfdSessIpMapEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-BFD-MIB:CISCO-IETF-BFD-MIB/ciscoBfdSessIpMapTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOIETFBFDMIB::CiscoBfdSessIpMapTable::CiscoBfdSessIpMapEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoBfdSessIpMapEntry";
    ADD_KEY_TOKEN(ciscobfdsessinterface, "ciscoBfdSessInterface");
    ADD_KEY_TOKEN(ciscobfdsessaddrtype, "ciscoBfdSessAddrType");
    ADD_KEY_TOKEN(ciscobfdsessaddr, "ciscoBfdSessAddr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOIETFBFDMIB::CiscoBfdSessIpMapTable::CiscoBfdSessIpMapEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscobfdsessinterface.is_set || is_set(ciscobfdsessinterface.yfilter)) leaf_name_data.push_back(ciscobfdsessinterface.get_name_leafdata());
    if (ciscobfdsessaddrtype.is_set || is_set(ciscobfdsessaddrtype.yfilter)) leaf_name_data.push_back(ciscobfdsessaddrtype.get_name_leafdata());
    if (ciscobfdsessaddr.is_set || is_set(ciscobfdsessaddr.yfilter)) leaf_name_data.push_back(ciscobfdsessaddr.get_name_leafdata());
    if (ciscobfdsessipmapindex.is_set || is_set(ciscobfdsessipmapindex.yfilter)) leaf_name_data.push_back(ciscobfdsessipmapindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOIETFBFDMIB::CiscoBfdSessIpMapTable::CiscoBfdSessIpMapEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOIETFBFDMIB::CiscoBfdSessIpMapTable::CiscoBfdSessIpMapEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOIETFBFDMIB::CiscoBfdSessIpMapTable::CiscoBfdSessIpMapEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciscoBfdSessInterface")
    {
        ciscobfdsessinterface = value;
        ciscobfdsessinterface.value_namespace = name_space;
        ciscobfdsessinterface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessAddrType")
    {
        ciscobfdsessaddrtype = value;
        ciscobfdsessaddrtype.value_namespace = name_space;
        ciscobfdsessaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessAddr")
    {
        ciscobfdsessaddr = value;
        ciscobfdsessaddr.value_namespace = name_space;
        ciscobfdsessaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessIpMapIndex")
    {
        ciscobfdsessipmapindex = value;
        ciscobfdsessipmapindex.value_namespace = name_space;
        ciscobfdsessipmapindex.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOIETFBFDMIB::CiscoBfdSessIpMapTable::CiscoBfdSessIpMapEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciscoBfdSessInterface")
    {
        ciscobfdsessinterface.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessAddrType")
    {
        ciscobfdsessaddrtype.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessAddr")
    {
        ciscobfdsessaddr.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessIpMapIndex")
    {
        ciscobfdsessipmapindex.yfilter = yfilter;
    }
}

bool CISCOIETFBFDMIB::CiscoBfdSessIpMapTable::CiscoBfdSessIpMapEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoBfdSessInterface" || name == "ciscoBfdSessAddrType" || name == "ciscoBfdSessAddr" || name == "ciscoBfdSessIpMapIndex")
        return true;
    return false;
}

const Enum::YLeaf CiscoBfdDiag::noDiagnostic {0, "noDiagnostic"};
const Enum::YLeaf CiscoBfdDiag::controlDetectionTimeExpired {1, "controlDetectionTimeExpired"};
const Enum::YLeaf CiscoBfdDiag::echoFunctionFailed {2, "echoFunctionFailed"};
const Enum::YLeaf CiscoBfdDiag::neighborSignaledSessionDown {3, "neighborSignaledSessionDown"};
const Enum::YLeaf CiscoBfdDiag::forwardingPlaneReset {4, "forwardingPlaneReset"};
const Enum::YLeaf CiscoBfdDiag::pathDown {5, "pathDown"};
const Enum::YLeaf CiscoBfdDiag::concatenatedPathDown {6, "concatenatedPathDown"};
const Enum::YLeaf CiscoBfdDiag::administrativelyDown {7, "administrativelyDown"};
const Enum::YLeaf CiscoBfdDiag::reverseConcatenatedPathDown {8, "reverseConcatenatedPathDown"};

const Enum::YLeaf CISCOIETFBFDMIB::CiscoBfdScalarObjects::CiscoBfdAdminStatus::enabled {1, "enabled"};
const Enum::YLeaf CISCOIETFBFDMIB::CiscoBfdScalarObjects::CiscoBfdAdminStatus::disabled {2, "disabled"};

const Enum::YLeaf CISCOIETFBFDMIB::CiscoBfdSessTable::CiscoBfdSessEntry::CiscoBfdSessState::adminDown {1, "adminDown"};
const Enum::YLeaf CISCOIETFBFDMIB::CiscoBfdSessTable::CiscoBfdSessEntry::CiscoBfdSessState::down {2, "down"};
const Enum::YLeaf CISCOIETFBFDMIB::CiscoBfdSessTable::CiscoBfdSessEntry::CiscoBfdSessState::init {3, "init"};
const Enum::YLeaf CISCOIETFBFDMIB::CiscoBfdSessTable::CiscoBfdSessEntry::CiscoBfdSessState::up {4, "up"};
const Enum::YLeaf CISCOIETFBFDMIB::CiscoBfdSessTable::CiscoBfdSessEntry::CiscoBfdSessState::failing {5, "failing"};

const Enum::YLeaf CISCOIETFBFDMIB::CiscoBfdSessTable::CiscoBfdSessEntry::CiscoBfdSessOperMode::asyncModeWEchoFun {1, "asyncModeWEchoFun"};
const Enum::YLeaf CISCOIETFBFDMIB::CiscoBfdSessTable::CiscoBfdSessEntry::CiscoBfdSessOperMode::asynchModeWOEchoFun {2, "asynchModeWOEchoFun"};
const Enum::YLeaf CISCOIETFBFDMIB::CiscoBfdSessTable::CiscoBfdSessEntry::CiscoBfdSessOperMode::demandModeWEchoFunction {3, "demandModeWEchoFunction"};
const Enum::YLeaf CISCOIETFBFDMIB::CiscoBfdSessTable::CiscoBfdSessEntry::CiscoBfdSessOperMode::demandModeWOEchoFunction {4, "demandModeWOEchoFunction"};

const Enum::YLeaf CISCOIETFBFDMIB::CiscoBfdSessTable::CiscoBfdSessEntry::CiscoBfdSessAuthenticationType::simplePassword {1, "simplePassword"};
const Enum::YLeaf CISCOIETFBFDMIB::CiscoBfdSessTable::CiscoBfdSessEntry::CiscoBfdSessAuthenticationType::keyedMD5 {2, "keyedMD5"};
const Enum::YLeaf CISCOIETFBFDMIB::CiscoBfdSessTable::CiscoBfdSessEntry::CiscoBfdSessAuthenticationType::meticulousKeyedMD5 {3, "meticulousKeyedMD5"};
const Enum::YLeaf CISCOIETFBFDMIB::CiscoBfdSessTable::CiscoBfdSessEntry::CiscoBfdSessAuthenticationType::keyedSHA1 {4, "keyedSHA1"};
const Enum::YLeaf CISCOIETFBFDMIB::CiscoBfdSessTable::CiscoBfdSessEntry::CiscoBfdSessAuthenticationType::meticulousKeyedSHA1 {5, "meticulousKeyedSHA1"};

const Enum::YLeaf CISCOIETFBFDMIB::CiscoBfdSessTable::CiscoBfdSessEntry::CiscoBfdSessType::singleHop {1, "singleHop"};
const Enum::YLeaf CISCOIETFBFDMIB::CiscoBfdSessTable::CiscoBfdSessEntry::CiscoBfdSessType::multiHop {2, "multiHop"};


}
}

