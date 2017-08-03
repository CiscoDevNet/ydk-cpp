
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IETF_BFD_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_IETF_BFD_MIB {

CiscoIetfBfdMib::CiscoIetfBfdMib()
    :
    ciscobfdscalarobjects(std::make_shared<CiscoIetfBfdMib::Ciscobfdscalarobjects>())
	,ciscobfdsessdiscmaptable(std::make_shared<CiscoIetfBfdMib::Ciscobfdsessdiscmaptable>())
	,ciscobfdsessipmaptable(std::make_shared<CiscoIetfBfdMib::Ciscobfdsessipmaptable>())
	,ciscobfdsessmaptable(std::make_shared<CiscoIetfBfdMib::Ciscobfdsessmaptable>())
	,ciscobfdsesstable(std::make_shared<CiscoIetfBfdMib::Ciscobfdsesstable>())
{
    ciscobfdscalarobjects->parent = this;

    ciscobfdsessdiscmaptable->parent = this;

    ciscobfdsessipmaptable->parent = this;

    ciscobfdsessmaptable->parent = this;

    ciscobfdsesstable->parent = this;

    yang_name = "CISCO-IETF-BFD-MIB"; yang_parent_name = "CISCO-IETF-BFD-MIB";
}

CiscoIetfBfdMib::~CiscoIetfBfdMib()
{
}

bool CiscoIetfBfdMib::has_data() const
{
    return (ciscobfdscalarobjects !=  nullptr && ciscobfdscalarobjects->has_data())
	|| (ciscobfdsessdiscmaptable !=  nullptr && ciscobfdsessdiscmaptable->has_data())
	|| (ciscobfdsessipmaptable !=  nullptr && ciscobfdsessipmaptable->has_data())
	|| (ciscobfdsessmaptable !=  nullptr && ciscobfdsessmaptable->has_data())
	|| (ciscobfdsesstable !=  nullptr && ciscobfdsesstable->has_data());
}

bool CiscoIetfBfdMib::has_operation() const
{
    return is_set(yfilter)
	|| (ciscobfdscalarobjects !=  nullptr && ciscobfdscalarobjects->has_operation())
	|| (ciscobfdsessdiscmaptable !=  nullptr && ciscobfdsessdiscmaptable->has_operation())
	|| (ciscobfdsessipmaptable !=  nullptr && ciscobfdsessipmaptable->has_operation())
	|| (ciscobfdsessmaptable !=  nullptr && ciscobfdsessmaptable->has_operation())
	|| (ciscobfdsesstable !=  nullptr && ciscobfdsesstable->has_operation());
}

std::string CiscoIetfBfdMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-BFD-MIB:CISCO-IETF-BFD-MIB";

    return path_buffer.str();

}

const EntityPath CiscoIetfBfdMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoIetfBfdMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoBfdScalarObjects")
    {
        if(ciscobfdscalarobjects == nullptr)
        {
            ciscobfdscalarobjects = std::make_shared<CiscoIetfBfdMib::Ciscobfdscalarobjects>();
        }
        return ciscobfdscalarobjects;
    }

    if(child_yang_name == "ciscoBfdSessDiscMapTable")
    {
        if(ciscobfdsessdiscmaptable == nullptr)
        {
            ciscobfdsessdiscmaptable = std::make_shared<CiscoIetfBfdMib::Ciscobfdsessdiscmaptable>();
        }
        return ciscobfdsessdiscmaptable;
    }

    if(child_yang_name == "ciscoBfdSessIpMapTable")
    {
        if(ciscobfdsessipmaptable == nullptr)
        {
            ciscobfdsessipmaptable = std::make_shared<CiscoIetfBfdMib::Ciscobfdsessipmaptable>();
        }
        return ciscobfdsessipmaptable;
    }

    if(child_yang_name == "ciscoBfdSessMapTable")
    {
        if(ciscobfdsessmaptable == nullptr)
        {
            ciscobfdsessmaptable = std::make_shared<CiscoIetfBfdMib::Ciscobfdsessmaptable>();
        }
        return ciscobfdsessmaptable;
    }

    if(child_yang_name == "ciscoBfdSessTable")
    {
        if(ciscobfdsesstable == nullptr)
        {
            ciscobfdsesstable = std::make_shared<CiscoIetfBfdMib::Ciscobfdsesstable>();
        }
        return ciscobfdsesstable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfBfdMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ciscobfdscalarobjects != nullptr)
    {
        children["ciscoBfdScalarObjects"] = ciscobfdscalarobjects;
    }

    if(ciscobfdsessdiscmaptable != nullptr)
    {
        children["ciscoBfdSessDiscMapTable"] = ciscobfdsessdiscmaptable;
    }

    if(ciscobfdsessipmaptable != nullptr)
    {
        children["ciscoBfdSessIpMapTable"] = ciscobfdsessipmaptable;
    }

    if(ciscobfdsessmaptable != nullptr)
    {
        children["ciscoBfdSessMapTable"] = ciscobfdsessmaptable;
    }

    if(ciscobfdsesstable != nullptr)
    {
        children["ciscoBfdSessTable"] = ciscobfdsesstable;
    }

    return children;
}

void CiscoIetfBfdMib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIetfBfdMib::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CiscoIetfBfdMib::clone_ptr() const
{
    return std::make_shared<CiscoIetfBfdMib>();
}

std::string CiscoIetfBfdMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoIetfBfdMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoIetfBfdMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CiscoIetfBfdMib::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CiscoIetfBfdMib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoBfdScalarObjects" || name == "ciscoBfdSessDiscMapTable" || name == "ciscoBfdSessIpMapTable" || name == "ciscoBfdSessMapTable" || name == "ciscoBfdSessTable")
        return true;
    return false;
}

CiscoIetfBfdMib::Ciscobfdscalarobjects::Ciscobfdscalarobjects()
    :
    ciscobfdadminstatus{YType::enumeration, "ciscoBfdAdminStatus"},
    ciscobfdsessnotificationsenable{YType::boolean, "ciscoBfdSessNotificationsEnable"},
    ciscobfdversionnumber{YType::uint32, "ciscoBfdVersionNumber"}
{
    yang_name = "ciscoBfdScalarObjects"; yang_parent_name = "CISCO-IETF-BFD-MIB";
}

CiscoIetfBfdMib::Ciscobfdscalarobjects::~Ciscobfdscalarobjects()
{
}

bool CiscoIetfBfdMib::Ciscobfdscalarobjects::has_data() const
{
    return ciscobfdadminstatus.is_set
	|| ciscobfdsessnotificationsenable.is_set
	|| ciscobfdversionnumber.is_set;
}

bool CiscoIetfBfdMib::Ciscobfdscalarobjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciscobfdadminstatus.yfilter)
	|| ydk::is_set(ciscobfdsessnotificationsenable.yfilter)
	|| ydk::is_set(ciscobfdversionnumber.yfilter);
}

std::string CiscoIetfBfdMib::Ciscobfdscalarobjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoBfdScalarObjects";

    return path_buffer.str();

}

