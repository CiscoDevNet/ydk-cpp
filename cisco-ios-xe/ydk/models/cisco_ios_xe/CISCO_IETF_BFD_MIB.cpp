
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IETF_BFD_MIB.hpp"

namespace ydk {
namespace CISCO_IETF_BFD_MIB {

CiscoIetfBfdMib::CiscoIetfBfdMib()
    :
    ciscobfdscalarobjects_(std::make_shared<CiscoIetfBfdMib::Ciscobfdscalarobjects>())
	,ciscobfdsessdiscmaptable_(std::make_shared<CiscoIetfBfdMib::Ciscobfdsessdiscmaptable>())
	,ciscobfdsessipmaptable_(std::make_shared<CiscoIetfBfdMib::Ciscobfdsessipmaptable>())
	,ciscobfdsessmaptable_(std::make_shared<CiscoIetfBfdMib::Ciscobfdsessmaptable>())
	,ciscobfdsesstable_(std::make_shared<CiscoIetfBfdMib::Ciscobfdsesstable>())
{
    ciscobfdscalarobjects_->parent = this;

    ciscobfdsessdiscmaptable_->parent = this;

    ciscobfdsessipmaptable_->parent = this;

    ciscobfdsessmaptable_->parent = this;

    ciscobfdsesstable_->parent = this;

    yang_name = "CISCO-IETF-BFD-MIB"; yang_parent_name = "CISCO-IETF-BFD-MIB";
}

CiscoIetfBfdMib::~CiscoIetfBfdMib()
{
}

bool CiscoIetfBfdMib::has_data() const
{
    return (ciscobfdscalarobjects_ !=  nullptr && ciscobfdscalarobjects_->has_data())
	|| (ciscobfdsessdiscmaptable_ !=  nullptr && ciscobfdsessdiscmaptable_->has_data())
	|| (ciscobfdsessipmaptable_ !=  nullptr && ciscobfdsessipmaptable_->has_data())
	|| (ciscobfdsessmaptable_ !=  nullptr && ciscobfdsessmaptable_->has_data())
	|| (ciscobfdsesstable_ !=  nullptr && ciscobfdsesstable_->has_data());
}

bool CiscoIetfBfdMib::has_operation() const
{
    return is_set(operation)
	|| (ciscobfdscalarobjects_ !=  nullptr && ciscobfdscalarobjects_->has_operation())
	|| (ciscobfdsessdiscmaptable_ !=  nullptr && ciscobfdsessdiscmaptable_->has_operation())
	|| (ciscobfdsessipmaptable_ !=  nullptr && ciscobfdsessipmaptable_->has_operation())
	|| (ciscobfdsessmaptable_ !=  nullptr && ciscobfdsessmaptable_->has_operation())
	|| (ciscobfdsesstable_ !=  nullptr && ciscobfdsesstable_->has_operation());
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
        if(ciscobfdscalarobjects_ == nullptr)
        {
            ciscobfdscalarobjects_ = std::make_shared<CiscoIetfBfdMib::Ciscobfdscalarobjects>();
        }
        return ciscobfdscalarobjects_;
    }

    if(child_yang_name == "ciscoBfdSessDiscMapTable")
    {
        if(ciscobfdsessdiscmaptable_ == nullptr)
        {
            ciscobfdsessdiscmaptable_ = std::make_shared<CiscoIetfBfdMib::Ciscobfdsessdiscmaptable>();
        }
        return ciscobfdsessdiscmaptable_;
    }

    if(child_yang_name == "ciscoBfdSessIpMapTable")
    {
        if(ciscobfdsessipmaptable_ == nullptr)
        {
            ciscobfdsessipmaptable_ = std::make_shared<CiscoIetfBfdMib::Ciscobfdsessipmaptable>();
        }
        return ciscobfdsessipmaptable_;
    }

    if(child_yang_name == "ciscoBfdSessMapTable")
    {
        if(ciscobfdsessmaptable_ == nullptr)
        {
            ciscobfdsessmaptable_ = std::make_shared<CiscoIetfBfdMib::Ciscobfdsessmaptable>();
        }
        return ciscobfdsessmaptable_;
    }

    if(child_yang_name == "ciscoBfdSessTable")
    {
        if(ciscobfdsesstable_ == nullptr)
        {
            ciscobfdsesstable_ = std::make_shared<CiscoIetfBfdMib::Ciscobfdsesstable>();
        }
        return ciscobfdsesstable_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfBfdMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ciscobfdscalarobjects_ != nullptr)
    {
        children["ciscoBfdScalarObjects"] = ciscobfdscalarobjects_;
    }

