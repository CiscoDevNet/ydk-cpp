
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IETF_FRR_MIB.hpp"

namespace ydk {
namespace CISCO_IETF_FRR_MIB {

CiscoIetfFrrMib::CiscoIetfFrrMib()
    :
    cmplsfrrconsttable_(std::make_shared<CiscoIetfFrrMib::Cmplsfrrconsttable>())
	,cmplsfrrfacroutedbtable_(std::make_shared<CiscoIetfFrrMib::Cmplsfrrfacroutedbtable>())
	,cmplsfrrlogtable_(std::make_shared<CiscoIetfFrrMib::Cmplsfrrlogtable>())
	,cmplsfrrscalars_(std::make_shared<CiscoIetfFrrMib::Cmplsfrrscalars>())
{
    cmplsfrrconsttable_->parent = this;

    cmplsfrrfacroutedbtable_->parent = this;

    cmplsfrrlogtable_->parent = this;

    cmplsfrrscalars_->parent = this;

    yang_name = "CISCO-IETF-FRR-MIB"; yang_parent_name = "CISCO-IETF-FRR-MIB";
}

CiscoIetfFrrMib::~CiscoIetfFrrMib()
{
}

bool CiscoIetfFrrMib::has_data() const
{
    return (cmplsfrrconsttable_ !=  nullptr && cmplsfrrconsttable_->has_data())
	|| (cmplsfrrfacroutedbtable_ !=  nullptr && cmplsfrrfacroutedbtable_->has_data())
	|| (cmplsfrrlogtable_ !=  nullptr && cmplsfrrlogtable_->has_data())
	|| (cmplsfrrscalars_ !=  nullptr && cmplsfrrscalars_->has_data());
}

bool CiscoIetfFrrMib::has_operation() const
{
    return is_set(operation)
	|| (cmplsfrrconsttable_ !=  nullptr && cmplsfrrconsttable_->has_operation())
	|| (cmplsfrrfacroutedbtable_ !=  nullptr && cmplsfrrfacroutedbtable_->has_operation())
	|| (cmplsfrrlogtable_ !=  nullptr && cmplsfrrlogtable_->has_operation())
	|| (cmplsfrrscalars_ !=  nullptr && cmplsfrrscalars_->has_operation());
}

std::string CiscoIetfFrrMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-IETF-FRR-MIB:CISCO-IETF-FRR-MIB";

    return path_buffer.str();

}

const EntityPath CiscoIetfFrrMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoIetfFrrMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cmplsFrrConstTable")
    {
        if(cmplsfrrconsttable_ == nullptr)
        {
            cmplsfrrconsttable_ = std::make_shared<CiscoIetfFrrMib::Cmplsfrrconsttable>();
        }
        return cmplsfrrconsttable_;
    }

    if(child_yang_name == "cmplsFrrFacRouteDBTable")
    {
        if(cmplsfrrfacroutedbtable_ == nullptr)
        {
            cmplsfrrfacroutedbtable_ = std::make_shared<CiscoIetfFrrMib::Cmplsfrrfacroutedbtable>();
        }
        return cmplsfrrfacroutedbtable_;
    }

    if(child_yang_name == "cmplsFrrLogTable")
    {
        if(cmplsfrrlogtable_ == nullptr)
        {
            cmplsfrrlogtable_ = std::make_shared<CiscoIetfFrrMib::Cmplsfrrlogtable>();
        }
        return cmplsfrrlogtable_;
    }

    if(child_yang_name == "cmplsFrrScalars")
    {
        if(cmplsfrrscalars_ == nullptr)
        {
            cmplsfrrscalars_ = std::make_shared<CiscoIetfFrrMib::Cmplsfrrscalars>();
        }
        return cmplsfrrscalars_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfFrrMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cmplsfrrconsttable_ != nullptr)
    {
        children["cmplsFrrConstTable"] = cmplsfrrconsttable_;
    }

    if(cmplsfrrfacroutedbtable_ != nullptr)
    {
        children["cmplsFrrFacRouteDBTable"] = cmplsfrrfacroutedbtable_;
    }

    if(cmplsfrrlogtable_ != nullptr)
    {
        children["cmplsFrrLogTable"] = cmplsfrrlogtable_;
    }

    if(cmplsfrrscalars_ != nullptr)
    {
        children["cmplsFrrScalars"] = cmplsfrrscalars_;
    }

    return children;
}

void CiscoIetfFrrMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CiscoIetfFrrMib::clone_ptr() const
{
    return std::make_shared<CiscoIetfFrrMib>();
}

