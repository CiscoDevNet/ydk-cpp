
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_STP_EXTENSIONS_MIB.hpp"

namespace ydk {
namespace CISCO_STP_EXTENSIONS_MIB {

CiscoStpExtensionsMib::CiscoStpExtensionsMib()
    :
    stpxbackbonefastobjects(std::make_shared<CiscoStpExtensionsMib::Stpxbackbonefastobjects>())
	,stpxbpduskewingobjects(std::make_shared<CiscoStpExtensionsMib::Stpxbpduskewingobjects>())
	,stpxbpduskewingtable(std::make_shared<CiscoStpExtensionsMib::Stpxbpduskewingtable>())
	,stpxfaststartobjects(std::make_shared<CiscoStpExtensionsMib::Stpxfaststartobjects>())
	,stpxfaststartopermodetable(std::make_shared<CiscoStpExtensionsMib::Stpxfaststartopermodetable>())
	,stpxfaststartporttable(std::make_shared<CiscoStpExtensionsMib::Stpxfaststartporttable>())
	,stpxinconsistencytable(std::make_shared<CiscoStpExtensionsMib::Stpxinconsistencytable>())
	,stpxloopguardconfigtable(std::make_shared<CiscoStpExtensionsMib::Stpxloopguardconfigtable>())
	,stpxloopguardobjects(std::make_shared<CiscoStpExtensionsMib::Stpxloopguardobjects>())
	,stpxloopinconsistencytable(std::make_shared<CiscoStpExtensionsMib::Stpxloopinconsistencytable>())
	,stpxmistpinstancetable(std::make_shared<CiscoStpExtensionsMib::Stpxmistpinstancetable>())
	,stpxmistpobjects(std::make_shared<CiscoStpExtensionsMib::Stpxmistpobjects>())
	,stpxmstinstanceedittable(std::make_shared<CiscoStpExtensionsMib::Stpxmstinstanceedittable>())
	,stpxmstinstancetable(std::make_shared<CiscoStpExtensionsMib::Stpxmstinstancetable>())
	,stpxmstobjects(std::make_shared<CiscoStpExtensionsMib::Stpxmstobjects>())
	,stpxmstportroletable(std::make_shared<CiscoStpExtensionsMib::Stpxmstportroletable>())
	,stpxmstporttable(std::make_shared<CiscoStpExtensionsMib::Stpxmstporttable>())
	,stpxpvstvlantable(std::make_shared<CiscoStpExtensionsMib::Stpxpvstvlantable>())
	,stpxrootguardconfigtable(std::make_shared<CiscoStpExtensionsMib::Stpxrootguardconfigtable>())
	,stpxrootinconsistencytable(std::make_shared<CiscoStpExtensionsMib::Stpxrootinconsistencytable>())
	,stpxrpvstporttable(std::make_shared<CiscoStpExtensionsMib::Stpxrpvstporttable>())
	,stpxrstpobjects(std::make_shared<CiscoStpExtensionsMib::Stpxrstpobjects>())
	,stpxrstpportroletable(std::make_shared<CiscoStpExtensionsMib::Stpxrstpportroletable>())
	,stpxrstpporttable(std::make_shared<CiscoStpExtensionsMib::Stpxrstpporttable>())
	,stpxsmstinstanceedittable(std::make_shared<CiscoStpExtensionsMib::Stpxsmstinstanceedittable>())
	,stpxsmstinstancetable(std::make_shared<CiscoStpExtensionsMib::Stpxsmstinstancetable>())
	,stpxsmstobjects(std::make_shared<CiscoStpExtensionsMib::Stpxsmstobjects>())
	,stpxsmstporttable(std::make_shared<CiscoStpExtensionsMib::Stpxsmstporttable>())
	,stpxspanningtreeobjects(std::make_shared<CiscoStpExtensionsMib::Stpxspanningtreeobjects>())
	,stpxuplinkfastobjects(std::make_shared<CiscoStpExtensionsMib::Stpxuplinkfastobjects>())
{
    stpxbackbonefastobjects->parent = this;

    stpxbpduskewingobjects->parent = this;

    stpxbpduskewingtable->parent = this;

    stpxfaststartobjects->parent = this;

    stpxfaststartopermodetable->parent = this;

    stpxfaststartporttable->parent = this;

    stpxinconsistencytable->parent = this;

    stpxloopguardconfigtable->parent = this;

    stpxloopguardobjects->parent = this;

    stpxloopinconsistencytable->parent = this;

    stpxmistpinstancetable->parent = this;

    stpxmistpobjects->parent = this;

    stpxmstinstanceedittable->parent = this;

    stpxmstinstancetable->parent = this;

    stpxmstobjects->parent = this;

    stpxmstportroletable->parent = this;

    stpxmstporttable->parent = this;

    stpxpvstvlantable->parent = this;

    stpxrootguardconfigtable->parent = this;

    stpxrootinconsistencytable->parent = this;

    stpxrpvstporttable->parent = this;

    stpxrstpobjects->parent = this;

    stpxrstpportroletable->parent = this;

    stpxrstpporttable->parent = this;

    stpxsmstinstanceedittable->parent = this;

    stpxsmstinstancetable->parent = this;

    stpxsmstobjects->parent = this;

    stpxsmstporttable->parent = this;

    stpxspanningtreeobjects->parent = this;

    stpxuplinkfastobjects->parent = this;

    yang_name = "CISCO-STP-EXTENSIONS-MIB"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB";
}

CiscoStpExtensionsMib::~CiscoStpExtensionsMib()
{
}

bool CiscoStpExtensionsMib::has_data() const
{
    return (stpxbackbonefastobjects !=  nullptr && stpxbackbonefastobjects->has_data())
	|| (stpxbpduskewingobjects !=  nullptr && stpxbpduskewingobjects->has_data())
	|| (stpxbpduskewingtable !=  nullptr && stpxbpduskewingtable->has_data())
	|| (stpxfaststartobjects !=  nullptr && stpxfaststartobjects->has_data())
	|| (stpxfaststartopermodetable !=  nullptr && stpxfaststartopermodetable->has_data())
	|| (stpxfaststartporttable !=  nullptr && stpxfaststartporttable->has_data())
	|| (stpxinconsistencytable !=  nullptr && stpxinconsistencytable->has_data())
	|| (stpxloopguardconfigtable !=  nullptr && stpxloopguardconfigtable->has_data())
	|| (stpxloopguardobjects !=  nullptr && stpxloopguardobjects->has_data())
	|| (stpxloopinconsistencytable !=  nullptr && stpxloopinconsistencytable->has_data())
	|| (stpxmistpinstancetable !=  nullptr && stpxmistpinstancetable->has_data())
	|| (stpxmistpobjects !=  nullptr && stpxmistpobjects->has_data())
	|| (stpxmstinstanceedittable !=  nullptr && stpxmstinstanceedittable->has_data())
	|| (stpxmstinstancetable !=  nullptr && stpxmstinstancetable->has_data())
	|| (stpxmstobjects !=  nullptr && stpxmstobjects->has_data())
	|| (stpxmstportroletable !=  nullptr && stpxmstportroletable->has_data())
	|| (stpxmstporttable !=  nullptr && stpxmstporttable->has_data())
	|| (stpxpvstvlantable !=  nullptr && stpxpvstvlantable->has_data())
	|| (stpxrootguardconfigtable !=  nullptr && stpxrootguardconfigtable->has_data())
	|| (stpxrootinconsistencytable !=  nullptr && stpxrootinconsistencytable->has_data())
	|| (stpxrpvstporttable !=  nullptr && stpxrpvstporttable->has_data())
	|| (stpxrstpobjects !=  nullptr && stpxrstpobjects->has_data())
	|| (stpxrstpportroletable !=  nullptr && stpxrstpportroletable->has_data())
	|| (stpxrstpporttable !=  nullptr && stpxrstpporttable->has_data())
	|| (stpxsmstinstanceedittable !=  nullptr && stpxsmstinstanceedittable->has_data())
	|| (stpxsmstinstancetable !=  nullptr && stpxsmstinstancetable->has_data())
	|| (stpxsmstobjects !=  nullptr && stpxsmstobjects->has_data())
	|| (stpxsmstporttable !=  nullptr && stpxsmstporttable->has_data())
	|| (stpxspanningtreeobjects !=  nullptr && stpxspanningtreeobjects->has_data())
	|| (stpxuplinkfastobjects !=  nullptr && stpxuplinkfastobjects->has_data());
}

bool CiscoStpExtensionsMib::has_operation() const
{
    return is_set(operation)
	|| (stpxbackbonefastobjects !=  nullptr && stpxbackbonefastobjects->has_operation())
	|| (stpxbpduskewingobjects !=  nullptr && stpxbpduskewingobjects->has_operation())
	|| (stpxbpduskewingtable !=  nullptr && stpxbpduskewingtable->has_operation())
	|| (stpxfaststartobjects !=  nullptr && stpxfaststartobjects->has_operation())
	|| (stpxfaststartopermodetable !=  nullptr && stpxfaststartopermodetable->has_operation())
	|| (stpxfaststartporttable !=  nullptr && stpxfaststartporttable->has_operation())
	|| (stpxinconsistencytable !=  nullptr && stpxinconsistencytable->has_operation())
	|| (stpxloopguardconfigtable !=  nullptr && stpxloopguardconfigtable->has_operation())
	|| (stpxloopguardobjects !=  nullptr && stpxloopguardobjects->has_operation())
	|| (stpxloopinconsistencytable !=  nullptr && stpxloopinconsistencytable->has_operation())
	|| (stpxmistpinstancetable !=  nullptr && stpxmistpinstancetable->has_operation())
	|| (stpxmistpobjects !=  nullptr && stpxmistpobjects->has_operation())
	|| (stpxmstinstanceedittable !=  nullptr && stpxmstinstanceedittable->has_operation())
	|| (stpxmstinstancetable !=  nullptr && stpxmstinstancetable->has_operation())
	|| (stpxmstobjects !=  nullptr && stpxmstobjects->has_operation())
	|| (stpxmstportroletable !=  nullptr && stpxmstportroletable->has_operation())
	|| (stpxmstporttable !=  nullptr && stpxmstporttable->has_operation())
	|| (stpxpvstvlantable !=  nullptr && stpxpvstvlantable->has_operation())
	|| (stpxrootguardconfigtable !=  nullptr && stpxrootguardconfigtable->has_operation())
	|| (stpxrootinconsistencytable !=  nullptr && stpxrootinconsistencytable->has_operation())
	|| (stpxrpvstporttable !=  nullptr && stpxrpvstporttable->has_operation())
	|| (stpxrstpobjects !=  nullptr && stpxrstpobjects->has_operation())
	|| (stpxrstpportroletable !=  nullptr && stpxrstpportroletable->has_operation())
	|| (stpxrstpporttable !=  nullptr && stpxrstpporttable->has_operation())
	|| (stpxsmstinstanceedittable !=  nullptr && stpxsmstinstanceedittable->has_operation())
	|| (stpxsmstinstancetable !=  nullptr && stpxsmstinstancetable->has_operation())
	|| (stpxsmstobjects !=  nullptr && stpxsmstobjects->has_operation())
	|| (stpxsmstporttable !=  nullptr && stpxsmstporttable->has_operation())
	|| (stpxspanningtreeobjects !=  nullptr && stpxspanningtreeobjects->has_operation())
	|| (stpxuplinkfastobjects !=  nullptr && stpxuplinkfastobjects->has_operation());
}

std::string CiscoStpExtensionsMib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB";

    return path_buffer.str();

}

const EntityPath CiscoStpExtensionsMib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> CiscoStpExtensionsMib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stpxBackboneFastObjects")
    {
        if(stpxbackbonefastobjects == nullptr)
        {
            stpxbackbonefastobjects = std::make_shared<CiscoStpExtensionsMib::Stpxbackbonefastobjects>();
        }
        return stpxbackbonefastobjects;
    }

    if(child_yang_name == "stpxBpduSkewingObjects")
    {
        if(stpxbpduskewingobjects == nullptr)
        {
            stpxbpduskewingobjects = std::make_shared<CiscoStpExtensionsMib::Stpxbpduskewingobjects>();
        }
        return stpxbpduskewingobjects;
    }

    if(child_yang_name == "stpxBpduSkewingTable")
    {
        if(stpxbpduskewingtable == nullptr)
        {
            stpxbpduskewingtable = std::make_shared<CiscoStpExtensionsMib::Stpxbpduskewingtable>();
        }
        return stpxbpduskewingtable;
    }

    if(child_yang_name == "stpxFastStartObjects")
    {
        if(stpxfaststartobjects == nullptr)
        {
            stpxfaststartobjects = std::make_shared<CiscoStpExtensionsMib::Stpxfaststartobjects>();
        }
        return stpxfaststartobjects;
    }

    if(child_yang_name == "stpxFastStartOperModeTable")
    {
        if(stpxfaststartopermodetable == nullptr)
        {
            stpxfaststartopermodetable = std::make_shared<CiscoStpExtensionsMib::Stpxfaststartopermodetable>();
        }
        return stpxfaststartopermodetable;
    }

    if(child_yang_name == "stpxFastStartPortTable")
    {
        if(stpxfaststartporttable == nullptr)
        {
            stpxfaststartporttable = std::make_shared<CiscoStpExtensionsMib::Stpxfaststartporttable>();
        }
        return stpxfaststartporttable;
    }

    if(child_yang_name == "stpxInconsistencyTable")
    {
        if(stpxinconsistencytable == nullptr)
        {
            stpxinconsistencytable = std::make_shared<CiscoStpExtensionsMib::Stpxinconsistencytable>();
        }
        return stpxinconsistencytable;
    }

    if(child_yang_name == "stpxLoopGuardConfigTable")
    {
        if(stpxloopguardconfigtable == nullptr)
        {
            stpxloopguardconfigtable = std::make_shared<CiscoStpExtensionsMib::Stpxloopguardconfigtable>();
        }
        return stpxloopguardconfigtable;
    }

    if(child_yang_name == "stpxLoopGuardObjects")
    {
        if(stpxloopguardobjects == nullptr)
        {
            stpxloopguardobjects = std::make_shared<CiscoStpExtensionsMib::Stpxloopguardobjects>();
        }
        return stpxloopguardobjects;
    }

    if(child_yang_name == "stpxLoopInconsistencyTable")
    {
        if(stpxloopinconsistencytable == nullptr)
        {
            stpxloopinconsistencytable = std::make_shared<CiscoStpExtensionsMib::Stpxloopinconsistencytable>();
        }
        return stpxloopinconsistencytable;
    }

    if(child_yang_name == "stpxMISTPInstanceTable")
    {
        if(stpxmistpinstancetable == nullptr)
        {
            stpxmistpinstancetable = std::make_shared<CiscoStpExtensionsMib::Stpxmistpinstancetable>();
        }
        return stpxmistpinstancetable;
    }

    if(child_yang_name == "stpxMISTPObjects")
    {
        if(stpxmistpobjects == nullptr)
        {
            stpxmistpobjects = std::make_shared<CiscoStpExtensionsMib::Stpxmistpobjects>();
        }
        return stpxmistpobjects;
    }

    if(child_yang_name == "stpxMSTInstanceEditTable")
    {
        if(stpxmstinstanceedittable == nullptr)
        {
            stpxmstinstanceedittable = std::make_shared<CiscoStpExtensionsMib::Stpxmstinstanceedittable>();
        }
        return stpxmstinstanceedittable;
    }

    if(child_yang_name == "stpxMSTInstanceTable")
    {
        if(stpxmstinstancetable == nullptr)
        {
            stpxmstinstancetable = std::make_shared<CiscoStpExtensionsMib::Stpxmstinstancetable>();
        }
        return stpxmstinstancetable;
    }

    if(child_yang_name == "stpxMSTObjects")
    {
        if(stpxmstobjects == nullptr)
        {
            stpxmstobjects = std::make_shared<CiscoStpExtensionsMib::Stpxmstobjects>();
        }
        return stpxmstobjects;
    }

    if(child_yang_name == "stpxMSTPortRoleTable")
    {
        if(stpxmstportroletable == nullptr)
        {
            stpxmstportroletable = std::make_shared<CiscoStpExtensionsMib::Stpxmstportroletable>();
        }
        return stpxmstportroletable;
    }

    if(child_yang_name == "stpxMSTPortTable")
    {
        if(stpxmstporttable == nullptr)
        {
            stpxmstporttable = std::make_shared<CiscoStpExtensionsMib::Stpxmstporttable>();
        }
        return stpxmstporttable;
    }

    if(child_yang_name == "stpxPVSTVlanTable")
    {
        if(stpxpvstvlantable == nullptr)
        {
            stpxpvstvlantable = std::make_shared<CiscoStpExtensionsMib::Stpxpvstvlantable>();
        }
        return stpxpvstvlantable;
    }

    if(child_yang_name == "stpxRootGuardConfigTable")
    {
        if(stpxrootguardconfigtable == nullptr)
        {
            stpxrootguardconfigtable = std::make_shared<CiscoStpExtensionsMib::Stpxrootguardconfigtable>();
        }
        return stpxrootguardconfigtable;
    }

    if(child_yang_name == "stpxRootInconsistencyTable")
    {
        if(stpxrootinconsistencytable == nullptr)
        {
            stpxrootinconsistencytable = std::make_shared<CiscoStpExtensionsMib::Stpxrootinconsistencytable>();
        }
        return stpxrootinconsistencytable;
    }

    if(child_yang_name == "stpxRPVSTPortTable")
    {
        if(stpxrpvstporttable == nullptr)
        {
            stpxrpvstporttable = std::make_shared<CiscoStpExtensionsMib::Stpxrpvstporttable>();
        }
        return stpxrpvstporttable;
    }

    if(child_yang_name == "stpxRSTPObjects")
    {
        if(stpxrstpobjects == nullptr)
        {
            stpxrstpobjects = std::make_shared<CiscoStpExtensionsMib::Stpxrstpobjects>();
        }
        return stpxrstpobjects;
    }

    if(child_yang_name == "stpxRSTPPortRoleTable")
    {
        if(stpxrstpportroletable == nullptr)
        {
            stpxrstpportroletable = std::make_shared<CiscoStpExtensionsMib::Stpxrstpportroletable>();
        }
        return stpxrstpportroletable;
    }

    if(child_yang_name == "stpxRSTPPortTable")
    {
        if(stpxrstpporttable == nullptr)
        {
            stpxrstpporttable = std::make_shared<CiscoStpExtensionsMib::Stpxrstpporttable>();
        }
        return stpxrstpporttable;
    }

    if(child_yang_name == "stpxSMSTInstanceEditTable")
    {
        if(stpxsmstinstanceedittable == nullptr)
        {
            stpxsmstinstanceedittable = std::make_shared<CiscoStpExtensionsMib::Stpxsmstinstanceedittable>();
        }
        return stpxsmstinstanceedittable;
    }

    if(child_yang_name == "stpxSMSTInstanceTable")
    {
        if(stpxsmstinstancetable == nullptr)
        {
            stpxsmstinstancetable = std::make_shared<CiscoStpExtensionsMib::Stpxsmstinstancetable>();
        }
        return stpxsmstinstancetable;
    }

    if(child_yang_name == "stpxSMSTObjects")
    {
        if(stpxsmstobjects == nullptr)
        {
            stpxsmstobjects = std::make_shared<CiscoStpExtensionsMib::Stpxsmstobjects>();
        }
        return stpxsmstobjects;
    }

    if(child_yang_name == "stpxSMSTPortTable")
    {
        if(stpxsmstporttable == nullptr)
        {
            stpxsmstporttable = std::make_shared<CiscoStpExtensionsMib::Stpxsmstporttable>();
        }
        return stpxsmstporttable;
    }

    if(child_yang_name == "stpxSpanningTreeObjects")
    {
        if(stpxspanningtreeobjects == nullptr)
        {
            stpxspanningtreeobjects = std::make_shared<CiscoStpExtensionsMib::Stpxspanningtreeobjects>();
        }
        return stpxspanningtreeobjects;
    }

    if(child_yang_name == "stpxUplinkFastObjects")
    {
        if(stpxuplinkfastobjects == nullptr)
        {
            stpxuplinkfastobjects = std::make_shared<CiscoStpExtensionsMib::Stpxuplinkfastobjects>();
        }
        return stpxuplinkfastobjects;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoStpExtensionsMib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stpxbackbonefastobjects != nullptr)
    {
        children["stpxBackboneFastObjects"] = stpxbackbonefastobjects;
    }