const EntityPath CiscoIetfBfdMib::Ciscobfdscalarobjects::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-BFD-MIB:CISCO-IETF-BFD-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscobfdadminstatus.is_set || is_set(ciscobfdadminstatus.yfilter)) leaf_name_data.push_back(ciscobfdadminstatus.get_name_leafdata());
    if (ciscobfdsessnotificationsenable.is_set || is_set(ciscobfdsessnotificationsenable.yfilter)) leaf_name_data.push_back(ciscobfdsessnotificationsenable.get_name_leafdata());
    if (ciscobfdversionnumber.is_set || is_set(ciscobfdversionnumber.yfilter)) leaf_name_data.push_back(ciscobfdversionnumber.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfBfdMib::Ciscobfdscalarobjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfBfdMib::Ciscobfdscalarobjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfBfdMib::Ciscobfdscalarobjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciscoBfdAdminStatus")
    {
        ciscobfdadminstatus = value;
        ciscobfdadminstatus.value_namespace = name_space;
        ciscobfdadminstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessNotificationsEnable")
    {
        ciscobfdsessnotificationsenable = value;
        ciscobfdsessnotificationsenable.value_namespace = name_space;
        ciscobfdsessnotificationsenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdVersionNumber")
    {
        ciscobfdversionnumber = value;
        ciscobfdversionnumber.value_namespace = name_space;
        ciscobfdversionnumber.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIetfBfdMib::Ciscobfdscalarobjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciscoBfdAdminStatus")
    {
        ciscobfdadminstatus.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessNotificationsEnable")
    {
        ciscobfdsessnotificationsenable.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdVersionNumber")
    {
        ciscobfdversionnumber.yfilter = yfilter;
    }
}

bool CiscoIetfBfdMib::Ciscobfdscalarobjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoBfdAdminStatus" || name == "ciscoBfdSessNotificationsEnable" || name == "ciscoBfdVersionNumber")
        return true;
    return false;
}

CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsesstable()
{
    yang_name = "ciscoBfdSessTable"; yang_parent_name = "CISCO-IETF-BFD-MIB";
}

CiscoIetfBfdMib::Ciscobfdsesstable::~Ciscobfdsesstable()
{
}

bool CiscoIetfBfdMib::Ciscobfdsesstable::has_data() const
{
    for (std::size_t index=0; index<ciscobfdsessentry.size(); index++)
    {
        if(ciscobfdsessentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfBfdMib::Ciscobfdsesstable::has_operation() const
{
    for (std::size_t index=0; index<ciscobfdsessentry.size(); index++)
    {
        if(ciscobfdsessentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoIetfBfdMib::Ciscobfdsesstable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoBfdSessTable";

    return path_buffer.str();

}

const EntityPath CiscoIetfBfdMib::Ciscobfdsesstable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-BFD-MIB:CISCO-IETF-BFD-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfBfdMib::Ciscobfdsesstable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoBfdSessEntry")
    {
        for(auto const & c : ciscobfdsessentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry>();
        c->parent = this;
        ciscobfdsessentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfBfdMib::Ciscobfdsesstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciscobfdsessentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfBfdMib::Ciscobfdsesstable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIetfBfdMib::Ciscobfdsesstable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIetfBfdMib::Ciscobfdsesstable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoBfdSessEntry")
        return true;
    return false;
}

CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::Ciscobfdsessentry()
    :
    ciscobfdsessindex{YType::uint32, "ciscoBfdSessIndex"},
    ciscobfdsessaddr{YType::str, "ciscoBfdSessAddr"},
    ciscobfdsessaddrtype{YType::enumeration, "ciscoBfdSessAddrType"},
    ciscobfdsessapplicationid{YType::uint32, "ciscoBfdSessApplicationId"},
    ciscobfdsessauthenticationtype{YType::enumeration, "ciscoBfdSessAuthenticationType"},
    ciscobfdsessauthpresflag{YType::boolean, "ciscoBfdSessAuthPresFlag"},
    ciscobfdsesscontrolplanindepflag{YType::boolean, "ciscoBfdSessControlPlanIndepFlag"},
    ciscobfdsessdemandmodedesiredflag{YType::boolean, "ciscoBfdSessDemandModeDesiredFlag"},
    ciscobfdsessdesiredmintxinterval{YType::uint32, "ciscoBfdSessDesiredMinTxInterval"},
    ciscobfdsessdetectmult{YType::uint32, "ciscoBfdSessDetectMult"},
    ciscobfdsessdiag{YType::enumeration, "ciscoBfdSessDiag"},
    ciscobfdsessdiscriminator{YType::uint32, "ciscoBfdSessDiscriminator"},
    ciscobfdsessechofuncmodedesiredflag{YType::boolean, "ciscoBfdSessEchoFuncModeDesiredFlag"},
    ciscobfdsessinterface{YType::int32, "ciscoBfdSessInterface"},
    ciscobfdsessopermode{YType::enumeration, "ciscoBfdSessOperMode"},
    ciscobfdsessperfdisctime{YType::uint32, "ciscoBfdSessPerfDiscTime"},
    ciscobfdsessperflastcommlostdiag{YType::enumeration, "ciscoBfdSessPerfLastCommLostDiag"},
    ciscobfdsessperflastsessdowntime{YType::uint32, "ciscoBfdSessPerfLastSessDownTime"},
    ciscobfdsessperfpktin{YType::uint32, "ciscoBfdSessPerfPktIn"},
    ciscobfdsessperfpktinhc{YType::uint64, "ciscoBfdSessPerfPktInHC"},
    ciscobfdsessperfpktout{YType::uint32, "ciscoBfdSessPerfPktOut"},
    ciscobfdsessperfpktouthc{YType::uint64, "ciscoBfdSessPerfPktOutHC"},
    ciscobfdsessperfsessupcount{YType::uint32, "ciscoBfdSessPerfSessUpCount"},
    ciscobfdsessremotediscr{YType::uint32, "ciscoBfdSessRemoteDiscr"},
    ciscobfdsessremoteheardflag{YType::boolean, "ciscoBfdSessRemoteHeardFlag"},
    ciscobfdsessreqminechorxinterval{YType::uint32, "ciscoBfdSessReqMinEchoRxInterval"},
    ciscobfdsessreqminrxinterval{YType::uint32, "ciscoBfdSessReqMinRxInterval"},
    ciscobfdsessrowstatus{YType::enumeration, "ciscoBfdSessRowStatus"},
    ciscobfdsessstate{YType::enumeration, "ciscoBfdSessState"},
    ciscobfdsessstortype{YType::enumeration, "ciscoBfdSessStorType"},
    ciscobfdsesstype{YType::enumeration, "ciscoBfdSessType"},
    ciscobfdsessudpport{YType::uint16, "ciscoBfdSessUdpPort"},
    ciscobfdsessuptime{YType::uint32, "ciscoBfdSessUpTime"},
    ciscobfdsessversionnumber{YType::uint32, "ciscoBfdSessVersionNumber"}
{
    yang_name = "ciscoBfdSessEntry"; yang_parent_name = "ciscoBfdSessTable";
}

CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::~Ciscobfdsessentry()
{
}

bool CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::has_data() const
{
    return ciscobfdsessindex.is_set
	|| ciscobfdsessaddr.is_set
	|| ciscobfdsessaddrtype.is_set
	|| ciscobfdsessapplicationid.is_set
	|| ciscobfdsessauthenticationtype.is_set
	|| ciscobfdsessauthpresflag.is_set
	|| ciscobfdsesscontrolplanindepflag.is_set
	|| ciscobfdsessdemandmodedesiredflag.is_set
	|| ciscobfdsessdesiredmintxinterval.is_set
	|| ciscobfdsessdetectmult.is_set
	|| ciscobfdsessdiag.is_set
	|| ciscobfdsessdiscriminator.is_set
	|| ciscobfdsessechofuncmodedesiredflag.is_set
	|| ciscobfdsessinterface.is_set
	|| ciscobfdsessopermode.is_set
	|| ciscobfdsessperfdisctime.is_set
	|| ciscobfdsessperflastcommlostdiag.is_set
	|| ciscobfdsessperflastsessdowntime.is_set
	|| ciscobfdsessperfpktin.is_set
	|| ciscobfdsessperfpktinhc.is_set
	|| ciscobfdsessperfpktout.is_set
	|| ciscobfdsessperfpktouthc.is_set
	|| ciscobfdsessperfsessupcount.is_set
	|| ciscobfdsessremotediscr.is_set
	|| ciscobfdsessremoteheardflag.is_set
	|| ciscobfdsessreqminechorxinterval.is_set
	|| ciscobfdsessreqminrxinterval.is_set
	|| ciscobfdsessrowstatus.is_set
	|| ciscobfdsessstate.is_set
	|| ciscobfdsessstortype.is_set
	|| ciscobfdsesstype.is_set
	|| ciscobfdsessudpport.is_set
	|| ciscobfdsessuptime.is_set
	|| ciscobfdsessversionnumber.is_set;
}

bool CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciscobfdsessindex.yfilter)
	|| ydk::is_set(ciscobfdsessaddr.yfilter)
	|| ydk::is_set(ciscobfdsessaddrtype.yfilter)
	|| ydk::is_set(ciscobfdsessapplicationid.yfilter)
	|| ydk::is_set(ciscobfdsessauthenticationtype.yfilter)
	|| ydk::is_set(ciscobfdsessauthpresflag.yfilter)
	|| ydk::is_set(ciscobfdsesscontrolplanindepflag.yfilter)
	|| ydk::is_set(ciscobfdsessdemandmodedesiredflag.yfilter)
	|| ydk::is_set(ciscobfdsessdesiredmintxinterval.yfilter)
	|| ydk::is_set(ciscobfdsessdetectmult.yfilter)
	|| ydk::is_set(ciscobfdsessdiag.yfilter)
	|| ydk::is_set(ciscobfdsessdiscriminator.yfilter)
	|| ydk::is_set(ciscobfdsessechofuncmodedesiredflag.yfilter)
	|| ydk::is_set(ciscobfdsessinterface.yfilter)
	|| ydk::is_set(ciscobfdsessopermode.yfilter)
	|| ydk::is_set(ciscobfdsessperfdisctime.yfilter)
	|| ydk::is_set(ciscobfdsessperflastcommlostdiag.yfilter)
	|| ydk::is_set(ciscobfdsessperflastsessdowntime.yfilter)
	|| ydk::is_set(ciscobfdsessperfpktin.yfilter)
	|| ydk::is_set(ciscobfdsessperfpktinhc.yfilter)
	|| ydk::is_set(ciscobfdsessperfpktout.yfilter)
	|| ydk::is_set(ciscobfdsessperfpktouthc.yfilter)
	|| ydk::is_set(ciscobfdsessperfsessupcount.yfilter)
	|| ydk::is_set(ciscobfdsessremotediscr.yfilter)
	|| ydk::is_set(ciscobfdsessremoteheardflag.yfilter)
	|| ydk::is_set(ciscobfdsessreqminechorxinterval.yfilter)
	|| ydk::is_set(ciscobfdsessreqminrxinterval.yfilter)
	|| ydk::is_set(ciscobfdsessrowstatus.yfilter)
	|| ydk::is_set(ciscobfdsessstate.yfilter)
	|| ydk::is_set(ciscobfdsessstortype.yfilter)
	|| ydk::is_set(ciscobfdsesstype.yfilter)
	|| ydk::is_set(ciscobfdsessudpport.yfilter)
	|| ydk::is_set(ciscobfdsessuptime.yfilter)
	|| ydk::is_set(ciscobfdsessversionnumber.yfilter);
}

std::string CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoBfdSessEntry" <<"[ciscoBfdSessIndex='" <<ciscobfdsessindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-BFD-MIB:CISCO-IETF-BFD-MIB/ciscoBfdSessTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscobfdsessindex.is_set || is_set(ciscobfdsessindex.yfilter)) leaf_name_data.push_back(ciscobfdsessindex.get_name_leafdata());
    if (ciscobfdsessaddr.is_set || is_set(ciscobfdsessaddr.yfilter)) leaf_name_data.push_back(ciscobfdsessaddr.get_name_leafdata());
    if (ciscobfdsessaddrtype.is_set || is_set(ciscobfdsessaddrtype.yfilter)) leaf_name_data.push_back(ciscobfdsessaddrtype.get_name_leafdata());
    if (ciscobfdsessapplicationid.is_set || is_set(ciscobfdsessapplicationid.yfilter)) leaf_name_data.push_back(ciscobfdsessapplicationid.get_name_leafdata());
    if (ciscobfdsessauthenticationtype.is_set || is_set(ciscobfdsessauthenticationtype.yfilter)) leaf_name_data.push_back(ciscobfdsessauthenticationtype.get_name_leafdata());
    if (ciscobfdsessauthpresflag.is_set || is_set(ciscobfdsessauthpresflag.yfilter)) leaf_name_data.push_back(ciscobfdsessauthpresflag.get_name_leafdata());
    if (ciscobfdsesscontrolplanindepflag.is_set || is_set(ciscobfdsesscontrolplanindepflag.yfilter)) leaf_name_data.push_back(ciscobfdsesscontrolplanindepflag.get_name_leafdata());
    if (ciscobfdsessdemandmodedesiredflag.is_set || is_set(ciscobfdsessdemandmodedesiredflag.yfilter)) leaf_name_data.push_back(ciscobfdsessdemandmodedesiredflag.get_name_leafdata());
    if (ciscobfdsessdesiredmintxinterval.is_set || is_set(ciscobfdsessdesiredmintxinterval.yfilter)) leaf_name_data.push_back(ciscobfdsessdesiredmintxinterval.get_name_leafdata());
    if (ciscobfdsessdetectmult.is_set || is_set(ciscobfdsessdetectmult.yfilter)) leaf_name_data.push_back(ciscobfdsessdetectmult.get_name_leafdata());
    if (ciscobfdsessdiag.is_set || is_set(ciscobfdsessdiag.yfilter)) leaf_name_data.push_back(ciscobfdsessdiag.get_name_leafdata());
    if (ciscobfdsessdiscriminator.is_set || is_set(ciscobfdsessdiscriminator.yfilter)) leaf_name_data.push_back(ciscobfdsessdiscriminator.get_name_leafdata());
    if (ciscobfdsessechofuncmodedesiredflag.is_set || is_set(ciscobfdsessechofuncmodedesiredflag.yfilter)) leaf_name_data.push_back(ciscobfdsessechofuncmodedesiredflag.get_name_leafdata());
    if (ciscobfdsessinterface.is_set || is_set(ciscobfdsessinterface.yfilter)) leaf_name_data.push_back(ciscobfdsessinterface.get_name_leafdata());
    if (ciscobfdsessopermode.is_set || is_set(ciscobfdsessopermode.yfilter)) leaf_name_data.push_back(ciscobfdsessopermode.get_name_leafdata());
    if (ciscobfdsessperfdisctime.is_set || is_set(ciscobfdsessperfdisctime.yfilter)) leaf_name_data.push_back(ciscobfdsessperfdisctime.get_name_leafdata());
    if (ciscobfdsessperflastcommlostdiag.is_set || is_set(ciscobfdsessperflastcommlostdiag.yfilter)) leaf_name_data.push_back(ciscobfdsessperflastcommlostdiag.get_name_leafdata());
    if (ciscobfdsessperflastsessdowntime.is_set || is_set(ciscobfdsessperflastsessdowntime.yfilter)) leaf_name_data.push_back(ciscobfdsessperflastsessdowntime.get_name_leafdata());
    if (ciscobfdsessperfpktin.is_set || is_set(ciscobfdsessperfpktin.yfilter)) leaf_name_data.push_back(ciscobfdsessperfpktin.get_name_leafdata());
    if (ciscobfdsessperfpktinhc.is_set || is_set(ciscobfdsessperfpktinhc.yfilter)) leaf_name_data.push_back(ciscobfdsessperfpktinhc.get_name_leafdata());
    if (ciscobfdsessperfpktout.is_set || is_set(ciscobfdsessperfpktout.yfilter)) leaf_name_data.push_back(ciscobfdsessperfpktout.get_name_leafdata());
    if (ciscobfdsessperfpktouthc.is_set || is_set(ciscobfdsessperfpktouthc.yfilter)) leaf_name_data.push_back(ciscobfdsessperfpktouthc.get_name_leafdata());
    if (ciscobfdsessperfsessupcount.is_set || is_set(ciscobfdsessperfsessupcount.yfilter)) leaf_name_data.push_back(ciscobfdsessperfsessupcount.get_name_leafdata());
    if (ciscobfdsessremotediscr.is_set || is_set(ciscobfdsessremotediscr.yfilter)) leaf_name_data.push_back(ciscobfdsessremotediscr.get_name_leafdata());
    if (ciscobfdsessremoteheardflag.is_set || is_set(ciscobfdsessremoteheardflag.yfilter)) leaf_name_data.push_back(ciscobfdsessremoteheardflag.get_name_leafdata());
    if (ciscobfdsessreqminechorxinterval.is_set || is_set(ciscobfdsessreqminechorxinterval.yfilter)) leaf_name_data.push_back(ciscobfdsessreqminechorxinterval.get_name_leafdata());
    if (ciscobfdsessreqminrxinterval.is_set || is_set(ciscobfdsessreqminrxinterval.yfilter)) leaf_name_data.push_back(ciscobfdsessreqminrxinterval.get_name_leafdata());
    if (ciscobfdsessrowstatus.is_set || is_set(ciscobfdsessrowstatus.yfilter)) leaf_name_data.push_back(ciscobfdsessrowstatus.get_name_leafdata());
    if (ciscobfdsessstate.is_set || is_set(ciscobfdsessstate.yfilter)) leaf_name_data.push_back(ciscobfdsessstate.get_name_leafdata());
    if (ciscobfdsessstortype.is_set || is_set(ciscobfdsessstortype.yfilter)) leaf_name_data.push_back(ciscobfdsessstortype.get_name_leafdata());
    if (ciscobfdsesstype.is_set || is_set(ciscobfdsesstype.yfilter)) leaf_name_data.push_back(ciscobfdsesstype.get_name_leafdata());
    if (ciscobfdsessudpport.is_set || is_set(ciscobfdsessudpport.yfilter)) leaf_name_data.push_back(ciscobfdsessudpport.get_name_leafdata());
    if (ciscobfdsessuptime.is_set || is_set(ciscobfdsessuptime.yfilter)) leaf_name_data.push_back(ciscobfdsessuptime.get_name_leafdata());
    if (ciscobfdsessversionnumber.is_set || is_set(ciscobfdsessversionnumber.yfilter)) leaf_name_data.push_back(ciscobfdsessversionnumber.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ciscoBfdSessIndex")
    {
        ciscobfdsessindex = value;
        ciscobfdsessindex.value_namespace = name_space;
        ciscobfdsessindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessAddr")
    {
        ciscobfdsessaddr = value;
        ciscobfdsessaddr.value_namespace = name_space;
        ciscobfdsessaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessAddrType")
    {
        ciscobfdsessaddrtype = value;
        ciscobfdsessaddrtype.value_namespace = name_space;
        ciscobfdsessaddrtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessApplicationId")
    {
        ciscobfdsessapplicationid = value;
        ciscobfdsessapplicationid.value_namespace = name_space;
        ciscobfdsessapplicationid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessAuthenticationType")
    {
        ciscobfdsessauthenticationtype = value;
        ciscobfdsessauthenticationtype.value_namespace = name_space;
        ciscobfdsessauthenticationtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessAuthPresFlag")
    {
        ciscobfdsessauthpresflag = value;
        ciscobfdsessauthpresflag.value_namespace = name_space;
        ciscobfdsessauthpresflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessControlPlanIndepFlag")
    {
        ciscobfdsesscontrolplanindepflag = value;
        ciscobfdsesscontrolplanindepflag.value_namespace = name_space;
        ciscobfdsesscontrolplanindepflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessDemandModeDesiredFlag")
    {
        ciscobfdsessdemandmodedesiredflag = value;
        ciscobfdsessdemandmodedesiredflag.value_namespace = name_space;
        ciscobfdsessdemandmodedesiredflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessDesiredMinTxInterval")
    {
        ciscobfdsessdesiredmintxinterval = value;
        ciscobfdsessdesiredmintxinterval.value_namespace = name_space;
        ciscobfdsessdesiredmintxinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessDetectMult")
    {
        ciscobfdsessdetectmult = value;
        ciscobfdsessdetectmult.value_namespace = name_space;
        ciscobfdsessdetectmult.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessDiag")
    {
        ciscobfdsessdiag = value;
        ciscobfdsessdiag.value_namespace = name_space;
        ciscobfdsessdiag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessDiscriminator")
    {
        ciscobfdsessdiscriminator = value;
        ciscobfdsessdiscriminator.value_namespace = name_space;
        ciscobfdsessdiscriminator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessEchoFuncModeDesiredFlag")
    {
        ciscobfdsessechofuncmodedesiredflag = value;
        ciscobfdsessechofuncmodedesiredflag.value_namespace = name_space;
        ciscobfdsessechofuncmodedesiredflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessInterface")
    {
        ciscobfdsessinterface = value;
        ciscobfdsessinterface.value_namespace = name_space;
        ciscobfdsessinterface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessOperMode")
    {
        ciscobfdsessopermode = value;
        ciscobfdsessopermode.value_namespace = name_space;
        ciscobfdsessopermode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessPerfDiscTime")
    {
        ciscobfdsessperfdisctime = value;
        ciscobfdsessperfdisctime.value_namespace = name_space;
        ciscobfdsessperfdisctime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessPerfLastCommLostDiag")
    {
        ciscobfdsessperflastcommlostdiag = value;
        ciscobfdsessperflastcommlostdiag.value_namespace = name_space;
        ciscobfdsessperflastcommlostdiag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessPerfLastSessDownTime")
    {
        ciscobfdsessperflastsessdowntime = value;
        ciscobfdsessperflastsessdowntime.value_namespace = name_space;
        ciscobfdsessperflastsessdowntime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessPerfPktIn")
    {
        ciscobfdsessperfpktin = value;
        ciscobfdsessperfpktin.value_namespace = name_space;
        ciscobfdsessperfpktin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessPerfPktInHC")
    {
        ciscobfdsessperfpktinhc = value;
        ciscobfdsessperfpktinhc.value_namespace = name_space;
        ciscobfdsessperfpktinhc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessPerfPktOut")
    {
        ciscobfdsessperfpktout = value;
        ciscobfdsessperfpktout.value_namespace = name_space;
        ciscobfdsessperfpktout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessPerfPktOutHC")
    {
        ciscobfdsessperfpktouthc = value;
        ciscobfdsessperfpktouthc.value_namespace = name_space;
        ciscobfdsessperfpktouthc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessPerfSessUpCount")
    {
        ciscobfdsessperfsessupcount = value;
        ciscobfdsessperfsessupcount.value_namespace = name_space;
        ciscobfdsessperfsessupcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessRemoteDiscr")
    {
        ciscobfdsessremotediscr = value;
        ciscobfdsessremotediscr.value_namespace = name_space;
        ciscobfdsessremotediscr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessRemoteHeardFlag")
    {
        ciscobfdsessremoteheardflag = value;
        ciscobfdsessremoteheardflag.value_namespace = name_space;
        ciscobfdsessremoteheardflag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessReqMinEchoRxInterval")
    {
        ciscobfdsessreqminechorxinterval = value;
        ciscobfdsessreqminechorxinterval.value_namespace = name_space;
        ciscobfdsessreqminechorxinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessReqMinRxInterval")
    {
        ciscobfdsessreqminrxinterval = value;
        ciscobfdsessreqminrxinterval.value_namespace = name_space;
        ciscobfdsessreqminrxinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessRowStatus")
    {
        ciscobfdsessrowstatus = value;
        ciscobfdsessrowstatus.value_namespace = name_space;
        ciscobfdsessrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessState")
    {
        ciscobfdsessstate = value;
        ciscobfdsessstate.value_namespace = name_space;
        ciscobfdsessstate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessStorType")
    {
        ciscobfdsessstortype = value;
        ciscobfdsessstortype.value_namespace = name_space;
        ciscobfdsessstortype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessType")
    {
        ciscobfdsesstype = value;
        ciscobfdsesstype.value_namespace = name_space;
        ciscobfdsesstype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessUdpPort")
    {
        ciscobfdsessudpport = value;
        ciscobfdsessudpport.value_namespace = name_space;
        ciscobfdsessudpport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessUpTime")
    {
        ciscobfdsessuptime = value;
        ciscobfdsessuptime.value_namespace = name_space;
        ciscobfdsessuptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ciscoBfdSessVersionNumber")
    {
        ciscobfdsessversionnumber = value;
        ciscobfdsessversionnumber.value_namespace = name_space;
        ciscobfdsessversionnumber.value_namespace_prefix = name_space_prefix;
    }
}

void CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ciscoBfdSessIndex")
    {
        ciscobfdsessindex.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessAddr")
    {
        ciscobfdsessaddr.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessAddrType")
    {
        ciscobfdsessaddrtype.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessApplicationId")
    {
        ciscobfdsessapplicationid.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessAuthenticationType")
    {
        ciscobfdsessauthenticationtype.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessAuthPresFlag")
    {
        ciscobfdsessauthpresflag.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessControlPlanIndepFlag")
    {
        ciscobfdsesscontrolplanindepflag.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessDemandModeDesiredFlag")
    {
        ciscobfdsessdemandmodedesiredflag.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessDesiredMinTxInterval")
    {
        ciscobfdsessdesiredmintxinterval.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessDetectMult")
    {
        ciscobfdsessdetectmult.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessDiag")
    {
        ciscobfdsessdiag.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessDiscriminator")
    {
        ciscobfdsessdiscriminator.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessEchoFuncModeDesiredFlag")
    {
        ciscobfdsessechofuncmodedesiredflag.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessInterface")
    {
        ciscobfdsessinterface.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessOperMode")
    {
        ciscobfdsessopermode.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessPerfDiscTime")
    {
        ciscobfdsessperfdisctime.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessPerfLastCommLostDiag")
    {
        ciscobfdsessperflastcommlostdiag.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessPerfLastSessDownTime")
    {
        ciscobfdsessperflastsessdowntime.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessPerfPktIn")
    {
        ciscobfdsessperfpktin.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessPerfPktInHC")
    {
        ciscobfdsessperfpktinhc.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessPerfPktOut")
    {
        ciscobfdsessperfpktout.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessPerfPktOutHC")
    {
        ciscobfdsessperfpktouthc.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessPerfSessUpCount")
    {
        ciscobfdsessperfsessupcount.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessRemoteDiscr")
    {
        ciscobfdsessremotediscr.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessRemoteHeardFlag")
    {
        ciscobfdsessremoteheardflag.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessReqMinEchoRxInterval")
    {
        ciscobfdsessreqminechorxinterval.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessReqMinRxInterval")
    {
        ciscobfdsessreqminrxinterval.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessRowStatus")
    {
        ciscobfdsessrowstatus.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessState")
    {
        ciscobfdsessstate.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessStorType")
    {
        ciscobfdsessstortype.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessType")
    {
        ciscobfdsesstype.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessUdpPort")
    {
        ciscobfdsessudpport.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessUpTime")
    {
        ciscobfdsessuptime.yfilter = yfilter;
    }
    if(value_path == "ciscoBfdSessVersionNumber")
    {
        ciscobfdsessversionnumber.yfilter = yfilter;
    }
}

bool CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoBfdSessIndex" || name == "ciscoBfdSessAddr" || name == "ciscoBfdSessAddrType" || name == "ciscoBfdSessApplicationId" || name == "ciscoBfdSessAuthenticationType" || name == "ciscoBfdSessAuthPresFlag" || name == "ciscoBfdSessControlPlanIndepFlag" || name == "ciscoBfdSessDemandModeDesiredFlag" || name == "ciscoBfdSessDesiredMinTxInterval" || name == "ciscoBfdSessDetectMult" || name == "ciscoBfdSessDiag" || name == "ciscoBfdSessDiscriminator" || name == "ciscoBfdSessEchoFuncModeDesiredFlag" || name == "ciscoBfdSessInterface" || name == "ciscoBfdSessOperMode" || name == "ciscoBfdSessPerfDiscTime" || name == "ciscoBfdSessPerfLastCommLostDiag" || name == "ciscoBfdSessPerfLastSessDownTime" || name == "ciscoBfdSessPerfPktIn" || name == "ciscoBfdSessPerfPktInHC" || name == "ciscoBfdSessPerfPktOut" || name == "ciscoBfdSessPerfPktOutHC" || name == "ciscoBfdSessPerfSessUpCount" || name == "ciscoBfdSessRemoteDiscr" || name == "ciscoBfdSessRemoteHeardFlag" || name == "ciscoBfdSessReqMinEchoRxInterval" || name == "ciscoBfdSessReqMinRxInterval" || name == "ciscoBfdSessRowStatus" || name == "ciscoBfdSessState" || name == "ciscoBfdSessStorType" || name == "ciscoBfdSessType" || name == "ciscoBfdSessUdpPort" || name == "ciscoBfdSessUpTime" || name == "ciscoBfdSessVersionNumber")
        return true;
    return false;
}

CiscoIetfBfdMib::Ciscobfdsessmaptable::Ciscobfdsessmaptable()
{
    yang_name = "ciscoBfdSessMapTable"; yang_parent_name = "CISCO-IETF-BFD-MIB";
}

CiscoIetfBfdMib::Ciscobfdsessmaptable::~Ciscobfdsessmaptable()
{
}

bool CiscoIetfBfdMib::Ciscobfdsessmaptable::has_data() const
{
    for (std::size_t index=0; index<ciscobfdsessmapentry.size(); index++)
    {
        if(ciscobfdsessmapentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfBfdMib::Ciscobfdsessmaptable::has_operation() const
{
    for (std::size_t index=0; index<ciscobfdsessmapentry.size(); index++)
    {
        if(ciscobfdsessmapentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoIetfBfdMib::Ciscobfdsessmaptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoBfdSessMapTable";

    return path_buffer.str();

}

const EntityPath CiscoIetfBfdMib::Ciscobfdsessmaptable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-BFD-MIB:CISCO-IETF-BFD-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfBfdMib::Ciscobfdsessmaptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoBfdSessMapEntry")
    {
        for(auto const & c : ciscobfdsessmapentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfBfdMib::Ciscobfdsessmaptable::Ciscobfdsessmapentry>();
        c->parent = this;
        ciscobfdsessmapentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfBfdMib::Ciscobfdsessmaptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciscobfdsessmapentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfBfdMib::Ciscobfdsessmaptable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIetfBfdMib::Ciscobfdsessmaptable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIetfBfdMib::Ciscobfdsessmaptable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoBfdSessMapEntry")
        return true;
    return false;
}

CiscoIetfBfdMib::Ciscobfdsessmaptable::Ciscobfdsessmapentry::Ciscobfdsessmapentry()
    :
    ciscobfdsessapplicationid{YType::str, "ciscoBfdSessApplicationId"},
    ciscobfdsessdiscriminator{YType::str, "ciscoBfdSessDiscriminator"},
    ciscobfdsessaddrtype{YType::enumeration, "ciscoBfdSessAddrType"},
    ciscobfdsessaddr{YType::str, "ciscoBfdSessAddr"},
    ciscobfdsessmapbfdindex{YType::uint32, "ciscoBfdSessMapBfdIndex"}
{
    yang_name = "ciscoBfdSessMapEntry"; yang_parent_name = "ciscoBfdSessMapTable";
}

CiscoIetfBfdMib::Ciscobfdsessmaptable::Ciscobfdsessmapentry::~Ciscobfdsessmapentry()
{
}

bool CiscoIetfBfdMib::Ciscobfdsessmaptable::Ciscobfdsessmapentry::has_data() const
{
    return ciscobfdsessapplicationid.is_set
	|| ciscobfdsessdiscriminator.is_set
	|| ciscobfdsessaddrtype.is_set
	|| ciscobfdsessaddr.is_set
	|| ciscobfdsessmapbfdindex.is_set;
}

bool CiscoIetfBfdMib::Ciscobfdsessmaptable::Ciscobfdsessmapentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciscobfdsessapplicationid.yfilter)
	|| ydk::is_set(ciscobfdsessdiscriminator.yfilter)
	|| ydk::is_set(ciscobfdsessaddrtype.yfilter)
	|| ydk::is_set(ciscobfdsessaddr.yfilter)
	|| ydk::is_set(ciscobfdsessmapbfdindex.yfilter);
}

std::string CiscoIetfBfdMib::Ciscobfdsessmaptable::Ciscobfdsessmapentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoBfdSessMapEntry" <<"[ciscoBfdSessApplicationId='" <<ciscobfdsessapplicationid <<"']" <<"[ciscoBfdSessDiscriminator='" <<ciscobfdsessdiscriminator <<"']" <<"[ciscoBfdSessAddrType='" <<ciscobfdsessaddrtype <<"']" <<"[ciscoBfdSessAddr='" <<ciscobfdsessaddr <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfBfdMib::Ciscobfdsessmaptable::Ciscobfdsessmapentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-BFD-MIB:CISCO-IETF-BFD-MIB/ciscoBfdSessMapTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscobfdsessapplicationid.is_set || is_set(ciscobfdsessapplicationid.yfilter)) leaf_name_data.push_back(ciscobfdsessapplicationid.get_name_leafdata());
    if (ciscobfdsessdiscriminator.is_set || is_set(ciscobfdsessdiscriminator.yfilter)) leaf_name_data.push_back(ciscobfdsessdiscriminator.get_name_leafdata());
    if (ciscobfdsessaddrtype.is_set || is_set(ciscobfdsessaddrtype.yfilter)) leaf_name_data.push_back(ciscobfdsessaddrtype.get_name_leafdata());
    if (ciscobfdsessaddr.is_set || is_set(ciscobfdsessaddr.yfilter)) leaf_name_data.push_back(ciscobfdsessaddr.get_name_leafdata());
    if (ciscobfdsessmapbfdindex.is_set || is_set(ciscobfdsessmapbfdindex.yfilter)) leaf_name_data.push_back(ciscobfdsessmapbfdindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfBfdMib::Ciscobfdsessmaptable::Ciscobfdsessmapentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfBfdMib::Ciscobfdsessmaptable::Ciscobfdsessmapentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfBfdMib::Ciscobfdsessmaptable::Ciscobfdsessmapentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CiscoIetfBfdMib::Ciscobfdsessmaptable::Ciscobfdsessmapentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CiscoIetfBfdMib::Ciscobfdsessmaptable::Ciscobfdsessmapentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoBfdSessApplicationId" || name == "ciscoBfdSessDiscriminator" || name == "ciscoBfdSessAddrType" || name == "ciscoBfdSessAddr" || name == "ciscoBfdSessMapBfdIndex")
        return true;
    return false;
}

CiscoIetfBfdMib::Ciscobfdsessdiscmaptable::Ciscobfdsessdiscmaptable()
{
    yang_name = "ciscoBfdSessDiscMapTable"; yang_parent_name = "CISCO-IETF-BFD-MIB";
}

CiscoIetfBfdMib::Ciscobfdsessdiscmaptable::~Ciscobfdsessdiscmaptable()
{
}

bool CiscoIetfBfdMib::Ciscobfdsessdiscmaptable::has_data() const
{
    for (std::size_t index=0; index<ciscobfdsessdiscmapentry.size(); index++)
    {
        if(ciscobfdsessdiscmapentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfBfdMib::Ciscobfdsessdiscmaptable::has_operation() const
{
    for (std::size_t index=0; index<ciscobfdsessdiscmapentry.size(); index++)
    {
        if(ciscobfdsessdiscmapentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoIetfBfdMib::Ciscobfdsessdiscmaptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoBfdSessDiscMapTable";

    return path_buffer.str();

}

const EntityPath CiscoIetfBfdMib::Ciscobfdsessdiscmaptable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-BFD-MIB:CISCO-IETF-BFD-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfBfdMib::Ciscobfdsessdiscmaptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoBfdSessDiscMapEntry")
    {
        for(auto const & c : ciscobfdsessdiscmapentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfBfdMib::Ciscobfdsessdiscmaptable::Ciscobfdsessdiscmapentry>();
        c->parent = this;
        ciscobfdsessdiscmapentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfBfdMib::Ciscobfdsessdiscmaptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciscobfdsessdiscmapentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfBfdMib::Ciscobfdsessdiscmaptable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIetfBfdMib::Ciscobfdsessdiscmaptable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIetfBfdMib::Ciscobfdsessdiscmaptable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoBfdSessDiscMapEntry")
        return true;
    return false;
}

CiscoIetfBfdMib::Ciscobfdsessdiscmaptable::Ciscobfdsessdiscmapentry::Ciscobfdsessdiscmapentry()
    :
    ciscobfdsessdiscriminator{YType::str, "ciscoBfdSessDiscriminator"},
    ciscobfdsessdiscmapindex{YType::uint32, "ciscoBfdSessDiscMapIndex"}
{
    yang_name = "ciscoBfdSessDiscMapEntry"; yang_parent_name = "ciscoBfdSessDiscMapTable";
}

CiscoIetfBfdMib::Ciscobfdsessdiscmaptable::Ciscobfdsessdiscmapentry::~Ciscobfdsessdiscmapentry()
{
}

bool CiscoIetfBfdMib::Ciscobfdsessdiscmaptable::Ciscobfdsessdiscmapentry::has_data() const
{
    return ciscobfdsessdiscriminator.is_set
	|| ciscobfdsessdiscmapindex.is_set;
}

bool CiscoIetfBfdMib::Ciscobfdsessdiscmaptable::Ciscobfdsessdiscmapentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciscobfdsessdiscriminator.yfilter)
	|| ydk::is_set(ciscobfdsessdiscmapindex.yfilter);
}

std::string CiscoIetfBfdMib::Ciscobfdsessdiscmaptable::Ciscobfdsessdiscmapentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoBfdSessDiscMapEntry" <<"[ciscoBfdSessDiscriminator='" <<ciscobfdsessdiscriminator <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfBfdMib::Ciscobfdsessdiscmaptable::Ciscobfdsessdiscmapentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-BFD-MIB:CISCO-IETF-BFD-MIB/ciscoBfdSessDiscMapTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscobfdsessdiscriminator.is_set || is_set(ciscobfdsessdiscriminator.yfilter)) leaf_name_data.push_back(ciscobfdsessdiscriminator.get_name_leafdata());
    if (ciscobfdsessdiscmapindex.is_set || is_set(ciscobfdsessdiscmapindex.yfilter)) leaf_name_data.push_back(ciscobfdsessdiscmapindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfBfdMib::Ciscobfdsessdiscmaptable::Ciscobfdsessdiscmapentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfBfdMib::Ciscobfdsessdiscmaptable::Ciscobfdsessdiscmapentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfBfdMib::Ciscobfdsessdiscmaptable::Ciscobfdsessdiscmapentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CiscoIetfBfdMib::Ciscobfdsessdiscmaptable::Ciscobfdsessdiscmapentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CiscoIetfBfdMib::Ciscobfdsessdiscmaptable::Ciscobfdsessdiscmapentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoBfdSessDiscriminator" || name == "ciscoBfdSessDiscMapIndex")
        return true;
    return false;
}

CiscoIetfBfdMib::Ciscobfdsessipmaptable::Ciscobfdsessipmaptable()
{
    yang_name = "ciscoBfdSessIpMapTable"; yang_parent_name = "CISCO-IETF-BFD-MIB";
}

CiscoIetfBfdMib::Ciscobfdsessipmaptable::~Ciscobfdsessipmaptable()
{
}

bool CiscoIetfBfdMib::Ciscobfdsessipmaptable::has_data() const
{
    for (std::size_t index=0; index<ciscobfdsessipmapentry.size(); index++)
    {
        if(ciscobfdsessipmapentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfBfdMib::Ciscobfdsessipmaptable::has_operation() const
{
    for (std::size_t index=0; index<ciscobfdsessipmapentry.size(); index++)
    {
        if(ciscobfdsessipmapentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CiscoIetfBfdMib::Ciscobfdsessipmaptable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoBfdSessIpMapTable";

    return path_buffer.str();

}

const EntityPath CiscoIetfBfdMib::Ciscobfdsessipmaptable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-BFD-MIB:CISCO-IETF-BFD-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfBfdMib::Ciscobfdsessipmaptable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoBfdSessIpMapEntry")
    {
        for(auto const & c : ciscobfdsessipmapentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfBfdMib::Ciscobfdsessipmaptable::Ciscobfdsessipmapentry>();
        c->parent = this;
        ciscobfdsessipmapentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfBfdMib::Ciscobfdsessipmaptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciscobfdsessipmapentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfBfdMib::Ciscobfdsessipmaptable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CiscoIetfBfdMib::Ciscobfdsessipmaptable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CiscoIetfBfdMib::Ciscobfdsessipmaptable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoBfdSessIpMapEntry")
        return true;
    return false;
}

CiscoIetfBfdMib::Ciscobfdsessipmaptable::Ciscobfdsessipmapentry::Ciscobfdsessipmapentry()
    :
    ciscobfdsessinterface{YType::str, "ciscoBfdSessInterface"},
    ciscobfdsessaddrtype{YType::enumeration, "ciscoBfdSessAddrType"},
    ciscobfdsessaddr{YType::str, "ciscoBfdSessAddr"},
    ciscobfdsessipmapindex{YType::uint32, "ciscoBfdSessIpMapIndex"}
{
    yang_name = "ciscoBfdSessIpMapEntry"; yang_parent_name = "ciscoBfdSessIpMapTable";
}

CiscoIetfBfdMib::Ciscobfdsessipmaptable::Ciscobfdsessipmapentry::~Ciscobfdsessipmapentry()
{
}

bool CiscoIetfBfdMib::Ciscobfdsessipmaptable::Ciscobfdsessipmapentry::has_data() const
{
    return ciscobfdsessinterface.is_set
	|| ciscobfdsessaddrtype.is_set
	|| ciscobfdsessaddr.is_set
	|| ciscobfdsessipmapindex.is_set;
}

bool CiscoIetfBfdMib::Ciscobfdsessipmaptable::Ciscobfdsessipmapentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ciscobfdsessinterface.yfilter)
	|| ydk::is_set(ciscobfdsessaddrtype.yfilter)
	|| ydk::is_set(ciscobfdsessaddr.yfilter)
	|| ydk::is_set(ciscobfdsessipmapindex.yfilter);
}

std::string CiscoIetfBfdMib::Ciscobfdsessipmaptable::Ciscobfdsessipmapentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoBfdSessIpMapEntry" <<"[ciscoBfdSessInterface='" <<ciscobfdsessinterface <<"']" <<"[ciscoBfdSessAddrType='" <<ciscobfdsessaddrtype <<"']" <<"[ciscoBfdSessAddr='" <<ciscobfdsessaddr <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfBfdMib::Ciscobfdsessipmaptable::Ciscobfdsessipmapentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-BFD-MIB:CISCO-IETF-BFD-MIB/ciscoBfdSessIpMapTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ciscobfdsessinterface.is_set || is_set(ciscobfdsessinterface.yfilter)) leaf_name_data.push_back(ciscobfdsessinterface.get_name_leafdata());
    if (ciscobfdsessaddrtype.is_set || is_set(ciscobfdsessaddrtype.yfilter)) leaf_name_data.push_back(ciscobfdsessaddrtype.get_name_leafdata());
    if (ciscobfdsessaddr.is_set || is_set(ciscobfdsessaddr.yfilter)) leaf_name_data.push_back(ciscobfdsessaddr.get_name_leafdata());
    if (ciscobfdsessipmapindex.is_set || is_set(ciscobfdsessipmapindex.yfilter)) leaf_name_data.push_back(ciscobfdsessipmapindex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfBfdMib::Ciscobfdsessipmaptable::Ciscobfdsessipmapentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfBfdMib::Ciscobfdsessipmaptable::Ciscobfdsessipmapentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfBfdMib::Ciscobfdsessipmaptable::Ciscobfdsessipmapentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CiscoIetfBfdMib::Ciscobfdsessipmaptable::Ciscobfdsessipmapentry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CiscoIetfBfdMib::Ciscobfdsessipmaptable::Ciscobfdsessipmapentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ciscoBfdSessInterface" || name == "ciscoBfdSessAddrType" || name == "ciscoBfdSessAddr" || name == "ciscoBfdSessIpMapIndex")
        return true;
    return false;
}

const Enum::YLeaf Ciscobfddiag::noDiagnostic {0, "noDiagnostic"};
const Enum::YLeaf Ciscobfddiag::controlDetectionTimeExpired {1, "controlDetectionTimeExpired"};
const Enum::YLeaf Ciscobfddiag::echoFunctionFailed {2, "echoFunctionFailed"};
const Enum::YLeaf Ciscobfddiag::neighborSignaledSessionDown {3, "neighborSignaledSessionDown"};
const Enum::YLeaf Ciscobfddiag::forwardingPlaneReset {4, "forwardingPlaneReset"};
const Enum::YLeaf Ciscobfddiag::pathDown {5, "pathDown"};
const Enum::YLeaf Ciscobfddiag::concatenatedPathDown {6, "concatenatedPathDown"};
const Enum::YLeaf Ciscobfddiag::administrativelyDown {7, "administrativelyDown"};
const Enum::YLeaf Ciscobfddiag::reverseConcatenatedPathDown {8, "reverseConcatenatedPathDown"};

const Enum::YLeaf CiscoIetfBfdMib::Ciscobfdscalarobjects::Ciscobfdadminstatus::enabled {1, "enabled"};
const Enum::YLeaf CiscoIetfBfdMib::Ciscobfdscalarobjects::Ciscobfdadminstatus::disabled {2, "disabled"};

const Enum::YLeaf CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::Ciscobfdsessstate::adminDown {1, "adminDown"};
const Enum::YLeaf CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::Ciscobfdsessstate::down {2, "down"};
const Enum::YLeaf CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::Ciscobfdsessstate::init {3, "init"};
const Enum::YLeaf CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::Ciscobfdsessstate::up {4, "up"};
const Enum::YLeaf CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::Ciscobfdsessstate::failing {5, "failing"};

const Enum::YLeaf CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::Ciscobfdsessopermode::asyncModeWEchoFun {1, "asyncModeWEchoFun"};
const Enum::YLeaf CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::Ciscobfdsessopermode::asynchModeWOEchoFun {2, "asynchModeWOEchoFun"};
const Enum::YLeaf CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::Ciscobfdsessopermode::demandModeWEchoFunction {3, "demandModeWEchoFunction"};
const Enum::YLeaf CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::Ciscobfdsessopermode::demandModeWOEchoFunction {4, "demandModeWOEchoFunction"};

const Enum::YLeaf CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::Ciscobfdsessauthenticationtype::simplePassword {1, "simplePassword"};
const Enum::YLeaf CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::Ciscobfdsessauthenticationtype::keyedMD5 {2, "keyedMD5"};
const Enum::YLeaf CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::Ciscobfdsessauthenticationtype::meticulousKeyedMD5 {3, "meticulousKeyedMD5"};
const Enum::YLeaf CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::Ciscobfdsessauthenticationtype::keyedSHA1 {4, "keyedSHA1"};
const Enum::YLeaf CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::Ciscobfdsessauthenticationtype::meticulousKeyedSHA1 {5, "meticulousKeyedSHA1"};

const Enum::YLeaf CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::Ciscobfdsesstype::singleHop {1, "singleHop"};
const Enum::YLeaf CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::Ciscobfdsesstype::multiHop {2, "multiHop"};


}
}