std::string CiscoIetfFrrMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoIetfFrrMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoIetfFrrMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CiscoIetfFrrMib::Cmplsfrrscalars::Cmplsfrrscalars()
    :
    cmplsfrractprotectedifs{YType::uint32, "cmplsFrrActProtectedIfs"},
    cmplsfrractprotectedlsps{YType::uint32, "cmplsFrrActProtectedLSPs"},
    cmplsfrractprotectedtuns{YType::uint32, "cmplsFrrActProtectedTuns"},
    cmplsfrrconfprotectingtuns{YType::uint32, "cmplsFrrConfProtectingTuns"},
    cmplsfrrconstprotectionmethod{YType::enumeration, "cmplsFrrConstProtectionMethod"},
    cmplsfrrdetourincoming{YType::uint32, "cmplsFrrDetourIncoming"},
    cmplsfrrdetouroriginating{YType::uint32, "cmplsFrrDetourOriginating"},
    cmplsfrrdetouroutgoing{YType::uint32, "cmplsFrrDetourOutgoing"},
    cmplsfrrlogtablecurrentries{YType::uint32, "cmplsFrrLogTableCurrEntries"},
    cmplsfrrlogtablemaxentries{YType::uint32, "cmplsFrrLogTableMaxEntries"},
    cmplsfrrnotifmaxrate{YType::uint32, "cmplsFrrNotifMaxRate"},
    cmplsfrrnotifsenabled{YType::boolean, "cmplsFrrNotifsEnabled"},
    cmplsfrrnumofconfifs{YType::uint32, "cmplsFrrNumOfConfIfs"},
    cmplsfrrswitchover{YType::uint32, "cmplsFrrSwitchover"}
{
    yang_name = "cmplsFrrScalars"; yang_parent_name = "CISCO-IETF-FRR-MIB";
}

CiscoIetfFrrMib::Cmplsfrrscalars::~Cmplsfrrscalars()
{
}

bool CiscoIetfFrrMib::Cmplsfrrscalars::has_data() const
{
    return cmplsfrractprotectedifs.is_set
	|| cmplsfrractprotectedlsps.is_set
	|| cmplsfrractprotectedtuns.is_set
	|| cmplsfrrconfprotectingtuns.is_set
	|| cmplsfrrconstprotectionmethod.is_set
	|| cmplsfrrdetourincoming.is_set
	|| cmplsfrrdetouroriginating.is_set
	|| cmplsfrrdetouroutgoing.is_set
	|| cmplsfrrlogtablecurrentries.is_set
	|| cmplsfrrlogtablemaxentries.is_set
	|| cmplsfrrnotifmaxrate.is_set
	|| cmplsfrrnotifsenabled.is_set
	|| cmplsfrrnumofconfifs.is_set
	|| cmplsfrrswitchover.is_set;
}

bool CiscoIetfFrrMib::Cmplsfrrscalars::has_operation() const
{
    return is_set(operation)
	|| is_set(cmplsfrractprotectedifs.operation)
	|| is_set(cmplsfrractprotectedlsps.operation)
	|| is_set(cmplsfrractprotectedtuns.operation)
	|| is_set(cmplsfrrconfprotectingtuns.operation)
	|| is_set(cmplsfrrconstprotectionmethod.operation)
	|| is_set(cmplsfrrdetourincoming.operation)
	|| is_set(cmplsfrrdetouroriginating.operation)
	|| is_set(cmplsfrrdetouroutgoing.operation)
	|| is_set(cmplsfrrlogtablecurrentries.operation)
	|| is_set(cmplsfrrlogtablemaxentries.operation)
	|| is_set(cmplsfrrnotifmaxrate.operation)
	|| is_set(cmplsfrrnotifsenabled.operation)
	|| is_set(cmplsfrrnumofconfifs.operation)
	|| is_set(cmplsfrrswitchover.operation);
}

std::string CiscoIetfFrrMib::Cmplsfrrscalars::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmplsFrrScalars";

    return path_buffer.str();

}