    if(stpxbpduskewingobjects != nullptr)
    {
        children["stpxBpduSkewingObjects"] = stpxbpduskewingobjects;
    }

    if(stpxbpduskewingtable != nullptr)
    {
        children["stpxBpduSkewingTable"] = stpxbpduskewingtable;
    }

    if(stpxfaststartobjects != nullptr)
    {
        children["stpxFastStartObjects"] = stpxfaststartobjects;
    }

    if(stpxfaststartopermodetable != nullptr)
    {
        children["stpxFastStartOperModeTable"] = stpxfaststartopermodetable;
    }

    if(stpxfaststartporttable != nullptr)
    {
        children["stpxFastStartPortTable"] = stpxfaststartporttable;
    }

    if(stpxinconsistencytable != nullptr)
    {
        children["stpxInconsistencyTable"] = stpxinconsistencytable;
    }

    if(stpxloopguardconfigtable != nullptr)
    {
        children["stpxLoopGuardConfigTable"] = stpxloopguardconfigtable;
    }

    if(stpxloopguardobjects != nullptr)
    {
        children["stpxLoopGuardObjects"] = stpxloopguardobjects;
    }

    if(stpxloopinconsistencytable != nullptr)
    {
        children["stpxLoopInconsistencyTable"] = stpxloopinconsistencytable;
    }

    if(stpxmistpinstancetable != nullptr)
    {
        children["stpxMISTPInstanceTable"] = stpxmistpinstancetable;
    }

    if(stpxmistpobjects != nullptr)
    {
        children["stpxMISTPObjects"] = stpxmistpobjects;
    }

    if(stpxmstinstanceedittable != nullptr)
    {
        children["stpxMSTInstanceEditTable"] = stpxmstinstanceedittable;
    }

    if(stpxmstinstancetable != nullptr)
    {
        children["stpxMSTInstanceTable"] = stpxmstinstancetable;
    }

    if(stpxmstobjects != nullptr)
    {
        children["stpxMSTObjects"] = stpxmstobjects;
    }

    if(stpxmstportroletable != nullptr)
    {
        children["stpxMSTPortRoleTable"] = stpxmstportroletable;
    }

    if(stpxmstporttable != nullptr)
    {
        children["stpxMSTPortTable"] = stpxmstporttable;
    }

    if(stpxpvstvlantable != nullptr)
    {
        children["stpxPVSTVlanTable"] = stpxpvstvlantable;
    }

    if(stpxrootguardconfigtable != nullptr)
    {
        children["stpxRootGuardConfigTable"] = stpxrootguardconfigtable;
    }

    if(stpxrootinconsistencytable != nullptr)
    {
        children["stpxRootInconsistencyTable"] = stpxrootinconsistencytable;
    }

    if(stpxrpvstporttable != nullptr)
    {
        children["stpxRPVSTPortTable"] = stpxrpvstporttable;
    }

    if(stpxrstpobjects != nullptr)
    {
        children["stpxRSTPObjects"] = stpxrstpobjects;
    }

    if(stpxrstpportroletable != nullptr)
    {
        children["stpxRSTPPortRoleTable"] = stpxrstpportroletable;
    }

    if(stpxrstpporttable != nullptr)
    {
        children["stpxRSTPPortTable"] = stpxrstpporttable;
    }

    if(stpxsmstinstanceedittable != nullptr)
    {
        children["stpxSMSTInstanceEditTable"] = stpxsmstinstanceedittable;
    }

    if(stpxsmstinstancetable != nullptr)
    {
        children["stpxSMSTInstanceTable"] = stpxsmstinstancetable;
    }

    if(stpxsmstobjects != nullptr)
    {
        children["stpxSMSTObjects"] = stpxsmstobjects;
    }

    if(stpxsmstporttable != nullptr)
    {
        children["stpxSMSTPortTable"] = stpxsmstporttable;
    }

    if(stpxspanningtreeobjects != nullptr)
    {
        children["stpxSpanningTreeObjects"] = stpxspanningtreeobjects;
    }

    if(stpxuplinkfastobjects != nullptr)
    {
        children["stpxUplinkFastObjects"] = stpxuplinkfastobjects;
    }

    return children;
}

void CiscoStpExtensionsMib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CiscoStpExtensionsMib::clone_ptr() const
{
    return std::make_shared<CiscoStpExtensionsMib>();
}

std::string CiscoStpExtensionsMib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CiscoStpExtensionsMib::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CiscoStpExtensionsMib::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CiscoStpExtensionsMib::Stpxuplinkfastobjects::Stpxuplinkfastobjects()
    :
    stpxuplinkfastenabled{YType::boolean, "stpxUplinkFastEnabled"},
    stpxuplinkfastoperenabled{YType::boolean, "stpxUplinkFastOperEnabled"},
    stpxuplinkfasttransitions{YType::uint32, "stpxUplinkFastTransitions"},
    stpxuplinkstationlearningframes{YType::uint32, "stpxUplinkStationLearningFrames"},
    stpxuplinkstationlearninggenrate{YType::int32, "stpxUplinkStationLearningGenRate"}
{
    yang_name = "stpxUplinkFastObjects"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB";
}

CiscoStpExtensionsMib::Stpxuplinkfastobjects::~Stpxuplinkfastobjects()
{
}

bool CiscoStpExtensionsMib::Stpxuplinkfastobjects::has_data() const
{
    return stpxuplinkfastenabled.is_set
	|| stpxuplinkfastoperenabled.is_set
	|| stpxuplinkfasttransitions.is_set
	|| stpxuplinkstationlearningframes.is_set
	|| stpxuplinkstationlearninggenrate.is_set;
}

bool CiscoStpExtensionsMib::Stpxuplinkfastobjects::has_operation() const
{
    return is_set(operation)
	|| is_set(stpxuplinkfastenabled.operation)
	|| is_set(stpxuplinkfastoperenabled.operation)
	|| is_set(stpxuplinkfasttransitions.operation)
	|| is_set(stpxuplinkstationlearningframes.operation)
	|| is_set(stpxuplinkstationlearninggenrate.operation);
}

std::string CiscoStpExtensionsMib::Stpxuplinkfastobjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxUplinkFastObjects";

    return path_buffer.str();

}

const EntityPath CiscoStpExtensionsMib::Stpxuplinkfastobjects::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxuplinkfastenabled.is_set || is_set(stpxuplinkfastenabled.operation)) leaf_name_data.push_back(stpxuplinkfastenabled.get_name_leafdata());
    if (stpxuplinkfastoperenabled.is_set || is_set(stpxuplinkfastoperenabled.operation)) leaf_name_data.push_back(stpxuplinkfastoperenabled.get_name_leafdata());
    if (stpxuplinkfasttransitions.is_set || is_set(stpxuplinkfasttransitions.operation)) leaf_name_data.push_back(stpxuplinkfasttransitions.get_name_leafdata());
    if (stpxuplinkstationlearningframes.is_set || is_set(stpxuplinkstationlearningframes.operation)) leaf_name_data.push_back(stpxuplinkstationlearningframes.get_name_leafdata());
    if (stpxuplinkstationlearninggenrate.is_set || is_set(stpxuplinkstationlearninggenrate.operation)) leaf_name_data.push_back(stpxuplinkstationlearninggenrate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoStpExtensionsMib::Stpxuplinkfastobjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoStpExtensionsMib::Stpxuplinkfastobjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoStpExtensionsMib::Stpxuplinkfastobjects::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "stpxUplinkFastEnabled")
    {
        stpxuplinkfastenabled = value;
    }
    if(value_path == "stpxUplinkFastOperEnabled")
    {
        stpxuplinkfastoperenabled = value;
    }
    if(value_path == "stpxUplinkFastTransitions")
    {
        stpxuplinkfasttransitions = value;
    }
    if(value_path == "stpxUplinkStationLearningFrames")
    {
        stpxuplinkstationlearningframes = value;
    }
    if(value_path == "stpxUplinkStationLearningGenRate")
    {
        stpxuplinkstationlearninggenrate = value;
    }
}

CiscoStpExtensionsMib::Stpxbackbonefastobjects::Stpxbackbonefastobjects()
    :
    stpxbackbonefastenabled{YType::boolean, "stpxBackboneFastEnabled"},
    stpxbackbonefastininferiorbpdus{YType::uint32, "stpxBackboneFastInInferiorBPDUs"},
    stpxbackbonefastinrlqrequestpdus{YType::uint32, "stpxBackboneFastInRLQRequestPDUs"},
    stpxbackbonefastinrlqresponsepdus{YType::uint32, "stpxBackboneFastInRLQResponsePDUs"},
    stpxbackbonefastoperenabled{YType::boolean, "stpxBackboneFastOperEnabled"},
    stpxbackbonefastoutrlqrequestpdus{YType::uint32, "stpxBackboneFastOutRLQRequestPDUs"},
    stpxbackbonefastoutrlqresponsepdus{YType::uint32, "stpxBackboneFastOutRLQResponsePDUs"}
{
    yang_name = "stpxBackboneFastObjects"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB";
}

CiscoStpExtensionsMib::Stpxbackbonefastobjects::~Stpxbackbonefastobjects()
{
}

bool CiscoStpExtensionsMib::Stpxbackbonefastobjects::has_data() const
{
    return stpxbackbonefastenabled.is_set
	|| stpxbackbonefastininferiorbpdus.is_set
	|| stpxbackbonefastinrlqrequestpdus.is_set
	|| stpxbackbonefastinrlqresponsepdus.is_set
	|| stpxbackbonefastoperenabled.is_set
	|| stpxbackbonefastoutrlqrequestpdus.is_set
	|| stpxbackbonefastoutrlqresponsepdus.is_set;
}

bool CiscoStpExtensionsMib::Stpxbackbonefastobjects::has_operation() const
{
    return is_set(operation)
	|| is_set(stpxbackbonefastenabled.operation)
	|| is_set(stpxbackbonefastininferiorbpdus.operation)
	|| is_set(stpxbackbonefastinrlqrequestpdus.operation)
	|| is_set(stpxbackbonefastinrlqresponsepdus.operation)
	|| is_set(stpxbackbonefastoperenabled.operation)
	|| is_set(stpxbackbonefastoutrlqrequestpdus.operation)
	|| is_set(stpxbackbonefastoutrlqresponsepdus.operation);
}

std::string CiscoStpExtensionsMib::Stpxbackbonefastobjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxBackboneFastObjects";

    return path_buffer.str();

}

const EntityPath CiscoStpExtensionsMib::Stpxbackbonefastobjects::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxbackbonefastenabled.is_set || is_set(stpxbackbonefastenabled.operation)) leaf_name_data.push_back(stpxbackbonefastenabled.get_name_leafdata());
    if (stpxbackbonefastininferiorbpdus.is_set || is_set(stpxbackbonefastininferiorbpdus.operation)) leaf_name_data.push_back(stpxbackbonefastininferiorbpdus.get_name_leafdata());
    if (stpxbackbonefastinrlqrequestpdus.is_set || is_set(stpxbackbonefastinrlqrequestpdus.operation)) leaf_name_data.push_back(stpxbackbonefastinrlqrequestpdus.get_name_leafdata());
    if (stpxbackbonefastinrlqresponsepdus.is_set || is_set(stpxbackbonefastinrlqresponsepdus.operation)) leaf_name_data.push_back(stpxbackbonefastinrlqresponsepdus.get_name_leafdata());
    if (stpxbackbonefastoperenabled.is_set || is_set(stpxbackbonefastoperenabled.operation)) leaf_name_data.push_back(stpxbackbonefastoperenabled.get_name_leafdata());
    if (stpxbackbonefastoutrlqrequestpdus.is_set || is_set(stpxbackbonefastoutrlqrequestpdus.operation)) leaf_name_data.push_back(stpxbackbonefastoutrlqrequestpdus.get_name_leafdata());
    if (stpxbackbonefastoutrlqresponsepdus.is_set || is_set(stpxbackbonefastoutrlqresponsepdus.operation)) leaf_name_data.push_back(stpxbackbonefastoutrlqresponsepdus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoStpExtensionsMib::Stpxbackbonefastobjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoStpExtensionsMib::Stpxbackbonefastobjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoStpExtensionsMib::Stpxbackbonefastobjects::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "stpxBackboneFastEnabled")
    {
        stpxbackbonefastenabled = value;
    }
    if(value_path == "stpxBackboneFastInInferiorBPDUs")
    {
        stpxbackbonefastininferiorbpdus = value;
    }
    if(value_path == "stpxBackboneFastInRLQRequestPDUs")
    {
        stpxbackbonefastinrlqrequestpdus = value;
    }
    if(value_path == "stpxBackboneFastInRLQResponsePDUs")
    {
        stpxbackbonefastinrlqresponsepdus = value;
    }
    if(value_path == "stpxBackboneFastOperEnabled")
    {
        stpxbackbonefastoperenabled = value;
    }
    if(value_path == "stpxBackboneFastOutRLQRequestPDUs")
    {
        stpxbackbonefastoutrlqrequestpdus = value;
    }
    if(value_path == "stpxBackboneFastOutRLQResponsePDUs")
    {
        stpxbackbonefastoutrlqresponsepdus = value;
    }
}

CiscoStpExtensionsMib::Stpxspanningtreeobjects::Stpxspanningtreeobjects()
    :
    stpxextendedsysidadminenabled{YType::boolean, "stpxExtendedSysIDAdminEnabled"},
    stpxextendedsysidoperenabled{YType::boolean, "stpxExtendedSysIDOperEnabled"},
    stpxnotificationenable{YType::bits, "stpxNotificationEnable"},
    stpxspanningtreepathcostmode{YType::enumeration, "stpxSpanningTreePathCostMode"},
    stpxspanningtreepathcostopermode{YType::enumeration, "stpxSpanningTreePathCostOperMode"},
    stpxspanningtreetype{YType::enumeration, "stpxSpanningTreeType"}
{
    yang_name = "stpxSpanningTreeObjects"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB";
}

CiscoStpExtensionsMib::Stpxspanningtreeobjects::~Stpxspanningtreeobjects()
{
}

bool CiscoStpExtensionsMib::Stpxspanningtreeobjects::has_data() const
{
    return stpxextendedsysidadminenabled.is_set
	|| stpxextendedsysidoperenabled.is_set
	|| stpxnotificationenable.is_set
	|| stpxspanningtreepathcostmode.is_set
	|| stpxspanningtreepathcostopermode.is_set
	|| stpxspanningtreetype.is_set;
}

bool CiscoStpExtensionsMib::Stpxspanningtreeobjects::has_operation() const
{
    return is_set(operation)
	|| is_set(stpxextendedsysidadminenabled.operation)
	|| is_set(stpxextendedsysidoperenabled.operation)
	|| is_set(stpxnotificationenable.operation)
	|| is_set(stpxspanningtreepathcostmode.operation)
	|| is_set(stpxspanningtreepathcostopermode.operation)
	|| is_set(stpxspanningtreetype.operation);
}

std::string CiscoStpExtensionsMib::Stpxspanningtreeobjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxSpanningTreeObjects";

    return path_buffer.str();

}

const EntityPath CiscoStpExtensionsMib::Stpxspanningtreeobjects::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxextendedsysidadminenabled.is_set || is_set(stpxextendedsysidadminenabled.operation)) leaf_name_data.push_back(stpxextendedsysidadminenabled.get_name_leafdata());
    if (stpxextendedsysidoperenabled.is_set || is_set(stpxextendedsysidoperenabled.operation)) leaf_name_data.push_back(stpxextendedsysidoperenabled.get_name_leafdata());
    if (stpxnotificationenable.is_set || is_set(stpxnotificationenable.operation)) leaf_name_data.push_back(stpxnotificationenable.get_name_leafdata());
    if (stpxspanningtreepathcostmode.is_set || is_set(stpxspanningtreepathcostmode.operation)) leaf_name_data.push_back(stpxspanningtreepathcostmode.get_name_leafdata());
    if (stpxspanningtreepathcostopermode.is_set || is_set(stpxspanningtreepathcostopermode.operation)) leaf_name_data.push_back(stpxspanningtreepathcostopermode.get_name_leafdata());
    if (stpxspanningtreetype.is_set || is_set(stpxspanningtreetype.operation)) leaf_name_data.push_back(stpxspanningtreetype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoStpExtensionsMib::Stpxspanningtreeobjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoStpExtensionsMib::Stpxspanningtreeobjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoStpExtensionsMib::Stpxspanningtreeobjects::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "stpxExtendedSysIDAdminEnabled")
    {
        stpxextendedsysidadminenabled = value;
    }
    if(value_path == "stpxExtendedSysIDOperEnabled")
    {
        stpxextendedsysidoperenabled = value;
    }
    if(value_path == "stpxNotificationEnable")
    {
        stpxnotificationenable[value] = true;
    }
    if(value_path == "stpxSpanningTreePathCostMode")
    {
        stpxspanningtreepathcostmode = value;
    }
    if(value_path == "stpxSpanningTreePathCostOperMode")
    {
        stpxspanningtreepathcostopermode = value;
    }
    if(value_path == "stpxSpanningTreeType")
    {
        stpxspanningtreetype = value;
    }
}

CiscoStpExtensionsMib::Stpxmistpobjects::Stpxmistpobjects()
    :
    stpxmistpinstancenumber{YType::int32, "stpxMISTPInstanceNumber"}
{
    yang_name = "stpxMISTPObjects"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB";
}

CiscoStpExtensionsMib::Stpxmistpobjects::~Stpxmistpobjects()
{
}

bool CiscoStpExtensionsMib::Stpxmistpobjects::has_data() const
{
    return stpxmistpinstancenumber.is_set;
}

bool CiscoStpExtensionsMib::Stpxmistpobjects::has_operation() const
{
    return is_set(operation)
	|| is_set(stpxmistpinstancenumber.operation);
}

std::string CiscoStpExtensionsMib::Stpxmistpobjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxMISTPObjects";

    return path_buffer.str();

}

const EntityPath CiscoStpExtensionsMib::Stpxmistpobjects::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxmistpinstancenumber.is_set || is_set(stpxmistpinstancenumber.operation)) leaf_name_data.push_back(stpxmistpinstancenumber.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoStpExtensionsMib::Stpxmistpobjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoStpExtensionsMib::Stpxmistpobjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoStpExtensionsMib::Stpxmistpobjects::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "stpxMISTPInstanceNumber")
    {
        stpxmistpinstancenumber = value;
    }
}

CiscoStpExtensionsMib::Stpxloopguardobjects::Stpxloopguardobjects()
    :
    stpxloopguardglobaldefaultmode{YType::enumeration, "stpxLoopGuardGlobalDefaultMode"}
{
    yang_name = "stpxLoopGuardObjects"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB";
}

CiscoStpExtensionsMib::Stpxloopguardobjects::~Stpxloopguardobjects()
{
}

bool CiscoStpExtensionsMib::Stpxloopguardobjects::has_data() const
{
    return stpxloopguardglobaldefaultmode.is_set;
}

bool CiscoStpExtensionsMib::Stpxloopguardobjects::has_operation() const
{
    return is_set(operation)
	|| is_set(stpxloopguardglobaldefaultmode.operation);
}

std::string CiscoStpExtensionsMib::Stpxloopguardobjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxLoopGuardObjects";

    return path_buffer.str();

}

const EntityPath CiscoStpExtensionsMib::Stpxloopguardobjects::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxloopguardglobaldefaultmode.is_set || is_set(stpxloopguardglobaldefaultmode.operation)) leaf_name_data.push_back(stpxloopguardglobaldefaultmode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoStpExtensionsMib::Stpxloopguardobjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoStpExtensionsMib::Stpxloopguardobjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoStpExtensionsMib::Stpxloopguardobjects::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "stpxLoopGuardGlobalDefaultMode")
    {
        stpxloopguardglobaldefaultmode = value;
    }
}

CiscoStpExtensionsMib::Stpxfaststartobjects::Stpxfaststartobjects()
    :
    stpxfaststartbpdufilterenable{YType::boolean, "stpxFastStartBpduFilterEnable"},
    stpxfaststartbpduguardenable{YType::boolean, "stpxFastStartBpduGuardEnable"},
    stpxfaststartglobaldefaultmode{YType::enumeration, "stpxFastStartGlobalDefaultMode"}
{
    yang_name = "stpxFastStartObjects"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB";
}

CiscoStpExtensionsMib::Stpxfaststartobjects::~Stpxfaststartobjects()
{
}

bool CiscoStpExtensionsMib::Stpxfaststartobjects::has_data() const
{
    return stpxfaststartbpdufilterenable.is_set
	|| stpxfaststartbpduguardenable.is_set
	|| stpxfaststartglobaldefaultmode.is_set;
}

