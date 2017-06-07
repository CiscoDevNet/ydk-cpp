
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_NETSYNC_MIB.hpp"

namespace ydk {
namespace CISCO_NETSYNC_MIB {

CiscoNetsyncMib::CiscoNetsyncMib()
    :
    cisconetsyncmibnotifcontrol(std::make_shared<CiscoNetsyncMib::Cisconetsyncmibnotifcontrol>())
	,cnsclkselglobaltable(std::make_shared<CiscoNetsyncMib::Cnsclkselglobaltable>())
	,cnsextoutputtable(std::make_shared<CiscoNetsyncMib::Cnsextoutputtable>())
	,cnsinputsourcetable(std::make_shared<CiscoNetsyncMib::Cnsinputsourcetable>())
	,cnsselectedinputsourcetable(std::make_shared<CiscoNetsyncMib::Cnsselectedinputsourcetable>())
	,cnst4clocksourcetable(std::make_shared<CiscoNetsyncMib::Cnst4Clocksourcetable>())
{
    cisconetsyncmibnotifcontrol->parent = this;

    cnsclkselglobaltable->parent = this;

    cnsextoutputtable->parent = this;

    cnsinputsourcetable->parent = this;

    cnsselectedinputsourcetable->parent = this;

    cnst4clocksourcetable->parent = this;

    yang_name = "CISCO-NETSYNC-MIB"; yang_parent_name = "CISCO-NETSYNC-MIB";
}

CiscoNetsyncMib::~CiscoNetsyncMib()
{
}

bool CiscoNetsyncMib::has_data() const
{
    return (cisconetsyncmibnotifcontrol !=  nullptr && cisconetsyncmibnotifcontrol->has_data())
	|| (cnsclkselglobaltable !=  nullptr && cnsclkselglobaltable->has_data())
	|| (cnsextoutputtable !=  nullptr && cnsextoutputtable->has_data())
	|| (cnsinputsourcetable !=  nullptr && cnsinputsourcetable->has_data())
	|| (cnsselectedinputsourcetable !=  nullptr && cnsselectedinputsourcetable->has_data())
	|| (cnst4clocksourcetable !=  nullptr && cnst4clocksourcetable->has_data());
}

bool CiscoNetsyncMib::has_operation() const
{
    return is_set(operation)
	|| (cisconetsyncmibnotifcontrol !=  nullptr && cisconetsyncmibnotifcontrol->has_operation())
	|| (cnsclkselglobaltable !=  nullptr && cnsclkselglobaltable->has_operation())
	|| (cnsextoutputtable !=  nullptr && cnsextoutputtable->has_operation())
	|| (cnsinputsourcetable !=  nullptr && cnsinputsourcetable->has_operation())
	|| (cnsselectedinputsourcetable !=  nullptr && cnsselectedinputsourcetable->has_operation())
	|| (cnst4clocksourcetable !=  nullptr && cnst4clocksourcetable->has_operation());
}

std::string CiscoNetsyncMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-NETSYNC-MIB:CISCO-NETSYNC-MIB";

    return path_buffer.str();

}

const EntityPath CiscoNetsyncMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoNetsyncMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ciscoNetsyncMIBNotifControl")
    {
        if(cisconetsyncmibnotifcontrol == nullptr)
        {
            cisconetsyncmibnotifcontrol = std::make_shared<CiscoNetsyncMib::Cisconetsyncmibnotifcontrol>();
        }
        return cisconetsyncmibnotifcontrol;
    }

    if(child_yang_name == "cnsClkSelGlobalTable")
    {
        if(cnsclkselglobaltable == nullptr)
        {
            cnsclkselglobaltable = std::make_shared<CiscoNetsyncMib::Cnsclkselglobaltable>();
        }
        return cnsclkselglobaltable;
    }

    if(child_yang_name == "cnsExtOutputTable")
    {
        if(cnsextoutputtable == nullptr)
        {
            cnsextoutputtable = std::make_shared<CiscoNetsyncMib::Cnsextoutputtable>();
        }
        return cnsextoutputtable;
    }

    if(child_yang_name == "cnsInputSourceTable")
    {
        if(cnsinputsourcetable == nullptr)
        {
            cnsinputsourcetable = std::make_shared<CiscoNetsyncMib::Cnsinputsourcetable>();
        }
        return cnsinputsourcetable;
    }

    if(child_yang_name == "cnsSelectedInputSourceTable")
    {
        if(cnsselectedinputsourcetable == nullptr)
        {
            cnsselectedinputsourcetable = std::make_shared<CiscoNetsyncMib::Cnsselectedinputsourcetable>();
        }
        return cnsselectedinputsourcetable;
    }

    if(child_yang_name == "cnsT4ClockSourceTable")
    {
        if(cnst4clocksourcetable == nullptr)
        {
            cnst4clocksourcetable = std::make_shared<CiscoNetsyncMib::Cnst4Clocksourcetable>();
        }
        return cnst4clocksourcetable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoNetsyncMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cisconetsyncmibnotifcontrol != nullptr)
    {
        children["ciscoNetsyncMIBNotifControl"] = cisconetsyncmibnotifcontrol;
    }

    if(cnsclkselglobaltable != nullptr)
    {
        children["cnsClkSelGlobalTable"] = cnsclkselglobaltable;
    }

    if(cnsextoutputtable != nullptr)
    {
        children["cnsExtOutputTable"] = cnsextoutputtable;
    }

    if(cnsinputsourcetable != nullptr)
    {
        children["cnsInputSourceTable"] = cnsinputsourcetable;
    }

    if(cnsselectedinputsourcetable != nullptr)
    {
        children["cnsSelectedInputSourceTable"] = cnsselectedinputsourcetable;
    }

    if(cnst4clocksourcetable != nullptr)
    {
        children["cnsT4ClockSourceTable"] = cnst4clocksourcetable;
    }

    return children;
}

void CiscoNetsyncMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CiscoNetsyncMib::clone_ptr() const
{
    return std::make_shared<CiscoNetsyncMib>();
}

std::string CiscoNetsyncMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoNetsyncMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoNetsyncMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CiscoNetsyncMib::Cisconetsyncmibnotifcontrol::Cisconetsyncmibnotifcontrol()
    :
    cnsmibenablestatusnotification{YType::boolean, "cnsMIBEnableStatusNotification"}
{
    yang_name = "ciscoNetsyncMIBNotifControl"; yang_parent_name = "CISCO-NETSYNC-MIB";
}

CiscoNetsyncMib::Cisconetsyncmibnotifcontrol::~Cisconetsyncmibnotifcontrol()
{
}

bool CiscoNetsyncMib::Cisconetsyncmibnotifcontrol::has_data() const
{
    return cnsmibenablestatusnotification.is_set;
}

bool CiscoNetsyncMib::Cisconetsyncmibnotifcontrol::has_operation() const
{
    return is_set(operation)
	|| is_set(cnsmibenablestatusnotification.operation);
}

std::string CiscoNetsyncMib::Cisconetsyncmibnotifcontrol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ciscoNetsyncMIBNotifControl";

    return path_buffer.str();

}

const EntityPath CiscoNetsyncMib::Cisconetsyncmibnotifcontrol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-NETSYNC-MIB:CISCO-NETSYNC-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cnsmibenablestatusnotification.is_set || is_set(cnsmibenablestatusnotification.operation)) leaf_name_data.push_back(cnsmibenablestatusnotification.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoNetsyncMib::Cisconetsyncmibnotifcontrol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoNetsyncMib::Cisconetsyncmibnotifcontrol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoNetsyncMib::Cisconetsyncmibnotifcontrol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cnsMIBEnableStatusNotification")
    {
        cnsmibenablestatusnotification = value;
    }
}

CiscoNetsyncMib::Cnsclkselglobaltable::Cnsclkselglobaltable()
{
    yang_name = "cnsClkSelGlobalTable"; yang_parent_name = "CISCO-NETSYNC-MIB";
}

CiscoNetsyncMib::Cnsclkselglobaltable::~Cnsclkselglobaltable()
{
}