const EntityPath CiscoIetfFrrMib::Cmplsfrrscalars::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-FRR-MIB:CISCO-IETF-FRR-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmplsfrractprotectedifs.is_set || is_set(cmplsfrractprotectedifs.operation)) leaf_name_data.push_back(cmplsfrractprotectedifs.get_name_leafdata());
    if (cmplsfrractprotectedlsps.is_set || is_set(cmplsfrractprotectedlsps.operation)) leaf_name_data.push_back(cmplsfrractprotectedlsps.get_name_leafdata());
    if (cmplsfrractprotectedtuns.is_set || is_set(cmplsfrractprotectedtuns.operation)) leaf_name_data.push_back(cmplsfrractprotectedtuns.get_name_leafdata());
    if (cmplsfrrconfprotectingtuns.is_set || is_set(cmplsfrrconfprotectingtuns.operation)) leaf_name_data.push_back(cmplsfrrconfprotectingtuns.get_name_leafdata());
    if (cmplsfrrconstprotectionmethod.is_set || is_set(cmplsfrrconstprotectionmethod.operation)) leaf_name_data.push_back(cmplsfrrconstprotectionmethod.get_name_leafdata());
    if (cmplsfrrdetourincoming.is_set || is_set(cmplsfrrdetourincoming.operation)) leaf_name_data.push_back(cmplsfrrdetourincoming.get_name_leafdata());
    if (cmplsfrrdetouroriginating.is_set || is_set(cmplsfrrdetouroriginating.operation)) leaf_name_data.push_back(cmplsfrrdetouroriginating.get_name_leafdata());
    if (cmplsfrrdetouroutgoing.is_set || is_set(cmplsfrrdetouroutgoing.operation)) leaf_name_data.push_back(cmplsfrrdetouroutgoing.get_name_leafdata());
    if (cmplsfrrlogtablecurrentries.is_set || is_set(cmplsfrrlogtablecurrentries.operation)) leaf_name_data.push_back(cmplsfrrlogtablecurrentries.get_name_leafdata());
    if (cmplsfrrlogtablemaxentries.is_set || is_set(cmplsfrrlogtablemaxentries.operation)) leaf_name_data.push_back(cmplsfrrlogtablemaxentries.get_name_leafdata());
    if (cmplsfrrnotifmaxrate.is_set || is_set(cmplsfrrnotifmaxrate.operation)) leaf_name_data.push_back(cmplsfrrnotifmaxrate.get_name_leafdata());
    if (cmplsfrrnotifsenabled.is_set || is_set(cmplsfrrnotifsenabled.operation)) leaf_name_data.push_back(cmplsfrrnotifsenabled.get_name_leafdata());
    if (cmplsfrrnumofconfifs.is_set || is_set(cmplsfrrnumofconfifs.operation)) leaf_name_data.push_back(cmplsfrrnumofconfifs.get_name_leafdata());
    if (cmplsfrrswitchover.is_set || is_set(cmplsfrrswitchover.operation)) leaf_name_data.push_back(cmplsfrrswitchover.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfFrrMib::Cmplsfrrscalars::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfFrrMib::Cmplsfrrscalars::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfFrrMib::Cmplsfrrscalars::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cmplsFrrActProtectedIfs")
    {
        cmplsfrractprotectedifs = value;
    }
    if(value_path == "cmplsFrrActProtectedLSPs")
    {
        cmplsfrractprotectedlsps = value;
    }
    if(value_path == "cmplsFrrActProtectedTuns")
    {
        cmplsfrractprotectedtuns = value;
    }
    if(value_path == "cmplsFrrConfProtectingTuns")
    {
        cmplsfrrconfprotectingtuns = value;
    }
    if(value_path == "cmplsFrrConstProtectionMethod")
    {
        cmplsfrrconstprotectionmethod = value;
    }
    if(value_path == "cmplsFrrDetourIncoming")
    {
        cmplsfrrdetourincoming = value;
    }
    if(value_path == "cmplsFrrDetourOriginating")
    {
        cmplsfrrdetouroriginating = value;
    }
    if(value_path == "cmplsFrrDetourOutgoing")
    {
        cmplsfrrdetouroutgoing = value;
    }
    if(value_path == "cmplsFrrLogTableCurrEntries")
    {
        cmplsfrrlogtablecurrentries = value;
    }
    if(value_path == "cmplsFrrLogTableMaxEntries")
    {
        cmplsfrrlogtablemaxentries = value;
    }
    if(value_path == "cmplsFrrNotifMaxRate")
    {
        cmplsfrrnotifmaxrate = value;
    }
    if(value_path == "cmplsFrrNotifsEnabled")
    {
        cmplsfrrnotifsenabled = value;
    }
    if(value_path == "cmplsFrrNumOfConfIfs")
    {
        cmplsfrrnumofconfifs = value;
    }
    if(value_path == "cmplsFrrSwitchover")
    {
        cmplsfrrswitchover = value;
    }
}

CiscoIetfFrrMib::Cmplsfrrconsttable::Cmplsfrrconsttable()
{
    yang_name = "cmplsFrrConstTable"; yang_parent_name = "CISCO-IETF-FRR-MIB";
}

CiscoIetfFrrMib::Cmplsfrrconsttable::~Cmplsfrrconsttable()
{
}