bool CiscoStpExtensionsMib::Stpxfaststartobjects::has_operation() const
{
    return is_set(operation)
	|| is_set(stpxfaststartbpdufilterenable.operation)
	|| is_set(stpxfaststartbpduguardenable.operation)
	|| is_set(stpxfaststartglobaldefaultmode.operation);
}

std::string CiscoStpExtensionsMib::Stpxfaststartobjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxFastStartObjects";

    return path_buffer.str();

}

const EntityPath CiscoStpExtensionsMib::Stpxfaststartobjects::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxfaststartbpdufilterenable.is_set || is_set(stpxfaststartbpdufilterenable.operation)) leaf_name_data.push_back(stpxfaststartbpdufilterenable.get_name_leafdata());
    if (stpxfaststartbpduguardenable.is_set || is_set(stpxfaststartbpduguardenable.operation)) leaf_name_data.push_back(stpxfaststartbpduguardenable.get_name_leafdata());
    if (stpxfaststartglobaldefaultmode.is_set || is_set(stpxfaststartglobaldefaultmode.operation)) leaf_name_data.push_back(stpxfaststartglobaldefaultmode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoStpExtensionsMib::Stpxfaststartobjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoStpExtensionsMib::Stpxfaststartobjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoStpExtensionsMib::Stpxfaststartobjects::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "stpxFastStartBpduFilterEnable")
    {
        stpxfaststartbpdufilterenable = value;
    }
    if(value_path == "stpxFastStartBpduGuardEnable")
    {
        stpxfaststartbpduguardenable = value;
    }
    if(value_path == "stpxFastStartGlobalDefaultMode")
    {
        stpxfaststartglobaldefaultmode = value;
    }
}

CiscoStpExtensionsMib::Stpxbpduskewingobjects::Stpxbpduskewingobjects()
    :
    stpxbpduskewingdetectionenable{YType::boolean, "stpxBpduSkewingDetectionEnable"}
{
    yang_name = "stpxBpduSkewingObjects"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB";
}

CiscoStpExtensionsMib::Stpxbpduskewingobjects::~Stpxbpduskewingobjects()
{
}

bool CiscoStpExtensionsMib::Stpxbpduskewingobjects::has_data() const
{
    return stpxbpduskewingdetectionenable.is_set;
}

bool CiscoStpExtensionsMib::Stpxbpduskewingobjects::has_operation() const
{
    return is_set(operation)
	|| is_set(stpxbpduskewingdetectionenable.operation);
}

std::string CiscoStpExtensionsMib::Stpxbpduskewingobjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxBpduSkewingObjects";

    return path_buffer.str();

}

const EntityPath CiscoStpExtensionsMib::Stpxbpduskewingobjects::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxbpduskewingdetectionenable.is_set || is_set(stpxbpduskewingdetectionenable.operation)) leaf_name_data.push_back(stpxbpduskewingdetectionenable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoStpExtensionsMib::Stpxbpduskewingobjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoStpExtensionsMib::Stpxbpduskewingobjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoStpExtensionsMib::Stpxbpduskewingobjects::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "stpxBpduSkewingDetectionEnable")
    {
        stpxbpduskewingdetectionenable = value;
    }
}

CiscoStpExtensionsMib::Stpxmstobjects::Stpxmstobjects()
    :
    stpxmstmaxhopcount{YType::int32, "stpxMSTMaxHopCount"},
    stpxmstmaxinstancenumber{YType::int32, "stpxMSTMaxInstanceNumber"},
    stpxmstregioneditbufferoperation{YType::enumeration, "stpxMSTRegionEditBufferOperation"},
    stpxmstregioneditbufferstatus{YType::enumeration, "stpxMSTRegionEditBufferStatus"},
    stpxmstregioneditname{YType::str, "stpxMSTRegionEditName"},
    stpxmstregioneditrevision{YType::int32, "stpxMSTRegionEditRevision"},
    stpxmstregionname{YType::str, "stpxMSTRegionName"},
    stpxmstregionrevision{YType::int32, "stpxMSTRegionRevision"}
{
    yang_name = "stpxMSTObjects"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB";
}

CiscoStpExtensionsMib::Stpxmstobjects::~Stpxmstobjects()
{
}

bool CiscoStpExtensionsMib::Stpxmstobjects::has_data() const
{
    return stpxmstmaxhopcount.is_set
	|| stpxmstmaxinstancenumber.is_set
	|| stpxmstregioneditbufferoperation.is_set
	|| stpxmstregioneditbufferstatus.is_set
	|| stpxmstregioneditname.is_set
	|| stpxmstregioneditrevision.is_set
	|| stpxmstregionname.is_set
	|| stpxmstregionrevision.is_set;
}

bool CiscoStpExtensionsMib::Stpxmstobjects::has_operation() const
{
    return is_set(operation)
	|| is_set(stpxmstmaxhopcount.operation)
	|| is_set(stpxmstmaxinstancenumber.operation)
	|| is_set(stpxmstregioneditbufferoperation.operation)
	|| is_set(stpxmstregioneditbufferstatus.operation)
	|| is_set(stpxmstregioneditname.operation)
	|| is_set(stpxmstregioneditrevision.operation)
	|| is_set(stpxmstregionname.operation)
	|| is_set(stpxmstregionrevision.operation);
}

std::string CiscoStpExtensionsMib::Stpxmstobjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxMSTObjects";

    return path_buffer.str();

}

const EntityPath CiscoStpExtensionsMib::Stpxmstobjects::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxmstmaxhopcount.is_set || is_set(stpxmstmaxhopcount.operation)) leaf_name_data.push_back(stpxmstmaxhopcount.get_name_leafdata());
    if (stpxmstmaxinstancenumber.is_set || is_set(stpxmstmaxinstancenumber.operation)) leaf_name_data.push_back(stpxmstmaxinstancenumber.get_name_leafdata());
    if (stpxmstregioneditbufferoperation.is_set || is_set(stpxmstregioneditbufferoperation.operation)) leaf_name_data.push_back(stpxmstregioneditbufferoperation.get_name_leafdata());
    if (stpxmstregioneditbufferstatus.is_set || is_set(stpxmstregioneditbufferstatus.operation)) leaf_name_data.push_back(stpxmstregioneditbufferstatus.get_name_leafdata());
    if (stpxmstregioneditname.is_set || is_set(stpxmstregioneditname.operation)) leaf_name_data.push_back(stpxmstregioneditname.get_name_leafdata());
    if (stpxmstregioneditrevision.is_set || is_set(stpxmstregioneditrevision.operation)) leaf_name_data.push_back(stpxmstregioneditrevision.get_name_leafdata());
    if (stpxmstregionname.is_set || is_set(stpxmstregionname.operation)) leaf_name_data.push_back(stpxmstregionname.get_name_leafdata());
    if (stpxmstregionrevision.is_set || is_set(stpxmstregionrevision.operation)) leaf_name_data.push_back(stpxmstregionrevision.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoStpExtensionsMib::Stpxmstobjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoStpExtensionsMib::Stpxmstobjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoStpExtensionsMib::Stpxmstobjects::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "stpxMSTMaxHopCount")
    {
        stpxmstmaxhopcount = value;
    }
    if(value_path == "stpxMSTMaxInstanceNumber")
    {
        stpxmstmaxinstancenumber = value;
    }
    if(value_path == "stpxMSTRegionEditBufferOperation")
    {
        stpxmstregioneditbufferoperation = value;
    }
    if(value_path == "stpxMSTRegionEditBufferStatus")
    {
        stpxmstregioneditbufferstatus = value;
    }
    if(value_path == "stpxMSTRegionEditName")
    {
        stpxmstregioneditname = value;
    }
    if(value_path == "stpxMSTRegionEditRevision")
    {
        stpxmstregioneditrevision = value;
    }
    if(value_path == "stpxMSTRegionName")
    {
        stpxmstregionname = value;
    }
    if(value_path == "stpxMSTRegionRevision")
    {
        stpxmstregionrevision = value;
    }
}

CiscoStpExtensionsMib::Stpxrstpobjects::Stpxrstpobjects()
    :
    stpxrstptransmitholdcount{YType::uint32, "stpxRSTPTransmitHoldCount"}
{
    yang_name = "stpxRSTPObjects"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB";
}

CiscoStpExtensionsMib::Stpxrstpobjects::~Stpxrstpobjects()
{
}

bool CiscoStpExtensionsMib::Stpxrstpobjects::has_data() const
{
    return stpxrstptransmitholdcount.is_set;
}

bool CiscoStpExtensionsMib::Stpxrstpobjects::has_operation() const
{
    return is_set(operation)
	|| is_set(stpxrstptransmitholdcount.operation);
}

std::string CiscoStpExtensionsMib::Stpxrstpobjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxRSTPObjects";

    return path_buffer.str();

}

const EntityPath CiscoStpExtensionsMib::Stpxrstpobjects::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxrstptransmitholdcount.is_set || is_set(stpxrstptransmitholdcount.operation)) leaf_name_data.push_back(stpxrstptransmitholdcount.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoStpExtensionsMib::Stpxrstpobjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoStpExtensionsMib::Stpxrstpobjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoStpExtensionsMib::Stpxrstpobjects::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "stpxRSTPTransmitHoldCount")
    {
        stpxrstptransmitholdcount = value;
    }
}

CiscoStpExtensionsMib::Stpxsmstobjects::Stpxsmstobjects()
    :
    stpxsmstconfigdigest{YType::str, "stpxSMSTConfigDigest"},
    stpxsmstconfigprestandarddigest{YType::str, "stpxSMSTConfigPreStandardDigest"},
    stpxsmstmaxhopcount{YType::uint32, "stpxSMSTMaxHopCount"},
    stpxsmstmaxinstanceid{YType::uint32, "stpxSMSTMaxInstanceID"},
    stpxsmstmaxinstances{YType::uint32, "stpxSMSTMaxInstances"},
    stpxsmstregioneditrevision{YType::uint32, "stpxSMSTRegionEditRevision"},
    stpxsmstregionrevision{YType::uint32, "stpxSMSTRegionRevision"}
{
    yang_name = "stpxSMSTObjects"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB";
}

CiscoStpExtensionsMib::Stpxsmstobjects::~Stpxsmstobjects()
{
}

bool CiscoStpExtensionsMib::Stpxsmstobjects::has_data() const
{
    return stpxsmstconfigdigest.is_set
	|| stpxsmstconfigprestandarddigest.is_set
	|| stpxsmstmaxhopcount.is_set
	|| stpxsmstmaxinstanceid.is_set
	|| stpxsmstmaxinstances.is_set
	|| stpxsmstregioneditrevision.is_set
	|| stpxsmstregionrevision.is_set;
}

bool CiscoStpExtensionsMib::Stpxsmstobjects::has_operation() const
{
    return is_set(operation)
	|| is_set(stpxsmstconfigdigest.operation)
	|| is_set(stpxsmstconfigprestandarddigest.operation)
	|| is_set(stpxsmstmaxhopcount.operation)
	|| is_set(stpxsmstmaxinstanceid.operation)
	|| is_set(stpxsmstmaxinstances.operation)
	|| is_set(stpxsmstregioneditrevision.operation)
	|| is_set(stpxsmstregionrevision.operation);
}

std::string CiscoStpExtensionsMib::Stpxsmstobjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxSMSTObjects";

    return path_buffer.str();

}

const EntityPath CiscoStpExtensionsMib::Stpxsmstobjects::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxsmstconfigdigest.is_set || is_set(stpxsmstconfigdigest.operation)) leaf_name_data.push_back(stpxsmstconfigdigest.get_name_leafdata());
    if (stpxsmstconfigprestandarddigest.is_set || is_set(stpxsmstconfigprestandarddigest.operation)) leaf_name_data.push_back(stpxsmstconfigprestandarddigest.get_name_leafdata());
    if (stpxsmstmaxhopcount.is_set || is_set(stpxsmstmaxhopcount.operation)) leaf_name_data.push_back(stpxsmstmaxhopcount.get_name_leafdata());
    if (stpxsmstmaxinstanceid.is_set || is_set(stpxsmstmaxinstanceid.operation)) leaf_name_data.push_back(stpxsmstmaxinstanceid.get_name_leafdata());
    if (stpxsmstmaxinstances.is_set || is_set(stpxsmstmaxinstances.operation)) leaf_name_data.push_back(stpxsmstmaxinstances.get_name_leafdata());
    if (stpxsmstregioneditrevision.is_set || is_set(stpxsmstregioneditrevision.operation)) leaf_name_data.push_back(stpxsmstregioneditrevision.get_name_leafdata());
    if (stpxsmstregionrevision.is_set || is_set(stpxsmstregionrevision.operation)) leaf_name_data.push_back(stpxsmstregionrevision.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoStpExtensionsMib::Stpxsmstobjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoStpExtensionsMib::Stpxsmstobjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoStpExtensionsMib::Stpxsmstobjects::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "stpxSMSTConfigDigest")
    {
        stpxsmstconfigdigest = value;
    }
    if(value_path == "stpxSMSTConfigPreStandardDigest")
    {
        stpxsmstconfigprestandarddigest = value;
    }
    if(value_path == "stpxSMSTMaxHopCount")
    {
        stpxsmstmaxhopcount = value;
    }
    if(value_path == "stpxSMSTMaxInstanceID")
    {
        stpxsmstmaxinstanceid = value;
    }
    if(value_path == "stpxSMSTMaxInstances")
    {
        stpxsmstmaxinstances = value;
    }
    if(value_path == "stpxSMSTRegionEditRevision")
    {
        stpxsmstregioneditrevision = value;
    }
    if(value_path == "stpxSMSTRegionRevision")
    {
        stpxsmstregionrevision = value;
    }
}

CiscoStpExtensionsMib::Stpxpvstvlantable::Stpxpvstvlantable()
{
    yang_name = "stpxPVSTVlanTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB";
}

CiscoStpExtensionsMib::Stpxpvstvlantable::~Stpxpvstvlantable()
{
}