bool CiscoNetsyncMib::Cnsclkselglobaltable::has_data() const
{
    for (std::size_t index=0; index<cnsclkselglobalentry.size(); index++)
    {
        if(cnsclkselglobalentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoNetsyncMib::Cnsclkselglobaltable::has_operation() const
{
    for (std::size_t index=0; index<cnsclkselglobalentry.size(); index++)
    {
        if(cnsclkselglobalentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoNetsyncMib::Cnsclkselglobaltable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cnsClkSelGlobalTable";

    return path_buffer.str();

}

const EntityPath CiscoNetsyncMib::Cnsclkselglobaltable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-NETSYNC-MIB:CISCO-NETSYNC-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoNetsyncMib::Cnsclkselglobaltable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cnsClkSelGlobalEntry")
    {
        for(auto const & c : cnsclkselglobalentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoNetsyncMib::Cnsclkselglobaltable::Cnsclkselglobalentry>();
        c->parent = this;
        cnsclkselglobalentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoNetsyncMib::Cnsclkselglobaltable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cnsclkselglobalentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoNetsyncMib::Cnsclkselglobaltable::set_value(const std::string & value_path, std::string value)
{
}

CiscoNetsyncMib::Cnsclkselglobaltable::Cnsclkselglobalentry::Cnsclkselglobalentry()
    :
    cnsclkselgloprocindex{YType::uint32, "cnsClkSelGloProcIndex"},
    cnsclkselglobclockmode{YType::enumeration, "cnsClkSelGlobClockMode"},
    cnsclkselglobcurrholdoverseconds{YType::uint32, "cnsClkSelGlobCurrHoldoverSeconds"},
    cnsclkselglobeecoption{YType::enumeration, "cnsClkSelGlobEECOption"},
    cnsclkselglobesmcmode{YType::boolean, "cnsClkSelGlobESMCMode"},
    cnsclkselglobholdofftime{YType::uint32, "cnsClkSelGlobHoldoffTime"},
    cnsclkselgloblastholdoverseconds{YType::uint32, "cnsClkSelGlobLastHoldoverSeconds"},
    cnsclkselglobnetsyncenable{YType::boolean, "cnsClkSelGlobNetsyncEnable"},
    cnsclkselglobnetworkoption{YType::enumeration, "cnsClkSelGlobNetworkOption"},
    cnsclkselglobnofsources{YType::uint32, "cnsClkSelGlobNofSources"},
    cnsclkselglobprocessmode{YType::enumeration, "cnsClkSelGlobProcessMode"},
    cnsclkselglobrevertivemode{YType::boolean, "cnsClkSelGlobRevertiveMode"},
    cnsclkselglobwtrtime{YType::uint32, "cnsClkSelGlobWtrTime"}
{
    yang_name = "cnsClkSelGlobalEntry"; yang_parent_name = "cnsClkSelGlobalTable";
}

CiscoNetsyncMib::Cnsclkselglobaltable::Cnsclkselglobalentry::~Cnsclkselglobalentry()
{
}

bool CiscoNetsyncMib::Cnsclkselglobaltable::Cnsclkselglobalentry::has_data() const
{
    return cnsclkselgloprocindex.is_set
	|| cnsclkselglobclockmode.is_set
	|| cnsclkselglobcurrholdoverseconds.is_set
	|| cnsclkselglobeecoption.is_set
	|| cnsclkselglobesmcmode.is_set
	|| cnsclkselglobholdofftime.is_set
	|| cnsclkselgloblastholdoverseconds.is_set
	|| cnsclkselglobnetsyncenable.is_set
	|| cnsclkselglobnetworkoption.is_set
	|| cnsclkselglobnofsources.is_set
	|| cnsclkselglobprocessmode.is_set
	|| cnsclkselglobrevertivemode.is_set
	|| cnsclkselglobwtrtime.is_set;
}

bool CiscoNetsyncMib::Cnsclkselglobaltable::Cnsclkselglobalentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cnsclkselgloprocindex.operation)
	|| is_set(cnsclkselglobclockmode.operation)
	|| is_set(cnsclkselglobcurrholdoverseconds.operation)
	|| is_set(cnsclkselglobeecoption.operation)
	|| is_set(cnsclkselglobesmcmode.operation)
	|| is_set(cnsclkselglobholdofftime.operation)
	|| is_set(cnsclkselgloblastholdoverseconds.operation)
	|| is_set(cnsclkselglobnetsyncenable.operation)
	|| is_set(cnsclkselglobnetworkoption.operation)
	|| is_set(cnsclkselglobnofsources.operation)
	|| is_set(cnsclkselglobprocessmode.operation)
	|| is_set(cnsclkselglobrevertivemode.operation)
	|| is_set(cnsclkselglobwtrtime.operation);
}

std::string CiscoNetsyncMib::Cnsclkselglobaltable::Cnsclkselglobalentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cnsClkSelGlobalEntry" <<"[cnsClkSelGloProcIndex='" <<cnsclkselgloprocindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoNetsyncMib::Cnsclkselglobaltable::Cnsclkselglobalentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-NETSYNC-MIB:CISCO-NETSYNC-MIB/cnsClkSelGlobalTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cnsclkselgloprocindex.is_set || is_set(cnsclkselgloprocindex.operation)) leaf_name_data.push_back(cnsclkselgloprocindex.get_name_leafdata());
    if (cnsclkselglobclockmode.is_set || is_set(cnsclkselglobclockmode.operation)) leaf_name_data.push_back(cnsclkselglobclockmode.get_name_leafdata());
    if (cnsclkselglobcurrholdoverseconds.is_set || is_set(cnsclkselglobcurrholdoverseconds.operation)) leaf_name_data.push_back(cnsclkselglobcurrholdoverseconds.get_name_leafdata());
    if (cnsclkselglobeecoption.is_set || is_set(cnsclkselglobeecoption.operation)) leaf_name_data.push_back(cnsclkselglobeecoption.get_name_leafdata());
    if (cnsclkselglobesmcmode.is_set || is_set(cnsclkselglobesmcmode.operation)) leaf_name_data.push_back(cnsclkselglobesmcmode.get_name_leafdata());
    if (cnsclkselglobholdofftime.is_set || is_set(cnsclkselglobholdofftime.operation)) leaf_name_data.push_back(cnsclkselglobholdofftime.get_name_leafdata());
    if (cnsclkselgloblastholdoverseconds.is_set || is_set(cnsclkselgloblastholdoverseconds.operation)) leaf_name_data.push_back(cnsclkselgloblastholdoverseconds.get_name_leafdata());
    if (cnsclkselglobnetsyncenable.is_set || is_set(cnsclkselglobnetsyncenable.operation)) leaf_name_data.push_back(cnsclkselglobnetsyncenable.get_name_leafdata());
    if (cnsclkselglobnetworkoption.is_set || is_set(cnsclkselglobnetworkoption.operation)) leaf_name_data.push_back(cnsclkselglobnetworkoption.get_name_leafdata());
    if (cnsclkselglobnofsources.is_set || is_set(cnsclkselglobnofsources.operation)) leaf_name_data.push_back(cnsclkselglobnofsources.get_name_leafdata());
    if (cnsclkselglobprocessmode.is_set || is_set(cnsclkselglobprocessmode.operation)) leaf_name_data.push_back(cnsclkselglobprocessmode.get_name_leafdata());
    if (cnsclkselglobrevertivemode.is_set || is_set(cnsclkselglobrevertivemode.operation)) leaf_name_data.push_back(cnsclkselglobrevertivemode.get_name_leafdata());
    if (cnsclkselglobwtrtime.is_set || is_set(cnsclkselglobwtrtime.operation)) leaf_name_data.push_back(cnsclkselglobwtrtime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoNetsyncMib::Cnsclkselglobaltable::Cnsclkselglobalentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoNetsyncMib::Cnsclkselglobaltable::Cnsclkselglobalentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoNetsyncMib::Cnsclkselglobaltable::Cnsclkselglobalentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cnsClkSelGloProcIndex")
    {
        cnsclkselgloprocindex = value;
    }
    if(value_path == "cnsClkSelGlobClockMode")
    {
        cnsclkselglobclockmode = value;
    }
    if(value_path == "cnsClkSelGlobCurrHoldoverSeconds")
    {
        cnsclkselglobcurrholdoverseconds = value;
    }
    if(value_path == "cnsClkSelGlobEECOption")
    {
        cnsclkselglobeecoption = value;
    }
    if(value_path == "cnsClkSelGlobESMCMode")
    {
        cnsclkselglobesmcmode = value;
    }
    if(value_path == "cnsClkSelGlobHoldoffTime")
    {
        cnsclkselglobholdofftime = value;
    }
    if(value_path == "cnsClkSelGlobLastHoldoverSeconds")
    {
        cnsclkselgloblastholdoverseconds = value;
    }
    if(value_path == "cnsClkSelGlobNetsyncEnable")
    {
        cnsclkselglobnetsyncenable = value;
    }
    if(value_path == "cnsClkSelGlobNetworkOption")
    {
        cnsclkselglobnetworkoption = value;
    }
    if(value_path == "cnsClkSelGlobNofSources")
    {
        cnsclkselglobnofsources = value;
    }
    if(value_path == "cnsClkSelGlobProcessMode")
    {
        cnsclkselglobprocessmode = value;
    }
    if(value_path == "cnsClkSelGlobRevertiveMode")
    {
        cnsclkselglobrevertivemode = value;
    }
    if(value_path == "cnsClkSelGlobWtrTime")
    {
        cnsclkselglobwtrtime = value;
    }
}

CiscoNetsyncMib::Cnsselectedinputsourcetable::Cnsselectedinputsourcetable()
{
    yang_name = "cnsSelectedInputSourceTable"; yang_parent_name = "CISCO-NETSYNC-MIB";
}

CiscoNetsyncMib::Cnsselectedinputsourcetable::~Cnsselectedinputsourcetable()
{
}

bool CiscoNetsyncMib::Cnsselectedinputsourcetable::has_data() const
{
    for (std::size_t index=0; index<cnsselectedinputsourceentry.size(); index++)
    {
        if(cnsselectedinputsourceentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoNetsyncMib::Cnsselectedinputsourcetable::has_operation() const
{
    for (std::size_t index=0; index<cnsselectedinputsourceentry.size(); index++)
    {
        if(cnsselectedinputsourceentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoNetsyncMib::Cnsselectedinputsourcetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cnsSelectedInputSourceTable";

    return path_buffer.str();

}

const EntityPath CiscoNetsyncMib::Cnsselectedinputsourcetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-NETSYNC-MIB:CISCO-NETSYNC-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoNetsyncMib::Cnsselectedinputsourcetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cnsSelectedInputSourceEntry")
    {
        for(auto const & c : cnsselectedinputsourceentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoNetsyncMib::Cnsselectedinputsourcetable::Cnsselectedinputsourceentry>();
        c->parent = this;
        cnsselectedinputsourceentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoNetsyncMib::Cnsselectedinputsourcetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cnsselectedinputsourceentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoNetsyncMib::Cnsselectedinputsourcetable::set_value(const std::string & value_path, std::string value)
{
}

CiscoNetsyncMib::Cnsselectedinputsourcetable::Cnsselectedinputsourceentry::Cnsselectedinputsourceentry()
    :
    cnsselinpsrcnetsyncindex{YType::uint32, "cnsSelInpSrcNetsyncIndex"},
    cnsselinpsrcfsw{YType::boolean, "cnsSelInpSrcFSW"},
    cnsselinpsrcintftype{YType::enumeration, "cnsSelInpSrcIntfType"},
    cnsselinpsrcmsw{YType::boolean, "cnsSelInpSrcMSW"},
    cnsselinpsrcname{YType::str, "cnsSelInpSrcName"},
    cnsselinpsrcpriority{YType::uint32, "cnsSelInpSrcPriority"},
    cnsselinpsrcqualitylevel{YType::enumeration, "cnsSelInpSrcQualityLevel"},
    cnsselinpsrctimestamp{YType::uint32, "cnsSelInpSrcTimestamp"}
{
    yang_name = "cnsSelectedInputSourceEntry"; yang_parent_name = "cnsSelectedInputSourceTable";
}

CiscoNetsyncMib::Cnsselectedinputsourcetable::Cnsselectedinputsourceentry::~Cnsselectedinputsourceentry()
{
}

bool CiscoNetsyncMib::Cnsselectedinputsourcetable::Cnsselectedinputsourceentry::has_data() const
{
    return cnsselinpsrcnetsyncindex.is_set
	|| cnsselinpsrcfsw.is_set
	|| cnsselinpsrcintftype.is_set
	|| cnsselinpsrcmsw.is_set
	|| cnsselinpsrcname.is_set
	|| cnsselinpsrcpriority.is_set
	|| cnsselinpsrcqualitylevel.is_set
	|| cnsselinpsrctimestamp.is_set;
}

bool CiscoNetsyncMib::Cnsselectedinputsourcetable::Cnsselectedinputsourceentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cnsselinpsrcnetsyncindex.operation)
	|| is_set(cnsselinpsrcfsw.operation)
	|| is_set(cnsselinpsrcintftype.operation)
	|| is_set(cnsselinpsrcmsw.operation)
	|| is_set(cnsselinpsrcname.operation)
	|| is_set(cnsselinpsrcpriority.operation)
	|| is_set(cnsselinpsrcqualitylevel.operation)
	|| is_set(cnsselinpsrctimestamp.operation);
}

std::string CiscoNetsyncMib::Cnsselectedinputsourcetable::Cnsselectedinputsourceentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cnsSelectedInputSourceEntry" <<"[cnsSelInpSrcNetsyncIndex='" <<cnsselinpsrcnetsyncindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoNetsyncMib::Cnsselectedinputsourcetable::Cnsselectedinputsourceentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-NETSYNC-MIB:CISCO-NETSYNC-MIB/cnsSelectedInputSourceTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cnsselinpsrcnetsyncindex.is_set || is_set(cnsselinpsrcnetsyncindex.operation)) leaf_name_data.push_back(cnsselinpsrcnetsyncindex.get_name_leafdata());
    if (cnsselinpsrcfsw.is_set || is_set(cnsselinpsrcfsw.operation)) leaf_name_data.push_back(cnsselinpsrcfsw.get_name_leafdata());
    if (cnsselinpsrcintftype.is_set || is_set(cnsselinpsrcintftype.operation)) leaf_name_data.push_back(cnsselinpsrcintftype.get_name_leafdata());
    if (cnsselinpsrcmsw.is_set || is_set(cnsselinpsrcmsw.operation)) leaf_name_data.push_back(cnsselinpsrcmsw.get_name_leafdata());
    if (cnsselinpsrcname.is_set || is_set(cnsselinpsrcname.operation)) leaf_name_data.push_back(cnsselinpsrcname.get_name_leafdata());
    if (cnsselinpsrcpriority.is_set || is_set(cnsselinpsrcpriority.operation)) leaf_name_data.push_back(cnsselinpsrcpriority.get_name_leafdata());
    if (cnsselinpsrcqualitylevel.is_set || is_set(cnsselinpsrcqualitylevel.operation)) leaf_name_data.push_back(cnsselinpsrcqualitylevel.get_name_leafdata());
    if (cnsselinpsrctimestamp.is_set || is_set(cnsselinpsrctimestamp.operation)) leaf_name_data.push_back(cnsselinpsrctimestamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoNetsyncMib::Cnsselectedinputsourcetable::Cnsselectedinputsourceentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoNetsyncMib::Cnsselectedinputsourcetable::Cnsselectedinputsourceentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoNetsyncMib::Cnsselectedinputsourcetable::Cnsselectedinputsourceentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cnsSelInpSrcNetsyncIndex")
    {
        cnsselinpsrcnetsyncindex = value;
    }
    if(value_path == "cnsSelInpSrcFSW")
    {
        cnsselinpsrcfsw = value;
    }
    if(value_path == "cnsSelInpSrcIntfType")
    {
        cnsselinpsrcintftype = value;
    }
    if(value_path == "cnsSelInpSrcMSW")
    {
        cnsselinpsrcmsw = value;
    }
    if(value_path == "cnsSelInpSrcName")
    {
        cnsselinpsrcname = value;
    }
    if(value_path == "cnsSelInpSrcPriority")
    {
        cnsselinpsrcpriority = value;
    }
    if(value_path == "cnsSelInpSrcQualityLevel")
    {
        cnsselinpsrcqualitylevel = value;
    }
    if(value_path == "cnsSelInpSrcTimestamp")
    {
        cnsselinpsrctimestamp = value;
    }
}

CiscoNetsyncMib::Cnsinputsourcetable::Cnsinputsourcetable()
{
    yang_name = "cnsInputSourceTable"; yang_parent_name = "CISCO-NETSYNC-MIB";
}

CiscoNetsyncMib::Cnsinputsourcetable::~Cnsinputsourcetable()
{
}

bool CiscoNetsyncMib::Cnsinputsourcetable::has_data() const
{
    for (std::size_t index=0; index<cnsinputsourceentry.size(); index++)
    {
        if(cnsinputsourceentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoNetsyncMib::Cnsinputsourcetable::has_operation() const
{
    for (std::size_t index=0; index<cnsinputsourceentry.size(); index++)
    {
        if(cnsinputsourceentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoNetsyncMib::Cnsinputsourcetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cnsInputSourceTable";

    return path_buffer.str();

}

const EntityPath CiscoNetsyncMib::Cnsinputsourcetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-NETSYNC-MIB:CISCO-NETSYNC-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoNetsyncMib::Cnsinputsourcetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cnsInputSourceEntry")
    {
        for(auto const & c : cnsinputsourceentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoNetsyncMib::Cnsinputsourcetable::Cnsinputsourceentry>();
        c->parent = this;
        cnsinputsourceentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoNetsyncMib::Cnsinputsourcetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cnsinputsourceentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoNetsyncMib::Cnsinputsourcetable::set_value(const std::string & value_path, std::string value)
{
}

CiscoNetsyncMib::Cnsinputsourcetable::Cnsinputsourceentry::Cnsinputsourceentry()
    :
    cnsinpsrcnetsyncindex{YType::uint32, "cnsInpSrcNetsyncIndex"},
    cnsinpsrcalarm{YType::boolean, "cnsInpSrcAlarm"},
    cnsinpsrcalarminfo{YType::bits, "cnsInpSrcAlarmInfo"},
    cnsinpsrcesmccap{YType::enumeration, "cnsInpSrcESMCCap"},
    cnsinpsrcfsw{YType::boolean, "cnsInpSrcFSW"},
    cnsinpsrcholdofftime{YType::uint32, "cnsInpSrcHoldoffTime"},
    cnsinpsrcintftype{YType::enumeration, "cnsInpSrcIntfType"},
    cnsinpsrclockout{YType::boolean, "cnsInpSrcLockout"},
    cnsinpsrcmsw{YType::boolean, "cnsInpSrcMSW"},
    cnsinpsrcname{YType::str, "cnsInpSrcName"},
    cnsinpsrcpriority{YType::uint32, "cnsInpSrcPriority"},
    cnsinpsrcqualitylevel{YType::enumeration, "cnsInpSrcQualityLevel"},
    cnsinpsrcqualitylevelrx{YType::enumeration, "cnsInpSrcQualityLevelRx"},
    cnsinpsrcqualitylevelrxcfg{YType::enumeration, "cnsInpSrcQualityLevelRxCfg"},
    cnsinpsrcqualityleveltx{YType::enumeration, "cnsInpSrcQualityLevelTx"},
    cnsinpsrcqualityleveltxcfg{YType::enumeration, "cnsInpSrcQualityLevelTxCfg"},
    cnsinpsrcsignalfailure{YType::boolean, "cnsInpSrcSignalFailure"},
    cnsinpsrcssmcap{YType::enumeration, "cnsInpSrcSSMCap"},
    cnsinpsrcwtrtime{YType::uint32, "cnsInpSrcWtrTime"}
{
    yang_name = "cnsInputSourceEntry"; yang_parent_name = "cnsInputSourceTable";
}

CiscoNetsyncMib::Cnsinputsourcetable::Cnsinputsourceentry::~Cnsinputsourceentry()
{
}

bool CiscoNetsyncMib::Cnsinputsourcetable::Cnsinputsourceentry::has_data() const
{
    return cnsinpsrcnetsyncindex.is_set
	|| cnsinpsrcalarm.is_set
	|| cnsinpsrcalarminfo.is_set
	|| cnsinpsrcesmccap.is_set
	|| cnsinpsrcfsw.is_set
	|| cnsinpsrcholdofftime.is_set
	|| cnsinpsrcintftype.is_set
	|| cnsinpsrclockout.is_set
	|| cnsinpsrcmsw.is_set
	|| cnsinpsrcname.is_set
	|| cnsinpsrcpriority.is_set
	|| cnsinpsrcqualitylevel.is_set
	|| cnsinpsrcqualitylevelrx.is_set
	|| cnsinpsrcqualitylevelrxcfg.is_set
	|| cnsinpsrcqualityleveltx.is_set
	|| cnsinpsrcqualityleveltxcfg.is_set
	|| cnsinpsrcsignalfailure.is_set
	|| cnsinpsrcssmcap.is_set
	|| cnsinpsrcwtrtime.is_set;
}

bool CiscoNetsyncMib::Cnsinputsourcetable::Cnsinputsourceentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cnsinpsrcnetsyncindex.operation)
	|| is_set(cnsinpsrcalarm.operation)
	|| is_set(cnsinpsrcalarminfo.operation)
	|| is_set(cnsinpsrcesmccap.operation)
	|| is_set(cnsinpsrcfsw.operation)
	|| is_set(cnsinpsrcholdofftime.operation)
	|| is_set(cnsinpsrcintftype.operation)
	|| is_set(cnsinpsrclockout.operation)
	|| is_set(cnsinpsrcmsw.operation)
	|| is_set(cnsinpsrcname.operation)
	|| is_set(cnsinpsrcpriority.operation)
	|| is_set(cnsinpsrcqualitylevel.operation)
	|| is_set(cnsinpsrcqualitylevelrx.operation)
	|| is_set(cnsinpsrcqualitylevelrxcfg.operation)
	|| is_set(cnsinpsrcqualityleveltx.operation)
	|| is_set(cnsinpsrcqualityleveltxcfg.operation)
	|| is_set(cnsinpsrcsignalfailure.operation)
	|| is_set(cnsinpsrcssmcap.operation)
	|| is_set(cnsinpsrcwtrtime.operation);
}

std::string CiscoNetsyncMib::Cnsinputsourcetable::Cnsinputsourceentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cnsInputSourceEntry" <<"[cnsInpSrcNetsyncIndex='" <<cnsinpsrcnetsyncindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoNetsyncMib::Cnsinputsourcetable::Cnsinputsourceentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-NETSYNC-MIB:CISCO-NETSYNC-MIB/cnsInputSourceTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cnsinpsrcnetsyncindex.is_set || is_set(cnsinpsrcnetsyncindex.operation)) leaf_name_data.push_back(cnsinpsrcnetsyncindex.get_name_leafdata());
    if (cnsinpsrcalarm.is_set || is_set(cnsinpsrcalarm.operation)) leaf_name_data.push_back(cnsinpsrcalarm.get_name_leafdata());
    if (cnsinpsrcalarminfo.is_set || is_set(cnsinpsrcalarminfo.operation)) leaf_name_data.push_back(cnsinpsrcalarminfo.get_name_leafdata());
    if (cnsinpsrcesmccap.is_set || is_set(cnsinpsrcesmccap.operation)) leaf_name_data.push_back(cnsinpsrcesmccap.get_name_leafdata());
    if (cnsinpsrcfsw.is_set || is_set(cnsinpsrcfsw.operation)) leaf_name_data.push_back(cnsinpsrcfsw.get_name_leafdata());
    if (cnsinpsrcholdofftime.is_set || is_set(cnsinpsrcholdofftime.operation)) leaf_name_data.push_back(cnsinpsrcholdofftime.get_name_leafdata());
    if (cnsinpsrcintftype.is_set || is_set(cnsinpsrcintftype.operation)) leaf_name_data.push_back(cnsinpsrcintftype.get_name_leafdata());
    if (cnsinpsrclockout.is_set || is_set(cnsinpsrclockout.operation)) leaf_name_data.push_back(cnsinpsrclockout.get_name_leafdata());
    if (cnsinpsrcmsw.is_set || is_set(cnsinpsrcmsw.operation)) leaf_name_data.push_back(cnsinpsrcmsw.get_name_leafdata());
    if (cnsinpsrcname.is_set || is_set(cnsinpsrcname.operation)) leaf_name_data.push_back(cnsinpsrcname.get_name_leafdata());
    if (cnsinpsrcpriority.is_set || is_set(cnsinpsrcpriority.operation)) leaf_name_data.push_back(cnsinpsrcpriority.get_name_leafdata());
    if (cnsinpsrcqualitylevel.is_set || is_set(cnsinpsrcqualitylevel.operation)) leaf_name_data.push_back(cnsinpsrcqualitylevel.get_name_leafdata());
    if (cnsinpsrcqualitylevelrx.is_set || is_set(cnsinpsrcqualitylevelrx.operation)) leaf_name_data.push_back(cnsinpsrcqualitylevelrx.get_name_leafdata());
    if (cnsinpsrcqualitylevelrxcfg.is_set || is_set(cnsinpsrcqualitylevelrxcfg.operation)) leaf_name_data.push_back(cnsinpsrcqualitylevelrxcfg.get_name_leafdata());
    if (cnsinpsrcqualityleveltx.is_set || is_set(cnsinpsrcqualityleveltx.operation)) leaf_name_data.push_back(cnsinpsrcqualityleveltx.get_name_leafdata());
    if (cnsinpsrcqualityleveltxcfg.is_set || is_set(cnsinpsrcqualityleveltxcfg.operation)) leaf_name_data.push_back(cnsinpsrcqualityleveltxcfg.get_name_leafdata());
    if (cnsinpsrcsignalfailure.is_set || is_set(cnsinpsrcsignalfailure.operation)) leaf_name_data.push_back(cnsinpsrcsignalfailure.get_name_leafdata());
    if (cnsinpsrcssmcap.is_set || is_set(cnsinpsrcssmcap.operation)) leaf_name_data.push_back(cnsinpsrcssmcap.get_name_leafdata());
    if (cnsinpsrcwtrtime.is_set || is_set(cnsinpsrcwtrtime.operation)) leaf_name_data.push_back(cnsinpsrcwtrtime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoNetsyncMib::Cnsinputsourcetable::Cnsinputsourceentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoNetsyncMib::Cnsinputsourcetable::Cnsinputsourceentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoNetsyncMib::Cnsinputsourcetable::Cnsinputsourceentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cnsInpSrcNetsyncIndex")
    {
        cnsinpsrcnetsyncindex = value;
    }
    if(value_path == "cnsInpSrcAlarm")
    {
        cnsinpsrcalarm = value;
    }
    if(value_path == "cnsInpSrcAlarmInfo")
    {
        cnsinpsrcalarminfo[value] = true;
    }
    if(value_path == "cnsInpSrcESMCCap")
    {
        cnsinpsrcesmccap = value;
    }
    if(value_path == "cnsInpSrcFSW")
    {
        cnsinpsrcfsw = value;
    }
    if(value_path == "cnsInpSrcHoldoffTime")
    {
        cnsinpsrcholdofftime = value;
    }
    if(value_path == "cnsInpSrcIntfType")
    {
        cnsinpsrcintftype = value;
    }
    if(value_path == "cnsInpSrcLockout")
    {
        cnsinpsrclockout = value;
    }
    if(value_path == "cnsInpSrcMSW")
    {
        cnsinpsrcmsw = value;
    }
    if(value_path == "cnsInpSrcName")
    {
        cnsinpsrcname = value;
    }
    if(value_path == "cnsInpSrcPriority")
    {
        cnsinpsrcpriority = value;
    }
    if(value_path == "cnsInpSrcQualityLevel")
    {
        cnsinpsrcqualitylevel = value;
    }
    if(value_path == "cnsInpSrcQualityLevelRx")
    {
        cnsinpsrcqualitylevelrx = value;
    }
    if(value_path == "cnsInpSrcQualityLevelRxCfg")
    {
        cnsinpsrcqualitylevelrxcfg = value;
    }
    if(value_path == "cnsInpSrcQualityLevelTx")
    {
        cnsinpsrcqualityleveltx = value;
    }
    if(value_path == "cnsInpSrcQualityLevelTxCfg")
    {
        cnsinpsrcqualityleveltxcfg = value;
    }
    if(value_path == "cnsInpSrcSignalFailure")
    {
        cnsinpsrcsignalfailure = value;
    }
    if(value_path == "cnsInpSrcSSMCap")
    {
        cnsinpsrcssmcap = value;
    }
    if(value_path == "cnsInpSrcWtrTime")
    {
        cnsinpsrcwtrtime = value;
    }
}

CiscoNetsyncMib::Cnsextoutputtable::Cnsextoutputtable()
{
    yang_name = "cnsExtOutputTable"; yang_parent_name = "CISCO-NETSYNC-MIB";
}

CiscoNetsyncMib::Cnsextoutputtable::~Cnsextoutputtable()
{
}

bool CiscoNetsyncMib::Cnsextoutputtable::has_data() const
{
    for (std::size_t index=0; index<cnsextoutputentry.size(); index++)
    {
        if(cnsextoutputentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoNetsyncMib::Cnsextoutputtable::has_operation() const
{
    for (std::size_t index=0; index<cnsextoutputentry.size(); index++)
    {
        if(cnsextoutputentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoNetsyncMib::Cnsextoutputtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cnsExtOutputTable";

    return path_buffer.str();

}

const EntityPath CiscoNetsyncMib::Cnsextoutputtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-NETSYNC-MIB:CISCO-NETSYNC-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoNetsyncMib::Cnsextoutputtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cnsExtOutputEntry")
    {
        for(auto const & c : cnsextoutputentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoNetsyncMib::Cnsextoutputtable::Cnsextoutputentry>();
        c->parent = this;
        cnsextoutputentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoNetsyncMib::Cnsextoutputtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cnsextoutputentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoNetsyncMib::Cnsextoutputtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoNetsyncMib::Cnsextoutputtable::Cnsextoutputentry::Cnsextoutputentry()
    :
    cnsextoutlistindex{YType::uint32, "cnsExtOutListIndex"},
    cnsextoutfsw{YType::boolean, "cnsExtOutFSW"},
    cnsextoutintftype{YType::enumeration, "cnsExtOutIntfType"},
    cnsextoutmsw{YType::boolean, "cnsExtOutMSW"},
    cnsextoutname{YType::str, "cnsExtOutName"},
    cnsextoutpriority{YType::uint32, "cnsExtOutPriority"},
    cnsextoutqualitylevel{YType::enumeration, "cnsExtOutQualityLevel"},
    cnsextoutselnetsyncindex{YType::uint32, "cnsExtOutSelNetsyncIndex"},
    cnsextoutsquelch{YType::boolean, "cnsExtOutSquelch"}
{
    yang_name = "cnsExtOutputEntry"; yang_parent_name = "cnsExtOutputTable";
}

CiscoNetsyncMib::Cnsextoutputtable::Cnsextoutputentry::~Cnsextoutputentry()
{
}

bool CiscoNetsyncMib::Cnsextoutputtable::Cnsextoutputentry::has_data() const
{
    return cnsextoutlistindex.is_set
	|| cnsextoutfsw.is_set
	|| cnsextoutintftype.is_set
	|| cnsextoutmsw.is_set
	|| cnsextoutname.is_set
	|| cnsextoutpriority.is_set
	|| cnsextoutqualitylevel.is_set
	|| cnsextoutselnetsyncindex.is_set
	|| cnsextoutsquelch.is_set;
}

bool CiscoNetsyncMib::Cnsextoutputtable::Cnsextoutputentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cnsextoutlistindex.operation)
	|| is_set(cnsextoutfsw.operation)
	|| is_set(cnsextoutintftype.operation)
	|| is_set(cnsextoutmsw.operation)
	|| is_set(cnsextoutname.operation)
	|| is_set(cnsextoutpriority.operation)
	|| is_set(cnsextoutqualitylevel.operation)
	|| is_set(cnsextoutselnetsyncindex.operation)
	|| is_set(cnsextoutsquelch.operation);
}

std::string CiscoNetsyncMib::Cnsextoutputtable::Cnsextoutputentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cnsExtOutputEntry" <<"[cnsExtOutListIndex='" <<cnsextoutlistindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoNetsyncMib::Cnsextoutputtable::Cnsextoutputentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-NETSYNC-MIB:CISCO-NETSYNC-MIB/cnsExtOutputTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cnsextoutlistindex.is_set || is_set(cnsextoutlistindex.operation)) leaf_name_data.push_back(cnsextoutlistindex.get_name_leafdata());
    if (cnsextoutfsw.is_set || is_set(cnsextoutfsw.operation)) leaf_name_data.push_back(cnsextoutfsw.get_name_leafdata());
    if (cnsextoutintftype.is_set || is_set(cnsextoutintftype.operation)) leaf_name_data.push_back(cnsextoutintftype.get_name_leafdata());
    if (cnsextoutmsw.is_set || is_set(cnsextoutmsw.operation)) leaf_name_data.push_back(cnsextoutmsw.get_name_leafdata());
    if (cnsextoutname.is_set || is_set(cnsextoutname.operation)) leaf_name_data.push_back(cnsextoutname.get_name_leafdata());
    if (cnsextoutpriority.is_set || is_set(cnsextoutpriority.operation)) leaf_name_data.push_back(cnsextoutpriority.get_name_leafdata());
    if (cnsextoutqualitylevel.is_set || is_set(cnsextoutqualitylevel.operation)) leaf_name_data.push_back(cnsextoutqualitylevel.get_name_leafdata());
    if (cnsextoutselnetsyncindex.is_set || is_set(cnsextoutselnetsyncindex.operation)) leaf_name_data.push_back(cnsextoutselnetsyncindex.get_name_leafdata());
    if (cnsextoutsquelch.is_set || is_set(cnsextoutsquelch.operation)) leaf_name_data.push_back(cnsextoutsquelch.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoNetsyncMib::Cnsextoutputtable::Cnsextoutputentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoNetsyncMib::Cnsextoutputtable::Cnsextoutputentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoNetsyncMib::Cnsextoutputtable::Cnsextoutputentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cnsExtOutListIndex")
    {
        cnsextoutlistindex = value;
    }
    if(value_path == "cnsExtOutFSW")
    {
        cnsextoutfsw = value;
    }
    if(value_path == "cnsExtOutIntfType")
    {
        cnsextoutintftype = value;
    }
    if(value_path == "cnsExtOutMSW")
    {
        cnsextoutmsw = value;
    }
    if(value_path == "cnsExtOutName")
    {
        cnsextoutname = value;
    }
    if(value_path == "cnsExtOutPriority")
    {
        cnsextoutpriority = value;
    }
    if(value_path == "cnsExtOutQualityLevel")
    {
        cnsextoutqualitylevel = value;
    }
    if(value_path == "cnsExtOutSelNetsyncIndex")
    {
        cnsextoutselnetsyncindex = value;
    }
    if(value_path == "cnsExtOutSquelch")
    {
        cnsextoutsquelch = value;
    }
}

CiscoNetsyncMib::Cnst4Clocksourcetable::Cnst4Clocksourcetable()
{
    yang_name = "cnsT4ClockSourceTable"; yang_parent_name = "CISCO-NETSYNC-MIB";
}

CiscoNetsyncMib::Cnst4Clocksourcetable::~Cnst4Clocksourcetable()
{
}

bool CiscoNetsyncMib::Cnst4Clocksourcetable::has_data() const
{
    for (std::size_t index=0; index<cnst4clocksourceentry.size(); index++)
    {
        if(cnst4clocksourceentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoNetsyncMib::Cnst4Clocksourcetable::has_operation() const
{
    for (std::size_t index=0; index<cnst4clocksourceentry.size(); index++)
    {
        if(cnst4clocksourceentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoNetsyncMib::Cnst4Clocksourcetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cnsT4ClockSourceTable";

    return path_buffer.str();

}

const EntityPath CiscoNetsyncMib::Cnst4Clocksourcetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-NETSYNC-MIB:CISCO-NETSYNC-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoNetsyncMib::Cnst4Clocksourcetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cnsT4ClockSourceEntry")
    {
        for(auto const & c : cnst4clocksourceentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoNetsyncMib::Cnst4Clocksourcetable::Cnst4Clocksourceentry>();
        c->parent = this;
        cnst4clocksourceentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoNetsyncMib::Cnst4Clocksourcetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cnst4clocksourceentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoNetsyncMib::Cnst4Clocksourcetable::set_value(const std::string & value_path, std::string value)
{
}

CiscoNetsyncMib::Cnst4Clocksourcetable::Cnst4Clocksourceentry::Cnst4Clocksourceentry()
    :
    cnsextoutlistindex{YType::str, "cnsExtOutListIndex"},
    cnst4clksrcnetsyncindex{YType::uint32, "cnsT4ClkSrcNetsyncIndex"},
    cnst4clksrcalarm{YType::boolean, "cnsT4ClkSrcAlarm"},
    cnst4clksrcalarminfo{YType::bits, "cnsT4ClkSrcAlarmInfo"},
    cnst4clksrcesmccap{YType::enumeration, "cnsT4ClkSrcESMCCap"},
    cnst4clksrcfsw{YType::boolean, "cnsT4ClkSrcFSW"},
    cnst4clksrcholdofftime{YType::uint32, "cnsT4ClkSrcHoldoffTime"},
    cnst4clksrcintftype{YType::enumeration, "cnsT4ClkSrcIntfType"},
    cnst4clksrclockout{YType::boolean, "cnsT4ClkSrcLockout"},
    cnst4clksrcmsw{YType::boolean, "cnsT4ClkSrcMSW"},
    cnst4clksrcname{YType::str, "cnsT4ClkSrcName"},
    cnst4clksrcpriority{YType::uint32, "cnsT4ClkSrcPriority"},
    cnst4clksrcqualitylevel{YType::enumeration, "cnsT4ClkSrcQualityLevel"},
    cnst4clksrcqualitylevelrx{YType::enumeration, "cnsT4ClkSrcQualityLevelRx"},
    cnst4clksrcqualitylevelrxcfg{YType::enumeration, "cnsT4ClkSrcQualityLevelRxCfg"},
    cnst4clksrcqualityleveltx{YType::enumeration, "cnsT4ClkSrcQualityLevelTx"},
    cnst4clksrcqualityleveltxcfg{YType::enumeration, "cnsT4ClkSrcQualityLevelTxCfg"},
    cnst4clksrcsignalfailure{YType::boolean, "cnsT4ClkSrcSignalFailure"},
    cnst4clksrcssmcap{YType::enumeration, "cnsT4ClkSrcSSMCap"},
    cnst4clksrcwtrtime{YType::uint32, "cnsT4ClkSrcWtrTime"}
{
    yang_name = "cnsT4ClockSourceEntry"; yang_parent_name = "cnsT4ClockSourceTable";
}

CiscoNetsyncMib::Cnst4Clocksourcetable::Cnst4Clocksourceentry::~Cnst4Clocksourceentry()
{
}

bool CiscoNetsyncMib::Cnst4Clocksourcetable::Cnst4Clocksourceentry::has_data() const
{
    return cnsextoutlistindex.is_set
	|| cnst4clksrcnetsyncindex.is_set
	|| cnst4clksrcalarm.is_set
	|| cnst4clksrcalarminfo.is_set
	|| cnst4clksrcesmccap.is_set
	|| cnst4clksrcfsw.is_set
	|| cnst4clksrcholdofftime.is_set
	|| cnst4clksrcintftype.is_set
	|| cnst4clksrclockout.is_set
	|| cnst4clksrcmsw.is_set
	|| cnst4clksrcname.is_set
	|| cnst4clksrcpriority.is_set
	|| cnst4clksrcqualitylevel.is_set
	|| cnst4clksrcqualitylevelrx.is_set
	|| cnst4clksrcqualitylevelrxcfg.is_set
	|| cnst4clksrcqualityleveltx.is_set
	|| cnst4clksrcqualityleveltxcfg.is_set
	|| cnst4clksrcsignalfailure.is_set
	|| cnst4clksrcssmcap.is_set
	|| cnst4clksrcwtrtime.is_set;
}

bool CiscoNetsyncMib::Cnst4Clocksourcetable::Cnst4Clocksourceentry::has_operation() const
{
    return is_set(operation)
	|| is_set(cnsextoutlistindex.operation)
	|| is_set(cnst4clksrcnetsyncindex.operation)
	|| is_set(cnst4clksrcalarm.operation)
	|| is_set(cnst4clksrcalarminfo.operation)
	|| is_set(cnst4clksrcesmccap.operation)
	|| is_set(cnst4clksrcfsw.operation)
	|| is_set(cnst4clksrcholdofftime.operation)
	|| is_set(cnst4clksrcintftype.operation)
	|| is_set(cnst4clksrclockout.operation)
	|| is_set(cnst4clksrcmsw.operation)
	|| is_set(cnst4clksrcname.operation)
	|| is_set(cnst4clksrcpriority.operation)
	|| is_set(cnst4clksrcqualitylevel.operation)
	|| is_set(cnst4clksrcqualitylevelrx.operation)
	|| is_set(cnst4clksrcqualitylevelrxcfg.operation)
	|| is_set(cnst4clksrcqualityleveltx.operation)
	|| is_set(cnst4clksrcqualityleveltxcfg.operation)
	|| is_set(cnst4clksrcsignalfailure.operation)
	|| is_set(cnst4clksrcssmcap.operation)
	|| is_set(cnst4clksrcwtrtime.operation);
}

std::string CiscoNetsyncMib::Cnst4Clocksourcetable::Cnst4Clocksourceentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cnsT4ClockSourceEntry" <<"[cnsExtOutListIndex='" <<cnsextoutlistindex <<"']" <<"[cnsT4ClkSrcNetsyncIndex='" <<cnst4clksrcnetsyncindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoNetsyncMib::Cnst4Clocksourcetable::Cnst4Clocksourceentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-NETSYNC-MIB:CISCO-NETSYNC-MIB/cnsT4ClockSourceTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cnsextoutlistindex.is_set || is_set(cnsextoutlistindex.operation)) leaf_name_data.push_back(cnsextoutlistindex.get_name_leafdata());
    if (cnst4clksrcnetsyncindex.is_set || is_set(cnst4clksrcnetsyncindex.operation)) leaf_name_data.push_back(cnst4clksrcnetsyncindex.get_name_leafdata());
    if (cnst4clksrcalarm.is_set || is_set(cnst4clksrcalarm.operation)) leaf_name_data.push_back(cnst4clksrcalarm.get_name_leafdata());
    if (cnst4clksrcalarminfo.is_set || is_set(cnst4clksrcalarminfo.operation)) leaf_name_data.push_back(cnst4clksrcalarminfo.get_name_leafdata());
    if (cnst4clksrcesmccap.is_set || is_set(cnst4clksrcesmccap.operation)) leaf_name_data.push_back(cnst4clksrcesmccap.get_name_leafdata());
    if (cnst4clksrcfsw.is_set || is_set(cnst4clksrcfsw.operation)) leaf_name_data.push_back(cnst4clksrcfsw.get_name_leafdata());
    if (cnst4clksrcholdofftime.is_set || is_set(cnst4clksrcholdofftime.operation)) leaf_name_data.push_back(cnst4clksrcholdofftime.get_name_leafdata());
    if (cnst4clksrcintftype.is_set || is_set(cnst4clksrcintftype.operation)) leaf_name_data.push_back(cnst4clksrcintftype.get_name_leafdata());
    if (cnst4clksrclockout.is_set || is_set(cnst4clksrclockout.operation)) leaf_name_data.push_back(cnst4clksrclockout.get_name_leafdata());
    if (cnst4clksrcmsw.is_set || is_set(cnst4clksrcmsw.operation)) leaf_name_data.push_back(cnst4clksrcmsw.get_name_leafdata());
    if (cnst4clksrcname.is_set || is_set(cnst4clksrcname.operation)) leaf_name_data.push_back(cnst4clksrcname.get_name_leafdata());
    if (cnst4clksrcpriority.is_set || is_set(cnst4clksrcpriority.operation)) leaf_name_data.push_back(cnst4clksrcpriority.get_name_leafdata());
    if (cnst4clksrcqualitylevel.is_set || is_set(cnst4clksrcqualitylevel.operation)) leaf_name_data.push_back(cnst4clksrcqualitylevel.get_name_leafdata());
    if (cnst4clksrcqualitylevelrx.is_set || is_set(cnst4clksrcqualitylevelrx.operation)) leaf_name_data.push_back(cnst4clksrcqualitylevelrx.get_name_leafdata());
    if (cnst4clksrcqualitylevelrxcfg.is_set || is_set(cnst4clksrcqualitylevelrxcfg.operation)) leaf_name_data.push_back(cnst4clksrcqualitylevelrxcfg.get_name_leafdata());
    if (cnst4clksrcqualityleveltx.is_set || is_set(cnst4clksrcqualityleveltx.operation)) leaf_name_data.push_back(cnst4clksrcqualityleveltx.get_name_leafdata());
    if (cnst4clksrcqualityleveltxcfg.is_set || is_set(cnst4clksrcqualityleveltxcfg.operation)) leaf_name_data.push_back(cnst4clksrcqualityleveltxcfg.get_name_leafdata());
    if (cnst4clksrcsignalfailure.is_set || is_set(cnst4clksrcsignalfailure.operation)) leaf_name_data.push_back(cnst4clksrcsignalfailure.get_name_leafdata());
    if (cnst4clksrcssmcap.is_set || is_set(cnst4clksrcssmcap.operation)) leaf_name_data.push_back(cnst4clksrcssmcap.get_name_leafdata());
    if (cnst4clksrcwtrtime.is_set || is_set(cnst4clksrcwtrtime.operation)) leaf_name_data.push_back(cnst4clksrcwtrtime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoNetsyncMib::Cnst4Clocksourcetable::Cnst4Clocksourceentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoNetsyncMib::Cnst4Clocksourcetable::Cnst4Clocksourceentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoNetsyncMib::Cnst4Clocksourcetable::Cnst4Clocksourceentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cnsExtOutListIndex")
    {
        cnsextoutlistindex = value;
    }
    if(value_path == "cnsT4ClkSrcNetsyncIndex")
    {
        cnst4clksrcnetsyncindex = value;
    }
    if(value_path == "cnsT4ClkSrcAlarm")
    {
        cnst4clksrcalarm = value;
    }
    if(value_path == "cnsT4ClkSrcAlarmInfo")
    {
        cnst4clksrcalarminfo[value] = true;
    }
    if(value_path == "cnsT4ClkSrcESMCCap")
    {
        cnst4clksrcesmccap = value;
    }
    if(value_path == "cnsT4ClkSrcFSW")
    {
        cnst4clksrcfsw = value;
    }
    if(value_path == "cnsT4ClkSrcHoldoffTime")
    {
        cnst4clksrcholdofftime = value;
    }
    if(value_path == "cnsT4ClkSrcIntfType")
    {
        cnst4clksrcintftype = value;
    }
    if(value_path == "cnsT4ClkSrcLockout")
    {
        cnst4clksrclockout = value;
    }
    if(value_path == "cnsT4ClkSrcMSW")
    {
        cnst4clksrcmsw = value;
    }
    if(value_path == "cnsT4ClkSrcName")
    {
        cnst4clksrcname = value;
    }
    if(value_path == "cnsT4ClkSrcPriority")
    {
        cnst4clksrcpriority = value;
    }
    if(value_path == "cnsT4ClkSrcQualityLevel")
    {
        cnst4clksrcqualitylevel = value;
    }
    if(value_path == "cnsT4ClkSrcQualityLevelRx")
    {
        cnst4clksrcqualitylevelrx = value;
    }
    if(value_path == "cnsT4ClkSrcQualityLevelRxCfg")
    {
        cnst4clksrcqualitylevelrxcfg = value;
    }
    if(value_path == "cnsT4ClkSrcQualityLevelTx")
    {
        cnst4clksrcqualityleveltx = value;
    }
    if(value_path == "cnsT4ClkSrcQualityLevelTxCfg")
    {
        cnst4clksrcqualityleveltxcfg = value;
    }
    if(value_path == "cnsT4ClkSrcSignalFailure")
    {
        cnst4clksrcsignalfailure = value;
    }
    if(value_path == "cnsT4ClkSrcSSMCap")
    {
        cnst4clksrcssmcap = value;
    }
    if(value_path == "cnsT4ClkSrcWtrTime")
    {
        cnst4clksrcwtrtime = value;
    }
}

const Enum::YLeaf CisconetsyncesmccapEnum::netsyncESMCCapNone {1, "netsyncESMCCapNone"};
const Enum::YLeaf CisconetsyncesmccapEnum::netsyncESMCCapTxRx {2, "netsyncESMCCapTxRx"};
const Enum::YLeaf CisconetsyncesmccapEnum::netsyncESMCCapTx {3, "netsyncESMCCapTx"};
const Enum::YLeaf CisconetsyncesmccapEnum::netsyncESMCCapRx {4, "netsyncESMCCapRx"};
const Enum::YLeaf CisconetsyncesmccapEnum::netsyncESMCCapInvalid {5, "netsyncESMCCapInvalid"};

const Enum::YLeaf CisconetsyncqlmodeEnum::netsyncQLModeUnknown {1, "netsyncQLModeUnknown"};
const Enum::YLeaf CisconetsyncqlmodeEnum::netsyncQLModeQlDisabled {2, "netsyncQLModeQlDisabled"};
const Enum::YLeaf CisconetsyncqlmodeEnum::netsyncQLModeQlEnabled {3, "netsyncQLModeQlEnabled"};

const Enum::YLeaf CisconetsyncqualitylevelEnum::netsyncQualityLevelNULL {1, "netsyncQualityLevelNULL"};
const Enum::YLeaf CisconetsyncqualitylevelEnum::netsyncQualityLevelDNU {2, "netsyncQualityLevelDNU"};
const Enum::YLeaf CisconetsyncqualitylevelEnum::netsyncQualityLevelDUS {3, "netsyncQualityLevelDUS"};
const Enum::YLeaf CisconetsyncqualitylevelEnum::netsyncQualityLevelFAILED {4, "netsyncQualityLevelFAILED"};
const Enum::YLeaf CisconetsyncqualitylevelEnum::netsyncQualityLevelINV0 {5, "netsyncQualityLevelINV0"};
const Enum::YLeaf CisconetsyncqualitylevelEnum::netsyncQualityLevelINV1 {6, "netsyncQualityLevelINV1"};
const Enum::YLeaf CisconetsyncqualitylevelEnum::netsyncQualityLevelINV2 {7, "netsyncQualityLevelINV2"};
const Enum::YLeaf CisconetsyncqualitylevelEnum::netsyncQualityLevelINV3 {8, "netsyncQualityLevelINV3"};
const Enum::YLeaf CisconetsyncqualitylevelEnum::netsyncQualityLevelINV4 {9, "netsyncQualityLevelINV4"};
const Enum::YLeaf CisconetsyncqualitylevelEnum::netsyncQualityLevelINV5 {10, "netsyncQualityLevelINV5"};
const Enum::YLeaf CisconetsyncqualitylevelEnum::netsyncQualityLevelINV6 {11, "netsyncQualityLevelINV6"};
const Enum::YLeaf CisconetsyncqualitylevelEnum::netsyncQualityLevelINV7 {12, "netsyncQualityLevelINV7"};
const Enum::YLeaf CisconetsyncqualitylevelEnum::netsyncQualityLevelINV8 {13, "netsyncQualityLevelINV8"};
const Enum::YLeaf CisconetsyncqualitylevelEnum::netsyncQualityLevelINV9 {14, "netsyncQualityLevelINV9"};
const Enum::YLeaf CisconetsyncqualitylevelEnum::netsyncQualityLevelINV10 {15, "netsyncQualityLevelINV10"};
const Enum::YLeaf CisconetsyncqualitylevelEnum::netsyncQualityLevelINV11 {16, "netsyncQualityLevelINV11"};
const Enum::YLeaf CisconetsyncqualitylevelEnum::netsyncQualityLevelINV12 {17, "netsyncQualityLevelINV12"};
const Enum::YLeaf CisconetsyncqualitylevelEnum::netsyncQualityLevelINV13 {18, "netsyncQualityLevelINV13"};
const Enum::YLeaf CisconetsyncqualitylevelEnum::netsyncQualityLevelINV14 {19, "netsyncQualityLevelINV14"};
const Enum::YLeaf CisconetsyncqualitylevelEnum::netsyncQualityLevelINV15 {20, "netsyncQualityLevelINV15"};
const Enum::YLeaf CisconetsyncqualitylevelEnum::netsyncQualityLevelNSUPP {21, "netsyncQualityLevelNSUPP"};
const Enum::YLeaf CisconetsyncqualitylevelEnum::netsyncQualityLevelPRC {22, "netsyncQualityLevelPRC"};
const Enum::YLeaf CisconetsyncqualitylevelEnum::netsyncQualityLevelPROV {23, "netsyncQualityLevelPROV"};
const Enum::YLeaf CisconetsyncqualitylevelEnum::netsyncQualityLevelPRS {24, "netsyncQualityLevelPRS"};
const Enum::YLeaf CisconetsyncqualitylevelEnum::netsyncQualityLevelSEC {25, "netsyncQualityLevelSEC"};
const Enum::YLeaf CisconetsyncqualitylevelEnum::netsyncQualityLevelSMC {26, "netsyncQualityLevelSMC"};
const Enum::YLeaf CisconetsyncqualitylevelEnum::netsyncQualityLevelSSUA {27, "netsyncQualityLevelSSUA"};
const Enum::YLeaf CisconetsyncqualitylevelEnum::netsyncQualityLevelSSUB {28, "netsyncQualityLevelSSUB"};
const Enum::YLeaf CisconetsyncqualitylevelEnum::netsyncQualityLevelST2 {29, "netsyncQualityLevelST2"};
const Enum::YLeaf CisconetsyncqualitylevelEnum::netsyncQualityLevelST3 {30, "netsyncQualityLevelST3"};
const Enum::YLeaf CisconetsyncqualitylevelEnum::netsyncQualityLevelST3E {31, "netsyncQualityLevelST3E"};
const Enum::YLeaf CisconetsyncqualitylevelEnum::netsyncQualityLevelST4 {32, "netsyncQualityLevelST4"};
const Enum::YLeaf CisconetsyncqualitylevelEnum::netsyncQualityLevelSTU {33, "netsyncQualityLevelSTU"};
const Enum::YLeaf CisconetsyncqualitylevelEnum::netsyncQualityLevelTNC {34, "netsyncQualityLevelTNC"};
const Enum::YLeaf CisconetsyncqualitylevelEnum::netsyncQualityLevelUNC {35, "netsyncQualityLevelUNC"};
const Enum::YLeaf CisconetsyncqualitylevelEnum::netsyncQualityLevelUNK {36, "netsyncQualityLevelUNK"};

const Enum::YLeaf CisconetsyncclockmodeEnum::netsyncClockModeUnknown {1, "netsyncClockModeUnknown"};
const Enum::YLeaf CisconetsyncclockmodeEnum::netsyncClockModeFreerun {2, "netsyncClockModeFreerun"};
const Enum::YLeaf CisconetsyncclockmodeEnum::netsyncClockModeHoldover {3, "netsyncClockModeHoldover"};
const Enum::YLeaf CisconetsyncclockmodeEnum::netsyncClockModeLocked {4, "netsyncClockModeLocked"};

const Enum::YLeaf CisconetsyncssmcapEnum::netsyncSSMCapNone {1, "netsyncSSMCapNone"};
const Enum::YLeaf CisconetsyncssmcapEnum::netsyncSSMCapTxRx {2, "netsyncSSMCapTxRx"};
const Enum::YLeaf CisconetsyncssmcapEnum::netsyncSSMCapTx {3, "netsyncSSMCapTx"};
const Enum::YLeaf CisconetsyncssmcapEnum::netsyncSSMCapRx {4, "netsyncSSMCapRx"};
const Enum::YLeaf CisconetsyncssmcapEnum::netsyncSSMCapInvalid {5, "netsyncSSMCapInvalid"};

const Enum::YLeaf CisconetsynciftypeEnum::netsyncIfTypeUnknown {1, "netsyncIfTypeUnknown"};
const Enum::YLeaf CisconetsynciftypeEnum::netsyncIfTypeInternal {2, "netsyncIfTypeInternal"};
const Enum::YLeaf CisconetsynciftypeEnum::netsyncIfTypeEthernet {3, "netsyncIfTypeEthernet"};
const Enum::YLeaf CisconetsynciftypeEnum::netsyncIfTypeSonet {4, "netsyncIfTypeSonet"};
const Enum::YLeaf CisconetsynciftypeEnum::netsyncIfTypeTop {5, "netsyncIfTypeTop"};
const Enum::YLeaf CisconetsynciftypeEnum::netsyncIfTypeExt {6, "netsyncIfTypeExt"};
const Enum::YLeaf CisconetsynciftypeEnum::netsyncIfTypeController {7, "netsyncIfTypeController"};
const Enum::YLeaf CisconetsynciftypeEnum::netsyncIfTypeGps {8, "netsyncIfTypeGps"};
const Enum::YLeaf CisconetsynciftypeEnum::netsyncIfTypeAtm {9, "netsyncIfTypeAtm"};

const Enum::YLeaf CisconetsyncnetworkoptionEnum::netsyncNetworkOptionUnknown {1, "netsyncNetworkOptionUnknown"};
const Enum::YLeaf CisconetsyncnetworkoptionEnum::netsyncNetworkOption1 {2, "netsyncNetworkOption1"};
const Enum::YLeaf CisconetsyncnetworkoptionEnum::netsyncNetworkOption2Gen1 {3, "netsyncNetworkOption2Gen1"};
const Enum::YLeaf CisconetsyncnetworkoptionEnum::netsyncNetworkOption2Gen2 {4, "netsyncNetworkOption2Gen2"};
const Enum::YLeaf CisconetsyncnetworkoptionEnum::netsyncNetworkOption3 {5, "netsyncNetworkOption3"};
const Enum::YLeaf CisconetsyncnetworkoptionEnum::netsyncNetworkOptionInvalid {6, "netsyncNetworkOptionInvalid"};

const Enum::YLeaf CisconetsynceecoptionEnum::netsyncEECOptionUnknown {1, "netsyncEECOptionUnknown"};
const Enum::YLeaf CisconetsynceecoptionEnum::netsyncEECOption1 {2, "netsyncEECOption1"};
const Enum::YLeaf CisconetsynceecoptionEnum::netsyncEECOption2 {3, "netsyncEECOption2"};
const Enum::YLeaf CisconetsynceecoptionEnum::netsyncEECOptionInvalid {4, "netsyncEECOptionInvalid"};


}
}