bool CiscoIetfFrrMib::Cmplsfrrconsttable::has_data() const
{
    for (std::size_t index=0; index<cmplsfrrconstentry_.size(); index++)
    {
        if(cmplsfrrconstentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfFrrMib::Cmplsfrrconsttable::has_operation() const
{
    for (std::size_t index=0; index<cmplsfrrconstentry_.size(); index++)
    {
        if(cmplsfrrconstentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIetfFrrMib::Cmplsfrrconsttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmplsFrrConstTable";

    return path_buffer.str();

}

const EntityPath CiscoIetfFrrMib::Cmplsfrrconsttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-FRR-MIB:CISCO-IETF-FRR-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfFrrMib::Cmplsfrrconsttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cmplsFrrConstEntry")
    {
        for(auto const & c : cmplsfrrconstentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfFrrMib::Cmplsfrrconsttable::Cmplsfrrconstentry>();
        c->parent = this;
        cmplsfrrconstentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfFrrMib::Cmplsfrrconsttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cmplsfrrconstentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfFrrMib::Cmplsfrrconsttable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIetfFrrMib::Cmplsfrrconsttable::Cmplsfrrconstentry::Cmplsfrrconstentry()
    :
    cmplsfrrconstifindex{YType::int32, "cmplsFrrConstIfIndex"},
    cmplsfrrconsttunnelindex{YType::uint32, "cmplsFrrConstTunnelIndex"},
    cmplsfrrconsttunnelinstance{YType::uint32, "cmplsFrrConstTunnelInstance"},
    cmplsfrrconstbandwidth{YType::uint32, "cmplsFrrConstBandwidth"},
    cmplsfrrconstexclallaffinity{YType::uint32, "cmplsFrrConstExclAllAffinity"},
    cmplsfrrconstholdingprio{YType::uint32, "cmplsFrrConstHoldingPrio"},
    cmplsfrrconsthoplimit{YType::uint32, "cmplsFrrConstHopLimit"},
    cmplsfrrconstinclallaffinity{YType::uint32, "cmplsFrrConstInclAllAffinity"},
    cmplsfrrconstinclanyaffinity{YType::uint32, "cmplsFrrConstInclAnyAffinity"},
    cmplsfrrconstnumprotectedtunonif{YType::uint32, "cmplsFrrConstNumProtectedTunOnIf"},
    cmplsfrrconstnumprotectingtunonif{YType::uint32, "cmplsFrrConstNumProtectingTunOnIf"},
    cmplsfrrconstrowstatus{YType::enumeration, "cmplsFrrConstRowStatus"},
    cmplsfrrconstsetupprio{YType::uint32, "cmplsFrrConstSetupPrio"}
{
    yang_name = "cmplsFrrConstEntry"; yang_parent_name = "cmplsFrrConstTable";
}

CiscoIetfFrrMib::Cmplsfrrconsttable::Cmplsfrrconstentry::~Cmplsfrrconstentry()
{
}

bool CiscoIetfFrrMib::Cmplsfrrconsttable::Cmplsfrrconstentry::has_data() const
{
    return cmplsfrrconstifindex.is_set
	|| cmplsfrrconsttunnelindex.is_set
	|| cmplsfrrconsttunnelinstance.is_set
	|| cmplsfrrconstbandwidth.is_set
	|| cmplsfrrconstexclallaffinity.is_set
	|| cmplsfrrconstholdingprio.is_set
	|| cmplsfrrconsthoplimit.is_set
	|| cmplsfrrconstinclallaffinity.is_set
	|| cmplsfrrconstinclanyaffinity.is_set
	|| cmplsfrrconstnumprotectedtunonif.is_set
	|| cmplsfrrconstnumprotectingtunonif.is_set
	|| cmplsfrrconstrowstatus.is_set
	|| cmplsfrrconstsetupprio.is_set;
}

bool CiscoIetfFrrMib::Cmplsfrrconsttable::Cmplsfrrconstentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cmplsfrrconstifindex.operation)
	|| is_set(cmplsfrrconsttunnelindex.operation)
	|| is_set(cmplsfrrconsttunnelinstance.operation)
	|| is_set(cmplsfrrconstbandwidth.operation)
	|| is_set(cmplsfrrconstexclallaffinity.operation)
	|| is_set(cmplsfrrconstholdingprio.operation)
	|| is_set(cmplsfrrconsthoplimit.operation)
	|| is_set(cmplsfrrconstinclallaffinity.operation)
	|| is_set(cmplsfrrconstinclanyaffinity.operation)
	|| is_set(cmplsfrrconstnumprotectedtunonif.operation)
	|| is_set(cmplsfrrconstnumprotectingtunonif.operation)
	|| is_set(cmplsfrrconstrowstatus.operation)
	|| is_set(cmplsfrrconstsetupprio.operation);
}

std::string CiscoIetfFrrMib::Cmplsfrrconsttable::Cmplsfrrconstentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmplsFrrConstEntry" <<"[cmplsFrrConstIfIndex='" <<cmplsfrrconstifindex <<"']" <<"[cmplsFrrConstTunnelIndex='" <<cmplsfrrconsttunnelindex <<"']" <<"[cmplsFrrConstTunnelInstance='" <<cmplsfrrconsttunnelinstance <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfFrrMib::Cmplsfrrconsttable::Cmplsfrrconstentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-FRR-MIB:CISCO-IETF-FRR-MIB/cmplsFrrConstTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmplsfrrconstifindex.is_set || is_set(cmplsfrrconstifindex.operation)) leaf_name_data.push_back(cmplsfrrconstifindex.get_name_leafdata());
    if (cmplsfrrconsttunnelindex.is_set || is_set(cmplsfrrconsttunnelindex.operation)) leaf_name_data.push_back(cmplsfrrconsttunnelindex.get_name_leafdata());
    if (cmplsfrrconsttunnelinstance.is_set || is_set(cmplsfrrconsttunnelinstance.operation)) leaf_name_data.push_back(cmplsfrrconsttunnelinstance.get_name_leafdata());
    if (cmplsfrrconstbandwidth.is_set || is_set(cmplsfrrconstbandwidth.operation)) leaf_name_data.push_back(cmplsfrrconstbandwidth.get_name_leafdata());
    if (cmplsfrrconstexclallaffinity.is_set || is_set(cmplsfrrconstexclallaffinity.operation)) leaf_name_data.push_back(cmplsfrrconstexclallaffinity.get_name_leafdata());
    if (cmplsfrrconstholdingprio.is_set || is_set(cmplsfrrconstholdingprio.operation)) leaf_name_data.push_back(cmplsfrrconstholdingprio.get_name_leafdata());
    if (cmplsfrrconsthoplimit.is_set || is_set(cmplsfrrconsthoplimit.operation)) leaf_name_data.push_back(cmplsfrrconsthoplimit.get_name_leafdata());
    if (cmplsfrrconstinclallaffinity.is_set || is_set(cmplsfrrconstinclallaffinity.operation)) leaf_name_data.push_back(cmplsfrrconstinclallaffinity.get_name_leafdata());
    if (cmplsfrrconstinclanyaffinity.is_set || is_set(cmplsfrrconstinclanyaffinity.operation)) leaf_name_data.push_back(cmplsfrrconstinclanyaffinity.get_name_leafdata());
    if (cmplsfrrconstnumprotectedtunonif.is_set || is_set(cmplsfrrconstnumprotectedtunonif.operation)) leaf_name_data.push_back(cmplsfrrconstnumprotectedtunonif.get_name_leafdata());
    if (cmplsfrrconstnumprotectingtunonif.is_set || is_set(cmplsfrrconstnumprotectingtunonif.operation)) leaf_name_data.push_back(cmplsfrrconstnumprotectingtunonif.get_name_leafdata());
    if (cmplsfrrconstrowstatus.is_set || is_set(cmplsfrrconstrowstatus.operation)) leaf_name_data.push_back(cmplsfrrconstrowstatus.get_name_leafdata());
    if (cmplsfrrconstsetupprio.is_set || is_set(cmplsfrrconstsetupprio.operation)) leaf_name_data.push_back(cmplsfrrconstsetupprio.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfFrrMib::Cmplsfrrconsttable::Cmplsfrrconstentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfFrrMib::Cmplsfrrconsttable::Cmplsfrrconstentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfFrrMib::Cmplsfrrconsttable::Cmplsfrrconstentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cmplsFrrConstIfIndex")
    {
        cmplsfrrconstifindex = value;
    }
    if(value_path == "cmplsFrrConstTunnelIndex")
    {
        cmplsfrrconsttunnelindex = value;
    }
    if(value_path == "cmplsFrrConstTunnelInstance")
    {
        cmplsfrrconsttunnelinstance = value;
    }
    if(value_path == "cmplsFrrConstBandwidth")
    {
        cmplsfrrconstbandwidth = value;
    }
    if(value_path == "cmplsFrrConstExclAllAffinity")
    {
        cmplsfrrconstexclallaffinity = value;
    }
    if(value_path == "cmplsFrrConstHoldingPrio")
    {
        cmplsfrrconstholdingprio = value;
    }
    if(value_path == "cmplsFrrConstHopLimit")
    {
        cmplsfrrconsthoplimit = value;
    }
    if(value_path == "cmplsFrrConstInclAllAffinity")
    {
        cmplsfrrconstinclallaffinity = value;
    }
    if(value_path == "cmplsFrrConstInclAnyAffinity")
    {
        cmplsfrrconstinclanyaffinity = value;
    }
    if(value_path == "cmplsFrrConstNumProtectedTunOnIf")
    {
        cmplsfrrconstnumprotectedtunonif = value;
    }
    if(value_path == "cmplsFrrConstNumProtectingTunOnIf")
    {
        cmplsfrrconstnumprotectingtunonif = value;
    }
    if(value_path == "cmplsFrrConstRowStatus")
    {
        cmplsfrrconstrowstatus = value;
    }
    if(value_path == "cmplsFrrConstSetupPrio")
    {
        cmplsfrrconstsetupprio = value;
    }
}

CiscoIetfFrrMib::Cmplsfrrlogtable::Cmplsfrrlogtable()
{
    yang_name = "cmplsFrrLogTable"; yang_parent_name = "CISCO-IETF-FRR-MIB";
}

CiscoIetfFrrMib::Cmplsfrrlogtable::~Cmplsfrrlogtable()
{
}

bool CiscoIetfFrrMib::Cmplsfrrlogtable::has_data() const
{
    for (std::size_t index=0; index<cmplsfrrlogentry_.size(); index++)
    {
        if(cmplsfrrlogentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfFrrMib::Cmplsfrrlogtable::has_operation() const
{
    for (std::size_t index=0; index<cmplsfrrlogentry_.size(); index++)
    {
        if(cmplsfrrlogentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIetfFrrMib::Cmplsfrrlogtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmplsFrrLogTable";

    return path_buffer.str();

}

const EntityPath CiscoIetfFrrMib::Cmplsfrrlogtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-FRR-MIB:CISCO-IETF-FRR-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfFrrMib::Cmplsfrrlogtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cmplsFrrLogEntry")
    {
        for(auto const & c : cmplsfrrlogentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfFrrMib::Cmplsfrrlogtable::Cmplsfrrlogentry>();
        c->parent = this;
        cmplsfrrlogentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfFrrMib::Cmplsfrrlogtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cmplsfrrlogentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfFrrMib::Cmplsfrrlogtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIetfFrrMib::Cmplsfrrlogtable::Cmplsfrrlogentry::Cmplsfrrlogentry()
    :
    cmplsfrrlogindex{YType::uint32, "cmplsFrrLogIndex"},
    cmplsfrrlogeventduration{YType::uint32, "cmplsFrrLogEventDuration"},
    cmplsfrrlogeventreasonstring{YType::str, "cmplsFrrLogEventReasonString"},
    cmplsfrrlogeventtime{YType::uint32, "cmplsFrrLogEventTime"},
    cmplsfrrlogeventtype{YType::enumeration, "cmplsFrrLogEventType"},
    cmplsfrrloginterface{YType::int32, "cmplsFrrLogInterface"}
{
    yang_name = "cmplsFrrLogEntry"; yang_parent_name = "cmplsFrrLogTable";
}

CiscoIetfFrrMib::Cmplsfrrlogtable::Cmplsfrrlogentry::~Cmplsfrrlogentry()
{
}

bool CiscoIetfFrrMib::Cmplsfrrlogtable::Cmplsfrrlogentry::has_data() const
{
    return cmplsfrrlogindex.is_set
	|| cmplsfrrlogeventduration.is_set
	|| cmplsfrrlogeventreasonstring.is_set
	|| cmplsfrrlogeventtime.is_set
	|| cmplsfrrlogeventtype.is_set
	|| cmplsfrrloginterface.is_set;
}

bool CiscoIetfFrrMib::Cmplsfrrlogtable::Cmplsfrrlogentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cmplsfrrlogindex.operation)
	|| is_set(cmplsfrrlogeventduration.operation)
	|| is_set(cmplsfrrlogeventreasonstring.operation)
	|| is_set(cmplsfrrlogeventtime.operation)
	|| is_set(cmplsfrrlogeventtype.operation)
	|| is_set(cmplsfrrloginterface.operation);
}

std::string CiscoIetfFrrMib::Cmplsfrrlogtable::Cmplsfrrlogentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmplsFrrLogEntry" <<"[cmplsFrrLogIndex='" <<cmplsfrrlogindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfFrrMib::Cmplsfrrlogtable::Cmplsfrrlogentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-FRR-MIB:CISCO-IETF-FRR-MIB/cmplsFrrLogTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmplsfrrlogindex.is_set || is_set(cmplsfrrlogindex.operation)) leaf_name_data.push_back(cmplsfrrlogindex.get_name_leafdata());
    if (cmplsfrrlogeventduration.is_set || is_set(cmplsfrrlogeventduration.operation)) leaf_name_data.push_back(cmplsfrrlogeventduration.get_name_leafdata());
    if (cmplsfrrlogeventreasonstring.is_set || is_set(cmplsfrrlogeventreasonstring.operation)) leaf_name_data.push_back(cmplsfrrlogeventreasonstring.get_name_leafdata());
    if (cmplsfrrlogeventtime.is_set || is_set(cmplsfrrlogeventtime.operation)) leaf_name_data.push_back(cmplsfrrlogeventtime.get_name_leafdata());
    if (cmplsfrrlogeventtype.is_set || is_set(cmplsfrrlogeventtype.operation)) leaf_name_data.push_back(cmplsfrrlogeventtype.get_name_leafdata());
    if (cmplsfrrloginterface.is_set || is_set(cmplsfrrloginterface.operation)) leaf_name_data.push_back(cmplsfrrloginterface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfFrrMib::Cmplsfrrlogtable::Cmplsfrrlogentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfFrrMib::Cmplsfrrlogtable::Cmplsfrrlogentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfFrrMib::Cmplsfrrlogtable::Cmplsfrrlogentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cmplsFrrLogIndex")
    {
        cmplsfrrlogindex = value;
    }
    if(value_path == "cmplsFrrLogEventDuration")
    {
        cmplsfrrlogeventduration = value;
    }
    if(value_path == "cmplsFrrLogEventReasonString")
    {
        cmplsfrrlogeventreasonstring = value;
    }
    if(value_path == "cmplsFrrLogEventTime")
    {
        cmplsfrrlogeventtime = value;
    }
    if(value_path == "cmplsFrrLogEventType")
    {
        cmplsfrrlogeventtype = value;
    }
    if(value_path == "cmplsFrrLogInterface")
    {
        cmplsfrrloginterface = value;
    }
}

CiscoIetfFrrMib::Cmplsfrrfacroutedbtable::Cmplsfrrfacroutedbtable()
{
    yang_name = "cmplsFrrFacRouteDBTable"; yang_parent_name = "CISCO-IETF-FRR-MIB";
}

CiscoIetfFrrMib::Cmplsfrrfacroutedbtable::~Cmplsfrrfacroutedbtable()
{
}

bool CiscoIetfFrrMib::Cmplsfrrfacroutedbtable::has_data() const
{
    for (std::size_t index=0; index<cmplsfrrfacroutedbentry_.size(); index++)
    {
        if(cmplsfrrfacroutedbentry_[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoIetfFrrMib::Cmplsfrrfacroutedbtable::has_operation() const
{
    for (std::size_t index=0; index<cmplsfrrfacroutedbentry_.size(); index++)
    {
        if(cmplsfrrfacroutedbentry_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoIetfFrrMib::Cmplsfrrfacroutedbtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmplsFrrFacRouteDBTable";

    return path_buffer.str();

}

const EntityPath CiscoIetfFrrMib::Cmplsfrrfacroutedbtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-FRR-MIB:CISCO-IETF-FRR-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfFrrMib::Cmplsfrrfacroutedbtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cmplsFrrFacRouteDBEntry")
    {
        for(auto const & c : cmplsfrrfacroutedbentry_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoIetfFrrMib::Cmplsfrrfacroutedbtable::Cmplsfrrfacroutedbentry>();
        c->parent = this;
        cmplsfrrfacroutedbentry_.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfFrrMib::Cmplsfrrfacroutedbtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cmplsfrrfacroutedbentry_)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoIetfFrrMib::Cmplsfrrfacroutedbtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoIetfFrrMib::Cmplsfrrfacroutedbtable::Cmplsfrrfacroutedbentry::Cmplsfrrfacroutedbentry()
    :
    cmplsfrrfacrouteprotectedifindex{YType::int32, "cmplsFrrFacRouteProtectedIfIndex"},
    cmplsfrrfacrouteprotectingtunindex{YType::uint32, "cmplsFrrFacRouteProtectingTunIndex"},
    cmplsfrrfacrouteprotectedtunindex{YType::uint32, "cmplsFrrFacRouteProtectedTunIndex"},
    cmplsfrrfacrouteprotectedtuninstance{YType::uint32, "cmplsFrrFacRouteProtectedTunInstance"},
    cmplsfrrfacrouteprotectedtuningresslsrid{YType::str, "cmplsFrrFacRouteProtectedTunIngressLSRId"},
    cmplsfrrfacrouteprotectedtunegresslsrid{YType::str, "cmplsFrrFacRouteProtectedTunEgressLSRId"},
    cmplsfrrfacrouteprotectedtunstatus{YType::enumeration, "cmplsFrrFacRouteProtectedTunStatus"},
    cmplsfrrfacrouteprotectingtunprotectiontype{YType::enumeration, "cmplsFrrFacRouteProtectingTunProtectionType"},
    cmplsfrrfacrouteprotectingtunresvbw{YType::uint32, "cmplsFrrFacRouteProtectingTunResvBw"}
{
    yang_name = "cmplsFrrFacRouteDBEntry"; yang_parent_name = "cmplsFrrFacRouteDBTable";
}

CiscoIetfFrrMib::Cmplsfrrfacroutedbtable::Cmplsfrrfacroutedbentry::~Cmplsfrrfacroutedbentry()
{
}

bool CiscoIetfFrrMib::Cmplsfrrfacroutedbtable::Cmplsfrrfacroutedbentry::has_data() const
{
    return cmplsfrrfacrouteprotectedifindex.is_set
	|| cmplsfrrfacrouteprotectingtunindex.is_set
	|| cmplsfrrfacrouteprotectedtunindex.is_set
	|| cmplsfrrfacrouteprotectedtuninstance.is_set
	|| cmplsfrrfacrouteprotectedtuningresslsrid.is_set
	|| cmplsfrrfacrouteprotectedtunegresslsrid.is_set
	|| cmplsfrrfacrouteprotectedtunstatus.is_set
	|| cmplsfrrfacrouteprotectingtunprotectiontype.is_set
	|| cmplsfrrfacrouteprotectingtunresvbw.is_set;
}

bool CiscoIetfFrrMib::Cmplsfrrfacroutedbtable::Cmplsfrrfacroutedbentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cmplsfrrfacrouteprotectedifindex.operation)
	|| is_set(cmplsfrrfacrouteprotectingtunindex.operation)
	|| is_set(cmplsfrrfacrouteprotectedtunindex.operation)
	|| is_set(cmplsfrrfacrouteprotectedtuninstance.operation)
	|| is_set(cmplsfrrfacrouteprotectedtuningresslsrid.operation)
	|| is_set(cmplsfrrfacrouteprotectedtunegresslsrid.operation)
	|| is_set(cmplsfrrfacrouteprotectedtunstatus.operation)
	|| is_set(cmplsfrrfacrouteprotectingtunprotectiontype.operation)
	|| is_set(cmplsfrrfacrouteprotectingtunresvbw.operation);
}

std::string CiscoIetfFrrMib::Cmplsfrrfacroutedbtable::Cmplsfrrfacroutedbentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cmplsFrrFacRouteDBEntry" <<"[cmplsFrrFacRouteProtectedIfIndex='" <<cmplsfrrfacrouteprotectedifindex <<"']" <<"[cmplsFrrFacRouteProtectingTunIndex='" <<cmplsfrrfacrouteprotectingtunindex <<"']" <<"[cmplsFrrFacRouteProtectedTunIndex='" <<cmplsfrrfacrouteprotectedtunindex <<"']" <<"[cmplsFrrFacRouteProtectedTunInstance='" <<cmplsfrrfacrouteprotectedtuninstance <<"']" <<"[cmplsFrrFacRouteProtectedTunIngressLSRId='" <<cmplsfrrfacrouteprotectedtuningresslsrid <<"']" <<"[cmplsFrrFacRouteProtectedTunEgressLSRId='" <<cmplsfrrfacrouteprotectedtunegresslsrid <<"']";

    return path_buffer.str();

}

const EntityPath CiscoIetfFrrMib::Cmplsfrrfacroutedbtable::Cmplsfrrfacroutedbentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-IETF-FRR-MIB:CISCO-IETF-FRR-MIB/cmplsFrrFacRouteDBTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cmplsfrrfacrouteprotectedifindex.is_set || is_set(cmplsfrrfacrouteprotectedifindex.operation)) leaf_name_data.push_back(cmplsfrrfacrouteprotectedifindex.get_name_leafdata());
    if (cmplsfrrfacrouteprotectingtunindex.is_set || is_set(cmplsfrrfacrouteprotectingtunindex.operation)) leaf_name_data.push_back(cmplsfrrfacrouteprotectingtunindex.get_name_leafdata());
    if (cmplsfrrfacrouteprotectedtunindex.is_set || is_set(cmplsfrrfacrouteprotectedtunindex.operation)) leaf_name_data.push_back(cmplsfrrfacrouteprotectedtunindex.get_name_leafdata());
    if (cmplsfrrfacrouteprotectedtuninstance.is_set || is_set(cmplsfrrfacrouteprotectedtuninstance.operation)) leaf_name_data.push_back(cmplsfrrfacrouteprotectedtuninstance.get_name_leafdata());
    if (cmplsfrrfacrouteprotectedtuningresslsrid.is_set || is_set(cmplsfrrfacrouteprotectedtuningresslsrid.operation)) leaf_name_data.push_back(cmplsfrrfacrouteprotectedtuningresslsrid.get_name_leafdata());
    if (cmplsfrrfacrouteprotectedtunegresslsrid.is_set || is_set(cmplsfrrfacrouteprotectedtunegresslsrid.operation)) leaf_name_data.push_back(cmplsfrrfacrouteprotectedtunegresslsrid.get_name_leafdata());
    if (cmplsfrrfacrouteprotectedtunstatus.is_set || is_set(cmplsfrrfacrouteprotectedtunstatus.operation)) leaf_name_data.push_back(cmplsfrrfacrouteprotectedtunstatus.get_name_leafdata());
    if (cmplsfrrfacrouteprotectingtunprotectiontype.is_set || is_set(cmplsfrrfacrouteprotectingtunprotectiontype.operation)) leaf_name_data.push_back(cmplsfrrfacrouteprotectingtunprotectiontype.get_name_leafdata());
    if (cmplsfrrfacrouteprotectingtunresvbw.is_set || is_set(cmplsfrrfacrouteprotectingtunresvbw.operation)) leaf_name_data.push_back(cmplsfrrfacrouteprotectingtunresvbw.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoIetfFrrMib::Cmplsfrrfacroutedbtable::Cmplsfrrfacroutedbentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoIetfFrrMib::Cmplsfrrfacroutedbtable::Cmplsfrrfacroutedbentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoIetfFrrMib::Cmplsfrrfacroutedbtable::Cmplsfrrfacroutedbentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cmplsFrrFacRouteProtectedIfIndex")
    {
        cmplsfrrfacrouteprotectedifindex = value;
    }
    if(value_path == "cmplsFrrFacRouteProtectingTunIndex")
    {
        cmplsfrrfacrouteprotectingtunindex = value;
    }
    if(value_path == "cmplsFrrFacRouteProtectedTunIndex")
    {
        cmplsfrrfacrouteprotectedtunindex = value;
    }
    if(value_path == "cmplsFrrFacRouteProtectedTunInstance")
    {
        cmplsfrrfacrouteprotectedtuninstance = value;
    }
    if(value_path == "cmplsFrrFacRouteProtectedTunIngressLSRId")
    {
        cmplsfrrfacrouteprotectedtuningresslsrid = value;
    }
    if(value_path == "cmplsFrrFacRouteProtectedTunEgressLSRId")
    {
        cmplsfrrfacrouteprotectedtunegresslsrid = value;
    }
    if(value_path == "cmplsFrrFacRouteProtectedTunStatus")
    {
        cmplsfrrfacrouteprotectedtunstatus = value;
    }
    if(value_path == "cmplsFrrFacRouteProtectingTunProtectionType")
    {
        cmplsfrrfacrouteprotectingtunprotectiontype = value;
    }
    if(value_path == "cmplsFrrFacRouteProtectingTunResvBw")
    {
        cmplsfrrfacrouteprotectingtunresvbw = value;
    }
}

const Enum::YLeaf CiscoIetfFrrMib::Cmplsfrrscalars::CmplsfrrconstprotectionmethodEnum::oneToOneBackup {0, "oneToOneBackup"};
const Enum::YLeaf CiscoIetfFrrMib::Cmplsfrrscalars::CmplsfrrconstprotectionmethodEnum::facilityBackup {1, "facilityBackup"};

const Enum::YLeaf CiscoIetfFrrMib::Cmplsfrrlogtable::Cmplsfrrlogentry::CmplsfrrlogeventtypeEnum::other {1, "other"};
const Enum::YLeaf CiscoIetfFrrMib::Cmplsfrrlogtable::Cmplsfrrlogentry::CmplsfrrlogeventtypeEnum::protected_ {2, "protected"};

const Enum::YLeaf CiscoIetfFrrMib::Cmplsfrrfacroutedbtable::Cmplsfrrfacroutedbentry::CmplsfrrfacrouteprotectedtunstatusEnum::active {1, "active"};
const Enum::YLeaf CiscoIetfFrrMib::Cmplsfrrfacroutedbtable::Cmplsfrrfacroutedbentry::CmplsfrrfacrouteprotectedtunstatusEnum::ready {2, "ready"};
const Enum::YLeaf CiscoIetfFrrMib::Cmplsfrrfacroutedbtable::Cmplsfrrfacroutedbentry::CmplsfrrfacrouteprotectedtunstatusEnum::partial {3, "partial"};

const Enum::YLeaf CiscoIetfFrrMib::Cmplsfrrfacroutedbtable::Cmplsfrrfacroutedbentry::CmplsfrrfacrouteprotectingtunprotectiontypeEnum::linkProtection {0, "linkProtection"};
const Enum::YLeaf CiscoIetfFrrMib::Cmplsfrrfacroutedbtable::Cmplsfrrfacroutedbentry::CmplsfrrfacrouteprotectingtunprotectiontypeEnum::nodeProtection {1, "nodeProtection"};


}
}