bool CiscoStpExtensionsMib::Stpxpvstvlantable::has_data() const
{
    for (std::size_t index=0; index<stpxpvstvlanentry.size(); index++)
    {
        if(stpxpvstvlanentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoStpExtensionsMib::Stpxpvstvlantable::has_operation() const
{
    for (std::size_t index=0; index<stpxpvstvlanentry.size(); index++)
    {
        if(stpxpvstvlanentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoStpExtensionsMib::Stpxpvstvlantable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxPVSTVlanTable";

    return path_buffer.str();

}

const EntityPath CiscoStpExtensionsMib::Stpxpvstvlantable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoStpExtensionsMib::Stpxpvstvlantable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stpxPVSTVlanEntry")
    {
        for(auto const & c : stpxpvstvlanentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoStpExtensionsMib::Stpxpvstvlantable::Stpxpvstvlanentry>();
        c->parent = this;
        stpxpvstvlanentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoStpExtensionsMib::Stpxpvstvlantable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stpxpvstvlanentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoStpExtensionsMib::Stpxpvstvlantable::set_value(const std::string & value_path, std::string value)
{
}

CiscoStpExtensionsMib::Stpxpvstvlantable::Stpxpvstvlanentry::Stpxpvstvlanentry()
    :
    stpxpvstvlanindex{YType::int32, "stpxPVSTVlanIndex"},
    stpxpvstvlanenable{YType::enumeration, "stpxPVSTVlanEnable"}
{
    yang_name = "stpxPVSTVlanEntry"; yang_parent_name = "stpxPVSTVlanTable";
}

CiscoStpExtensionsMib::Stpxpvstvlantable::Stpxpvstvlanentry::~Stpxpvstvlanentry()
{
}

bool CiscoStpExtensionsMib::Stpxpvstvlantable::Stpxpvstvlanentry::has_data() const
{
    return stpxpvstvlanindex.is_set
	|| stpxpvstvlanenable.is_set;
}

bool CiscoStpExtensionsMib::Stpxpvstvlantable::Stpxpvstvlanentry::has_operation() const
{
    return is_set(operation)
	|| is_set(stpxpvstvlanindex.operation)
	|| is_set(stpxpvstvlanenable.operation);
}

std::string CiscoStpExtensionsMib::Stpxpvstvlantable::Stpxpvstvlanentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxPVSTVlanEntry" <<"[stpxPVSTVlanIndex='" <<stpxpvstvlanindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoStpExtensionsMib::Stpxpvstvlantable::Stpxpvstvlanentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxPVSTVlanTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxpvstvlanindex.is_set || is_set(stpxpvstvlanindex.operation)) leaf_name_data.push_back(stpxpvstvlanindex.get_name_leafdata());
    if (stpxpvstvlanenable.is_set || is_set(stpxpvstvlanenable.operation)) leaf_name_data.push_back(stpxpvstvlanenable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoStpExtensionsMib::Stpxpvstvlantable::Stpxpvstvlanentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoStpExtensionsMib::Stpxpvstvlantable::Stpxpvstvlanentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoStpExtensionsMib::Stpxpvstvlantable::Stpxpvstvlanentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "stpxPVSTVlanIndex")
    {
        stpxpvstvlanindex = value;
    }
    if(value_path == "stpxPVSTVlanEnable")
    {
        stpxpvstvlanenable = value;
    }
}

CiscoStpExtensionsMib::Stpxinconsistencytable::Stpxinconsistencytable()
{
    yang_name = "stpxInconsistencyTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB";
}

CiscoStpExtensionsMib::Stpxinconsistencytable::~Stpxinconsistencytable()
{
}

bool CiscoStpExtensionsMib::Stpxinconsistencytable::has_data() const
{
    for (std::size_t index=0; index<stpxinconsistencyentry.size(); index++)
    {
        if(stpxinconsistencyentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoStpExtensionsMib::Stpxinconsistencytable::has_operation() const
{
    for (std::size_t index=0; index<stpxinconsistencyentry.size(); index++)
    {
        if(stpxinconsistencyentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoStpExtensionsMib::Stpxinconsistencytable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxInconsistencyTable";

    return path_buffer.str();

}

const EntityPath CiscoStpExtensionsMib::Stpxinconsistencytable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoStpExtensionsMib::Stpxinconsistencytable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stpxInconsistencyEntry")
    {
        for(auto const & c : stpxinconsistencyentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoStpExtensionsMib::Stpxinconsistencytable::Stpxinconsistencyentry>();
        c->parent = this;
        stpxinconsistencyentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoStpExtensionsMib::Stpxinconsistencytable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stpxinconsistencyentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoStpExtensionsMib::Stpxinconsistencytable::set_value(const std::string & value_path, std::string value)
{
}

CiscoStpExtensionsMib::Stpxinconsistencytable::Stpxinconsistencyentry::Stpxinconsistencyentry()
    :
    stpxvlanindex{YType::int32, "stpxVlanIndex"},
    stpxportindex{YType::int32, "stpxPortIndex"},
    stpxinconsistentstate{YType::bits, "stpxInconsistentState"}
{
    yang_name = "stpxInconsistencyEntry"; yang_parent_name = "stpxInconsistencyTable";
}

CiscoStpExtensionsMib::Stpxinconsistencytable::Stpxinconsistencyentry::~Stpxinconsistencyentry()
{
}

bool CiscoStpExtensionsMib::Stpxinconsistencytable::Stpxinconsistencyentry::has_data() const
{
    return stpxvlanindex.is_set
	|| stpxportindex.is_set
	|| stpxinconsistentstate.is_set;
}

bool CiscoStpExtensionsMib::Stpxinconsistencytable::Stpxinconsistencyentry::has_operation() const
{
    return is_set(operation)
	|| is_set(stpxvlanindex.operation)
	|| is_set(stpxportindex.operation)
	|| is_set(stpxinconsistentstate.operation);
}

std::string CiscoStpExtensionsMib::Stpxinconsistencytable::Stpxinconsistencyentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxInconsistencyEntry" <<"[stpxVlanIndex='" <<stpxvlanindex <<"']" <<"[stpxPortIndex='" <<stpxportindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoStpExtensionsMib::Stpxinconsistencytable::Stpxinconsistencyentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxInconsistencyTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxvlanindex.is_set || is_set(stpxvlanindex.operation)) leaf_name_data.push_back(stpxvlanindex.get_name_leafdata());
    if (stpxportindex.is_set || is_set(stpxportindex.operation)) leaf_name_data.push_back(stpxportindex.get_name_leafdata());
    if (stpxinconsistentstate.is_set || is_set(stpxinconsistentstate.operation)) leaf_name_data.push_back(stpxinconsistentstate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoStpExtensionsMib::Stpxinconsistencytable::Stpxinconsistencyentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoStpExtensionsMib::Stpxinconsistencytable::Stpxinconsistencyentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoStpExtensionsMib::Stpxinconsistencytable::Stpxinconsistencyentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "stpxVlanIndex")
    {
        stpxvlanindex = value;
    }
    if(value_path == "stpxPortIndex")
    {
        stpxportindex = value;
    }
    if(value_path == "stpxInconsistentState")
    {
        stpxinconsistentstate[value] = true;
    }
}

CiscoStpExtensionsMib::Stpxrootguardconfigtable::Stpxrootguardconfigtable()
{
    yang_name = "stpxRootGuardConfigTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB";
}

CiscoStpExtensionsMib::Stpxrootguardconfigtable::~Stpxrootguardconfigtable()
{
}

bool CiscoStpExtensionsMib::Stpxrootguardconfigtable::has_data() const
{
    for (std::size_t index=0; index<stpxrootguardconfigentry.size(); index++)
    {
        if(stpxrootguardconfigentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoStpExtensionsMib::Stpxrootguardconfigtable::has_operation() const
{
    for (std::size_t index=0; index<stpxrootguardconfigentry.size(); index++)
    {
        if(stpxrootguardconfigentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoStpExtensionsMib::Stpxrootguardconfigtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxRootGuardConfigTable";

    return path_buffer.str();

}

const EntityPath CiscoStpExtensionsMib::Stpxrootguardconfigtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoStpExtensionsMib::Stpxrootguardconfigtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stpxRootGuardConfigEntry")
    {
        for(auto const & c : stpxrootguardconfigentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoStpExtensionsMib::Stpxrootguardconfigtable::Stpxrootguardconfigentry>();
        c->parent = this;
        stpxrootguardconfigentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoStpExtensionsMib::Stpxrootguardconfigtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stpxrootguardconfigentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoStpExtensionsMib::Stpxrootguardconfigtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoStpExtensionsMib::Stpxrootguardconfigtable::Stpxrootguardconfigentry::Stpxrootguardconfigentry()
    :
    stpxrootguardconfigportindex{YType::int32, "stpxRootGuardConfigPortIndex"},
    stpxrootguardconfigenabled{YType::boolean, "stpxRootGuardConfigEnabled"}
{
    yang_name = "stpxRootGuardConfigEntry"; yang_parent_name = "stpxRootGuardConfigTable";
}

CiscoStpExtensionsMib::Stpxrootguardconfigtable::Stpxrootguardconfigentry::~Stpxrootguardconfigentry()
{
}

bool CiscoStpExtensionsMib::Stpxrootguardconfigtable::Stpxrootguardconfigentry::has_data() const
{
    return stpxrootguardconfigportindex.is_set
	|| stpxrootguardconfigenabled.is_set;
}

bool CiscoStpExtensionsMib::Stpxrootguardconfigtable::Stpxrootguardconfigentry::has_operation() const
{
    return is_set(operation)
	|| is_set(stpxrootguardconfigportindex.operation)
	|| is_set(stpxrootguardconfigenabled.operation);
}

std::string CiscoStpExtensionsMib::Stpxrootguardconfigtable::Stpxrootguardconfigentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxRootGuardConfigEntry" <<"[stpxRootGuardConfigPortIndex='" <<stpxrootguardconfigportindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoStpExtensionsMib::Stpxrootguardconfigtable::Stpxrootguardconfigentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxRootGuardConfigTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxrootguardconfigportindex.is_set || is_set(stpxrootguardconfigportindex.operation)) leaf_name_data.push_back(stpxrootguardconfigportindex.get_name_leafdata());
    if (stpxrootguardconfigenabled.is_set || is_set(stpxrootguardconfigenabled.operation)) leaf_name_data.push_back(stpxrootguardconfigenabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoStpExtensionsMib::Stpxrootguardconfigtable::Stpxrootguardconfigentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoStpExtensionsMib::Stpxrootguardconfigtable::Stpxrootguardconfigentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoStpExtensionsMib::Stpxrootguardconfigtable::Stpxrootguardconfigentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "stpxRootGuardConfigPortIndex")
    {
        stpxrootguardconfigportindex = value;
    }
    if(value_path == "stpxRootGuardConfigEnabled")
    {
        stpxrootguardconfigenabled = value;
    }
}

CiscoStpExtensionsMib::Stpxrootinconsistencytable::Stpxrootinconsistencytable()
{
    yang_name = "stpxRootInconsistencyTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB";
}

CiscoStpExtensionsMib::Stpxrootinconsistencytable::~Stpxrootinconsistencytable()
{
}

bool CiscoStpExtensionsMib::Stpxrootinconsistencytable::has_data() const
{
    for (std::size_t index=0; index<stpxrootinconsistencyentry.size(); index++)
    {
        if(stpxrootinconsistencyentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoStpExtensionsMib::Stpxrootinconsistencytable::has_operation() const
{
    for (std::size_t index=0; index<stpxrootinconsistencyentry.size(); index++)
    {
        if(stpxrootinconsistencyentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoStpExtensionsMib::Stpxrootinconsistencytable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxRootInconsistencyTable";

    return path_buffer.str();

}

const EntityPath CiscoStpExtensionsMib::Stpxrootinconsistencytable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoStpExtensionsMib::Stpxrootinconsistencytable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stpxRootInconsistencyEntry")
    {
        for(auto const & c : stpxrootinconsistencyentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoStpExtensionsMib::Stpxrootinconsistencytable::Stpxrootinconsistencyentry>();
        c->parent = this;
        stpxrootinconsistencyentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoStpExtensionsMib::Stpxrootinconsistencytable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stpxrootinconsistencyentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoStpExtensionsMib::Stpxrootinconsistencytable::set_value(const std::string & value_path, std::string value)
{
}

CiscoStpExtensionsMib::Stpxrootinconsistencytable::Stpxrootinconsistencyentry::Stpxrootinconsistencyentry()
    :
    stpxrootinconsistencyindex{YType::int32, "stpxRootInconsistencyIndex"},
    stpxrootinconsistencyportindex{YType::int32, "stpxRootInconsistencyPortIndex"},
    stpxrootinconsistencystate{YType::boolean, "stpxRootInconsistencyState"}
{
    yang_name = "stpxRootInconsistencyEntry"; yang_parent_name = "stpxRootInconsistencyTable";
}

CiscoStpExtensionsMib::Stpxrootinconsistencytable::Stpxrootinconsistencyentry::~Stpxrootinconsistencyentry()
{
}

bool CiscoStpExtensionsMib::Stpxrootinconsistencytable::Stpxrootinconsistencyentry::has_data() const
{
    return stpxrootinconsistencyindex.is_set
	|| stpxrootinconsistencyportindex.is_set
	|| stpxrootinconsistencystate.is_set;
}

bool CiscoStpExtensionsMib::Stpxrootinconsistencytable::Stpxrootinconsistencyentry::has_operation() const
{
    return is_set(operation)
	|| is_set(stpxrootinconsistencyindex.operation)
	|| is_set(stpxrootinconsistencyportindex.operation)
	|| is_set(stpxrootinconsistencystate.operation);
}

std::string CiscoStpExtensionsMib::Stpxrootinconsistencytable::Stpxrootinconsistencyentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxRootInconsistencyEntry" <<"[stpxRootInconsistencyIndex='" <<stpxrootinconsistencyindex <<"']" <<"[stpxRootInconsistencyPortIndex='" <<stpxrootinconsistencyportindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoStpExtensionsMib::Stpxrootinconsistencytable::Stpxrootinconsistencyentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxRootInconsistencyTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxrootinconsistencyindex.is_set || is_set(stpxrootinconsistencyindex.operation)) leaf_name_data.push_back(stpxrootinconsistencyindex.get_name_leafdata());
    if (stpxrootinconsistencyportindex.is_set || is_set(stpxrootinconsistencyportindex.operation)) leaf_name_data.push_back(stpxrootinconsistencyportindex.get_name_leafdata());
    if (stpxrootinconsistencystate.is_set || is_set(stpxrootinconsistencystate.operation)) leaf_name_data.push_back(stpxrootinconsistencystate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoStpExtensionsMib::Stpxrootinconsistencytable::Stpxrootinconsistencyentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoStpExtensionsMib::Stpxrootinconsistencytable::Stpxrootinconsistencyentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoStpExtensionsMib::Stpxrootinconsistencytable::Stpxrootinconsistencyentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "stpxRootInconsistencyIndex")
    {
        stpxrootinconsistencyindex = value;
    }
    if(value_path == "stpxRootInconsistencyPortIndex")
    {
        stpxrootinconsistencyportindex = value;
    }
    if(value_path == "stpxRootInconsistencyState")
    {
        stpxrootinconsistencystate = value;
    }
}

CiscoStpExtensionsMib::Stpxmistpinstancetable::Stpxmistpinstancetable()
{
    yang_name = "stpxMISTPInstanceTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB";
}

CiscoStpExtensionsMib::Stpxmistpinstancetable::~Stpxmistpinstancetable()
{
}

bool CiscoStpExtensionsMib::Stpxmistpinstancetable::has_data() const
{
    for (std::size_t index=0; index<stpxmistpinstanceentry.size(); index++)
    {
        if(stpxmistpinstanceentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoStpExtensionsMib::Stpxmistpinstancetable::has_operation() const
{
    for (std::size_t index=0; index<stpxmistpinstanceentry.size(); index++)
    {
        if(stpxmistpinstanceentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoStpExtensionsMib::Stpxmistpinstancetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxMISTPInstanceTable";

    return path_buffer.str();

}

const EntityPath CiscoStpExtensionsMib::Stpxmistpinstancetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoStpExtensionsMib::Stpxmistpinstancetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stpxMISTPInstanceEntry")
    {
        for(auto const & c : stpxmistpinstanceentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoStpExtensionsMib::Stpxmistpinstancetable::Stpxmistpinstanceentry>();
        c->parent = this;
        stpxmistpinstanceentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoStpExtensionsMib::Stpxmistpinstancetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stpxmistpinstanceentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoStpExtensionsMib::Stpxmistpinstancetable::set_value(const std::string & value_path, std::string value)
{
}

CiscoStpExtensionsMib::Stpxmistpinstancetable::Stpxmistpinstanceentry::Stpxmistpinstanceentry()
    :
    stpxmistpinstanceindex{YType::int32, "stpxMISTPInstanceIndex"},
    stpxmistpinstanceenable{YType::boolean, "stpxMISTPInstanceEnable"},
    stpxmistpinstancevlansmapped{YType::str, "stpxMISTPInstanceVlansMapped"},
    stpxmistpinstancevlansmapped2k{YType::str, "stpxMISTPInstanceVlansMapped2k"},
    stpxmistpinstancevlansmapped3k{YType::str, "stpxMISTPInstanceVlansMapped3k"},
    stpxmistpinstancevlansmapped4k{YType::str, "stpxMISTPInstanceVlansMapped4k"}
{
    yang_name = "stpxMISTPInstanceEntry"; yang_parent_name = "stpxMISTPInstanceTable";
}

CiscoStpExtensionsMib::Stpxmistpinstancetable::Stpxmistpinstanceentry::~Stpxmistpinstanceentry()
{
}

bool CiscoStpExtensionsMib::Stpxmistpinstancetable::Stpxmistpinstanceentry::has_data() const
{
    return stpxmistpinstanceindex.is_set
	|| stpxmistpinstanceenable.is_set
	|| stpxmistpinstancevlansmapped.is_set
	|| stpxmistpinstancevlansmapped2k.is_set
	|| stpxmistpinstancevlansmapped3k.is_set
	|| stpxmistpinstancevlansmapped4k.is_set;
}

bool CiscoStpExtensionsMib::Stpxmistpinstancetable::Stpxmistpinstanceentry::has_operation() const
{
    return is_set(operation)
	|| is_set(stpxmistpinstanceindex.operation)
	|| is_set(stpxmistpinstanceenable.operation)
	|| is_set(stpxmistpinstancevlansmapped.operation)
	|| is_set(stpxmistpinstancevlansmapped2k.operation)
	|| is_set(stpxmistpinstancevlansmapped3k.operation)
	|| is_set(stpxmistpinstancevlansmapped4k.operation);
}

std::string CiscoStpExtensionsMib::Stpxmistpinstancetable::Stpxmistpinstanceentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxMISTPInstanceEntry" <<"[stpxMISTPInstanceIndex='" <<stpxmistpinstanceindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoStpExtensionsMib::Stpxmistpinstancetable::Stpxmistpinstanceentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxMISTPInstanceTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxmistpinstanceindex.is_set || is_set(stpxmistpinstanceindex.operation)) leaf_name_data.push_back(stpxmistpinstanceindex.get_name_leafdata());
    if (stpxmistpinstanceenable.is_set || is_set(stpxmistpinstanceenable.operation)) leaf_name_data.push_back(stpxmistpinstanceenable.get_name_leafdata());
    if (stpxmistpinstancevlansmapped.is_set || is_set(stpxmistpinstancevlansmapped.operation)) leaf_name_data.push_back(stpxmistpinstancevlansmapped.get_name_leafdata());
    if (stpxmistpinstancevlansmapped2k.is_set || is_set(stpxmistpinstancevlansmapped2k.operation)) leaf_name_data.push_back(stpxmistpinstancevlansmapped2k.get_name_leafdata());
    if (stpxmistpinstancevlansmapped3k.is_set || is_set(stpxmistpinstancevlansmapped3k.operation)) leaf_name_data.push_back(stpxmistpinstancevlansmapped3k.get_name_leafdata());
    if (stpxmistpinstancevlansmapped4k.is_set || is_set(stpxmistpinstancevlansmapped4k.operation)) leaf_name_data.push_back(stpxmistpinstancevlansmapped4k.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoStpExtensionsMib::Stpxmistpinstancetable::Stpxmistpinstanceentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoStpExtensionsMib::Stpxmistpinstancetable::Stpxmistpinstanceentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoStpExtensionsMib::Stpxmistpinstancetable::Stpxmistpinstanceentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "stpxMISTPInstanceIndex")
    {
        stpxmistpinstanceindex = value;
    }
    if(value_path == "stpxMISTPInstanceEnable")
    {
        stpxmistpinstanceenable = value;
    }
    if(value_path == "stpxMISTPInstanceVlansMapped")
    {
        stpxmistpinstancevlansmapped = value;
    }
    if(value_path == "stpxMISTPInstanceVlansMapped2k")
    {
        stpxmistpinstancevlansmapped2k = value;
    }
    if(value_path == "stpxMISTPInstanceVlansMapped3k")
    {
        stpxmistpinstancevlansmapped3k = value;
    }
    if(value_path == "stpxMISTPInstanceVlansMapped4k")
    {
        stpxmistpinstancevlansmapped4k = value;
    }
}

CiscoStpExtensionsMib::Stpxloopguardconfigtable::Stpxloopguardconfigtable()
{
    yang_name = "stpxLoopGuardConfigTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB";
}

CiscoStpExtensionsMib::Stpxloopguardconfigtable::~Stpxloopguardconfigtable()
{
}

bool CiscoStpExtensionsMib::Stpxloopguardconfigtable::has_data() const
{
    for (std::size_t index=0; index<stpxloopguardconfigentry.size(); index++)
    {
        if(stpxloopguardconfigentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoStpExtensionsMib::Stpxloopguardconfigtable::has_operation() const
{
    for (std::size_t index=0; index<stpxloopguardconfigentry.size(); index++)
    {
        if(stpxloopguardconfigentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoStpExtensionsMib::Stpxloopguardconfigtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxLoopGuardConfigTable";

    return path_buffer.str();

}

const EntityPath CiscoStpExtensionsMib::Stpxloopguardconfigtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoStpExtensionsMib::Stpxloopguardconfigtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stpxLoopGuardConfigEntry")
    {
        for(auto const & c : stpxloopguardconfigentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoStpExtensionsMib::Stpxloopguardconfigtable::Stpxloopguardconfigentry>();
        c->parent = this;
        stpxloopguardconfigentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoStpExtensionsMib::Stpxloopguardconfigtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stpxloopguardconfigentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoStpExtensionsMib::Stpxloopguardconfigtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoStpExtensionsMib::Stpxloopguardconfigtable::Stpxloopguardconfigentry::Stpxloopguardconfigentry()
    :
    stpxloopguardconfigportindex{YType::int32, "stpxLoopGuardConfigPortIndex"},
    stpxloopguardconfigenabled{YType::boolean, "stpxLoopGuardConfigEnabled"},
    stpxloopguardconfigmode{YType::enumeration, "stpxLoopGuardConfigMode"}
{
    yang_name = "stpxLoopGuardConfigEntry"; yang_parent_name = "stpxLoopGuardConfigTable";
}

CiscoStpExtensionsMib::Stpxloopguardconfigtable::Stpxloopguardconfigentry::~Stpxloopguardconfigentry()
{
}

bool CiscoStpExtensionsMib::Stpxloopguardconfigtable::Stpxloopguardconfigentry::has_data() const
{
    return stpxloopguardconfigportindex.is_set
	|| stpxloopguardconfigenabled.is_set
	|| stpxloopguardconfigmode.is_set;
}

bool CiscoStpExtensionsMib::Stpxloopguardconfigtable::Stpxloopguardconfigentry::has_operation() const
{
    return is_set(operation)
	|| is_set(stpxloopguardconfigportindex.operation)
	|| is_set(stpxloopguardconfigenabled.operation)
	|| is_set(stpxloopguardconfigmode.operation);
}

std::string CiscoStpExtensionsMib::Stpxloopguardconfigtable::Stpxloopguardconfigentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxLoopGuardConfigEntry" <<"[stpxLoopGuardConfigPortIndex='" <<stpxloopguardconfigportindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoStpExtensionsMib::Stpxloopguardconfigtable::Stpxloopguardconfigentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxLoopGuardConfigTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxloopguardconfigportindex.is_set || is_set(stpxloopguardconfigportindex.operation)) leaf_name_data.push_back(stpxloopguardconfigportindex.get_name_leafdata());
    if (stpxloopguardconfigenabled.is_set || is_set(stpxloopguardconfigenabled.operation)) leaf_name_data.push_back(stpxloopguardconfigenabled.get_name_leafdata());
    if (stpxloopguardconfigmode.is_set || is_set(stpxloopguardconfigmode.operation)) leaf_name_data.push_back(stpxloopguardconfigmode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoStpExtensionsMib::Stpxloopguardconfigtable::Stpxloopguardconfigentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoStpExtensionsMib::Stpxloopguardconfigtable::Stpxloopguardconfigentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoStpExtensionsMib::Stpxloopguardconfigtable::Stpxloopguardconfigentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "stpxLoopGuardConfigPortIndex")
    {
        stpxloopguardconfigportindex = value;
    }
    if(value_path == "stpxLoopGuardConfigEnabled")
    {
        stpxloopguardconfigenabled = value;
    }
    if(value_path == "stpxLoopGuardConfigMode")
    {
        stpxloopguardconfigmode = value;
    }
}

CiscoStpExtensionsMib::Stpxloopinconsistencytable::Stpxloopinconsistencytable()
{
    yang_name = "stpxLoopInconsistencyTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB";
}

CiscoStpExtensionsMib::Stpxloopinconsistencytable::~Stpxloopinconsistencytable()
{
}

bool CiscoStpExtensionsMib::Stpxloopinconsistencytable::has_data() const
{
    for (std::size_t index=0; index<stpxloopinconsistencyentry.size(); index++)
    {
        if(stpxloopinconsistencyentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoStpExtensionsMib::Stpxloopinconsistencytable::has_operation() const
{
    for (std::size_t index=0; index<stpxloopinconsistencyentry.size(); index++)
    {
        if(stpxloopinconsistencyentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoStpExtensionsMib::Stpxloopinconsistencytable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxLoopInconsistencyTable";

    return path_buffer.str();

}

const EntityPath CiscoStpExtensionsMib::Stpxloopinconsistencytable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoStpExtensionsMib::Stpxloopinconsistencytable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stpxLoopInconsistencyEntry")
    {
        for(auto const & c : stpxloopinconsistencyentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoStpExtensionsMib::Stpxloopinconsistencytable::Stpxloopinconsistencyentry>();
        c->parent = this;
        stpxloopinconsistencyentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoStpExtensionsMib::Stpxloopinconsistencytable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stpxloopinconsistencyentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoStpExtensionsMib::Stpxloopinconsistencytable::set_value(const std::string & value_path, std::string value)
{
}

CiscoStpExtensionsMib::Stpxloopinconsistencytable::Stpxloopinconsistencyentry::Stpxloopinconsistencyentry()
    :
    stpxloopinconsistencyindex{YType::int32, "stpxLoopInconsistencyIndex"},
    stpxloopinconsistencyportindex{YType::int32, "stpxLoopInconsistencyPortIndex"},
    stpxloopinconsistencystate{YType::boolean, "stpxLoopInconsistencyState"}
{
    yang_name = "stpxLoopInconsistencyEntry"; yang_parent_name = "stpxLoopInconsistencyTable";
}

CiscoStpExtensionsMib::Stpxloopinconsistencytable::Stpxloopinconsistencyentry::~Stpxloopinconsistencyentry()
{
}

bool CiscoStpExtensionsMib::Stpxloopinconsistencytable::Stpxloopinconsistencyentry::has_data() const
{
    return stpxloopinconsistencyindex.is_set
	|| stpxloopinconsistencyportindex.is_set
	|| stpxloopinconsistencystate.is_set;
}

bool CiscoStpExtensionsMib::Stpxloopinconsistencytable::Stpxloopinconsistencyentry::has_operation() const
{
    return is_set(operation)
	|| is_set(stpxloopinconsistencyindex.operation)
	|| is_set(stpxloopinconsistencyportindex.operation)
	|| is_set(stpxloopinconsistencystate.operation);
}

std::string CiscoStpExtensionsMib::Stpxloopinconsistencytable::Stpxloopinconsistencyentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxLoopInconsistencyEntry" <<"[stpxLoopInconsistencyIndex='" <<stpxloopinconsistencyindex <<"']" <<"[stpxLoopInconsistencyPortIndex='" <<stpxloopinconsistencyportindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoStpExtensionsMib::Stpxloopinconsistencytable::Stpxloopinconsistencyentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxLoopInconsistencyTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxloopinconsistencyindex.is_set || is_set(stpxloopinconsistencyindex.operation)) leaf_name_data.push_back(stpxloopinconsistencyindex.get_name_leafdata());
    if (stpxloopinconsistencyportindex.is_set || is_set(stpxloopinconsistencyportindex.operation)) leaf_name_data.push_back(stpxloopinconsistencyportindex.get_name_leafdata());
    if (stpxloopinconsistencystate.is_set || is_set(stpxloopinconsistencystate.operation)) leaf_name_data.push_back(stpxloopinconsistencystate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoStpExtensionsMib::Stpxloopinconsistencytable::Stpxloopinconsistencyentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoStpExtensionsMib::Stpxloopinconsistencytable::Stpxloopinconsistencyentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoStpExtensionsMib::Stpxloopinconsistencytable::Stpxloopinconsistencyentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "stpxLoopInconsistencyIndex")
    {
        stpxloopinconsistencyindex = value;
    }
    if(value_path == "stpxLoopInconsistencyPortIndex")
    {
        stpxloopinconsistencyportindex = value;
    }
    if(value_path == "stpxLoopInconsistencyState")
    {
        stpxloopinconsistencystate = value;
    }
}

CiscoStpExtensionsMib::Stpxfaststartporttable::Stpxfaststartporttable()
{
    yang_name = "stpxFastStartPortTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB";
}

CiscoStpExtensionsMib::Stpxfaststartporttable::~Stpxfaststartporttable()
{
}

bool CiscoStpExtensionsMib::Stpxfaststartporttable::has_data() const
{
    for (std::size_t index=0; index<stpxfaststartportentry.size(); index++)
    {
        if(stpxfaststartportentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoStpExtensionsMib::Stpxfaststartporttable::has_operation() const
{
    for (std::size_t index=0; index<stpxfaststartportentry.size(); index++)
    {
        if(stpxfaststartportentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoStpExtensionsMib::Stpxfaststartporttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxFastStartPortTable";

    return path_buffer.str();

}

const EntityPath CiscoStpExtensionsMib::Stpxfaststartporttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoStpExtensionsMib::Stpxfaststartporttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stpxFastStartPortEntry")
    {
        for(auto const & c : stpxfaststartportentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoStpExtensionsMib::Stpxfaststartporttable::Stpxfaststartportentry>();
        c->parent = this;
        stpxfaststartportentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoStpExtensionsMib::Stpxfaststartporttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stpxfaststartportentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoStpExtensionsMib::Stpxfaststartporttable::set_value(const std::string & value_path, std::string value)
{
}

CiscoStpExtensionsMib::Stpxfaststartporttable::Stpxfaststartportentry::Stpxfaststartportentry()
    :
    stpxfaststartportindex{YType::int32, "stpxFastStartPortIndex"},
    stpxfaststartportbpdufiltermode{YType::enumeration, "stpxFastStartPortBpduFilterMode"},
    stpxfaststartportbpduguardmode{YType::enumeration, "stpxFastStartPortBpduGuardMode"},
    stpxfaststartportenable{YType::boolean, "stpxFastStartPortEnable"},
    stpxfaststartportmode{YType::enumeration, "stpxFastStartPortMode"}
{
    yang_name = "stpxFastStartPortEntry"; yang_parent_name = "stpxFastStartPortTable";
}

CiscoStpExtensionsMib::Stpxfaststartporttable::Stpxfaststartportentry::~Stpxfaststartportentry()
{
}

bool CiscoStpExtensionsMib::Stpxfaststartporttable::Stpxfaststartportentry::has_data() const
{
    return stpxfaststartportindex.is_set
	|| stpxfaststartportbpdufiltermode.is_set
	|| stpxfaststartportbpduguardmode.is_set
	|| stpxfaststartportenable.is_set
	|| stpxfaststartportmode.is_set;
}

bool CiscoStpExtensionsMib::Stpxfaststartporttable::Stpxfaststartportentry::has_operation() const
{
    return is_set(operation)
	|| is_set(stpxfaststartportindex.operation)
	|| is_set(stpxfaststartportbpdufiltermode.operation)
	|| is_set(stpxfaststartportbpduguardmode.operation)
	|| is_set(stpxfaststartportenable.operation)
	|| is_set(stpxfaststartportmode.operation);
}

std::string CiscoStpExtensionsMib::Stpxfaststartporttable::Stpxfaststartportentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxFastStartPortEntry" <<"[stpxFastStartPortIndex='" <<stpxfaststartportindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoStpExtensionsMib::Stpxfaststartporttable::Stpxfaststartportentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxFastStartPortTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxfaststartportindex.is_set || is_set(stpxfaststartportindex.operation)) leaf_name_data.push_back(stpxfaststartportindex.get_name_leafdata());
    if (stpxfaststartportbpdufiltermode.is_set || is_set(stpxfaststartportbpdufiltermode.operation)) leaf_name_data.push_back(stpxfaststartportbpdufiltermode.get_name_leafdata());
    if (stpxfaststartportbpduguardmode.is_set || is_set(stpxfaststartportbpduguardmode.operation)) leaf_name_data.push_back(stpxfaststartportbpduguardmode.get_name_leafdata());
    if (stpxfaststartportenable.is_set || is_set(stpxfaststartportenable.operation)) leaf_name_data.push_back(stpxfaststartportenable.get_name_leafdata());
    if (stpxfaststartportmode.is_set || is_set(stpxfaststartportmode.operation)) leaf_name_data.push_back(stpxfaststartportmode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoStpExtensionsMib::Stpxfaststartporttable::Stpxfaststartportentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoStpExtensionsMib::Stpxfaststartporttable::Stpxfaststartportentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoStpExtensionsMib::Stpxfaststartporttable::Stpxfaststartportentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "stpxFastStartPortIndex")
    {
        stpxfaststartportindex = value;
    }
    if(value_path == "stpxFastStartPortBpduFilterMode")
    {
        stpxfaststartportbpdufiltermode = value;
    }
    if(value_path == "stpxFastStartPortBpduGuardMode")
    {
        stpxfaststartportbpduguardmode = value;
    }
    if(value_path == "stpxFastStartPortEnable")
    {
        stpxfaststartportenable = value;
    }
    if(value_path == "stpxFastStartPortMode")
    {
        stpxfaststartportmode = value;
    }
}

CiscoStpExtensionsMib::Stpxfaststartopermodetable::Stpxfaststartopermodetable()
{
    yang_name = "stpxFastStartOperModeTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB";
}

CiscoStpExtensionsMib::Stpxfaststartopermodetable::~Stpxfaststartopermodetable()
{
}

bool CiscoStpExtensionsMib::Stpxfaststartopermodetable::has_data() const
{
    for (std::size_t index=0; index<stpxfaststartopermodeentry.size(); index++)
    {
        if(stpxfaststartopermodeentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoStpExtensionsMib::Stpxfaststartopermodetable::has_operation() const
{
    for (std::size_t index=0; index<stpxfaststartopermodeentry.size(); index++)
    {
        if(stpxfaststartopermodeentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoStpExtensionsMib::Stpxfaststartopermodetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxFastStartOperModeTable";

    return path_buffer.str();

}

const EntityPath CiscoStpExtensionsMib::Stpxfaststartopermodetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoStpExtensionsMib::Stpxfaststartopermodetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stpxFastStartOperModeEntry")
    {
        for(auto const & c : stpxfaststartopermodeentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoStpExtensionsMib::Stpxfaststartopermodetable::Stpxfaststartopermodeentry>();
        c->parent = this;
        stpxfaststartopermodeentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoStpExtensionsMib::Stpxfaststartopermodetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stpxfaststartopermodeentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoStpExtensionsMib::Stpxfaststartopermodetable::set_value(const std::string & value_path, std::string value)
{
}

CiscoStpExtensionsMib::Stpxfaststartopermodetable::Stpxfaststartopermodeentry::Stpxfaststartopermodeentry()
    :
    stpxfaststartopermodeinstindex{YType::int32, "stpxFastStartOperModeInstIndex"},
    stpxfaststartopermodeportindex{YType::int32, "stpxFastStartOperModePortIndex"},
    stpxfaststartopermode{YType::enumeration, "stpxFastStartOperMode"}
{
    yang_name = "stpxFastStartOperModeEntry"; yang_parent_name = "stpxFastStartOperModeTable";
}

CiscoStpExtensionsMib::Stpxfaststartopermodetable::Stpxfaststartopermodeentry::~Stpxfaststartopermodeentry()
{
}

bool CiscoStpExtensionsMib::Stpxfaststartopermodetable::Stpxfaststartopermodeentry::has_data() const
{
    return stpxfaststartopermodeinstindex.is_set
	|| stpxfaststartopermodeportindex.is_set
	|| stpxfaststartopermode.is_set;
}

bool CiscoStpExtensionsMib::Stpxfaststartopermodetable::Stpxfaststartopermodeentry::has_operation() const
{
    return is_set(operation)
	|| is_set(stpxfaststartopermodeinstindex.operation)
	|| is_set(stpxfaststartopermodeportindex.operation)
	|| is_set(stpxfaststartopermode.operation);
}

std::string CiscoStpExtensionsMib::Stpxfaststartopermodetable::Stpxfaststartopermodeentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxFastStartOperModeEntry" <<"[stpxFastStartOperModeInstIndex='" <<stpxfaststartopermodeinstindex <<"']" <<"[stpxFastStartOperModePortIndex='" <<stpxfaststartopermodeportindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoStpExtensionsMib::Stpxfaststartopermodetable::Stpxfaststartopermodeentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxFastStartOperModeTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxfaststartopermodeinstindex.is_set || is_set(stpxfaststartopermodeinstindex.operation)) leaf_name_data.push_back(stpxfaststartopermodeinstindex.get_name_leafdata());
    if (stpxfaststartopermodeportindex.is_set || is_set(stpxfaststartopermodeportindex.operation)) leaf_name_data.push_back(stpxfaststartopermodeportindex.get_name_leafdata());
    if (stpxfaststartopermode.is_set || is_set(stpxfaststartopermode.operation)) leaf_name_data.push_back(stpxfaststartopermode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoStpExtensionsMib::Stpxfaststartopermodetable::Stpxfaststartopermodeentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoStpExtensionsMib::Stpxfaststartopermodetable::Stpxfaststartopermodeentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoStpExtensionsMib::Stpxfaststartopermodetable::Stpxfaststartopermodeentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "stpxFastStartOperModeInstIndex")
    {
        stpxfaststartopermodeinstindex = value;
    }
    if(value_path == "stpxFastStartOperModePortIndex")
    {
        stpxfaststartopermodeportindex = value;
    }
    if(value_path == "stpxFastStartOperMode")
    {
        stpxfaststartopermode = value;
    }
}

CiscoStpExtensionsMib::Stpxbpduskewingtable::Stpxbpduskewingtable()
{
    yang_name = "stpxBpduSkewingTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB";
}

CiscoStpExtensionsMib::Stpxbpduskewingtable::~Stpxbpduskewingtable()
{
}

bool CiscoStpExtensionsMib::Stpxbpduskewingtable::has_data() const
{
    for (std::size_t index=0; index<stpxbpduskewingentry.size(); index++)
    {
        if(stpxbpduskewingentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoStpExtensionsMib::Stpxbpduskewingtable::has_operation() const
{
    for (std::size_t index=0; index<stpxbpduskewingentry.size(); index++)
    {
        if(stpxbpduskewingentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoStpExtensionsMib::Stpxbpduskewingtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxBpduSkewingTable";

    return path_buffer.str();

}

const EntityPath CiscoStpExtensionsMib::Stpxbpduskewingtable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoStpExtensionsMib::Stpxbpduskewingtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stpxBpduSkewingEntry")
    {
        for(auto const & c : stpxbpduskewingentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoStpExtensionsMib::Stpxbpduskewingtable::Stpxbpduskewingentry>();
        c->parent = this;
        stpxbpduskewingentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoStpExtensionsMib::Stpxbpduskewingtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stpxbpduskewingentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoStpExtensionsMib::Stpxbpduskewingtable::set_value(const std::string & value_path, std::string value)
{
}

CiscoStpExtensionsMib::Stpxbpduskewingtable::Stpxbpduskewingentry::Stpxbpduskewingentry()
    :
    stpxbpduskewinginstanceindex{YType::int32, "stpxBpduSkewingInstanceIndex"},
    stpxbpduskewingportindex{YType::int32, "stpxBpduSkewingPortIndex"},
    stpxbpduskewinglastskewduration{YType::uint32, "stpxBpduSkewingLastSkewDuration"},
    stpxbpduskewingworstskewduration{YType::uint32, "stpxBpduSkewingWorstSkewDuration"},
    stpxbpduskewingworstskewtime{YType::uint32, "stpxBpduSkewingWorstSkewTime"}
{
    yang_name = "stpxBpduSkewingEntry"; yang_parent_name = "stpxBpduSkewingTable";
}

CiscoStpExtensionsMib::Stpxbpduskewingtable::Stpxbpduskewingentry::~Stpxbpduskewingentry()
{
}

bool CiscoStpExtensionsMib::Stpxbpduskewingtable::Stpxbpduskewingentry::has_data() const
{
    return stpxbpduskewinginstanceindex.is_set
	|| stpxbpduskewingportindex.is_set
	|| stpxbpduskewinglastskewduration.is_set
	|| stpxbpduskewingworstskewduration.is_set
	|| stpxbpduskewingworstskewtime.is_set;
}

bool CiscoStpExtensionsMib::Stpxbpduskewingtable::Stpxbpduskewingentry::has_operation() const
{
    return is_set(operation)
	|| is_set(stpxbpduskewinginstanceindex.operation)
	|| is_set(stpxbpduskewingportindex.operation)
	|| is_set(stpxbpduskewinglastskewduration.operation)
	|| is_set(stpxbpduskewingworstskewduration.operation)
	|| is_set(stpxbpduskewingworstskewtime.operation);
}

std::string CiscoStpExtensionsMib::Stpxbpduskewingtable::Stpxbpduskewingentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxBpduSkewingEntry" <<"[stpxBpduSkewingInstanceIndex='" <<stpxbpduskewinginstanceindex <<"']" <<"[stpxBpduSkewingPortIndex='" <<stpxbpduskewingportindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoStpExtensionsMib::Stpxbpduskewingtable::Stpxbpduskewingentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxBpduSkewingTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxbpduskewinginstanceindex.is_set || is_set(stpxbpduskewinginstanceindex.operation)) leaf_name_data.push_back(stpxbpduskewinginstanceindex.get_name_leafdata());
    if (stpxbpduskewingportindex.is_set || is_set(stpxbpduskewingportindex.operation)) leaf_name_data.push_back(stpxbpduskewingportindex.get_name_leafdata());
    if (stpxbpduskewinglastskewduration.is_set || is_set(stpxbpduskewinglastskewduration.operation)) leaf_name_data.push_back(stpxbpduskewinglastskewduration.get_name_leafdata());
    if (stpxbpduskewingworstskewduration.is_set || is_set(stpxbpduskewingworstskewduration.operation)) leaf_name_data.push_back(stpxbpduskewingworstskewduration.get_name_leafdata());
    if (stpxbpduskewingworstskewtime.is_set || is_set(stpxbpduskewingworstskewtime.operation)) leaf_name_data.push_back(stpxbpduskewingworstskewtime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoStpExtensionsMib::Stpxbpduskewingtable::Stpxbpduskewingentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoStpExtensionsMib::Stpxbpduskewingtable::Stpxbpduskewingentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoStpExtensionsMib::Stpxbpduskewingtable::Stpxbpduskewingentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "stpxBpduSkewingInstanceIndex")
    {
        stpxbpduskewinginstanceindex = value;
    }
    if(value_path == "stpxBpduSkewingPortIndex")
    {
        stpxbpduskewingportindex = value;
    }
    if(value_path == "stpxBpduSkewingLastSkewDuration")
    {
        stpxbpduskewinglastskewduration = value;
    }
    if(value_path == "stpxBpduSkewingWorstSkewDuration")
    {
        stpxbpduskewingworstskewduration = value;
    }
    if(value_path == "stpxBpduSkewingWorstSkewTime")
    {
        stpxbpduskewingworstskewtime = value;
    }
}

CiscoStpExtensionsMib::Stpxmstinstancetable::Stpxmstinstancetable()
{
    yang_name = "stpxMSTInstanceTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB";
}

CiscoStpExtensionsMib::Stpxmstinstancetable::~Stpxmstinstancetable()
{
}

bool CiscoStpExtensionsMib::Stpxmstinstancetable::has_data() const
{
    for (std::size_t index=0; index<stpxmstinstanceentry.size(); index++)
    {
        if(stpxmstinstanceentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoStpExtensionsMib::Stpxmstinstancetable::has_operation() const
{
    for (std::size_t index=0; index<stpxmstinstanceentry.size(); index++)
    {
        if(stpxmstinstanceentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoStpExtensionsMib::Stpxmstinstancetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxMSTInstanceTable";

    return path_buffer.str();

}

const EntityPath CiscoStpExtensionsMib::Stpxmstinstancetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoStpExtensionsMib::Stpxmstinstancetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stpxMSTInstanceEntry")
    {
        for(auto const & c : stpxmstinstanceentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoStpExtensionsMib::Stpxmstinstancetable::Stpxmstinstanceentry>();
        c->parent = this;
        stpxmstinstanceentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoStpExtensionsMib::Stpxmstinstancetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stpxmstinstanceentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoStpExtensionsMib::Stpxmstinstancetable::set_value(const std::string & value_path, std::string value)
{
}

CiscoStpExtensionsMib::Stpxmstinstancetable::Stpxmstinstanceentry::Stpxmstinstanceentry()
    :
    stpxmstinstanceindex{YType::int32, "stpxMSTInstanceIndex"},
    stpxmstinstanceremaininghopcount{YType::int32, "stpxMSTInstanceRemainingHopCount"},
    stpxmstinstancevlansmapped{YType::str, "stpxMSTInstanceVlansMapped"},
    stpxmstinstancevlansmapped2k{YType::str, "stpxMSTInstanceVlansMapped2k"},
    stpxmstinstancevlansmapped3k{YType::str, "stpxMSTInstanceVlansMapped3k"},
    stpxmstinstancevlansmapped4k{YType::str, "stpxMSTInstanceVlansMapped4k"}
{
    yang_name = "stpxMSTInstanceEntry"; yang_parent_name = "stpxMSTInstanceTable";
}

CiscoStpExtensionsMib::Stpxmstinstancetable::Stpxmstinstanceentry::~Stpxmstinstanceentry()
{
}

bool CiscoStpExtensionsMib::Stpxmstinstancetable::Stpxmstinstanceentry::has_data() const
{
    return stpxmstinstanceindex.is_set
	|| stpxmstinstanceremaininghopcount.is_set
	|| stpxmstinstancevlansmapped.is_set
	|| stpxmstinstancevlansmapped2k.is_set
	|| stpxmstinstancevlansmapped3k.is_set
	|| stpxmstinstancevlansmapped4k.is_set;
}

bool CiscoStpExtensionsMib::Stpxmstinstancetable::Stpxmstinstanceentry::has_operation() const
{
    return is_set(operation)
	|| is_set(stpxmstinstanceindex.operation)
	|| is_set(stpxmstinstanceremaininghopcount.operation)
	|| is_set(stpxmstinstancevlansmapped.operation)
	|| is_set(stpxmstinstancevlansmapped2k.operation)
	|| is_set(stpxmstinstancevlansmapped3k.operation)
	|| is_set(stpxmstinstancevlansmapped4k.operation);
}

std::string CiscoStpExtensionsMib::Stpxmstinstancetable::Stpxmstinstanceentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxMSTInstanceEntry" <<"[stpxMSTInstanceIndex='" <<stpxmstinstanceindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoStpExtensionsMib::Stpxmstinstancetable::Stpxmstinstanceentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxMSTInstanceTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxmstinstanceindex.is_set || is_set(stpxmstinstanceindex.operation)) leaf_name_data.push_back(stpxmstinstanceindex.get_name_leafdata());
    if (stpxmstinstanceremaininghopcount.is_set || is_set(stpxmstinstanceremaininghopcount.operation)) leaf_name_data.push_back(stpxmstinstanceremaininghopcount.get_name_leafdata());
    if (stpxmstinstancevlansmapped.is_set || is_set(stpxmstinstancevlansmapped.operation)) leaf_name_data.push_back(stpxmstinstancevlansmapped.get_name_leafdata());
    if (stpxmstinstancevlansmapped2k.is_set || is_set(stpxmstinstancevlansmapped2k.operation)) leaf_name_data.push_back(stpxmstinstancevlansmapped2k.get_name_leafdata());
    if (stpxmstinstancevlansmapped3k.is_set || is_set(stpxmstinstancevlansmapped3k.operation)) leaf_name_data.push_back(stpxmstinstancevlansmapped3k.get_name_leafdata());
    if (stpxmstinstancevlansmapped4k.is_set || is_set(stpxmstinstancevlansmapped4k.operation)) leaf_name_data.push_back(stpxmstinstancevlansmapped4k.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoStpExtensionsMib::Stpxmstinstancetable::Stpxmstinstanceentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoStpExtensionsMib::Stpxmstinstancetable::Stpxmstinstanceentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoStpExtensionsMib::Stpxmstinstancetable::Stpxmstinstanceentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "stpxMSTInstanceIndex")
    {
        stpxmstinstanceindex = value;
    }
    if(value_path == "stpxMSTInstanceRemainingHopCount")
    {
        stpxmstinstanceremaininghopcount = value;
    }
    if(value_path == "stpxMSTInstanceVlansMapped")
    {
        stpxmstinstancevlansmapped = value;
    }
    if(value_path == "stpxMSTInstanceVlansMapped2k")
    {
        stpxmstinstancevlansmapped2k = value;
    }
    if(value_path == "stpxMSTInstanceVlansMapped3k")
    {
        stpxmstinstancevlansmapped3k = value;
    }
    if(value_path == "stpxMSTInstanceVlansMapped4k")
    {
        stpxmstinstancevlansmapped4k = value;
    }
}

CiscoStpExtensionsMib::Stpxmstinstanceedittable::Stpxmstinstanceedittable()
{
    yang_name = "stpxMSTInstanceEditTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB";
}

CiscoStpExtensionsMib::Stpxmstinstanceedittable::~Stpxmstinstanceedittable()
{
}

bool CiscoStpExtensionsMib::Stpxmstinstanceedittable::has_data() const
{
    for (std::size_t index=0; index<stpxmstinstanceeditentry.size(); index++)
    {
        if(stpxmstinstanceeditentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoStpExtensionsMib::Stpxmstinstanceedittable::has_operation() const
{
    for (std::size_t index=0; index<stpxmstinstanceeditentry.size(); index++)
    {
        if(stpxmstinstanceeditentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoStpExtensionsMib::Stpxmstinstanceedittable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxMSTInstanceEditTable";

    return path_buffer.str();

}

const EntityPath CiscoStpExtensionsMib::Stpxmstinstanceedittable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoStpExtensionsMib::Stpxmstinstanceedittable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stpxMSTInstanceEditEntry")
    {
        for(auto const & c : stpxmstinstanceeditentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoStpExtensionsMib::Stpxmstinstanceedittable::Stpxmstinstanceeditentry>();
        c->parent = this;
        stpxmstinstanceeditentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoStpExtensionsMib::Stpxmstinstanceedittable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stpxmstinstanceeditentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoStpExtensionsMib::Stpxmstinstanceedittable::set_value(const std::string & value_path, std::string value)
{
}

CiscoStpExtensionsMib::Stpxmstinstanceedittable::Stpxmstinstanceeditentry::Stpxmstinstanceeditentry()
    :
    stpxmstinstanceeditindex{YType::int32, "stpxMSTInstanceEditIndex"},
    stpxmstinstanceeditvlansmap{YType::str, "stpxMSTInstanceEditVlansMap"},
    stpxmstinstanceeditvlansmap2k{YType::str, "stpxMSTInstanceEditVlansMap2k"},
    stpxmstinstanceeditvlansmap3k{YType::str, "stpxMSTInstanceEditVlansMap3k"},
    stpxmstinstanceeditvlansmap4k{YType::str, "stpxMSTInstanceEditVlansMap4k"}
{
    yang_name = "stpxMSTInstanceEditEntry"; yang_parent_name = "stpxMSTInstanceEditTable";
}

CiscoStpExtensionsMib::Stpxmstinstanceedittable::Stpxmstinstanceeditentry::~Stpxmstinstanceeditentry()
{
}

bool CiscoStpExtensionsMib::Stpxmstinstanceedittable::Stpxmstinstanceeditentry::has_data() const
{
    return stpxmstinstanceeditindex.is_set
	|| stpxmstinstanceeditvlansmap.is_set
	|| stpxmstinstanceeditvlansmap2k.is_set
	|| stpxmstinstanceeditvlansmap3k.is_set
	|| stpxmstinstanceeditvlansmap4k.is_set;
}

bool CiscoStpExtensionsMib::Stpxmstinstanceedittable::Stpxmstinstanceeditentry::has_operation() const
{
    return is_set(operation)
	|| is_set(stpxmstinstanceeditindex.operation)
	|| is_set(stpxmstinstanceeditvlansmap.operation)
	|| is_set(stpxmstinstanceeditvlansmap2k.operation)
	|| is_set(stpxmstinstanceeditvlansmap3k.operation)
	|| is_set(stpxmstinstanceeditvlansmap4k.operation);
}

std::string CiscoStpExtensionsMib::Stpxmstinstanceedittable::Stpxmstinstanceeditentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxMSTInstanceEditEntry" <<"[stpxMSTInstanceEditIndex='" <<stpxmstinstanceeditindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoStpExtensionsMib::Stpxmstinstanceedittable::Stpxmstinstanceeditentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxMSTInstanceEditTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxmstinstanceeditindex.is_set || is_set(stpxmstinstanceeditindex.operation)) leaf_name_data.push_back(stpxmstinstanceeditindex.get_name_leafdata());
    if (stpxmstinstanceeditvlansmap.is_set || is_set(stpxmstinstanceeditvlansmap.operation)) leaf_name_data.push_back(stpxmstinstanceeditvlansmap.get_name_leafdata());
    if (stpxmstinstanceeditvlansmap2k.is_set || is_set(stpxmstinstanceeditvlansmap2k.operation)) leaf_name_data.push_back(stpxmstinstanceeditvlansmap2k.get_name_leafdata());
    if (stpxmstinstanceeditvlansmap3k.is_set || is_set(stpxmstinstanceeditvlansmap3k.operation)) leaf_name_data.push_back(stpxmstinstanceeditvlansmap3k.get_name_leafdata());
    if (stpxmstinstanceeditvlansmap4k.is_set || is_set(stpxmstinstanceeditvlansmap4k.operation)) leaf_name_data.push_back(stpxmstinstanceeditvlansmap4k.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoStpExtensionsMib::Stpxmstinstanceedittable::Stpxmstinstanceeditentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoStpExtensionsMib::Stpxmstinstanceedittable::Stpxmstinstanceeditentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoStpExtensionsMib::Stpxmstinstanceedittable::Stpxmstinstanceeditentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "stpxMSTInstanceEditIndex")
    {
        stpxmstinstanceeditindex = value;
    }
    if(value_path == "stpxMSTInstanceEditVlansMap")
    {
        stpxmstinstanceeditvlansmap = value;
    }
    if(value_path == "stpxMSTInstanceEditVlansMap2k")
    {
        stpxmstinstanceeditvlansmap2k = value;
    }
    if(value_path == "stpxMSTInstanceEditVlansMap3k")
    {
        stpxmstinstanceeditvlansmap3k = value;
    }
    if(value_path == "stpxMSTInstanceEditVlansMap4k")
    {
        stpxmstinstanceeditvlansmap4k = value;
    }
}

CiscoStpExtensionsMib::Stpxmstporttable::Stpxmstporttable()
{
    yang_name = "stpxMSTPortTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB";
}

CiscoStpExtensionsMib::Stpxmstporttable::~Stpxmstporttable()
{
}

bool CiscoStpExtensionsMib::Stpxmstporttable::has_data() const
{
    for (std::size_t index=0; index<stpxmstportentry.size(); index++)
    {
        if(stpxmstportentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoStpExtensionsMib::Stpxmstporttable::has_operation() const
{
    for (std::size_t index=0; index<stpxmstportentry.size(); index++)
    {
        if(stpxmstportentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoStpExtensionsMib::Stpxmstporttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxMSTPortTable";

    return path_buffer.str();

}

const EntityPath CiscoStpExtensionsMib::Stpxmstporttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoStpExtensionsMib::Stpxmstporttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stpxMSTPortEntry")
    {
        for(auto const & c : stpxmstportentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoStpExtensionsMib::Stpxmstporttable::Stpxmstportentry>();
        c->parent = this;
        stpxmstportentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoStpExtensionsMib::Stpxmstporttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stpxmstportentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoStpExtensionsMib::Stpxmstporttable::set_value(const std::string & value_path, std::string value)
{
}

CiscoStpExtensionsMib::Stpxmstporttable::Stpxmstportentry::Stpxmstportentry()
    :
    stpxmstportindex{YType::int32, "stpxMSTPortIndex"},
    stpxmstportadminlinktype{YType::enumeration, "stpxMSTPortAdminLinkType"},
    stpxmstportoperlinktype{YType::enumeration, "stpxMSTPortOperLinkType"},
    stpxmstportprotocolmigration{YType::boolean, "stpxMSTPortProtocolMigration"},
    stpxmstportstatus{YType::bits, "stpxMSTPortStatus"}
{
    yang_name = "stpxMSTPortEntry"; yang_parent_name = "stpxMSTPortTable";
}

CiscoStpExtensionsMib::Stpxmstporttable::Stpxmstportentry::~Stpxmstportentry()
{
}

bool CiscoStpExtensionsMib::Stpxmstporttable::Stpxmstportentry::has_data() const
{
    return stpxmstportindex.is_set
	|| stpxmstportadminlinktype.is_set
	|| stpxmstportoperlinktype.is_set
	|| stpxmstportprotocolmigration.is_set
	|| stpxmstportstatus.is_set;
}

bool CiscoStpExtensionsMib::Stpxmstporttable::Stpxmstportentry::has_operation() const
{
    return is_set(operation)
	|| is_set(stpxmstportindex.operation)
	|| is_set(stpxmstportadminlinktype.operation)
	|| is_set(stpxmstportoperlinktype.operation)
	|| is_set(stpxmstportprotocolmigration.operation)
	|| is_set(stpxmstportstatus.operation);
}

std::string CiscoStpExtensionsMib::Stpxmstporttable::Stpxmstportentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxMSTPortEntry" <<"[stpxMSTPortIndex='" <<stpxmstportindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoStpExtensionsMib::Stpxmstporttable::Stpxmstportentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxMSTPortTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxmstportindex.is_set || is_set(stpxmstportindex.operation)) leaf_name_data.push_back(stpxmstportindex.get_name_leafdata());
    if (stpxmstportadminlinktype.is_set || is_set(stpxmstportadminlinktype.operation)) leaf_name_data.push_back(stpxmstportadminlinktype.get_name_leafdata());
    if (stpxmstportoperlinktype.is_set || is_set(stpxmstportoperlinktype.operation)) leaf_name_data.push_back(stpxmstportoperlinktype.get_name_leafdata());
    if (stpxmstportprotocolmigration.is_set || is_set(stpxmstportprotocolmigration.operation)) leaf_name_data.push_back(stpxmstportprotocolmigration.get_name_leafdata());
    if (stpxmstportstatus.is_set || is_set(stpxmstportstatus.operation)) leaf_name_data.push_back(stpxmstportstatus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoStpExtensionsMib::Stpxmstporttable::Stpxmstportentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoStpExtensionsMib::Stpxmstporttable::Stpxmstportentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoStpExtensionsMib::Stpxmstporttable::Stpxmstportentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "stpxMSTPortIndex")
    {
        stpxmstportindex = value;
    }
    if(value_path == "stpxMSTPortAdminLinkType")
    {
        stpxmstportadminlinktype = value;
    }
    if(value_path == "stpxMSTPortOperLinkType")
    {
        stpxmstportoperlinktype = value;
    }
    if(value_path == "stpxMSTPortProtocolMigration")
    {
        stpxmstportprotocolmigration = value;
    }
    if(value_path == "stpxMSTPortStatus")
    {
        stpxmstportstatus[value] = true;
    }
}

CiscoStpExtensionsMib::Stpxmstportroletable::Stpxmstportroletable()
{
    yang_name = "stpxMSTPortRoleTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB";
}

CiscoStpExtensionsMib::Stpxmstportroletable::~Stpxmstportroletable()
{
}

bool CiscoStpExtensionsMib::Stpxmstportroletable::has_data() const
{
    for (std::size_t index=0; index<stpxmstportroleentry.size(); index++)
    {
        if(stpxmstportroleentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoStpExtensionsMib::Stpxmstportroletable::has_operation() const
{
    for (std::size_t index=0; index<stpxmstportroleentry.size(); index++)
    {
        if(stpxmstportroleentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoStpExtensionsMib::Stpxmstportroletable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxMSTPortRoleTable";

    return path_buffer.str();

}

const EntityPath CiscoStpExtensionsMib::Stpxmstportroletable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoStpExtensionsMib::Stpxmstportroletable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stpxMSTPortRoleEntry")
    {
        for(auto const & c : stpxmstportroleentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoStpExtensionsMib::Stpxmstportroletable::Stpxmstportroleentry>();
        c->parent = this;
        stpxmstportroleentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoStpExtensionsMib::Stpxmstportroletable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stpxmstportroleentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoStpExtensionsMib::Stpxmstportroletable::set_value(const std::string & value_path, std::string value)
{
}

CiscoStpExtensionsMib::Stpxmstportroletable::Stpxmstportroleentry::Stpxmstportroleentry()
    :
    stpxmstportroleinstanceindex{YType::int32, "stpxMSTPortRoleInstanceIndex"},
    stpxmstportroleportindex{YType::int32, "stpxMSTPortRolePortIndex"},
    stpxmstportrolevalue{YType::enumeration, "stpxMSTPortRoleValue"}
{
    yang_name = "stpxMSTPortRoleEntry"; yang_parent_name = "stpxMSTPortRoleTable";
}

CiscoStpExtensionsMib::Stpxmstportroletable::Stpxmstportroleentry::~Stpxmstportroleentry()
{
}

bool CiscoStpExtensionsMib::Stpxmstportroletable::Stpxmstportroleentry::has_data() const
{
    return stpxmstportroleinstanceindex.is_set
	|| stpxmstportroleportindex.is_set
	|| stpxmstportrolevalue.is_set;
}

bool CiscoStpExtensionsMib::Stpxmstportroletable::Stpxmstportroleentry::has_operation() const
{
    return is_set(operation)
	|| is_set(stpxmstportroleinstanceindex.operation)
	|| is_set(stpxmstportroleportindex.operation)
	|| is_set(stpxmstportrolevalue.operation);
}

std::string CiscoStpExtensionsMib::Stpxmstportroletable::Stpxmstportroleentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxMSTPortRoleEntry" <<"[stpxMSTPortRoleInstanceIndex='" <<stpxmstportroleinstanceindex <<"']" <<"[stpxMSTPortRolePortIndex='" <<stpxmstportroleportindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoStpExtensionsMib::Stpxmstportroletable::Stpxmstportroleentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxMSTPortRoleTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxmstportroleinstanceindex.is_set || is_set(stpxmstportroleinstanceindex.operation)) leaf_name_data.push_back(stpxmstportroleinstanceindex.get_name_leafdata());
    if (stpxmstportroleportindex.is_set || is_set(stpxmstportroleportindex.operation)) leaf_name_data.push_back(stpxmstportroleportindex.get_name_leafdata());
    if (stpxmstportrolevalue.is_set || is_set(stpxmstportrolevalue.operation)) leaf_name_data.push_back(stpxmstportrolevalue.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoStpExtensionsMib::Stpxmstportroletable::Stpxmstportroleentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoStpExtensionsMib::Stpxmstportroletable::Stpxmstportroleentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoStpExtensionsMib::Stpxmstportroletable::Stpxmstportroleentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "stpxMSTPortRoleInstanceIndex")
    {
        stpxmstportroleinstanceindex = value;
    }
    if(value_path == "stpxMSTPortRolePortIndex")
    {
        stpxmstportroleportindex = value;
    }
    if(value_path == "stpxMSTPortRoleValue")
    {
        stpxmstportrolevalue = value;
    }
}

CiscoStpExtensionsMib::Stpxrstpporttable::Stpxrstpporttable()
{
    yang_name = "stpxRSTPPortTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB";
}

CiscoStpExtensionsMib::Stpxrstpporttable::~Stpxrstpporttable()
{
}

bool CiscoStpExtensionsMib::Stpxrstpporttable::has_data() const
{
    for (std::size_t index=0; index<stpxrstpportentry.size(); index++)
    {
        if(stpxrstpportentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoStpExtensionsMib::Stpxrstpporttable::has_operation() const
{
    for (std::size_t index=0; index<stpxrstpportentry.size(); index++)
    {
        if(stpxrstpportentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoStpExtensionsMib::Stpxrstpporttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxRSTPPortTable";

    return path_buffer.str();

}

const EntityPath CiscoStpExtensionsMib::Stpxrstpporttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoStpExtensionsMib::Stpxrstpporttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stpxRSTPPortEntry")
    {
        for(auto const & c : stpxrstpportentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoStpExtensionsMib::Stpxrstpporttable::Stpxrstpportentry>();
        c->parent = this;
        stpxrstpportentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoStpExtensionsMib::Stpxrstpporttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stpxrstpportentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoStpExtensionsMib::Stpxrstpporttable::set_value(const std::string & value_path, std::string value)
{
}

CiscoStpExtensionsMib::Stpxrstpporttable::Stpxrstpportentry::Stpxrstpportentry()
    :
    stpxrstpportindex{YType::int32, "stpxRSTPPortIndex"},
    stpxrstpportadminlinktype{YType::enumeration, "stpxRSTPPortAdminLinkType"},
    stpxrstpportoperlinktype{YType::enumeration, "stpxRSTPPortOperLinkType"},
    stpxrstpportprotocolmigration{YType::boolean, "stpxRSTPPortProtocolMigration"}
{
    yang_name = "stpxRSTPPortEntry"; yang_parent_name = "stpxRSTPPortTable";
}

CiscoStpExtensionsMib::Stpxrstpporttable::Stpxrstpportentry::~Stpxrstpportentry()
{
}

bool CiscoStpExtensionsMib::Stpxrstpporttable::Stpxrstpportentry::has_data() const
{
    return stpxrstpportindex.is_set
	|| stpxrstpportadminlinktype.is_set
	|| stpxrstpportoperlinktype.is_set
	|| stpxrstpportprotocolmigration.is_set;
}

bool CiscoStpExtensionsMib::Stpxrstpporttable::Stpxrstpportentry::has_operation() const
{
    return is_set(operation)
	|| is_set(stpxrstpportindex.operation)
	|| is_set(stpxrstpportadminlinktype.operation)
	|| is_set(stpxrstpportoperlinktype.operation)
	|| is_set(stpxrstpportprotocolmigration.operation);
}

std::string CiscoStpExtensionsMib::Stpxrstpporttable::Stpxrstpportentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxRSTPPortEntry" <<"[stpxRSTPPortIndex='" <<stpxrstpportindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoStpExtensionsMib::Stpxrstpporttable::Stpxrstpportentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxRSTPPortTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxrstpportindex.is_set || is_set(stpxrstpportindex.operation)) leaf_name_data.push_back(stpxrstpportindex.get_name_leafdata());
    if (stpxrstpportadminlinktype.is_set || is_set(stpxrstpportadminlinktype.operation)) leaf_name_data.push_back(stpxrstpportadminlinktype.get_name_leafdata());
    if (stpxrstpportoperlinktype.is_set || is_set(stpxrstpportoperlinktype.operation)) leaf_name_data.push_back(stpxrstpportoperlinktype.get_name_leafdata());
    if (stpxrstpportprotocolmigration.is_set || is_set(stpxrstpportprotocolmigration.operation)) leaf_name_data.push_back(stpxrstpportprotocolmigration.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoStpExtensionsMib::Stpxrstpporttable::Stpxrstpportentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoStpExtensionsMib::Stpxrstpporttable::Stpxrstpportentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoStpExtensionsMib::Stpxrstpporttable::Stpxrstpportentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "stpxRSTPPortIndex")
    {
        stpxrstpportindex = value;
    }
    if(value_path == "stpxRSTPPortAdminLinkType")
    {
        stpxrstpportadminlinktype = value;
    }
    if(value_path == "stpxRSTPPortOperLinkType")
    {
        stpxrstpportoperlinktype = value;
    }
    if(value_path == "stpxRSTPPortProtocolMigration")
    {
        stpxrstpportprotocolmigration = value;
    }
}

CiscoStpExtensionsMib::Stpxrstpportroletable::Stpxrstpportroletable()
{
    yang_name = "stpxRSTPPortRoleTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB";
}

CiscoStpExtensionsMib::Stpxrstpportroletable::~Stpxrstpportroletable()
{
}

bool CiscoStpExtensionsMib::Stpxrstpportroletable::has_data() const
{
    for (std::size_t index=0; index<stpxrstpportroleentry.size(); index++)
    {
        if(stpxrstpportroleentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoStpExtensionsMib::Stpxrstpportroletable::has_operation() const
{
    for (std::size_t index=0; index<stpxrstpportroleentry.size(); index++)
    {
        if(stpxrstpportroleentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoStpExtensionsMib::Stpxrstpportroletable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxRSTPPortRoleTable";

    return path_buffer.str();

}

const EntityPath CiscoStpExtensionsMib::Stpxrstpportroletable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoStpExtensionsMib::Stpxrstpportroletable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stpxRSTPPortRoleEntry")
    {
        for(auto const & c : stpxrstpportroleentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoStpExtensionsMib::Stpxrstpportroletable::Stpxrstpportroleentry>();
        c->parent = this;
        stpxrstpportroleentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoStpExtensionsMib::Stpxrstpportroletable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stpxrstpportroleentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoStpExtensionsMib::Stpxrstpportroletable::set_value(const std::string & value_path, std::string value)
{
}

CiscoStpExtensionsMib::Stpxrstpportroletable::Stpxrstpportroleentry::Stpxrstpportroleentry()
    :
    stpxrstpportroleinstanceindex{YType::int32, "stpxRSTPPortRoleInstanceIndex"},
    stpxrstpportroleportindex{YType::int32, "stpxRSTPPortRolePortIndex"},
    stpxrstpportrolevalue{YType::enumeration, "stpxRSTPPortRoleValue"}
{
    yang_name = "stpxRSTPPortRoleEntry"; yang_parent_name = "stpxRSTPPortRoleTable";
}

CiscoStpExtensionsMib::Stpxrstpportroletable::Stpxrstpportroleentry::~Stpxrstpportroleentry()
{
}

bool CiscoStpExtensionsMib::Stpxrstpportroletable::Stpxrstpportroleentry::has_data() const
{
    return stpxrstpportroleinstanceindex.is_set
	|| stpxrstpportroleportindex.is_set
	|| stpxrstpportrolevalue.is_set;
}

bool CiscoStpExtensionsMib::Stpxrstpportroletable::Stpxrstpportroleentry::has_operation() const
{
    return is_set(operation)
	|| is_set(stpxrstpportroleinstanceindex.operation)
	|| is_set(stpxrstpportroleportindex.operation)
	|| is_set(stpxrstpportrolevalue.operation);
}

std::string CiscoStpExtensionsMib::Stpxrstpportroletable::Stpxrstpportroleentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxRSTPPortRoleEntry" <<"[stpxRSTPPortRoleInstanceIndex='" <<stpxrstpportroleinstanceindex <<"']" <<"[stpxRSTPPortRolePortIndex='" <<stpxrstpportroleportindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoStpExtensionsMib::Stpxrstpportroletable::Stpxrstpportroleentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxRSTPPortRoleTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxrstpportroleinstanceindex.is_set || is_set(stpxrstpportroleinstanceindex.operation)) leaf_name_data.push_back(stpxrstpportroleinstanceindex.get_name_leafdata());
    if (stpxrstpportroleportindex.is_set || is_set(stpxrstpportroleportindex.operation)) leaf_name_data.push_back(stpxrstpportroleportindex.get_name_leafdata());
    if (stpxrstpportrolevalue.is_set || is_set(stpxrstpportrolevalue.operation)) leaf_name_data.push_back(stpxrstpportrolevalue.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoStpExtensionsMib::Stpxrstpportroletable::Stpxrstpportroleentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoStpExtensionsMib::Stpxrstpportroletable::Stpxrstpportroleentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoStpExtensionsMib::Stpxrstpportroletable::Stpxrstpportroleentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "stpxRSTPPortRoleInstanceIndex")
    {
        stpxrstpportroleinstanceindex = value;
    }
    if(value_path == "stpxRSTPPortRolePortIndex")
    {
        stpxrstpportroleportindex = value;
    }
    if(value_path == "stpxRSTPPortRoleValue")
    {
        stpxrstpportrolevalue = value;
    }
}

CiscoStpExtensionsMib::Stpxrpvstporttable::Stpxrpvstporttable()
{
    yang_name = "stpxRPVSTPortTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB";
}

CiscoStpExtensionsMib::Stpxrpvstporttable::~Stpxrpvstporttable()
{
}

bool CiscoStpExtensionsMib::Stpxrpvstporttable::has_data() const
{
    for (std::size_t index=0; index<stpxrpvstportentry.size(); index++)
    {
        if(stpxrpvstportentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoStpExtensionsMib::Stpxrpvstporttable::has_operation() const
{
    for (std::size_t index=0; index<stpxrpvstportentry.size(); index++)
    {
        if(stpxrpvstportentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoStpExtensionsMib::Stpxrpvstporttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxRPVSTPortTable";

    return path_buffer.str();

}

const EntityPath CiscoStpExtensionsMib::Stpxrpvstporttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoStpExtensionsMib::Stpxrpvstporttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stpxRPVSTPortEntry")
    {
        for(auto const & c : stpxrpvstportentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoStpExtensionsMib::Stpxrpvstporttable::Stpxrpvstportentry>();
        c->parent = this;
        stpxrpvstportentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoStpExtensionsMib::Stpxrpvstporttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stpxrpvstportentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoStpExtensionsMib::Stpxrpvstporttable::set_value(const std::string & value_path, std::string value)
{
}

CiscoStpExtensionsMib::Stpxrpvstporttable::Stpxrpvstportentry::Stpxrpvstportentry()
    :
    stpxrpvstportvlanindex{YType::int32, "stpxRPVSTPortVlanIndex"},
    stpxrpvstportindex{YType::int32, "stpxRPVSTPortIndex"},
    stpxrpvstportstatus{YType::bits, "stpxRPVSTPortStatus"}
{
    yang_name = "stpxRPVSTPortEntry"; yang_parent_name = "stpxRPVSTPortTable";
}

CiscoStpExtensionsMib::Stpxrpvstporttable::Stpxrpvstportentry::~Stpxrpvstportentry()
{
}

bool CiscoStpExtensionsMib::Stpxrpvstporttable::Stpxrpvstportentry::has_data() const
{
    return stpxrpvstportvlanindex.is_set
	|| stpxrpvstportindex.is_set
	|| stpxrpvstportstatus.is_set;
}

bool CiscoStpExtensionsMib::Stpxrpvstporttable::Stpxrpvstportentry::has_operation() const
{
    return is_set(operation)
	|| is_set(stpxrpvstportvlanindex.operation)
	|| is_set(stpxrpvstportindex.operation)
	|| is_set(stpxrpvstportstatus.operation);
}

std::string CiscoStpExtensionsMib::Stpxrpvstporttable::Stpxrpvstportentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxRPVSTPortEntry" <<"[stpxRPVSTPortVlanIndex='" <<stpxrpvstportvlanindex <<"']" <<"[stpxRPVSTPortIndex='" <<stpxrpvstportindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoStpExtensionsMib::Stpxrpvstporttable::Stpxrpvstportentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxRPVSTPortTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxrpvstportvlanindex.is_set || is_set(stpxrpvstportvlanindex.operation)) leaf_name_data.push_back(stpxrpvstportvlanindex.get_name_leafdata());
    if (stpxrpvstportindex.is_set || is_set(stpxrpvstportindex.operation)) leaf_name_data.push_back(stpxrpvstportindex.get_name_leafdata());
    if (stpxrpvstportstatus.is_set || is_set(stpxrpvstportstatus.operation)) leaf_name_data.push_back(stpxrpvstportstatus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoStpExtensionsMib::Stpxrpvstporttable::Stpxrpvstportentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoStpExtensionsMib::Stpxrpvstporttable::Stpxrpvstportentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoStpExtensionsMib::Stpxrpvstporttable::Stpxrpvstportentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "stpxRPVSTPortVlanIndex")
    {
        stpxrpvstportvlanindex = value;
    }
    if(value_path == "stpxRPVSTPortIndex")
    {
        stpxrpvstportindex = value;
    }
    if(value_path == "stpxRPVSTPortStatus")
    {
        stpxrpvstportstatus[value] = true;
    }
}

CiscoStpExtensionsMib::Stpxsmstinstancetable::Stpxsmstinstancetable()
{
    yang_name = "stpxSMSTInstanceTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB";
}

CiscoStpExtensionsMib::Stpxsmstinstancetable::~Stpxsmstinstancetable()
{
}

bool CiscoStpExtensionsMib::Stpxsmstinstancetable::has_data() const
{
    for (std::size_t index=0; index<stpxsmstinstanceentry.size(); index++)
    {
        if(stpxsmstinstanceentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoStpExtensionsMib::Stpxsmstinstancetable::has_operation() const
{
    for (std::size_t index=0; index<stpxsmstinstanceentry.size(); index++)
    {
        if(stpxsmstinstanceentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoStpExtensionsMib::Stpxsmstinstancetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxSMSTInstanceTable";

    return path_buffer.str();

}

const EntityPath CiscoStpExtensionsMib::Stpxsmstinstancetable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoStpExtensionsMib::Stpxsmstinstancetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stpxSMSTInstanceEntry")
    {
        for(auto const & c : stpxsmstinstanceentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoStpExtensionsMib::Stpxsmstinstancetable::Stpxsmstinstanceentry>();
        c->parent = this;
        stpxsmstinstanceentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoStpExtensionsMib::Stpxsmstinstancetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stpxsmstinstanceentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoStpExtensionsMib::Stpxsmstinstancetable::set_value(const std::string & value_path, std::string value)
{
}

CiscoStpExtensionsMib::Stpxsmstinstancetable::Stpxsmstinstanceentry::Stpxsmstinstanceentry()
    :
    stpxsmstinstanceindex{YType::uint32, "stpxSMSTInstanceIndex"},
    stpxsmstinstancecistintrootcost{YType::uint32, "stpxSMSTInstanceCISTIntRootCost"},
    stpxsmstinstancecistregionalroot{YType::str, "stpxSMSTInstanceCISTRegionalRoot"},
    stpxsmstinstanceremaininghopcount{YType::int32, "stpxSMSTInstanceRemainingHopCount"},
    stpxsmstinstancevlansmapped1k2k{YType::str, "stpxSMSTInstanceVlansMapped1k2k"},
    stpxsmstinstancevlansmapped3k4k{YType::str, "stpxSMSTInstanceVlansMapped3k4k"}
{
    yang_name = "stpxSMSTInstanceEntry"; yang_parent_name = "stpxSMSTInstanceTable";
}

CiscoStpExtensionsMib::Stpxsmstinstancetable::Stpxsmstinstanceentry::~Stpxsmstinstanceentry()
{
}

bool CiscoStpExtensionsMib::Stpxsmstinstancetable::Stpxsmstinstanceentry::has_data() const
{
    return stpxsmstinstanceindex.is_set
	|| stpxsmstinstancecistintrootcost.is_set
	|| stpxsmstinstancecistregionalroot.is_set
	|| stpxsmstinstanceremaininghopcount.is_set
	|| stpxsmstinstancevlansmapped1k2k.is_set
	|| stpxsmstinstancevlansmapped3k4k.is_set;
}

bool CiscoStpExtensionsMib::Stpxsmstinstancetable::Stpxsmstinstanceentry::has_operation() const
{
    return is_set(operation)
	|| is_set(stpxsmstinstanceindex.operation)
	|| is_set(stpxsmstinstancecistintrootcost.operation)
	|| is_set(stpxsmstinstancecistregionalroot.operation)
	|| is_set(stpxsmstinstanceremaininghopcount.operation)
	|| is_set(stpxsmstinstancevlansmapped1k2k.operation)
	|| is_set(stpxsmstinstancevlansmapped3k4k.operation);
}

std::string CiscoStpExtensionsMib::Stpxsmstinstancetable::Stpxsmstinstanceentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxSMSTInstanceEntry" <<"[stpxSMSTInstanceIndex='" <<stpxsmstinstanceindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoStpExtensionsMib::Stpxsmstinstancetable::Stpxsmstinstanceentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxSMSTInstanceTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxsmstinstanceindex.is_set || is_set(stpxsmstinstanceindex.operation)) leaf_name_data.push_back(stpxsmstinstanceindex.get_name_leafdata());
    if (stpxsmstinstancecistintrootcost.is_set || is_set(stpxsmstinstancecistintrootcost.operation)) leaf_name_data.push_back(stpxsmstinstancecistintrootcost.get_name_leafdata());
    if (stpxsmstinstancecistregionalroot.is_set || is_set(stpxsmstinstancecistregionalroot.operation)) leaf_name_data.push_back(stpxsmstinstancecistregionalroot.get_name_leafdata());
    if (stpxsmstinstanceremaininghopcount.is_set || is_set(stpxsmstinstanceremaininghopcount.operation)) leaf_name_data.push_back(stpxsmstinstanceremaininghopcount.get_name_leafdata());
    if (stpxsmstinstancevlansmapped1k2k.is_set || is_set(stpxsmstinstancevlansmapped1k2k.operation)) leaf_name_data.push_back(stpxsmstinstancevlansmapped1k2k.get_name_leafdata());
    if (stpxsmstinstancevlansmapped3k4k.is_set || is_set(stpxsmstinstancevlansmapped3k4k.operation)) leaf_name_data.push_back(stpxsmstinstancevlansmapped3k4k.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoStpExtensionsMib::Stpxsmstinstancetable::Stpxsmstinstanceentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoStpExtensionsMib::Stpxsmstinstancetable::Stpxsmstinstanceentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoStpExtensionsMib::Stpxsmstinstancetable::Stpxsmstinstanceentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "stpxSMSTInstanceIndex")
    {
        stpxsmstinstanceindex = value;
    }
    if(value_path == "stpxSMSTInstanceCISTIntRootCost")
    {
        stpxsmstinstancecistintrootcost = value;
    }
    if(value_path == "stpxSMSTInstanceCISTRegionalRoot")
    {
        stpxsmstinstancecistregionalroot = value;
    }
    if(value_path == "stpxSMSTInstanceRemainingHopCount")
    {
        stpxsmstinstanceremaininghopcount = value;
    }
    if(value_path == "stpxSMSTInstanceVlansMapped1k2k")
    {
        stpxsmstinstancevlansmapped1k2k = value;
    }
    if(value_path == "stpxSMSTInstanceVlansMapped3k4k")
    {
        stpxsmstinstancevlansmapped3k4k = value;
    }
}

CiscoStpExtensionsMib::Stpxsmstinstanceedittable::Stpxsmstinstanceedittable()
{
    yang_name = "stpxSMSTInstanceEditTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB";
}

CiscoStpExtensionsMib::Stpxsmstinstanceedittable::~Stpxsmstinstanceedittable()
{
}

bool CiscoStpExtensionsMib::Stpxsmstinstanceedittable::has_data() const
{
    for (std::size_t index=0; index<stpxsmstinstanceeditentry.size(); index++)
    {
        if(stpxsmstinstanceeditentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoStpExtensionsMib::Stpxsmstinstanceedittable::has_operation() const
{
    for (std::size_t index=0; index<stpxsmstinstanceeditentry.size(); index++)
    {
        if(stpxsmstinstanceeditentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoStpExtensionsMib::Stpxsmstinstanceedittable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxSMSTInstanceEditTable";

    return path_buffer.str();

}

const EntityPath CiscoStpExtensionsMib::Stpxsmstinstanceedittable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoStpExtensionsMib::Stpxsmstinstanceedittable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stpxSMSTInstanceEditEntry")
    {
        for(auto const & c : stpxsmstinstanceeditentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoStpExtensionsMib::Stpxsmstinstanceedittable::Stpxsmstinstanceeditentry>();
        c->parent = this;
        stpxsmstinstanceeditentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoStpExtensionsMib::Stpxsmstinstanceedittable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stpxsmstinstanceeditentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoStpExtensionsMib::Stpxsmstinstanceedittable::set_value(const std::string & value_path, std::string value)
{
}

CiscoStpExtensionsMib::Stpxsmstinstanceedittable::Stpxsmstinstanceeditentry::Stpxsmstinstanceeditentry()
    :
    stpxsmstinstanceeditindex{YType::uint32, "stpxSMSTInstanceEditIndex"},
    stpxsmstinstanceeditrowstatus{YType::enumeration, "stpxSMSTInstanceEditRowStatus"},
    stpxsmstinstanceeditvlansmap1k2k{YType::str, "stpxSMSTInstanceEditVlansMap1k2k"},
    stpxsmstinstanceeditvlansmap3k4k{YType::str, "stpxSMSTInstanceEditVlansMap3k4k"}
{
    yang_name = "stpxSMSTInstanceEditEntry"; yang_parent_name = "stpxSMSTInstanceEditTable";
}

CiscoStpExtensionsMib::Stpxsmstinstanceedittable::Stpxsmstinstanceeditentry::~Stpxsmstinstanceeditentry()
{
}

bool CiscoStpExtensionsMib::Stpxsmstinstanceedittable::Stpxsmstinstanceeditentry::has_data() const
{
    return stpxsmstinstanceeditindex.is_set
	|| stpxsmstinstanceeditrowstatus.is_set
	|| stpxsmstinstanceeditvlansmap1k2k.is_set
	|| stpxsmstinstanceeditvlansmap3k4k.is_set;
}

bool CiscoStpExtensionsMib::Stpxsmstinstanceedittable::Stpxsmstinstanceeditentry::has_operation() const
{
    return is_set(operation)
	|| is_set(stpxsmstinstanceeditindex.operation)
	|| is_set(stpxsmstinstanceeditrowstatus.operation)
	|| is_set(stpxsmstinstanceeditvlansmap1k2k.operation)
	|| is_set(stpxsmstinstanceeditvlansmap3k4k.operation);
}

std::string CiscoStpExtensionsMib::Stpxsmstinstanceedittable::Stpxsmstinstanceeditentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxSMSTInstanceEditEntry" <<"[stpxSMSTInstanceEditIndex='" <<stpxsmstinstanceeditindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoStpExtensionsMib::Stpxsmstinstanceedittable::Stpxsmstinstanceeditentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxSMSTInstanceEditTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxsmstinstanceeditindex.is_set || is_set(stpxsmstinstanceeditindex.operation)) leaf_name_data.push_back(stpxsmstinstanceeditindex.get_name_leafdata());
    if (stpxsmstinstanceeditrowstatus.is_set || is_set(stpxsmstinstanceeditrowstatus.operation)) leaf_name_data.push_back(stpxsmstinstanceeditrowstatus.get_name_leafdata());
    if (stpxsmstinstanceeditvlansmap1k2k.is_set || is_set(stpxsmstinstanceeditvlansmap1k2k.operation)) leaf_name_data.push_back(stpxsmstinstanceeditvlansmap1k2k.get_name_leafdata());
    if (stpxsmstinstanceeditvlansmap3k4k.is_set || is_set(stpxsmstinstanceeditvlansmap3k4k.operation)) leaf_name_data.push_back(stpxsmstinstanceeditvlansmap3k4k.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoStpExtensionsMib::Stpxsmstinstanceedittable::Stpxsmstinstanceeditentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoStpExtensionsMib::Stpxsmstinstanceedittable::Stpxsmstinstanceeditentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoStpExtensionsMib::Stpxsmstinstanceedittable::Stpxsmstinstanceeditentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "stpxSMSTInstanceEditIndex")
    {
        stpxsmstinstanceeditindex = value;
    }
    if(value_path == "stpxSMSTInstanceEditRowStatus")
    {
        stpxsmstinstanceeditrowstatus = value;
    }
    if(value_path == "stpxSMSTInstanceEditVlansMap1k2k")
    {
        stpxsmstinstanceeditvlansmap1k2k = value;
    }
    if(value_path == "stpxSMSTInstanceEditVlansMap3k4k")
    {
        stpxsmstinstanceeditvlansmap3k4k = value;
    }
}

CiscoStpExtensionsMib::Stpxsmstporttable::Stpxsmstporttable()
{
    yang_name = "stpxSMSTPortTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB";
}

CiscoStpExtensionsMib::Stpxsmstporttable::~Stpxsmstporttable()
{
}

bool CiscoStpExtensionsMib::Stpxsmstporttable::has_data() const
{
    for (std::size_t index=0; index<stpxsmstportentry.size(); index++)
    {
        if(stpxsmstportentry[index]->has_data())
            return true;
    }
    return false;
}

bool CiscoStpExtensionsMib::Stpxsmstporttable::has_operation() const
{
    for (std::size_t index=0; index<stpxsmstportentry.size(); index++)
    {
        if(stpxsmstportentry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string CiscoStpExtensionsMib::Stpxsmstporttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxSMSTPortTable";

    return path_buffer.str();

}

const EntityPath CiscoStpExtensionsMib::Stpxsmstporttable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoStpExtensionsMib::Stpxsmstporttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stpxSMSTPortEntry")
    {
        for(auto const & c : stpxsmstportentry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CiscoStpExtensionsMib::Stpxsmstporttable::Stpxsmstportentry>();
        c->parent = this;
        stpxsmstportentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoStpExtensionsMib::Stpxsmstporttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stpxsmstportentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CiscoStpExtensionsMib::Stpxsmstporttable::set_value(const std::string & value_path, std::string value)
{
}

CiscoStpExtensionsMib::Stpxsmstporttable::Stpxsmstportentry::Stpxsmstportentry()
    :
    stpxsmstportindex{YType::int32, "stpxSMSTPortIndex"},
    stpxsmstportadminhellotime{YType::uint32, "stpxSMSTPortAdminHelloTime"},
    stpxsmstportadminmstmode{YType::enumeration, "stpxSMSTPortAdminMSTMode"},
    stpxsmstportconfigedhellotime{YType::uint32, "stpxSMSTPortConfigedHelloTime"},
    stpxsmstportoperhellotime{YType::int32, "stpxSMSTPortOperHelloTime"},
    stpxsmstportopermstmode{YType::enumeration, "stpxSMSTPortOperMSTMode"},
    stpxsmstportstatus{YType::bits, "stpxSMSTPortStatus"}
{
    yang_name = "stpxSMSTPortEntry"; yang_parent_name = "stpxSMSTPortTable";
}

CiscoStpExtensionsMib::Stpxsmstporttable::Stpxsmstportentry::~Stpxsmstportentry()
{
}

bool CiscoStpExtensionsMib::Stpxsmstporttable::Stpxsmstportentry::has_data() const
{
    return stpxsmstportindex.is_set
	|| stpxsmstportadminhellotime.is_set
	|| stpxsmstportadminmstmode.is_set
	|| stpxsmstportconfigedhellotime.is_set
	|| stpxsmstportoperhellotime.is_set
	|| stpxsmstportopermstmode.is_set
	|| stpxsmstportstatus.is_set;
}

bool CiscoStpExtensionsMib::Stpxsmstporttable::Stpxsmstportentry::has_operation() const
{
    return is_set(operation)
	|| is_set(stpxsmstportindex.operation)
	|| is_set(stpxsmstportadminhellotime.operation)
	|| is_set(stpxsmstportadminmstmode.operation)
	|| is_set(stpxsmstportconfigedhellotime.operation)
	|| is_set(stpxsmstportoperhellotime.operation)
	|| is_set(stpxsmstportopermstmode.operation)
	|| is_set(stpxsmstportstatus.operation);
}

std::string CiscoStpExtensionsMib::Stpxsmstporttable::Stpxsmstportentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxSMSTPortEntry" <<"[stpxSMSTPortIndex='" <<stpxsmstportindex <<"']";

    return path_buffer.str();

}

const EntityPath CiscoStpExtensionsMib::Stpxsmstporttable::Stpxsmstportentry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxSMSTPortTable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxsmstportindex.is_set || is_set(stpxsmstportindex.operation)) leaf_name_data.push_back(stpxsmstportindex.get_name_leafdata());
    if (stpxsmstportadminhellotime.is_set || is_set(stpxsmstportadminhellotime.operation)) leaf_name_data.push_back(stpxsmstportadminhellotime.get_name_leafdata());
    if (stpxsmstportadminmstmode.is_set || is_set(stpxsmstportadminmstmode.operation)) leaf_name_data.push_back(stpxsmstportadminmstmode.get_name_leafdata());
    if (stpxsmstportconfigedhellotime.is_set || is_set(stpxsmstportconfigedhellotime.operation)) leaf_name_data.push_back(stpxsmstportconfigedhellotime.get_name_leafdata());
    if (stpxsmstportoperhellotime.is_set || is_set(stpxsmstportoperhellotime.operation)) leaf_name_data.push_back(stpxsmstportoperhellotime.get_name_leafdata());
    if (stpxsmstportopermstmode.is_set || is_set(stpxsmstportopermstmode.operation)) leaf_name_data.push_back(stpxsmstportopermstmode.get_name_leafdata());
    if (stpxsmstportstatus.is_set || is_set(stpxsmstportstatus.operation)) leaf_name_data.push_back(stpxsmstportstatus.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CiscoStpExtensionsMib::Stpxsmstporttable::Stpxsmstportentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CiscoStpExtensionsMib::Stpxsmstporttable::Stpxsmstportentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CiscoStpExtensionsMib::Stpxsmstporttable::Stpxsmstportentry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "stpxSMSTPortIndex")
    {
        stpxsmstportindex = value;
    }
    if(value_path == "stpxSMSTPortAdminHelloTime")
    {
        stpxsmstportadminhellotime = value;
    }
    if(value_path == "stpxSMSTPortAdminMSTMode")
    {
        stpxsmstportadminmstmode = value;
    }
    if(value_path == "stpxSMSTPortConfigedHelloTime")
    {
        stpxsmstportconfigedhellotime = value;
    }
    if(value_path == "stpxSMSTPortOperHelloTime")
    {
        stpxsmstportoperhellotime = value;
    }
    if(value_path == "stpxSMSTPortOperMSTMode")
    {
        stpxsmstportopermstmode = value;
    }
    if(value_path == "stpxSMSTPortStatus")
    {
        stpxsmstportstatus[value] = true;
    }
}

const Enum::YLeaf CiscoStpExtensionsMib::Stpxspanningtreeobjects::StpxspanningtreetypeEnum::pvstPlus {1, "pvstPlus"};
const Enum::YLeaf CiscoStpExtensionsMib::Stpxspanningtreeobjects::StpxspanningtreetypeEnum::mistp {2, "mistp"};
const Enum::YLeaf CiscoStpExtensionsMib::Stpxspanningtreeobjects::StpxspanningtreetypeEnum::mistpPvstPlus {3, "mistpPvstPlus"};
const Enum::YLeaf CiscoStpExtensionsMib::Stpxspanningtreeobjects::StpxspanningtreetypeEnum::mst {4, "mst"};
const Enum::YLeaf CiscoStpExtensionsMib::Stpxspanningtreeobjects::StpxspanningtreetypeEnum::rapidPvstPlus {5, "rapidPvstPlus"};

const Enum::YLeaf CiscoStpExtensionsMib::Stpxspanningtreeobjects::StpxspanningtreepathcostmodeEnum::short {1, "short"};
const Enum::YLeaf CiscoStpExtensionsMib::Stpxspanningtreeobjects::StpxspanningtreepathcostmodeEnum::long_ {2, "long"};

const Enum::YLeaf CiscoStpExtensionsMib::Stpxspanningtreeobjects::StpxspanningtreepathcostopermodeEnum::short {1, "short"};
const Enum::YLeaf CiscoStpExtensionsMib::Stpxspanningtreeobjects::StpxspanningtreepathcostopermodeEnum::long_ {2, "long"};

const Enum::YLeaf CiscoStpExtensionsMib::Stpxloopguardobjects::StpxloopguardglobaldefaultmodeEnum::enable {1, "enable"};
const Enum::YLeaf CiscoStpExtensionsMib::Stpxloopguardobjects::StpxloopguardglobaldefaultmodeEnum::disable {2, "disable"};

const Enum::YLeaf CiscoStpExtensionsMib::Stpxfaststartobjects::StpxfaststartglobaldefaultmodeEnum::enable {1, "enable"};
const Enum::YLeaf CiscoStpExtensionsMib::Stpxfaststartobjects::StpxfaststartglobaldefaultmodeEnum::disable {2, "disable"};

const Enum::YLeaf CiscoStpExtensionsMib::Stpxmstobjects::StpxmstregioneditbufferstatusEnum::released {1, "released"};
const Enum::YLeaf CiscoStpExtensionsMib::Stpxmstobjects::StpxmstregioneditbufferstatusEnum::acquiredBySnmp {2, "acquiredBySnmp"};
const Enum::YLeaf CiscoStpExtensionsMib::Stpxmstobjects::StpxmstregioneditbufferstatusEnum::acquiredByNonSnmp {3, "acquiredByNonSnmp"};

const Enum::YLeaf CiscoStpExtensionsMib::Stpxmstobjects::StpxmstregioneditbufferoperationEnum::other {1, "other"};
const Enum::YLeaf CiscoStpExtensionsMib::Stpxmstobjects::StpxmstregioneditbufferoperationEnum::acquire {2, "acquire"};
const Enum::YLeaf CiscoStpExtensionsMib::Stpxmstobjects::StpxmstregioneditbufferoperationEnum::releaseWithForce {3, "releaseWithForce"};
const Enum::YLeaf CiscoStpExtensionsMib::Stpxmstobjects::StpxmstregioneditbufferoperationEnum::commit {4, "commit"};
const Enum::YLeaf CiscoStpExtensionsMib::Stpxmstobjects::StpxmstregioneditbufferoperationEnum::rollBack {5, "rollBack"};

const Enum::YLeaf CiscoStpExtensionsMib::Stpxpvstvlantable::Stpxpvstvlanentry::StpxpvstvlanenableEnum::enabled {1, "enabled"};
const Enum::YLeaf CiscoStpExtensionsMib::Stpxpvstvlantable::Stpxpvstvlanentry::StpxpvstvlanenableEnum::disabled {2, "disabled"};
const Enum::YLeaf CiscoStpExtensionsMib::Stpxpvstvlantable::Stpxpvstvlanentry::StpxpvstvlanenableEnum::notApplicable {3, "notApplicable"};

const Enum::YLeaf CiscoStpExtensionsMib::Stpxloopguardconfigtable::Stpxloopguardconfigentry::StpxloopguardconfigmodeEnum::enable {1, "enable"};
const Enum::YLeaf CiscoStpExtensionsMib::Stpxloopguardconfigtable::Stpxloopguardconfigentry::StpxloopguardconfigmodeEnum::disable {2, "disable"};
const Enum::YLeaf CiscoStpExtensionsMib::Stpxloopguardconfigtable::Stpxloopguardconfigentry::StpxloopguardconfigmodeEnum::default_ {3, "default"};

const Enum::YLeaf CiscoStpExtensionsMib::Stpxfaststartporttable::Stpxfaststartportentry::StpxfaststartportmodeEnum::enable {1, "enable"};
const Enum::YLeaf CiscoStpExtensionsMib::Stpxfaststartporttable::Stpxfaststartportentry::StpxfaststartportmodeEnum::disable {2, "disable"};
const Enum::YLeaf CiscoStpExtensionsMib::Stpxfaststartporttable::Stpxfaststartportentry::StpxfaststartportmodeEnum::enableForTrunk {3, "enableForTrunk"};
const Enum::YLeaf CiscoStpExtensionsMib::Stpxfaststartporttable::Stpxfaststartportentry::StpxfaststartportmodeEnum::default_ {4, "default"};
const Enum::YLeaf CiscoStpExtensionsMib::Stpxfaststartporttable::Stpxfaststartportentry::StpxfaststartportmodeEnum::network {5, "network"};

const Enum::YLeaf CiscoStpExtensionsMib::Stpxfaststartporttable::Stpxfaststartportentry::StpxfaststartportbpduguardmodeEnum::enable {1, "enable"};
const Enum::YLeaf CiscoStpExtensionsMib::Stpxfaststartporttable::Stpxfaststartportentry::StpxfaststartportbpduguardmodeEnum::disable {2, "disable"};
const Enum::YLeaf CiscoStpExtensionsMib::Stpxfaststartporttable::Stpxfaststartportentry::StpxfaststartportbpduguardmodeEnum::default_ {3, "default"};

const Enum::YLeaf CiscoStpExtensionsMib::Stpxfaststartporttable::Stpxfaststartportentry::StpxfaststartportbpdufiltermodeEnum::enable {1, "enable"};
const Enum::YLeaf CiscoStpExtensionsMib::Stpxfaststartporttable::Stpxfaststartportentry::StpxfaststartportbpdufiltermodeEnum::disable {2, "disable"};
const Enum::YLeaf CiscoStpExtensionsMib::Stpxfaststartporttable::Stpxfaststartportentry::StpxfaststartportbpdufiltermodeEnum::default_ {3, "default"};

const Enum::YLeaf CiscoStpExtensionsMib::Stpxfaststartopermodetable::Stpxfaststartopermodeentry::StpxfaststartopermodeEnum::enabled {1, "enabled"};
const Enum::YLeaf CiscoStpExtensionsMib::Stpxfaststartopermodetable::Stpxfaststartopermodeentry::StpxfaststartopermodeEnum::disabled {2, "disabled"};

const Enum::YLeaf CiscoStpExtensionsMib::Stpxmstporttable::Stpxmstportentry::StpxmstportadminlinktypeEnum::pointToPoint {1, "pointToPoint"};
const Enum::YLeaf CiscoStpExtensionsMib::Stpxmstporttable::Stpxmstportentry::StpxmstportadminlinktypeEnum::shared {2, "shared"};
const Enum::YLeaf CiscoStpExtensionsMib::Stpxmstporttable::Stpxmstportentry::StpxmstportadminlinktypeEnum::auto_ {3, "auto"};

const Enum::YLeaf CiscoStpExtensionsMib::Stpxmstporttable::Stpxmstportentry::StpxmstportoperlinktypeEnum::pointToPoint {1, "pointToPoint"};
const Enum::YLeaf CiscoStpExtensionsMib::Stpxmstporttable::Stpxmstportentry::StpxmstportoperlinktypeEnum::shared {2, "shared"};
const Enum::YLeaf CiscoStpExtensionsMib::Stpxmstporttable::Stpxmstportentry::StpxmstportoperlinktypeEnum::other {3, "other"};

const Enum::YLeaf CiscoStpExtensionsMib::Stpxmstportroletable::Stpxmstportroleentry::StpxmstportrolevalueEnum::disabled {1, "disabled"};
const Enum::YLeaf CiscoStpExtensionsMib::Stpxmstportroletable::Stpxmstportroleentry::StpxmstportrolevalueEnum::root {2, "root"};
const Enum::YLeaf CiscoStpExtensionsMib::Stpxmstportroletable::Stpxmstportroleentry::StpxmstportrolevalueEnum::designated {3, "designated"};
const Enum::YLeaf CiscoStpExtensionsMib::Stpxmstportroletable::Stpxmstportroleentry::StpxmstportrolevalueEnum::alternate {4, "alternate"};
const Enum::YLeaf CiscoStpExtensionsMib::Stpxmstportroletable::Stpxmstportroleentry::StpxmstportrolevalueEnum::backUp {5, "backUp"};
const Enum::YLeaf CiscoStpExtensionsMib::Stpxmstportroletable::Stpxmstportroleentry::StpxmstportrolevalueEnum::boundary {6, "boundary"};
const Enum::YLeaf CiscoStpExtensionsMib::Stpxmstportroletable::Stpxmstportroleentry::StpxmstportrolevalueEnum::master {7, "master"};

const Enum::YLeaf CiscoStpExtensionsMib::Stpxrstpporttable::Stpxrstpportentry::StpxrstpportadminlinktypeEnum::pointToPoint {1, "pointToPoint"};
const Enum::YLeaf CiscoStpExtensionsMib::Stpxrstpporttable::Stpxrstpportentry::StpxrstpportadminlinktypeEnum::shared {2, "shared"};
const Enum::YLeaf CiscoStpExtensionsMib::Stpxrstpporttable::Stpxrstpportentry::StpxrstpportadminlinktypeEnum::auto_ {3, "auto"};

const Enum::YLeaf CiscoStpExtensionsMib::Stpxrstpporttable::Stpxrstpportentry::StpxrstpportoperlinktypeEnum::pointToPoint {1, "pointToPoint"};
const Enum::YLeaf CiscoStpExtensionsMib::Stpxrstpporttable::Stpxrstpportentry::StpxrstpportoperlinktypeEnum::shared {2, "shared"};
const Enum::YLeaf CiscoStpExtensionsMib::Stpxrstpporttable::Stpxrstpportentry::StpxrstpportoperlinktypeEnum::other {3, "other"};

const Enum::YLeaf CiscoStpExtensionsMib::Stpxrstpportroletable::Stpxrstpportroleentry::StpxrstpportrolevalueEnum::disabled {1, "disabled"};
const Enum::YLeaf CiscoStpExtensionsMib::Stpxrstpportroletable::Stpxrstpportroleentry::StpxrstpportrolevalueEnum::root {2, "root"};
const Enum::YLeaf CiscoStpExtensionsMib::Stpxrstpportroletable::Stpxrstpportroleentry::StpxrstpportrolevalueEnum::designated {3, "designated"};
const Enum::YLeaf CiscoStpExtensionsMib::Stpxrstpportroletable::Stpxrstpportroleentry::StpxrstpportrolevalueEnum::alternate {4, "alternate"};
const Enum::YLeaf CiscoStpExtensionsMib::Stpxrstpportroletable::Stpxrstpportroleentry::StpxrstpportrolevalueEnum::backUp {5, "backUp"};
const Enum::YLeaf CiscoStpExtensionsMib::Stpxrstpportroletable::Stpxrstpportroleentry::StpxrstpportrolevalueEnum::boundary {6, "boundary"};
const Enum::YLeaf CiscoStpExtensionsMib::Stpxrstpportroletable::Stpxrstpportroleentry::StpxrstpportrolevalueEnum::master {7, "master"};

const Enum::YLeaf CiscoStpExtensionsMib::Stpxsmstporttable::Stpxsmstportentry::StpxsmstportadminmstmodeEnum::preStandard {1, "preStandard"};
const Enum::YLeaf CiscoStpExtensionsMib::Stpxsmstporttable::Stpxsmstportentry::StpxsmstportadminmstmodeEnum::auto_ {2, "auto"};

const Enum::YLeaf CiscoStpExtensionsMib::Stpxsmstporttable::Stpxsmstportentry::StpxsmstportopermstmodeEnum::unknown {1, "unknown"};
const Enum::YLeaf CiscoStpExtensionsMib::Stpxsmstporttable::Stpxsmstportentry::StpxsmstportopermstmodeEnum::preStandard {2, "preStandard"};
const Enum::YLeaf CiscoStpExtensionsMib::Stpxsmstporttable::Stpxsmstportentry::StpxsmstportopermstmodeEnum::standard {3, "standard"};


}
}