    if(ciscobfdsessdiscmaptable_ != nullptr)
    {
        children["ciscoBfdSessDiscMapTable"] = ciscobfdsessdiscmaptable_;
    }

    if(ciscobfdsessipmaptable_ != nullptr)
    {
        children["ciscoBfdSessIpMapTable"] = ciscobfdsessipmaptable_;
    }

    if(ciscobfdsessmaptable_ != nullptr)
    {
        children["ciscoBfdSessMapTable"] = ciscobfdsessmaptable_;
    }

    if(ciscobfdsesstable_ != nullptr)
    {
        children["ciscoBfdSessTable"] = ciscobfdsesstable_;
    }

    return children;
}

void CiscoIetfBfdMib::set_value(const std::string & value_path, std::string value)
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
    return is_set(operation)
	|| is_set(ciscobfdadminstatus.operation)
	|| is_set(ciscobfdsessnotificationsenable.operation)
	|| is_set(ciscobfdversionnumber.operation);
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

    if (ciscobfdadminstatus.is_set || is_set(ciscobfdadminstatus.operation)) leaf_name_data.push_back(ciscobfdadminstatus.get_name_leafdata());
    if (ciscobfdsessnotificationsenable.is_set || is_set(ciscobfdsessnotificationsenable.operation)) leaf_name_data.push_back(ciscobfdsessnotificationsenable.get_name_leafdata());
    if (ciscobfdversionnumber.is_set || is_set(ciscobfdversionnumber.operation)) leaf_name_data.push_back(ciscobfdversionnumber.get_name_leafdata());


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

void CiscoIetfBfdMib::Ciscobfdscalarobjects::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ciscoBfdAdminStatus")
    {
        ciscobfdadminstatus = value;
    }
    if(value_path == "ciscoBfdSessNotificationsEnable")
    {
        ciscobfdsessnotificationsenable = value;
    }
    if(value_path == "ciscoBfdVersionNumber")
    {
        ciscobfdversionnumber = value;
    }
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
    for (std::size_t index=0; index<ciscobfdsessentry_.size(); index++)
    {
        if(ciscobfdsessentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfBfdMib::Ciscobfdsesstable::has_operation() const
{
    for (std::size_t index=0; index<ciscobfdsessentry_.size(); index++)
    {
        if(ciscobfdsessentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : ciscobfdsessentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry>();
        c->parent = this;
        ciscobfdsessentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfBfdMib::Ciscobfdsesstable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciscobfdsessentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfBfdMib::Ciscobfdsesstable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(ciscobfdsessindex.operation)
	|| is_set(ciscobfdsessaddr.operation)
	|| is_set(ciscobfdsessaddrtype.operation)
	|| is_set(ciscobfdsessapplicationid.operation)
	|| is_set(ciscobfdsessauthenticationtype.operation)
	|| is_set(ciscobfdsessauthpresflag.operation)
	|| is_set(ciscobfdsesscontrolplanindepflag.operation)
	|| is_set(ciscobfdsessdemandmodedesiredflag.operation)
	|| is_set(ciscobfdsessdesiredmintxinterval.operation)
	|| is_set(ciscobfdsessdetectmult.operation)
	|| is_set(ciscobfdsessdiag.operation)
	|| is_set(ciscobfdsessdiscriminator.operation)
	|| is_set(ciscobfdsessechofuncmodedesiredflag.operation)
	|| is_set(ciscobfdsessinterface.operation)
	|| is_set(ciscobfdsessopermode.operation)
	|| is_set(ciscobfdsessperfdisctime.operation)
	|| is_set(ciscobfdsessperflastcommlostdiag.operation)
	|| is_set(ciscobfdsessperflastsessdowntime.operation)
	|| is_set(ciscobfdsessperfpktin.operation)
	|| is_set(ciscobfdsessperfpktinhc.operation)
	|| is_set(ciscobfdsessperfpktout.operation)
	|| is_set(ciscobfdsessperfpktouthc.operation)
	|| is_set(ciscobfdsessperfsessupcount.operation)
	|| is_set(ciscobfdsessremotediscr.operation)
	|| is_set(ciscobfdsessremoteheardflag.operation)
	|| is_set(ciscobfdsessreqminechorxinterval.operation)
	|| is_set(ciscobfdsessreqminrxinterval.operation)
	|| is_set(ciscobfdsessrowstatus.operation)
	|| is_set(ciscobfdsessstate.operation)
	|| is_set(ciscobfdsessstortype.operation)
	|| is_set(ciscobfdsesstype.operation)
	|| is_set(ciscobfdsessudpport.operation)
	|| is_set(ciscobfdsessuptime.operation)
	|| is_set(ciscobfdsessversionnumber.operation);
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

    if (ciscobfdsessindex.is_set || is_set(ciscobfdsessindex.operation)) leaf_name_data.push_back(ciscobfdsessindex.get_name_leafdata());
    if (ciscobfdsessaddr.is_set || is_set(ciscobfdsessaddr.operation)) leaf_name_data.push_back(ciscobfdsessaddr.get_name_leafdata());
    if (ciscobfdsessaddrtype.is_set || is_set(ciscobfdsessaddrtype.operation)) leaf_name_data.push_back(ciscobfdsessaddrtype.get_name_leafdata());
    if (ciscobfdsessapplicationid.is_set || is_set(ciscobfdsessapplicationid.operation)) leaf_name_data.push_back(ciscobfdsessapplicationid.get_name_leafdata());
    if (ciscobfdsessauthenticationtype.is_set || is_set(ciscobfdsessauthenticationtype.operation)) leaf_name_data.push_back(ciscobfdsessauthenticationtype.get_name_leafdata());
    if (ciscobfdsessauthpresflag.is_set || is_set(ciscobfdsessauthpresflag.operation)) leaf_name_data.push_back(ciscobfdsessauthpresflag.get_name_leafdata());
    if (ciscobfdsesscontrolplanindepflag.is_set || is_set(ciscobfdsesscontrolplanindepflag.operation)) leaf_name_data.push_back(ciscobfdsesscontrolplanindepflag.get_name_leafdata());
    if (ciscobfdsessdemandmodedesiredflag.is_set || is_set(ciscobfdsessdemandmodedesiredflag.operation)) leaf_name_data.push_back(ciscobfdsessdemandmodedesiredflag.get_name_leafdata());
    if (ciscobfdsessdesiredmintxinterval.is_set || is_set(ciscobfdsessdesiredmintxinterval.operation)) leaf_name_data.push_back(ciscobfdsessdesiredmintxinterval.get_name_leafdata());
    if (ciscobfdsessdetectmult.is_set || is_set(ciscobfdsessdetectmult.operation)) leaf_name_data.push_back(ciscobfdsessdetectmult.get_name_leafdata());
    if (ciscobfdsessdiag.is_set || is_set(ciscobfdsessdiag.operation)) leaf_name_data.push_back(ciscobfdsessdiag.get_name_leafdata());
    if (ciscobfdsessdiscriminator.is_set || is_set(ciscobfdsessdiscriminator.operation)) leaf_name_data.push_back(ciscobfdsessdiscriminator.get_name_leafdata());
    if (ciscobfdsessechofuncmodedesiredflag.is_set || is_set(ciscobfdsessechofuncmodedesiredflag.operation)) leaf_name_data.push_back(ciscobfdsessechofuncmodedesiredflag.get_name_leafdata());
    if (ciscobfdsessinterface.is_set || is_set(ciscobfdsessinterface.operation)) leaf_name_data.push_back(ciscobfdsessinterface.get_name_leafdata());
    if (ciscobfdsessopermode.is_set || is_set(ciscobfdsessopermode.operation)) leaf_name_data.push_back(ciscobfdsessopermode.get_name_leafdata());
    if (ciscobfdsessperfdisctime.is_set || is_set(ciscobfdsessperfdisctime.operation)) leaf_name_data.push_back(ciscobfdsessperfdisctime.get_name_leafdata());
    if (ciscobfdsessperflastcommlostdiag.is_set || is_set(ciscobfdsessperflastcommlostdiag.operation)) leaf_name_data.push_back(ciscobfdsessperflastcommlostdiag.get_name_leafdata());
    if (ciscobfdsessperflastsessdowntime.is_set || is_set(ciscobfdsessperflastsessdowntime.operation)) leaf_name_data.push_back(ciscobfdsessperflastsessdowntime.get_name_leafdata());
    if (ciscobfdsessperfpktin.is_set || is_set(ciscobfdsessperfpktin.operation)) leaf_name_data.push_back(ciscobfdsessperfpktin.get_name_leafdata());
    if (ciscobfdsessperfpktinhc.is_set || is_set(ciscobfdsessperfpktinhc.operation)) leaf_name_data.push_back(ciscobfdsessperfpktinhc.get_name_leafdata());
    if (ciscobfdsessperfpktout.is_set || is_set(ciscobfdsessperfpktout.operation)) leaf_name_data.push_back(ciscobfdsessperfpktout.get_name_leafdata());
    if (ciscobfdsessperfpktouthc.is_set || is_set(ciscobfdsessperfpktouthc.operation)) leaf_name_data.push_back(ciscobfdsessperfpktouthc.get_name_leafdata());
    if (ciscobfdsessperfsessupcount.is_set || is_set(ciscobfdsessperfsessupcount.operation)) leaf_name_data.push_back(ciscobfdsessperfsessupcount.get_name_leafdata());
    if (ciscobfdsessremotediscr.is_set || is_set(ciscobfdsessremotediscr.operation)) leaf_name_data.push_back(ciscobfdsessremotediscr.get_name_leafdata());
    if (ciscobfdsessremoteheardflag.is_set || is_set(ciscobfdsessremoteheardflag.operation)) leaf_name_data.push_back(ciscobfdsessremoteheardflag.get_name_leafdata());
    if (ciscobfdsessreqminechorxinterval.is_set || is_set(ciscobfdsessreqminechorxinterval.operation)) leaf_name_data.push_back(ciscobfdsessreqminechorxinterval.get_name_leafdata());
    if (ciscobfdsessreqminrxinterval.is_set || is_set(ciscobfdsessreqminrxinterval.operation)) leaf_name_data.push_back(ciscobfdsessreqminrxinterval.get_name_leafdata());
    if (ciscobfdsessrowstatus.is_set || is_set(ciscobfdsessrowstatus.operation)) leaf_name_data.push_back(ciscobfdsessrowstatus.get_name_leafdata());
    if (ciscobfdsessstate.is_set || is_set(ciscobfdsessstate.operation)) leaf_name_data.push_back(ciscobfdsessstate.get_name_leafdata());
    if (ciscobfdsessstortype.is_set || is_set(ciscobfdsessstortype.operation)) leaf_name_data.push_back(ciscobfdsessstortype.get_name_leafdata());
    if (ciscobfdsesstype.is_set || is_set(ciscobfdsesstype.operation)) leaf_name_data.push_back(ciscobfdsesstype.get_name_leafdata());
    if (ciscobfdsessudpport.is_set || is_set(ciscobfdsessudpport.operation)) leaf_name_data.push_back(ciscobfdsessudpport.get_name_leafdata());
    if (ciscobfdsessuptime.is_set || is_set(ciscobfdsessuptime.operation)) leaf_name_data.push_back(ciscobfdsessuptime.get_name_leafdata());
    if (ciscobfdsessversionnumber.is_set || is_set(ciscobfdsessversionnumber.operation)) leaf_name_data.push_back(ciscobfdsessversionnumber.get_name_leafdata());


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

void CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ciscoBfdSessIndex")
    {
        ciscobfdsessindex = value;
    }
    if(value_path == "ciscoBfdSessAddr")
    {
        ciscobfdsessaddr = value;
    }
    if(value_path == "ciscoBfdSessAddrType")
    {
        ciscobfdsessaddrtype = value;
    }
    if(value_path == "ciscoBfdSessApplicationId")
    {
        ciscobfdsessapplicationid = value;
    }
    if(value_path == "ciscoBfdSessAuthenticationType")
    {
        ciscobfdsessauthenticationtype = value;
    }
    if(value_path == "ciscoBfdSessAuthPresFlag")
    {
        ciscobfdsessauthpresflag = value;
    }
    if(value_path == "ciscoBfdSessControlPlanIndepFlag")
    {
        ciscobfdsesscontrolplanindepflag = value;
    }
    if(value_path == "ciscoBfdSessDemandModeDesiredFlag")
    {
        ciscobfdsessdemandmodedesiredflag = value;
    }
    if(value_path == "ciscoBfdSessDesiredMinTxInterval")
    {
        ciscobfdsessdesiredmintxinterval = value;
    }
    if(value_path == "ciscoBfdSessDetectMult")
    {
        ciscobfdsessdetectmult = value;
    }
    if(value_path == "ciscoBfdSessDiag")
    {
        ciscobfdsessdiag = value;
    }
    if(value_path == "ciscoBfdSessDiscriminator")
    {
        ciscobfdsessdiscriminator = value;
    }
    if(value_path == "ciscoBfdSessEchoFuncModeDesiredFlag")
    {
        ciscobfdsessechofuncmodedesiredflag = value;
    }
    if(value_path == "ciscoBfdSessInterface")
    {
        ciscobfdsessinterface = value;
    }
    if(value_path == "ciscoBfdSessOperMode")
    {
        ciscobfdsessopermode = value;
    }
    if(value_path == "ciscoBfdSessPerfDiscTime")
    {
        ciscobfdsessperfdisctime = value;
    }
    if(value_path == "ciscoBfdSessPerfLastCommLostDiag")
    {
        ciscobfdsessperflastcommlostdiag = value;
    }
    if(value_path == "ciscoBfdSessPerfLastSessDownTime")
    {
        ciscobfdsessperflastsessdowntime = value;
    }
    if(value_path == "ciscoBfdSessPerfPktIn")
    {
        ciscobfdsessperfpktin = value;
    }
    if(value_path == "ciscoBfdSessPerfPktInHC")
    {
        ciscobfdsessperfpktinhc = value;
    }
    if(value_path == "ciscoBfdSessPerfPktOut")
    {
        ciscobfdsessperfpktout = value;
    }
    if(value_path == "ciscoBfdSessPerfPktOutHC")
    {
        ciscobfdsessperfpktouthc = value;
    }
    if(value_path == "ciscoBfdSessPerfSessUpCount")
    {
        ciscobfdsessperfsessupcount = value;
    }
    if(value_path == "ciscoBfdSessRemoteDiscr")
    {
        ciscobfdsessremotediscr = value;
    }
    if(value_path == "ciscoBfdSessRemoteHeardFlag")
    {
        ciscobfdsessremoteheardflag = value;
    }
    if(value_path == "ciscoBfdSessReqMinEchoRxInterval")
    {
        ciscobfdsessreqminechorxinterval = value;
    }
    if(value_path == "ciscoBfdSessReqMinRxInterval")
    {
        ciscobfdsessreqminrxinterval = value;
    }
    if(value_path == "ciscoBfdSessRowStatus")
    {
        ciscobfdsessrowstatus = value;
    }
    if(value_path == "ciscoBfdSessState")
    {
        ciscobfdsessstate = value;
    }
    if(value_path == "ciscoBfdSessStorType")
    {
        ciscobfdsessstortype = value;
    }
    if(value_path == "ciscoBfdSessType")
    {
        ciscobfdsesstype = value;
    }
    if(value_path == "ciscoBfdSessUdpPort")
    {
        ciscobfdsessudpport = value;
    }
    if(value_path == "ciscoBfdSessUpTime")
    {
        ciscobfdsessuptime = value;
    }
    if(value_path == "ciscoBfdSessVersionNumber")
    {
        ciscobfdsessversionnumber = value;
    }
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
    for (std::size_t index=0; index<ciscobfdsessmapentry_.size(); index++)
    {
        if(ciscobfdsessmapentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfBfdMib::Ciscobfdsessmaptable::has_operation() const
{
    for (std::size_t index=0; index<ciscobfdsessmapentry_.size(); index++)
    {
        if(ciscobfdsessmapentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : ciscobfdsessmapentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfBfdMib::Ciscobfdsessmaptable::Ciscobfdsessmapentry>();
        c->parent = this;
        ciscobfdsessmapentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfBfdMib::Ciscobfdsessmaptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciscobfdsessmapentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfBfdMib::Ciscobfdsessmaptable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(ciscobfdsessapplicationid.operation)
	|| is_set(ciscobfdsessdiscriminator.operation)
	|| is_set(ciscobfdsessaddrtype.operation)
	|| is_set(ciscobfdsessaddr.operation)
	|| is_set(ciscobfdsessmapbfdindex.operation);
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

    if (ciscobfdsessapplicationid.is_set || is_set(ciscobfdsessapplicationid.operation)) leaf_name_data.push_back(ciscobfdsessapplicationid.get_name_leafdata());
    if (ciscobfdsessdiscriminator.is_set || is_set(ciscobfdsessdiscriminator.operation)) leaf_name_data.push_back(ciscobfdsessdiscriminator.get_name_leafdata());
    if (ciscobfdsessaddrtype.is_set || is_set(ciscobfdsessaddrtype.operation)) leaf_name_data.push_back(ciscobfdsessaddrtype.get_name_leafdata());
    if (ciscobfdsessaddr.is_set || is_set(ciscobfdsessaddr.operation)) leaf_name_data.push_back(ciscobfdsessaddr.get_name_leafdata());
    if (ciscobfdsessmapbfdindex.is_set || is_set(ciscobfdsessmapbfdindex.operation)) leaf_name_data.push_back(ciscobfdsessmapbfdindex.get_name_leafdata());


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

void CiscoIetfBfdMib::Ciscobfdsessmaptable::Ciscobfdsessmapentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ciscoBfdSessApplicationId")
    {
        ciscobfdsessapplicationid = value;
    }
    if(value_path == "ciscoBfdSessDiscriminator")
    {
        ciscobfdsessdiscriminator = value;
    }
    if(value_path == "ciscoBfdSessAddrType")
    {
        ciscobfdsessaddrtype = value;
    }
    if(value_path == "ciscoBfdSessAddr")
    {
        ciscobfdsessaddr = value;
    }
    if(value_path == "ciscoBfdSessMapBfdIndex")
    {
        ciscobfdsessmapbfdindex = value;
    }
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
    for (std::size_t index=0; index<ciscobfdsessdiscmapentry_.size(); index++)
    {
        if(ciscobfdsessdiscmapentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfBfdMib::Ciscobfdsessdiscmaptable::has_operation() const
{
    for (std::size_t index=0; index<ciscobfdsessdiscmapentry_.size(); index++)
    {
        if(ciscobfdsessdiscmapentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : ciscobfdsessdiscmapentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfBfdMib::Ciscobfdsessdiscmaptable::Ciscobfdsessdiscmapentry>();
        c->parent = this;
        ciscobfdsessdiscmapentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfBfdMib::Ciscobfdsessdiscmaptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciscobfdsessdiscmapentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfBfdMib::Ciscobfdsessdiscmaptable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(ciscobfdsessdiscriminator.operation)
	|| is_set(ciscobfdsessdiscmapindex.operation);
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

    if (ciscobfdsessdiscriminator.is_set || is_set(ciscobfdsessdiscriminator.operation)) leaf_name_data.push_back(ciscobfdsessdiscriminator.get_name_leafdata());
    if (ciscobfdsessdiscmapindex.is_set || is_set(ciscobfdsessdiscmapindex.operation)) leaf_name_data.push_back(ciscobfdsessdiscmapindex.get_name_leafdata());


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

void CiscoIetfBfdMib::Ciscobfdsessdiscmaptable::Ciscobfdsessdiscmapentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ciscoBfdSessDiscriminator")
    {
        ciscobfdsessdiscriminator = value;
    }
    if(value_path == "ciscoBfdSessDiscMapIndex")
    {
        ciscobfdsessdiscmapindex = value;
    }
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
    for (std::size_t index=0; index<ciscobfdsessipmapentry_.size(); index++)
    {
        if(ciscobfdsessipmapentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfBfdMib::Ciscobfdsessipmaptable::has_operation() const
{
    for (std::size_t index=0; index<ciscobfdsessipmapentry_.size(); index++)
    {
        if(ciscobfdsessipmapentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
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
        for(auto const & c : ciscobfdsessipmapentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfBfdMib::Ciscobfdsessipmaptable::Ciscobfdsessipmapentry>();
        c->parent = this;
        ciscobfdsessipmapentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfBfdMib::Ciscobfdsessipmaptable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ciscobfdsessipmapentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfBfdMib::Ciscobfdsessipmaptable::set_value(const std::string & value_path, std::string value)
{
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
    return is_set(operation)
	|| is_set(ciscobfdsessinterface.operation)
	|| is_set(ciscobfdsessaddrtype.operation)
	|| is_set(ciscobfdsessaddr.operation)
	|| is_set(ciscobfdsessipmapindex.operation);
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

    if (ciscobfdsessinterface.is_set || is_set(ciscobfdsessinterface.operation)) leaf_name_data.push_back(ciscobfdsessinterface.get_name_leafdata());
    if (ciscobfdsessaddrtype.is_set || is_set(ciscobfdsessaddrtype.operation)) leaf_name_data.push_back(ciscobfdsessaddrtype.get_name_leafdata());
    if (ciscobfdsessaddr.is_set || is_set(ciscobfdsessaddr.operation)) leaf_name_data.push_back(ciscobfdsessaddr.get_name_leafdata());
    if (ciscobfdsessipmapindex.is_set || is_set(ciscobfdsessipmapindex.operation)) leaf_name_data.push_back(ciscobfdsessipmapindex.get_name_leafdata());


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

void CiscoIetfBfdMib::Ciscobfdsessipmaptable::Ciscobfdsessipmapentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ciscoBfdSessInterface")
    {
        ciscobfdsessinterface = value;
    }
    if(value_path == "ciscoBfdSessAddrType")
    {
        ciscobfdsessaddrtype = value;
    }
    if(value_path == "ciscoBfdSessAddr")
    {
        ciscobfdsessaddr = value;
    }
    if(value_path == "ciscoBfdSessIpMapIndex")
    {
        ciscobfdsessipmapindex = value;
    }
}

const Enum::YLeaf CiscobfddiagEnum::noDiagnostic {0, "noDiagnostic"};
const Enum::YLeaf CiscobfddiagEnum::controlDetectionTimeExpired {1, "controlDetectionTimeExpired"};
const Enum::YLeaf CiscobfddiagEnum::echoFunctionFailed {2, "echoFunctionFailed"};
const Enum::YLeaf CiscobfddiagEnum::neighborSignaledSessionDown {3, "neighborSignaledSessionDown"};
const Enum::YLeaf CiscobfddiagEnum::forwardingPlaneReset {4, "forwardingPlaneReset"};
const Enum::YLeaf CiscobfddiagEnum::pathDown {5, "pathDown"};
const Enum::YLeaf CiscobfddiagEnum::concatenatedPathDown {6, "concatenatedPathDown"};
const Enum::YLeaf CiscobfddiagEnum::administrativelyDown {7, "administrativelyDown"};
const Enum::YLeaf CiscobfddiagEnum::reverseConcatenatedPathDown {8, "reverseConcatenatedPathDown"};

const Enum::YLeaf CiscoIetfBfdMib::Ciscobfdscalarobjects::CiscobfdadminstatusEnum::enabled {1, "enabled"};
const Enum::YLeaf CiscoIetfBfdMib::Ciscobfdscalarobjects::CiscobfdadminstatusEnum::disabled {2, "disabled"};

const Enum::YLeaf CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::CiscobfdsessstateEnum::adminDown {1, "adminDown"};
const Enum::YLeaf CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::CiscobfdsessstateEnum::down {2, "down"};
const Enum::YLeaf CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::CiscobfdsessstateEnum::init {3, "init"};
const Enum::YLeaf CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::CiscobfdsessstateEnum::up {4, "up"};
const Enum::YLeaf CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::CiscobfdsessstateEnum::failing {5, "failing"};

const Enum::YLeaf CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::CiscobfdsessopermodeEnum::asyncModeWEchoFun {1, "asyncModeWEchoFun"};
const Enum::YLeaf CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::CiscobfdsessopermodeEnum::asynchModeWOEchoFun {2, "asynchModeWOEchoFun"};
const Enum::YLeaf CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::CiscobfdsessopermodeEnum::demandModeWEchoFunction {3, "demandModeWEchoFunction"};
const Enum::YLeaf CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::CiscobfdsessopermodeEnum::demandModeWOEchoFunction {4, "demandModeWOEchoFunction"};

const Enum::YLeaf CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::CiscobfdsessauthenticationtypeEnum::simplePassword {1, "simplePassword"};
const Enum::YLeaf CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::CiscobfdsessauthenticationtypeEnum::keyedMD5 {2, "keyedMD5"};
const Enum::YLeaf CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::CiscobfdsessauthenticationtypeEnum::meticulousKeyedMD5 {3, "meticulousKeyedMD5"};
const Enum::YLeaf CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::CiscobfdsessauthenticationtypeEnum::keyedSHA1 {4, "keyedSHA1"};
const Enum::YLeaf CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::CiscobfdsessauthenticationtypeEnum::meticulousKeyedSHA1 {5, "meticulousKeyedSHA1"};

const Enum::YLeaf CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::CiscobfdsesstypeEnum::singleHop {1, "singleHop"};
const Enum::YLeaf CiscoIetfBfdMib::Ciscobfdsesstable::Ciscobfdsessentry::CiscobfdsesstypeEnum::multiHop {2, "multiHop"};


}
}

