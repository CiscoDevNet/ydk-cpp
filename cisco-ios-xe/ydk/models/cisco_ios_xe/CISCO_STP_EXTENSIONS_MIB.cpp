
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_STP_EXTENSIONS_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_STP_EXTENSIONS_MIB {

CISCOSTPEXTENSIONSMIB::CISCOSTPEXTENSIONSMIB()
    :
    stpxbackbonefastobjects(std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxbackbonefastobjects>())
	,stpxbpduskewingobjects(std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxbpduskewingobjects>())
	,stpxbpduskewingtable(std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxbpduskewingtable>())
	,stpxfaststartobjects(std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxfaststartobjects>())
	,stpxfaststartopermodetable(std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxfaststartopermodetable>())
	,stpxfaststartporttable(std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxfaststartporttable>())
	,stpxinconsistencytable(std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxinconsistencytable>())
	,stpxloopguardconfigtable(std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxloopguardconfigtable>())
	,stpxloopguardobjects(std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxloopguardobjects>())
	,stpxloopinconsistencytable(std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxloopinconsistencytable>())
	,stpxmistpinstancetable(std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxmistpinstancetable>())
	,stpxmistpobjects(std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxmistpobjects>())
	,stpxmstinstanceedittable(std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxmstinstanceedittable>())
	,stpxmstinstancetable(std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxmstinstancetable>())
	,stpxmstobjects(std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxmstobjects>())
	,stpxmstportroletable(std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxmstportroletable>())
	,stpxmstporttable(std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxmstporttable>())
	,stpxpvstvlantable(std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxpvstvlantable>())
	,stpxrootguardconfigtable(std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxrootguardconfigtable>())
	,stpxrootinconsistencytable(std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxrootinconsistencytable>())
	,stpxrpvstporttable(std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxrpvstporttable>())
	,stpxrstpobjects(std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxrstpobjects>())
	,stpxrstpportroletable(std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxrstpportroletable>())
	,stpxrstpporttable(std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxrstpporttable>())
	,stpxsmstinstanceedittable(std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxsmstinstanceedittable>())
	,stpxsmstinstancetable(std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxsmstinstancetable>())
	,stpxsmstobjects(std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxsmstobjects>())
	,stpxsmstporttable(std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxsmstporttable>())
	,stpxspanningtreeobjects(std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxspanningtreeobjects>())
	,stpxuplinkfastobjects(std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxuplinkfastobjects>())
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

    yang_name = "CISCO-STP-EXTENSIONS-MIB"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = true; has_list_ancestor = false;
}

CISCOSTPEXTENSIONSMIB::~CISCOSTPEXTENSIONSMIB()
{
}

bool CISCOSTPEXTENSIONSMIB::has_data() const
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

bool CISCOSTPEXTENSIONSMIB::has_operation() const
{
    return is_set(yfilter)
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

std::string CISCOSTPEXTENSIONSMIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSTPEXTENSIONSMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stpxBackboneFastObjects")
    {
        if(stpxbackbonefastobjects == nullptr)
        {
            stpxbackbonefastobjects = std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxbackbonefastobjects>();
        }
        return stpxbackbonefastobjects;
    }

    if(child_yang_name == "stpxBpduSkewingObjects")
    {
        if(stpxbpduskewingobjects == nullptr)
        {
            stpxbpduskewingobjects = std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxbpduskewingobjects>();
        }
        return stpxbpduskewingobjects;
    }

    if(child_yang_name == "stpxBpduSkewingTable")
    {
        if(stpxbpduskewingtable == nullptr)
        {
            stpxbpduskewingtable = std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxbpduskewingtable>();
        }
        return stpxbpduskewingtable;
    }

    if(child_yang_name == "stpxFastStartObjects")
    {
        if(stpxfaststartobjects == nullptr)
        {
            stpxfaststartobjects = std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxfaststartobjects>();
        }
        return stpxfaststartobjects;
    }

    if(child_yang_name == "stpxFastStartOperModeTable")
    {
        if(stpxfaststartopermodetable == nullptr)
        {
            stpxfaststartopermodetable = std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxfaststartopermodetable>();
        }
        return stpxfaststartopermodetable;
    }

    if(child_yang_name == "stpxFastStartPortTable")
    {
        if(stpxfaststartporttable == nullptr)
        {
            stpxfaststartporttable = std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxfaststartporttable>();
        }
        return stpxfaststartporttable;
    }

    if(child_yang_name == "stpxInconsistencyTable")
    {
        if(stpxinconsistencytable == nullptr)
        {
            stpxinconsistencytable = std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxinconsistencytable>();
        }
        return stpxinconsistencytable;
    }

    if(child_yang_name == "stpxLoopGuardConfigTable")
    {
        if(stpxloopguardconfigtable == nullptr)
        {
            stpxloopguardconfigtable = std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxloopguardconfigtable>();
        }
        return stpxloopguardconfigtable;
    }

    if(child_yang_name == "stpxLoopGuardObjects")
    {
        if(stpxloopguardobjects == nullptr)
        {
            stpxloopguardobjects = std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxloopguardobjects>();
        }
        return stpxloopguardobjects;
    }

    if(child_yang_name == "stpxLoopInconsistencyTable")
    {
        if(stpxloopinconsistencytable == nullptr)
        {
            stpxloopinconsistencytable = std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxloopinconsistencytable>();
        }
        return stpxloopinconsistencytable;
    }

    if(child_yang_name == "stpxMISTPInstanceTable")
    {
        if(stpxmistpinstancetable == nullptr)
        {
            stpxmistpinstancetable = std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxmistpinstancetable>();
        }
        return stpxmistpinstancetable;
    }

    if(child_yang_name == "stpxMISTPObjects")
    {
        if(stpxmistpobjects == nullptr)
        {
            stpxmistpobjects = std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxmistpobjects>();
        }
        return stpxmistpobjects;
    }

    if(child_yang_name == "stpxMSTInstanceEditTable")
    {
        if(stpxmstinstanceedittable == nullptr)
        {
            stpxmstinstanceedittable = std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxmstinstanceedittable>();
        }
        return stpxmstinstanceedittable;
    }

    if(child_yang_name == "stpxMSTInstanceTable")
    {
        if(stpxmstinstancetable == nullptr)
        {
            stpxmstinstancetable = std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxmstinstancetable>();
        }
        return stpxmstinstancetable;
    }

    if(child_yang_name == "stpxMSTObjects")
    {
        if(stpxmstobjects == nullptr)
        {
            stpxmstobjects = std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxmstobjects>();
        }
        return stpxmstobjects;
    }

    if(child_yang_name == "stpxMSTPortRoleTable")
    {
        if(stpxmstportroletable == nullptr)
        {
            stpxmstportroletable = std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxmstportroletable>();
        }
        return stpxmstportroletable;
    }

    if(child_yang_name == "stpxMSTPortTable")
    {
        if(stpxmstporttable == nullptr)
        {
            stpxmstporttable = std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxmstporttable>();
        }
        return stpxmstporttable;
    }

    if(child_yang_name == "stpxPVSTVlanTable")
    {
        if(stpxpvstvlantable == nullptr)
        {
            stpxpvstvlantable = std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxpvstvlantable>();
        }
        return stpxpvstvlantable;
    }

    if(child_yang_name == "stpxRootGuardConfigTable")
    {
        if(stpxrootguardconfigtable == nullptr)
        {
            stpxrootguardconfigtable = std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxrootguardconfigtable>();
        }
        return stpxrootguardconfigtable;
    }

    if(child_yang_name == "stpxRootInconsistencyTable")
    {
        if(stpxrootinconsistencytable == nullptr)
        {
            stpxrootinconsistencytable = std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxrootinconsistencytable>();
        }
        return stpxrootinconsistencytable;
    }

    if(child_yang_name == "stpxRPVSTPortTable")
    {
        if(stpxrpvstporttable == nullptr)
        {
            stpxrpvstporttable = std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxrpvstporttable>();
        }
        return stpxrpvstporttable;
    }

    if(child_yang_name == "stpxRSTPObjects")
    {
        if(stpxrstpobjects == nullptr)
        {
            stpxrstpobjects = std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxrstpobjects>();
        }
        return stpxrstpobjects;
    }

    if(child_yang_name == "stpxRSTPPortRoleTable")
    {
        if(stpxrstpportroletable == nullptr)
        {
            stpxrstpportroletable = std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxrstpportroletable>();
        }
        return stpxrstpportroletable;
    }

    if(child_yang_name == "stpxRSTPPortTable")
    {
        if(stpxrstpporttable == nullptr)
        {
            stpxrstpporttable = std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxrstpporttable>();
        }
        return stpxrstpporttable;
    }

    if(child_yang_name == "stpxSMSTInstanceEditTable")
    {
        if(stpxsmstinstanceedittable == nullptr)
        {
            stpxsmstinstanceedittable = std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxsmstinstanceedittable>();
        }
        return stpxsmstinstanceedittable;
    }

    if(child_yang_name == "stpxSMSTInstanceTable")
    {
        if(stpxsmstinstancetable == nullptr)
        {
            stpxsmstinstancetable = std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxsmstinstancetable>();
        }
        return stpxsmstinstancetable;
    }

    if(child_yang_name == "stpxSMSTObjects")
    {
        if(stpxsmstobjects == nullptr)
        {
            stpxsmstobjects = std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxsmstobjects>();
        }
        return stpxsmstobjects;
    }

    if(child_yang_name == "stpxSMSTPortTable")
    {
        if(stpxsmstporttable == nullptr)
        {
            stpxsmstporttable = std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxsmstporttable>();
        }
        return stpxsmstporttable;
    }

    if(child_yang_name == "stpxSpanningTreeObjects")
    {
        if(stpxspanningtreeobjects == nullptr)
        {
            stpxspanningtreeobjects = std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxspanningtreeobjects>();
        }
        return stpxspanningtreeobjects;
    }

    if(child_yang_name == "stpxUplinkFastObjects")
    {
        if(stpxuplinkfastobjects == nullptr)
        {
            stpxuplinkfastobjects = std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxuplinkfastobjects>();
        }
        return stpxuplinkfastobjects;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSTPEXTENSIONSMIB::get_children() const
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

void CISCOSTPEXTENSIONSMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSTPEXTENSIONSMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CISCOSTPEXTENSIONSMIB::clone_ptr() const
{
    return std::make_shared<CISCOSTPEXTENSIONSMIB>();
}

std::string CISCOSTPEXTENSIONSMIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CISCOSTPEXTENSIONSMIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CISCOSTPEXTENSIONSMIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CISCOSTPEXTENSIONSMIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CISCOSTPEXTENSIONSMIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxBackboneFastObjects" || name == "stpxBpduSkewingObjects" || name == "stpxBpduSkewingTable" || name == "stpxFastStartObjects" || name == "stpxFastStartOperModeTable" || name == "stpxFastStartPortTable" || name == "stpxInconsistencyTable" || name == "stpxLoopGuardConfigTable" || name == "stpxLoopGuardObjects" || name == "stpxLoopInconsistencyTable" || name == "stpxMISTPInstanceTable" || name == "stpxMISTPObjects" || name == "stpxMSTInstanceEditTable" || name == "stpxMSTInstanceTable" || name == "stpxMSTObjects" || name == "stpxMSTPortRoleTable" || name == "stpxMSTPortTable" || name == "stpxPVSTVlanTable" || name == "stpxRootGuardConfigTable" || name == "stpxRootInconsistencyTable" || name == "stpxRPVSTPortTable" || name == "stpxRSTPObjects" || name == "stpxRSTPPortRoleTable" || name == "stpxRSTPPortTable" || name == "stpxSMSTInstanceEditTable" || name == "stpxSMSTInstanceTable" || name == "stpxSMSTObjects" || name == "stpxSMSTPortTable" || name == "stpxSpanningTreeObjects" || name == "stpxUplinkFastObjects")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::Stpxbackbonefastobjects::Stpxbackbonefastobjects()
    :
    stpxbackbonefastenabled{YType::boolean, "stpxBackboneFastEnabled"},
    stpxbackbonefastininferiorbpdus{YType::uint32, "stpxBackboneFastInInferiorBPDUs"},
    stpxbackbonefastinrlqrequestpdus{YType::uint32, "stpxBackboneFastInRLQRequestPDUs"},
    stpxbackbonefastinrlqresponsepdus{YType::uint32, "stpxBackboneFastInRLQResponsePDUs"},
    stpxbackbonefastoperenabled{YType::boolean, "stpxBackboneFastOperEnabled"},
    stpxbackbonefastoutrlqrequestpdus{YType::uint32, "stpxBackboneFastOutRLQRequestPDUs"},
    stpxbackbonefastoutrlqresponsepdus{YType::uint32, "stpxBackboneFastOutRLQResponsePDUs"}
{

    yang_name = "stpxBackboneFastObjects"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSTPEXTENSIONSMIB::Stpxbackbonefastobjects::~Stpxbackbonefastobjects()
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxbackbonefastobjects::has_data() const
{
    return stpxbackbonefastenabled.is_set
	|| stpxbackbonefastininferiorbpdus.is_set
	|| stpxbackbonefastinrlqrequestpdus.is_set
	|| stpxbackbonefastinrlqresponsepdus.is_set
	|| stpxbackbonefastoperenabled.is_set
	|| stpxbackbonefastoutrlqrequestpdus.is_set
	|| stpxbackbonefastoutrlqresponsepdus.is_set;
}

bool CISCOSTPEXTENSIONSMIB::Stpxbackbonefastobjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxbackbonefastenabled.yfilter)
	|| ydk::is_set(stpxbackbonefastininferiorbpdus.yfilter)
	|| ydk::is_set(stpxbackbonefastinrlqrequestpdus.yfilter)
	|| ydk::is_set(stpxbackbonefastinrlqresponsepdus.yfilter)
	|| ydk::is_set(stpxbackbonefastoperenabled.yfilter)
	|| ydk::is_set(stpxbackbonefastoutrlqrequestpdus.yfilter)
	|| ydk::is_set(stpxbackbonefastoutrlqresponsepdus.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::Stpxbackbonefastobjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::Stpxbackbonefastobjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxBackboneFastObjects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::Stpxbackbonefastobjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxbackbonefastenabled.is_set || is_set(stpxbackbonefastenabled.yfilter)) leaf_name_data.push_back(stpxbackbonefastenabled.get_name_leafdata());
    if (stpxbackbonefastininferiorbpdus.is_set || is_set(stpxbackbonefastininferiorbpdus.yfilter)) leaf_name_data.push_back(stpxbackbonefastininferiorbpdus.get_name_leafdata());
    if (stpxbackbonefastinrlqrequestpdus.is_set || is_set(stpxbackbonefastinrlqrequestpdus.yfilter)) leaf_name_data.push_back(stpxbackbonefastinrlqrequestpdus.get_name_leafdata());
    if (stpxbackbonefastinrlqresponsepdus.is_set || is_set(stpxbackbonefastinrlqresponsepdus.yfilter)) leaf_name_data.push_back(stpxbackbonefastinrlqresponsepdus.get_name_leafdata());
    if (stpxbackbonefastoperenabled.is_set || is_set(stpxbackbonefastoperenabled.yfilter)) leaf_name_data.push_back(stpxbackbonefastoperenabled.get_name_leafdata());
    if (stpxbackbonefastoutrlqrequestpdus.is_set || is_set(stpxbackbonefastoutrlqrequestpdus.yfilter)) leaf_name_data.push_back(stpxbackbonefastoutrlqrequestpdus.get_name_leafdata());
    if (stpxbackbonefastoutrlqresponsepdus.is_set || is_set(stpxbackbonefastoutrlqresponsepdus.yfilter)) leaf_name_data.push_back(stpxbackbonefastoutrlqresponsepdus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSTPEXTENSIONSMIB::Stpxbackbonefastobjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSTPEXTENSIONSMIB::Stpxbackbonefastobjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOSTPEXTENSIONSMIB::Stpxbackbonefastobjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stpxBackboneFastEnabled")
    {
        stpxbackbonefastenabled = value;
        stpxbackbonefastenabled.value_namespace = name_space;
        stpxbackbonefastenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxBackboneFastInInferiorBPDUs")
    {
        stpxbackbonefastininferiorbpdus = value;
        stpxbackbonefastininferiorbpdus.value_namespace = name_space;
        stpxbackbonefastininferiorbpdus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxBackboneFastInRLQRequestPDUs")
    {
        stpxbackbonefastinrlqrequestpdus = value;
        stpxbackbonefastinrlqrequestpdus.value_namespace = name_space;
        stpxbackbonefastinrlqrequestpdus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxBackboneFastInRLQResponsePDUs")
    {
        stpxbackbonefastinrlqresponsepdus = value;
        stpxbackbonefastinrlqresponsepdus.value_namespace = name_space;
        stpxbackbonefastinrlqresponsepdus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxBackboneFastOperEnabled")
    {
        stpxbackbonefastoperenabled = value;
        stpxbackbonefastoperenabled.value_namespace = name_space;
        stpxbackbonefastoperenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxBackboneFastOutRLQRequestPDUs")
    {
        stpxbackbonefastoutrlqrequestpdus = value;
        stpxbackbonefastoutrlqrequestpdus.value_namespace = name_space;
        stpxbackbonefastoutrlqrequestpdus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxBackboneFastOutRLQResponsePDUs")
    {
        stpxbackbonefastoutrlqresponsepdus = value;
        stpxbackbonefastoutrlqresponsepdus.value_namespace = name_space;
        stpxbackbonefastoutrlqresponsepdus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSTPEXTENSIONSMIB::Stpxbackbonefastobjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stpxBackboneFastEnabled")
    {
        stpxbackbonefastenabled.yfilter = yfilter;
    }
    if(value_path == "stpxBackboneFastInInferiorBPDUs")
    {
        stpxbackbonefastininferiorbpdus.yfilter = yfilter;
    }
    if(value_path == "stpxBackboneFastInRLQRequestPDUs")
    {
        stpxbackbonefastinrlqrequestpdus.yfilter = yfilter;
    }
    if(value_path == "stpxBackboneFastInRLQResponsePDUs")
    {
        stpxbackbonefastinrlqresponsepdus.yfilter = yfilter;
    }
    if(value_path == "stpxBackboneFastOperEnabled")
    {
        stpxbackbonefastoperenabled.yfilter = yfilter;
    }
    if(value_path == "stpxBackboneFastOutRLQRequestPDUs")
    {
        stpxbackbonefastoutrlqrequestpdus.yfilter = yfilter;
    }
    if(value_path == "stpxBackboneFastOutRLQResponsePDUs")
    {
        stpxbackbonefastoutrlqresponsepdus.yfilter = yfilter;
    }
}

bool CISCOSTPEXTENSIONSMIB::Stpxbackbonefastobjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxBackboneFastEnabled" || name == "stpxBackboneFastInInferiorBPDUs" || name == "stpxBackboneFastInRLQRequestPDUs" || name == "stpxBackboneFastInRLQResponsePDUs" || name == "stpxBackboneFastOperEnabled" || name == "stpxBackboneFastOutRLQRequestPDUs" || name == "stpxBackboneFastOutRLQResponsePDUs")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::Stpxbpduskewingobjects::Stpxbpduskewingobjects()
    :
    stpxbpduskewingdetectionenable{YType::boolean, "stpxBpduSkewingDetectionEnable"}
{

    yang_name = "stpxBpduSkewingObjects"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSTPEXTENSIONSMIB::Stpxbpduskewingobjects::~Stpxbpduskewingobjects()
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxbpduskewingobjects::has_data() const
{
    return stpxbpduskewingdetectionenable.is_set;
}

bool CISCOSTPEXTENSIONSMIB::Stpxbpduskewingobjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxbpduskewingdetectionenable.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::Stpxbpduskewingobjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::Stpxbpduskewingobjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxBpduSkewingObjects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::Stpxbpduskewingobjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxbpduskewingdetectionenable.is_set || is_set(stpxbpduskewingdetectionenable.yfilter)) leaf_name_data.push_back(stpxbpduskewingdetectionenable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSTPEXTENSIONSMIB::Stpxbpduskewingobjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSTPEXTENSIONSMIB::Stpxbpduskewingobjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOSTPEXTENSIONSMIB::Stpxbpduskewingobjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stpxBpduSkewingDetectionEnable")
    {
        stpxbpduskewingdetectionenable = value;
        stpxbpduskewingdetectionenable.value_namespace = name_space;
        stpxbpduskewingdetectionenable.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSTPEXTENSIONSMIB::Stpxbpduskewingobjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stpxBpduSkewingDetectionEnable")
    {
        stpxbpduskewingdetectionenable.yfilter = yfilter;
    }
}

bool CISCOSTPEXTENSIONSMIB::Stpxbpduskewingobjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxBpduSkewingDetectionEnable")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::Stpxbpduskewingtable::Stpxbpduskewingtable()
{

    yang_name = "stpxBpduSkewingTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSTPEXTENSIONSMIB::Stpxbpduskewingtable::~Stpxbpduskewingtable()
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxbpduskewingtable::has_data() const
{
    for (std::size_t index=0; index<stpxbpduskewingentry.size(); index++)
    {
        if(stpxbpduskewingentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSTPEXTENSIONSMIB::Stpxbpduskewingtable::has_operation() const
{
    for (std::size_t index=0; index<stpxbpduskewingentry.size(); index++)
    {
        if(stpxbpduskewingentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::Stpxbpduskewingtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::Stpxbpduskewingtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxBpduSkewingTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::Stpxbpduskewingtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSTPEXTENSIONSMIB::Stpxbpduskewingtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxbpduskewingtable::Stpxbpduskewingentry>();
        c->parent = this;
        stpxbpduskewingentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSTPEXTENSIONSMIB::Stpxbpduskewingtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stpxbpduskewingentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOSTPEXTENSIONSMIB::Stpxbpduskewingtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSTPEXTENSIONSMIB::Stpxbpduskewingtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxbpduskewingtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxBpduSkewingEntry")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::Stpxbpduskewingtable::Stpxbpduskewingentry::Stpxbpduskewingentry()
    :
    stpxbpduskewinginstanceindex{YType::int32, "stpxBpduSkewingInstanceIndex"},
    stpxbpduskewingportindex{YType::int32, "stpxBpduSkewingPortIndex"},
    stpxbpduskewinglastskewduration{YType::uint32, "stpxBpduSkewingLastSkewDuration"},
    stpxbpduskewingworstskewduration{YType::uint32, "stpxBpduSkewingWorstSkewDuration"},
    stpxbpduskewingworstskewtime{YType::uint32, "stpxBpduSkewingWorstSkewTime"}
{

    yang_name = "stpxBpduSkewingEntry"; yang_parent_name = "stpxBpduSkewingTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSTPEXTENSIONSMIB::Stpxbpduskewingtable::Stpxbpduskewingentry::~Stpxbpduskewingentry()
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxbpduskewingtable::Stpxbpduskewingentry::has_data() const
{
    return stpxbpduskewinginstanceindex.is_set
	|| stpxbpduskewingportindex.is_set
	|| stpxbpduskewinglastskewduration.is_set
	|| stpxbpduskewingworstskewduration.is_set
	|| stpxbpduskewingworstskewtime.is_set;
}

bool CISCOSTPEXTENSIONSMIB::Stpxbpduskewingtable::Stpxbpduskewingentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxbpduskewinginstanceindex.yfilter)
	|| ydk::is_set(stpxbpduskewingportindex.yfilter)
	|| ydk::is_set(stpxbpduskewinglastskewduration.yfilter)
	|| ydk::is_set(stpxbpduskewingworstskewduration.yfilter)
	|| ydk::is_set(stpxbpduskewingworstskewtime.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::Stpxbpduskewingtable::Stpxbpduskewingentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxBpduSkewingTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::Stpxbpduskewingtable::Stpxbpduskewingentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxBpduSkewingEntry" <<"[stpxBpduSkewingInstanceIndex='" <<stpxbpduskewinginstanceindex <<"']" <<"[stpxBpduSkewingPortIndex='" <<stpxbpduskewingportindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::Stpxbpduskewingtable::Stpxbpduskewingentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxbpduskewinginstanceindex.is_set || is_set(stpxbpduskewinginstanceindex.yfilter)) leaf_name_data.push_back(stpxbpduskewinginstanceindex.get_name_leafdata());
    if (stpxbpduskewingportindex.is_set || is_set(stpxbpduskewingportindex.yfilter)) leaf_name_data.push_back(stpxbpduskewingportindex.get_name_leafdata());
    if (stpxbpduskewinglastskewduration.is_set || is_set(stpxbpduskewinglastskewduration.yfilter)) leaf_name_data.push_back(stpxbpduskewinglastskewduration.get_name_leafdata());
    if (stpxbpduskewingworstskewduration.is_set || is_set(stpxbpduskewingworstskewduration.yfilter)) leaf_name_data.push_back(stpxbpduskewingworstskewduration.get_name_leafdata());
    if (stpxbpduskewingworstskewtime.is_set || is_set(stpxbpduskewingworstskewtime.yfilter)) leaf_name_data.push_back(stpxbpduskewingworstskewtime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSTPEXTENSIONSMIB::Stpxbpduskewingtable::Stpxbpduskewingentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSTPEXTENSIONSMIB::Stpxbpduskewingtable::Stpxbpduskewingentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOSTPEXTENSIONSMIB::Stpxbpduskewingtable::Stpxbpduskewingentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stpxBpduSkewingInstanceIndex")
    {
        stpxbpduskewinginstanceindex = value;
        stpxbpduskewinginstanceindex.value_namespace = name_space;
        stpxbpduskewinginstanceindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxBpduSkewingPortIndex")
    {
        stpxbpduskewingportindex = value;
        stpxbpduskewingportindex.value_namespace = name_space;
        stpxbpduskewingportindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxBpduSkewingLastSkewDuration")
    {
        stpxbpduskewinglastskewduration = value;
        stpxbpduskewinglastskewduration.value_namespace = name_space;
        stpxbpduskewinglastskewduration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxBpduSkewingWorstSkewDuration")
    {
        stpxbpduskewingworstskewduration = value;
        stpxbpduskewingworstskewduration.value_namespace = name_space;
        stpxbpduskewingworstskewduration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxBpduSkewingWorstSkewTime")
    {
        stpxbpduskewingworstskewtime = value;
        stpxbpduskewingworstskewtime.value_namespace = name_space;
        stpxbpduskewingworstskewtime.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSTPEXTENSIONSMIB::Stpxbpduskewingtable::Stpxbpduskewingentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stpxBpduSkewingInstanceIndex")
    {
        stpxbpduskewinginstanceindex.yfilter = yfilter;
    }
    if(value_path == "stpxBpduSkewingPortIndex")
    {
        stpxbpduskewingportindex.yfilter = yfilter;
    }
    if(value_path == "stpxBpduSkewingLastSkewDuration")
    {
        stpxbpduskewinglastskewduration.yfilter = yfilter;
    }
    if(value_path == "stpxBpduSkewingWorstSkewDuration")
    {
        stpxbpduskewingworstskewduration.yfilter = yfilter;
    }
    if(value_path == "stpxBpduSkewingWorstSkewTime")
    {
        stpxbpduskewingworstskewtime.yfilter = yfilter;
    }
}

bool CISCOSTPEXTENSIONSMIB::Stpxbpduskewingtable::Stpxbpduskewingentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxBpduSkewingInstanceIndex" || name == "stpxBpduSkewingPortIndex" || name == "stpxBpduSkewingLastSkewDuration" || name == "stpxBpduSkewingWorstSkewDuration" || name == "stpxBpduSkewingWorstSkewTime")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::Stpxfaststartobjects::Stpxfaststartobjects()
    :
    stpxfaststartbpdufilterenable{YType::boolean, "stpxFastStartBpduFilterEnable"},
    stpxfaststartbpduguardenable{YType::boolean, "stpxFastStartBpduGuardEnable"},
    stpxfaststartglobaldefaultmode{YType::enumeration, "stpxFastStartGlobalDefaultMode"}
{

    yang_name = "stpxFastStartObjects"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSTPEXTENSIONSMIB::Stpxfaststartobjects::~Stpxfaststartobjects()
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxfaststartobjects::has_data() const
{
    return stpxfaststartbpdufilterenable.is_set
	|| stpxfaststartbpduguardenable.is_set
	|| stpxfaststartglobaldefaultmode.is_set;
}

bool CISCOSTPEXTENSIONSMIB::Stpxfaststartobjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxfaststartbpdufilterenable.yfilter)
	|| ydk::is_set(stpxfaststartbpduguardenable.yfilter)
	|| ydk::is_set(stpxfaststartglobaldefaultmode.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::Stpxfaststartobjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::Stpxfaststartobjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxFastStartObjects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::Stpxfaststartobjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxfaststartbpdufilterenable.is_set || is_set(stpxfaststartbpdufilterenable.yfilter)) leaf_name_data.push_back(stpxfaststartbpdufilterenable.get_name_leafdata());
    if (stpxfaststartbpduguardenable.is_set || is_set(stpxfaststartbpduguardenable.yfilter)) leaf_name_data.push_back(stpxfaststartbpduguardenable.get_name_leafdata());
    if (stpxfaststartglobaldefaultmode.is_set || is_set(stpxfaststartglobaldefaultmode.yfilter)) leaf_name_data.push_back(stpxfaststartglobaldefaultmode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSTPEXTENSIONSMIB::Stpxfaststartobjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSTPEXTENSIONSMIB::Stpxfaststartobjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOSTPEXTENSIONSMIB::Stpxfaststartobjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stpxFastStartBpduFilterEnable")
    {
        stpxfaststartbpdufilterenable = value;
        stpxfaststartbpdufilterenable.value_namespace = name_space;
        stpxfaststartbpdufilterenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxFastStartBpduGuardEnable")
    {
        stpxfaststartbpduguardenable = value;
        stpxfaststartbpduguardenable.value_namespace = name_space;
        stpxfaststartbpduguardenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxFastStartGlobalDefaultMode")
    {
        stpxfaststartglobaldefaultmode = value;
        stpxfaststartglobaldefaultmode.value_namespace = name_space;
        stpxfaststartglobaldefaultmode.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSTPEXTENSIONSMIB::Stpxfaststartobjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stpxFastStartBpduFilterEnable")
    {
        stpxfaststartbpdufilterenable.yfilter = yfilter;
    }
    if(value_path == "stpxFastStartBpduGuardEnable")
    {
        stpxfaststartbpduguardenable.yfilter = yfilter;
    }
    if(value_path == "stpxFastStartGlobalDefaultMode")
    {
        stpxfaststartglobaldefaultmode.yfilter = yfilter;
    }
}

bool CISCOSTPEXTENSIONSMIB::Stpxfaststartobjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxFastStartBpduFilterEnable" || name == "stpxFastStartBpduGuardEnable" || name == "stpxFastStartGlobalDefaultMode")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::Stpxfaststartopermodetable::Stpxfaststartopermodetable()
{

    yang_name = "stpxFastStartOperModeTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSTPEXTENSIONSMIB::Stpxfaststartopermodetable::~Stpxfaststartopermodetable()
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxfaststartopermodetable::has_data() const
{
    for (std::size_t index=0; index<stpxfaststartopermodeentry.size(); index++)
    {
        if(stpxfaststartopermodeentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSTPEXTENSIONSMIB::Stpxfaststartopermodetable::has_operation() const
{
    for (std::size_t index=0; index<stpxfaststartopermodeentry.size(); index++)
    {
        if(stpxfaststartopermodeentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::Stpxfaststartopermodetable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::Stpxfaststartopermodetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxFastStartOperModeTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::Stpxfaststartopermodetable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSTPEXTENSIONSMIB::Stpxfaststartopermodetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxfaststartopermodetable::Stpxfaststartopermodeentry>();
        c->parent = this;
        stpxfaststartopermodeentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSTPEXTENSIONSMIB::Stpxfaststartopermodetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stpxfaststartopermodeentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOSTPEXTENSIONSMIB::Stpxfaststartopermodetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSTPEXTENSIONSMIB::Stpxfaststartopermodetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxfaststartopermodetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxFastStartOperModeEntry")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::Stpxfaststartopermodetable::Stpxfaststartopermodeentry::Stpxfaststartopermodeentry()
    :
    stpxfaststartopermodeinstindex{YType::int32, "stpxFastStartOperModeInstIndex"},
    stpxfaststartopermodeportindex{YType::int32, "stpxFastStartOperModePortIndex"},
    stpxfaststartopermode{YType::enumeration, "stpxFastStartOperMode"}
{

    yang_name = "stpxFastStartOperModeEntry"; yang_parent_name = "stpxFastStartOperModeTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSTPEXTENSIONSMIB::Stpxfaststartopermodetable::Stpxfaststartopermodeentry::~Stpxfaststartopermodeentry()
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxfaststartopermodetable::Stpxfaststartopermodeentry::has_data() const
{
    return stpxfaststartopermodeinstindex.is_set
	|| stpxfaststartopermodeportindex.is_set
	|| stpxfaststartopermode.is_set;
}

bool CISCOSTPEXTENSIONSMIB::Stpxfaststartopermodetable::Stpxfaststartopermodeentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxfaststartopermodeinstindex.yfilter)
	|| ydk::is_set(stpxfaststartopermodeportindex.yfilter)
	|| ydk::is_set(stpxfaststartopermode.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::Stpxfaststartopermodetable::Stpxfaststartopermodeentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxFastStartOperModeTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::Stpxfaststartopermodetable::Stpxfaststartopermodeentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxFastStartOperModeEntry" <<"[stpxFastStartOperModeInstIndex='" <<stpxfaststartopermodeinstindex <<"']" <<"[stpxFastStartOperModePortIndex='" <<stpxfaststartopermodeportindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::Stpxfaststartopermodetable::Stpxfaststartopermodeentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxfaststartopermodeinstindex.is_set || is_set(stpxfaststartopermodeinstindex.yfilter)) leaf_name_data.push_back(stpxfaststartopermodeinstindex.get_name_leafdata());
    if (stpxfaststartopermodeportindex.is_set || is_set(stpxfaststartopermodeportindex.yfilter)) leaf_name_data.push_back(stpxfaststartopermodeportindex.get_name_leafdata());
    if (stpxfaststartopermode.is_set || is_set(stpxfaststartopermode.yfilter)) leaf_name_data.push_back(stpxfaststartopermode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSTPEXTENSIONSMIB::Stpxfaststartopermodetable::Stpxfaststartopermodeentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSTPEXTENSIONSMIB::Stpxfaststartopermodetable::Stpxfaststartopermodeentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOSTPEXTENSIONSMIB::Stpxfaststartopermodetable::Stpxfaststartopermodeentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stpxFastStartOperModeInstIndex")
    {
        stpxfaststartopermodeinstindex = value;
        stpxfaststartopermodeinstindex.value_namespace = name_space;
        stpxfaststartopermodeinstindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxFastStartOperModePortIndex")
    {
        stpxfaststartopermodeportindex = value;
        stpxfaststartopermodeportindex.value_namespace = name_space;
        stpxfaststartopermodeportindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxFastStartOperMode")
    {
        stpxfaststartopermode = value;
        stpxfaststartopermode.value_namespace = name_space;
        stpxfaststartopermode.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSTPEXTENSIONSMIB::Stpxfaststartopermodetable::Stpxfaststartopermodeentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stpxFastStartOperModeInstIndex")
    {
        stpxfaststartopermodeinstindex.yfilter = yfilter;
    }
    if(value_path == "stpxFastStartOperModePortIndex")
    {
        stpxfaststartopermodeportindex.yfilter = yfilter;
    }
    if(value_path == "stpxFastStartOperMode")
    {
        stpxfaststartopermode.yfilter = yfilter;
    }
}

bool CISCOSTPEXTENSIONSMIB::Stpxfaststartopermodetable::Stpxfaststartopermodeentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxFastStartOperModeInstIndex" || name == "stpxFastStartOperModePortIndex" || name == "stpxFastStartOperMode")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::Stpxfaststartporttable::Stpxfaststartporttable()
{

    yang_name = "stpxFastStartPortTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSTPEXTENSIONSMIB::Stpxfaststartporttable::~Stpxfaststartporttable()
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxfaststartporttable::has_data() const
{
    for (std::size_t index=0; index<stpxfaststartportentry.size(); index++)
    {
        if(stpxfaststartportentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSTPEXTENSIONSMIB::Stpxfaststartporttable::has_operation() const
{
    for (std::size_t index=0; index<stpxfaststartportentry.size(); index++)
    {
        if(stpxfaststartportentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::Stpxfaststartporttable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::Stpxfaststartporttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxFastStartPortTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::Stpxfaststartporttable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSTPEXTENSIONSMIB::Stpxfaststartporttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxfaststartporttable::Stpxfaststartportentry>();
        c->parent = this;
        stpxfaststartportentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSTPEXTENSIONSMIB::Stpxfaststartporttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stpxfaststartportentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOSTPEXTENSIONSMIB::Stpxfaststartporttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSTPEXTENSIONSMIB::Stpxfaststartporttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxfaststartporttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxFastStartPortEntry")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::Stpxfaststartporttable::Stpxfaststartportentry::Stpxfaststartportentry()
    :
    stpxfaststartportindex{YType::int32, "stpxFastStartPortIndex"},
    stpxfaststartportbpdufiltermode{YType::enumeration, "stpxFastStartPortBpduFilterMode"},
    stpxfaststartportbpduguardmode{YType::enumeration, "stpxFastStartPortBpduGuardMode"},
    stpxfaststartportenable{YType::boolean, "stpxFastStartPortEnable"},
    stpxfaststartportmode{YType::enumeration, "stpxFastStartPortMode"}
{

    yang_name = "stpxFastStartPortEntry"; yang_parent_name = "stpxFastStartPortTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSTPEXTENSIONSMIB::Stpxfaststartporttable::Stpxfaststartportentry::~Stpxfaststartportentry()
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxfaststartporttable::Stpxfaststartportentry::has_data() const
{
    return stpxfaststartportindex.is_set
	|| stpxfaststartportbpdufiltermode.is_set
	|| stpxfaststartportbpduguardmode.is_set
	|| stpxfaststartportenable.is_set
	|| stpxfaststartportmode.is_set;
}

bool CISCOSTPEXTENSIONSMIB::Stpxfaststartporttable::Stpxfaststartportentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxfaststartportindex.yfilter)
	|| ydk::is_set(stpxfaststartportbpdufiltermode.yfilter)
	|| ydk::is_set(stpxfaststartportbpduguardmode.yfilter)
	|| ydk::is_set(stpxfaststartportenable.yfilter)
	|| ydk::is_set(stpxfaststartportmode.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::Stpxfaststartporttable::Stpxfaststartportentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxFastStartPortTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::Stpxfaststartporttable::Stpxfaststartportentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxFastStartPortEntry" <<"[stpxFastStartPortIndex='" <<stpxfaststartportindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::Stpxfaststartporttable::Stpxfaststartportentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxfaststartportindex.is_set || is_set(stpxfaststartportindex.yfilter)) leaf_name_data.push_back(stpxfaststartportindex.get_name_leafdata());
    if (stpxfaststartportbpdufiltermode.is_set || is_set(stpxfaststartportbpdufiltermode.yfilter)) leaf_name_data.push_back(stpxfaststartportbpdufiltermode.get_name_leafdata());
    if (stpxfaststartportbpduguardmode.is_set || is_set(stpxfaststartportbpduguardmode.yfilter)) leaf_name_data.push_back(stpxfaststartportbpduguardmode.get_name_leafdata());
    if (stpxfaststartportenable.is_set || is_set(stpxfaststartportenable.yfilter)) leaf_name_data.push_back(stpxfaststartportenable.get_name_leafdata());
    if (stpxfaststartportmode.is_set || is_set(stpxfaststartportmode.yfilter)) leaf_name_data.push_back(stpxfaststartportmode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSTPEXTENSIONSMIB::Stpxfaststartporttable::Stpxfaststartportentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSTPEXTENSIONSMIB::Stpxfaststartporttable::Stpxfaststartportentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOSTPEXTENSIONSMIB::Stpxfaststartporttable::Stpxfaststartportentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stpxFastStartPortIndex")
    {
        stpxfaststartportindex = value;
        stpxfaststartportindex.value_namespace = name_space;
        stpxfaststartportindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxFastStartPortBpduFilterMode")
    {
        stpxfaststartportbpdufiltermode = value;
        stpxfaststartportbpdufiltermode.value_namespace = name_space;
        stpxfaststartportbpdufiltermode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxFastStartPortBpduGuardMode")
    {
        stpxfaststartportbpduguardmode = value;
        stpxfaststartportbpduguardmode.value_namespace = name_space;
        stpxfaststartportbpduguardmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxFastStartPortEnable")
    {
        stpxfaststartportenable = value;
        stpxfaststartportenable.value_namespace = name_space;
        stpxfaststartportenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxFastStartPortMode")
    {
        stpxfaststartportmode = value;
        stpxfaststartportmode.value_namespace = name_space;
        stpxfaststartportmode.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSTPEXTENSIONSMIB::Stpxfaststartporttable::Stpxfaststartportentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stpxFastStartPortIndex")
    {
        stpxfaststartportindex.yfilter = yfilter;
    }
    if(value_path == "stpxFastStartPortBpduFilterMode")
    {
        stpxfaststartportbpdufiltermode.yfilter = yfilter;
    }
    if(value_path == "stpxFastStartPortBpduGuardMode")
    {
        stpxfaststartportbpduguardmode.yfilter = yfilter;
    }
    if(value_path == "stpxFastStartPortEnable")
    {
        stpxfaststartportenable.yfilter = yfilter;
    }
    if(value_path == "stpxFastStartPortMode")
    {
        stpxfaststartportmode.yfilter = yfilter;
    }
}

bool CISCOSTPEXTENSIONSMIB::Stpxfaststartporttable::Stpxfaststartportentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxFastStartPortIndex" || name == "stpxFastStartPortBpduFilterMode" || name == "stpxFastStartPortBpduGuardMode" || name == "stpxFastStartPortEnable" || name == "stpxFastStartPortMode")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::Stpxinconsistencytable::Stpxinconsistencytable()
{

    yang_name = "stpxInconsistencyTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSTPEXTENSIONSMIB::Stpxinconsistencytable::~Stpxinconsistencytable()
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxinconsistencytable::has_data() const
{
    for (std::size_t index=0; index<stpxinconsistencyentry.size(); index++)
    {
        if(stpxinconsistencyentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSTPEXTENSIONSMIB::Stpxinconsistencytable::has_operation() const
{
    for (std::size_t index=0; index<stpxinconsistencyentry.size(); index++)
    {
        if(stpxinconsistencyentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::Stpxinconsistencytable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::Stpxinconsistencytable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxInconsistencyTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::Stpxinconsistencytable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSTPEXTENSIONSMIB::Stpxinconsistencytable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxinconsistencytable::Stpxinconsistencyentry>();
        c->parent = this;
        stpxinconsistencyentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSTPEXTENSIONSMIB::Stpxinconsistencytable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stpxinconsistencyentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOSTPEXTENSIONSMIB::Stpxinconsistencytable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSTPEXTENSIONSMIB::Stpxinconsistencytable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxinconsistencytable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxInconsistencyEntry")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::Stpxinconsistencytable::Stpxinconsistencyentry::Stpxinconsistencyentry()
    :
    stpxvlanindex{YType::int32, "stpxVlanIndex"},
    stpxportindex{YType::int32, "stpxPortIndex"},
    stpxinconsistentstate{YType::bits, "stpxInconsistentState"}
{

    yang_name = "stpxInconsistencyEntry"; yang_parent_name = "stpxInconsistencyTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSTPEXTENSIONSMIB::Stpxinconsistencytable::Stpxinconsistencyentry::~Stpxinconsistencyentry()
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxinconsistencytable::Stpxinconsistencyentry::has_data() const
{
    return stpxvlanindex.is_set
	|| stpxportindex.is_set
	|| stpxinconsistentstate.is_set;
}

bool CISCOSTPEXTENSIONSMIB::Stpxinconsistencytable::Stpxinconsistencyentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxvlanindex.yfilter)
	|| ydk::is_set(stpxportindex.yfilter)
	|| ydk::is_set(stpxinconsistentstate.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::Stpxinconsistencytable::Stpxinconsistencyentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxInconsistencyTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::Stpxinconsistencytable::Stpxinconsistencyentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxInconsistencyEntry" <<"[stpxVlanIndex='" <<stpxvlanindex <<"']" <<"[stpxPortIndex='" <<stpxportindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::Stpxinconsistencytable::Stpxinconsistencyentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxvlanindex.is_set || is_set(stpxvlanindex.yfilter)) leaf_name_data.push_back(stpxvlanindex.get_name_leafdata());
    if (stpxportindex.is_set || is_set(stpxportindex.yfilter)) leaf_name_data.push_back(stpxportindex.get_name_leafdata());
    if (stpxinconsistentstate.is_set || is_set(stpxinconsistentstate.yfilter)) leaf_name_data.push_back(stpxinconsistentstate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSTPEXTENSIONSMIB::Stpxinconsistencytable::Stpxinconsistencyentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSTPEXTENSIONSMIB::Stpxinconsistencytable::Stpxinconsistencyentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOSTPEXTENSIONSMIB::Stpxinconsistencytable::Stpxinconsistencyentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stpxVlanIndex")
    {
        stpxvlanindex = value;
        stpxvlanindex.value_namespace = name_space;
        stpxvlanindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxPortIndex")
    {
        stpxportindex = value;
        stpxportindex.value_namespace = name_space;
        stpxportindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxInconsistentState")
    {
        stpxinconsistentstate[value] = true;
    }
}

void CISCOSTPEXTENSIONSMIB::Stpxinconsistencytable::Stpxinconsistencyentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stpxVlanIndex")
    {
        stpxvlanindex.yfilter = yfilter;
    }
    if(value_path == "stpxPortIndex")
    {
        stpxportindex.yfilter = yfilter;
    }
    if(value_path == "stpxInconsistentState")
    {
        stpxinconsistentstate.yfilter = yfilter;
    }
}

bool CISCOSTPEXTENSIONSMIB::Stpxinconsistencytable::Stpxinconsistencyentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxVlanIndex" || name == "stpxPortIndex" || name == "stpxInconsistentState")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::Stpxloopguardconfigtable::Stpxloopguardconfigtable()
{

    yang_name = "stpxLoopGuardConfigTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSTPEXTENSIONSMIB::Stpxloopguardconfigtable::~Stpxloopguardconfigtable()
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxloopguardconfigtable::has_data() const
{
    for (std::size_t index=0; index<stpxloopguardconfigentry.size(); index++)
    {
        if(stpxloopguardconfigentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSTPEXTENSIONSMIB::Stpxloopguardconfigtable::has_operation() const
{
    for (std::size_t index=0; index<stpxloopguardconfigentry.size(); index++)
    {
        if(stpxloopguardconfigentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::Stpxloopguardconfigtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::Stpxloopguardconfigtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxLoopGuardConfigTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::Stpxloopguardconfigtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSTPEXTENSIONSMIB::Stpxloopguardconfigtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxloopguardconfigtable::Stpxloopguardconfigentry>();
        c->parent = this;
        stpxloopguardconfigentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSTPEXTENSIONSMIB::Stpxloopguardconfigtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stpxloopguardconfigentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOSTPEXTENSIONSMIB::Stpxloopguardconfigtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSTPEXTENSIONSMIB::Stpxloopguardconfigtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxloopguardconfigtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxLoopGuardConfigEntry")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::Stpxloopguardconfigtable::Stpxloopguardconfigentry::Stpxloopguardconfigentry()
    :
    stpxloopguardconfigportindex{YType::int32, "stpxLoopGuardConfigPortIndex"},
    stpxloopguardconfigenabled{YType::boolean, "stpxLoopGuardConfigEnabled"},
    stpxloopguardconfigmode{YType::enumeration, "stpxLoopGuardConfigMode"}
{

    yang_name = "stpxLoopGuardConfigEntry"; yang_parent_name = "stpxLoopGuardConfigTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSTPEXTENSIONSMIB::Stpxloopguardconfigtable::Stpxloopguardconfigentry::~Stpxloopguardconfigentry()
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxloopguardconfigtable::Stpxloopguardconfigentry::has_data() const
{
    return stpxloopguardconfigportindex.is_set
	|| stpxloopguardconfigenabled.is_set
	|| stpxloopguardconfigmode.is_set;
}

bool CISCOSTPEXTENSIONSMIB::Stpxloopguardconfigtable::Stpxloopguardconfigentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxloopguardconfigportindex.yfilter)
	|| ydk::is_set(stpxloopguardconfigenabled.yfilter)
	|| ydk::is_set(stpxloopguardconfigmode.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::Stpxloopguardconfigtable::Stpxloopguardconfigentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxLoopGuardConfigTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::Stpxloopguardconfigtable::Stpxloopguardconfigentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxLoopGuardConfigEntry" <<"[stpxLoopGuardConfigPortIndex='" <<stpxloopguardconfigportindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::Stpxloopguardconfigtable::Stpxloopguardconfigentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxloopguardconfigportindex.is_set || is_set(stpxloopguardconfigportindex.yfilter)) leaf_name_data.push_back(stpxloopguardconfigportindex.get_name_leafdata());
    if (stpxloopguardconfigenabled.is_set || is_set(stpxloopguardconfigenabled.yfilter)) leaf_name_data.push_back(stpxloopguardconfigenabled.get_name_leafdata());
    if (stpxloopguardconfigmode.is_set || is_set(stpxloopguardconfigmode.yfilter)) leaf_name_data.push_back(stpxloopguardconfigmode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSTPEXTENSIONSMIB::Stpxloopguardconfigtable::Stpxloopguardconfigentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSTPEXTENSIONSMIB::Stpxloopguardconfigtable::Stpxloopguardconfigentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOSTPEXTENSIONSMIB::Stpxloopguardconfigtable::Stpxloopguardconfigentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stpxLoopGuardConfigPortIndex")
    {
        stpxloopguardconfigportindex = value;
        stpxloopguardconfigportindex.value_namespace = name_space;
        stpxloopguardconfigportindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxLoopGuardConfigEnabled")
    {
        stpxloopguardconfigenabled = value;
        stpxloopguardconfigenabled.value_namespace = name_space;
        stpxloopguardconfigenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxLoopGuardConfigMode")
    {
        stpxloopguardconfigmode = value;
        stpxloopguardconfigmode.value_namespace = name_space;
        stpxloopguardconfigmode.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSTPEXTENSIONSMIB::Stpxloopguardconfigtable::Stpxloopguardconfigentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stpxLoopGuardConfigPortIndex")
    {
        stpxloopguardconfigportindex.yfilter = yfilter;
    }
    if(value_path == "stpxLoopGuardConfigEnabled")
    {
        stpxloopguardconfigenabled.yfilter = yfilter;
    }
    if(value_path == "stpxLoopGuardConfigMode")
    {
        stpxloopguardconfigmode.yfilter = yfilter;
    }
}

bool CISCOSTPEXTENSIONSMIB::Stpxloopguardconfigtable::Stpxloopguardconfigentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxLoopGuardConfigPortIndex" || name == "stpxLoopGuardConfigEnabled" || name == "stpxLoopGuardConfigMode")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::Stpxloopguardobjects::Stpxloopguardobjects()
    :
    stpxloopguardglobaldefaultmode{YType::enumeration, "stpxLoopGuardGlobalDefaultMode"}
{

    yang_name = "stpxLoopGuardObjects"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSTPEXTENSIONSMIB::Stpxloopguardobjects::~Stpxloopguardobjects()
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxloopguardobjects::has_data() const
{
    return stpxloopguardglobaldefaultmode.is_set;
}

bool CISCOSTPEXTENSIONSMIB::Stpxloopguardobjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxloopguardglobaldefaultmode.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::Stpxloopguardobjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::Stpxloopguardobjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxLoopGuardObjects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::Stpxloopguardobjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxloopguardglobaldefaultmode.is_set || is_set(stpxloopguardglobaldefaultmode.yfilter)) leaf_name_data.push_back(stpxloopguardglobaldefaultmode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSTPEXTENSIONSMIB::Stpxloopguardobjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSTPEXTENSIONSMIB::Stpxloopguardobjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOSTPEXTENSIONSMIB::Stpxloopguardobjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stpxLoopGuardGlobalDefaultMode")
    {
        stpxloopguardglobaldefaultmode = value;
        stpxloopguardglobaldefaultmode.value_namespace = name_space;
        stpxloopguardglobaldefaultmode.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSTPEXTENSIONSMIB::Stpxloopguardobjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stpxLoopGuardGlobalDefaultMode")
    {
        stpxloopguardglobaldefaultmode.yfilter = yfilter;
    }
}

bool CISCOSTPEXTENSIONSMIB::Stpxloopguardobjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxLoopGuardGlobalDefaultMode")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::Stpxloopinconsistencytable::Stpxloopinconsistencytable()
{

    yang_name = "stpxLoopInconsistencyTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSTPEXTENSIONSMIB::Stpxloopinconsistencytable::~Stpxloopinconsistencytable()
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxloopinconsistencytable::has_data() const
{
    for (std::size_t index=0; index<stpxloopinconsistencyentry.size(); index++)
    {
        if(stpxloopinconsistencyentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSTPEXTENSIONSMIB::Stpxloopinconsistencytable::has_operation() const
{
    for (std::size_t index=0; index<stpxloopinconsistencyentry.size(); index++)
    {
        if(stpxloopinconsistencyentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::Stpxloopinconsistencytable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::Stpxloopinconsistencytable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxLoopInconsistencyTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::Stpxloopinconsistencytable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSTPEXTENSIONSMIB::Stpxloopinconsistencytable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxloopinconsistencytable::Stpxloopinconsistencyentry>();
        c->parent = this;
        stpxloopinconsistencyentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSTPEXTENSIONSMIB::Stpxloopinconsistencytable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stpxloopinconsistencyentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOSTPEXTENSIONSMIB::Stpxloopinconsistencytable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSTPEXTENSIONSMIB::Stpxloopinconsistencytable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxloopinconsistencytable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxLoopInconsistencyEntry")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::Stpxloopinconsistencytable::Stpxloopinconsistencyentry::Stpxloopinconsistencyentry()
    :
    stpxloopinconsistencyindex{YType::int32, "stpxLoopInconsistencyIndex"},
    stpxloopinconsistencyportindex{YType::int32, "stpxLoopInconsistencyPortIndex"},
    stpxloopinconsistencystate{YType::boolean, "stpxLoopInconsistencyState"}
{

    yang_name = "stpxLoopInconsistencyEntry"; yang_parent_name = "stpxLoopInconsistencyTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSTPEXTENSIONSMIB::Stpxloopinconsistencytable::Stpxloopinconsistencyentry::~Stpxloopinconsistencyentry()
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxloopinconsistencytable::Stpxloopinconsistencyentry::has_data() const
{
    return stpxloopinconsistencyindex.is_set
	|| stpxloopinconsistencyportindex.is_set
	|| stpxloopinconsistencystate.is_set;
}

bool CISCOSTPEXTENSIONSMIB::Stpxloopinconsistencytable::Stpxloopinconsistencyentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxloopinconsistencyindex.yfilter)
	|| ydk::is_set(stpxloopinconsistencyportindex.yfilter)
	|| ydk::is_set(stpxloopinconsistencystate.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::Stpxloopinconsistencytable::Stpxloopinconsistencyentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxLoopInconsistencyTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::Stpxloopinconsistencytable::Stpxloopinconsistencyentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxLoopInconsistencyEntry" <<"[stpxLoopInconsistencyIndex='" <<stpxloopinconsistencyindex <<"']" <<"[stpxLoopInconsistencyPortIndex='" <<stpxloopinconsistencyportindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::Stpxloopinconsistencytable::Stpxloopinconsistencyentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxloopinconsistencyindex.is_set || is_set(stpxloopinconsistencyindex.yfilter)) leaf_name_data.push_back(stpxloopinconsistencyindex.get_name_leafdata());
    if (stpxloopinconsistencyportindex.is_set || is_set(stpxloopinconsistencyportindex.yfilter)) leaf_name_data.push_back(stpxloopinconsistencyportindex.get_name_leafdata());
    if (stpxloopinconsistencystate.is_set || is_set(stpxloopinconsistencystate.yfilter)) leaf_name_data.push_back(stpxloopinconsistencystate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSTPEXTENSIONSMIB::Stpxloopinconsistencytable::Stpxloopinconsistencyentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSTPEXTENSIONSMIB::Stpxloopinconsistencytable::Stpxloopinconsistencyentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOSTPEXTENSIONSMIB::Stpxloopinconsistencytable::Stpxloopinconsistencyentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stpxLoopInconsistencyIndex")
    {
        stpxloopinconsistencyindex = value;
        stpxloopinconsistencyindex.value_namespace = name_space;
        stpxloopinconsistencyindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxLoopInconsistencyPortIndex")
    {
        stpxloopinconsistencyportindex = value;
        stpxloopinconsistencyportindex.value_namespace = name_space;
        stpxloopinconsistencyportindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxLoopInconsistencyState")
    {
        stpxloopinconsistencystate = value;
        stpxloopinconsistencystate.value_namespace = name_space;
        stpxloopinconsistencystate.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSTPEXTENSIONSMIB::Stpxloopinconsistencytable::Stpxloopinconsistencyentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stpxLoopInconsistencyIndex")
    {
        stpxloopinconsistencyindex.yfilter = yfilter;
    }
    if(value_path == "stpxLoopInconsistencyPortIndex")
    {
        stpxloopinconsistencyportindex.yfilter = yfilter;
    }
    if(value_path == "stpxLoopInconsistencyState")
    {
        stpxloopinconsistencystate.yfilter = yfilter;
    }
}

bool CISCOSTPEXTENSIONSMIB::Stpxloopinconsistencytable::Stpxloopinconsistencyentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxLoopInconsistencyIndex" || name == "stpxLoopInconsistencyPortIndex" || name == "stpxLoopInconsistencyState")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::Stpxmistpinstancetable::Stpxmistpinstancetable()
{

    yang_name = "stpxMISTPInstanceTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSTPEXTENSIONSMIB::Stpxmistpinstancetable::~Stpxmistpinstancetable()
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxmistpinstancetable::has_data() const
{
    for (std::size_t index=0; index<stpxmistpinstanceentry.size(); index++)
    {
        if(stpxmistpinstanceentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSTPEXTENSIONSMIB::Stpxmistpinstancetable::has_operation() const
{
    for (std::size_t index=0; index<stpxmistpinstanceentry.size(); index++)
    {
        if(stpxmistpinstanceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::Stpxmistpinstancetable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::Stpxmistpinstancetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxMISTPInstanceTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::Stpxmistpinstancetable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSTPEXTENSIONSMIB::Stpxmistpinstancetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxmistpinstancetable::Stpxmistpinstanceentry>();
        c->parent = this;
        stpxmistpinstanceentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSTPEXTENSIONSMIB::Stpxmistpinstancetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stpxmistpinstanceentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOSTPEXTENSIONSMIB::Stpxmistpinstancetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSTPEXTENSIONSMIB::Stpxmistpinstancetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxmistpinstancetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxMISTPInstanceEntry")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::Stpxmistpinstancetable::Stpxmistpinstanceentry::Stpxmistpinstanceentry()
    :
    stpxmistpinstanceindex{YType::int32, "stpxMISTPInstanceIndex"},
    stpxmistpinstanceenable{YType::boolean, "stpxMISTPInstanceEnable"},
    stpxmistpinstancevlansmapped{YType::str, "stpxMISTPInstanceVlansMapped"},
    stpxmistpinstancevlansmapped2k{YType::str, "stpxMISTPInstanceVlansMapped2k"},
    stpxmistpinstancevlansmapped3k{YType::str, "stpxMISTPInstanceVlansMapped3k"},
    stpxmistpinstancevlansmapped4k{YType::str, "stpxMISTPInstanceVlansMapped4k"}
{

    yang_name = "stpxMISTPInstanceEntry"; yang_parent_name = "stpxMISTPInstanceTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSTPEXTENSIONSMIB::Stpxmistpinstancetable::Stpxmistpinstanceentry::~Stpxmistpinstanceentry()
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxmistpinstancetable::Stpxmistpinstanceentry::has_data() const
{
    return stpxmistpinstanceindex.is_set
	|| stpxmistpinstanceenable.is_set
	|| stpxmistpinstancevlansmapped.is_set
	|| stpxmistpinstancevlansmapped2k.is_set
	|| stpxmistpinstancevlansmapped3k.is_set
	|| stpxmistpinstancevlansmapped4k.is_set;
}

bool CISCOSTPEXTENSIONSMIB::Stpxmistpinstancetable::Stpxmistpinstanceentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxmistpinstanceindex.yfilter)
	|| ydk::is_set(stpxmistpinstanceenable.yfilter)
	|| ydk::is_set(stpxmistpinstancevlansmapped.yfilter)
	|| ydk::is_set(stpxmistpinstancevlansmapped2k.yfilter)
	|| ydk::is_set(stpxmistpinstancevlansmapped3k.yfilter)
	|| ydk::is_set(stpxmistpinstancevlansmapped4k.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::Stpxmistpinstancetable::Stpxmistpinstanceentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxMISTPInstanceTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::Stpxmistpinstancetable::Stpxmistpinstanceentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxMISTPInstanceEntry" <<"[stpxMISTPInstanceIndex='" <<stpxmistpinstanceindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::Stpxmistpinstancetable::Stpxmistpinstanceentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxmistpinstanceindex.is_set || is_set(stpxmistpinstanceindex.yfilter)) leaf_name_data.push_back(stpxmistpinstanceindex.get_name_leafdata());
    if (stpxmistpinstanceenable.is_set || is_set(stpxmistpinstanceenable.yfilter)) leaf_name_data.push_back(stpxmistpinstanceenable.get_name_leafdata());
    if (stpxmistpinstancevlansmapped.is_set || is_set(stpxmistpinstancevlansmapped.yfilter)) leaf_name_data.push_back(stpxmistpinstancevlansmapped.get_name_leafdata());
    if (stpxmistpinstancevlansmapped2k.is_set || is_set(stpxmistpinstancevlansmapped2k.yfilter)) leaf_name_data.push_back(stpxmistpinstancevlansmapped2k.get_name_leafdata());
    if (stpxmistpinstancevlansmapped3k.is_set || is_set(stpxmistpinstancevlansmapped3k.yfilter)) leaf_name_data.push_back(stpxmistpinstancevlansmapped3k.get_name_leafdata());
    if (stpxmistpinstancevlansmapped4k.is_set || is_set(stpxmistpinstancevlansmapped4k.yfilter)) leaf_name_data.push_back(stpxmistpinstancevlansmapped4k.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSTPEXTENSIONSMIB::Stpxmistpinstancetable::Stpxmistpinstanceentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSTPEXTENSIONSMIB::Stpxmistpinstancetable::Stpxmistpinstanceentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOSTPEXTENSIONSMIB::Stpxmistpinstancetable::Stpxmistpinstanceentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stpxMISTPInstanceIndex")
    {
        stpxmistpinstanceindex = value;
        stpxmistpinstanceindex.value_namespace = name_space;
        stpxmistpinstanceindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxMISTPInstanceEnable")
    {
        stpxmistpinstanceenable = value;
        stpxmistpinstanceenable.value_namespace = name_space;
        stpxmistpinstanceenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxMISTPInstanceVlansMapped")
    {
        stpxmistpinstancevlansmapped = value;
        stpxmistpinstancevlansmapped.value_namespace = name_space;
        stpxmistpinstancevlansmapped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxMISTPInstanceVlansMapped2k")
    {
        stpxmistpinstancevlansmapped2k = value;
        stpxmistpinstancevlansmapped2k.value_namespace = name_space;
        stpxmistpinstancevlansmapped2k.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxMISTPInstanceVlansMapped3k")
    {
        stpxmistpinstancevlansmapped3k = value;
        stpxmistpinstancevlansmapped3k.value_namespace = name_space;
        stpxmistpinstancevlansmapped3k.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxMISTPInstanceVlansMapped4k")
    {
        stpxmistpinstancevlansmapped4k = value;
        stpxmistpinstancevlansmapped4k.value_namespace = name_space;
        stpxmistpinstancevlansmapped4k.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSTPEXTENSIONSMIB::Stpxmistpinstancetable::Stpxmistpinstanceentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stpxMISTPInstanceIndex")
    {
        stpxmistpinstanceindex.yfilter = yfilter;
    }
    if(value_path == "stpxMISTPInstanceEnable")
    {
        stpxmistpinstanceenable.yfilter = yfilter;
    }
    if(value_path == "stpxMISTPInstanceVlansMapped")
    {
        stpxmistpinstancevlansmapped.yfilter = yfilter;
    }
    if(value_path == "stpxMISTPInstanceVlansMapped2k")
    {
        stpxmistpinstancevlansmapped2k.yfilter = yfilter;
    }
    if(value_path == "stpxMISTPInstanceVlansMapped3k")
    {
        stpxmistpinstancevlansmapped3k.yfilter = yfilter;
    }
    if(value_path == "stpxMISTPInstanceVlansMapped4k")
    {
        stpxmistpinstancevlansmapped4k.yfilter = yfilter;
    }
}

bool CISCOSTPEXTENSIONSMIB::Stpxmistpinstancetable::Stpxmistpinstanceentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxMISTPInstanceIndex" || name == "stpxMISTPInstanceEnable" || name == "stpxMISTPInstanceVlansMapped" || name == "stpxMISTPInstanceVlansMapped2k" || name == "stpxMISTPInstanceVlansMapped3k" || name == "stpxMISTPInstanceVlansMapped4k")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::Stpxmistpobjects::Stpxmistpobjects()
    :
    stpxmistpinstancenumber{YType::int32, "stpxMISTPInstanceNumber"}
{

    yang_name = "stpxMISTPObjects"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSTPEXTENSIONSMIB::Stpxmistpobjects::~Stpxmistpobjects()
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxmistpobjects::has_data() const
{
    return stpxmistpinstancenumber.is_set;
}

bool CISCOSTPEXTENSIONSMIB::Stpxmistpobjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxmistpinstancenumber.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::Stpxmistpobjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::Stpxmistpobjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxMISTPObjects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::Stpxmistpobjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxmistpinstancenumber.is_set || is_set(stpxmistpinstancenumber.yfilter)) leaf_name_data.push_back(stpxmistpinstancenumber.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSTPEXTENSIONSMIB::Stpxmistpobjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSTPEXTENSIONSMIB::Stpxmistpobjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOSTPEXTENSIONSMIB::Stpxmistpobjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stpxMISTPInstanceNumber")
    {
        stpxmistpinstancenumber = value;
        stpxmistpinstancenumber.value_namespace = name_space;
        stpxmistpinstancenumber.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSTPEXTENSIONSMIB::Stpxmistpobjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stpxMISTPInstanceNumber")
    {
        stpxmistpinstancenumber.yfilter = yfilter;
    }
}

bool CISCOSTPEXTENSIONSMIB::Stpxmistpobjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxMISTPInstanceNumber")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::Stpxmstinstanceedittable::Stpxmstinstanceedittable()
{

    yang_name = "stpxMSTInstanceEditTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSTPEXTENSIONSMIB::Stpxmstinstanceedittable::~Stpxmstinstanceedittable()
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxmstinstanceedittable::has_data() const
{
    for (std::size_t index=0; index<stpxmstinstanceeditentry.size(); index++)
    {
        if(stpxmstinstanceeditentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSTPEXTENSIONSMIB::Stpxmstinstanceedittable::has_operation() const
{
    for (std::size_t index=0; index<stpxmstinstanceeditentry.size(); index++)
    {
        if(stpxmstinstanceeditentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::Stpxmstinstanceedittable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::Stpxmstinstanceedittable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxMSTInstanceEditTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::Stpxmstinstanceedittable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSTPEXTENSIONSMIB::Stpxmstinstanceedittable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxmstinstanceedittable::Stpxmstinstanceeditentry>();
        c->parent = this;
        stpxmstinstanceeditentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSTPEXTENSIONSMIB::Stpxmstinstanceedittable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stpxmstinstanceeditentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOSTPEXTENSIONSMIB::Stpxmstinstanceedittable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSTPEXTENSIONSMIB::Stpxmstinstanceedittable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxmstinstanceedittable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxMSTInstanceEditEntry")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::Stpxmstinstanceedittable::Stpxmstinstanceeditentry::Stpxmstinstanceeditentry()
    :
    stpxmstinstanceeditindex{YType::int32, "stpxMSTInstanceEditIndex"},
    stpxmstinstanceeditvlansmap{YType::str, "stpxMSTInstanceEditVlansMap"},
    stpxmstinstanceeditvlansmap2k{YType::str, "stpxMSTInstanceEditVlansMap2k"},
    stpxmstinstanceeditvlansmap3k{YType::str, "stpxMSTInstanceEditVlansMap3k"},
    stpxmstinstanceeditvlansmap4k{YType::str, "stpxMSTInstanceEditVlansMap4k"}
{

    yang_name = "stpxMSTInstanceEditEntry"; yang_parent_name = "stpxMSTInstanceEditTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSTPEXTENSIONSMIB::Stpxmstinstanceedittable::Stpxmstinstanceeditentry::~Stpxmstinstanceeditentry()
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxmstinstanceedittable::Stpxmstinstanceeditentry::has_data() const
{
    return stpxmstinstanceeditindex.is_set
	|| stpxmstinstanceeditvlansmap.is_set
	|| stpxmstinstanceeditvlansmap2k.is_set
	|| stpxmstinstanceeditvlansmap3k.is_set
	|| stpxmstinstanceeditvlansmap4k.is_set;
}

bool CISCOSTPEXTENSIONSMIB::Stpxmstinstanceedittable::Stpxmstinstanceeditentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxmstinstanceeditindex.yfilter)
	|| ydk::is_set(stpxmstinstanceeditvlansmap.yfilter)
	|| ydk::is_set(stpxmstinstanceeditvlansmap2k.yfilter)
	|| ydk::is_set(stpxmstinstanceeditvlansmap3k.yfilter)
	|| ydk::is_set(stpxmstinstanceeditvlansmap4k.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::Stpxmstinstanceedittable::Stpxmstinstanceeditentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxMSTInstanceEditTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::Stpxmstinstanceedittable::Stpxmstinstanceeditentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxMSTInstanceEditEntry" <<"[stpxMSTInstanceEditIndex='" <<stpxmstinstanceeditindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::Stpxmstinstanceedittable::Stpxmstinstanceeditentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxmstinstanceeditindex.is_set || is_set(stpxmstinstanceeditindex.yfilter)) leaf_name_data.push_back(stpxmstinstanceeditindex.get_name_leafdata());
    if (stpxmstinstanceeditvlansmap.is_set || is_set(stpxmstinstanceeditvlansmap.yfilter)) leaf_name_data.push_back(stpxmstinstanceeditvlansmap.get_name_leafdata());
    if (stpxmstinstanceeditvlansmap2k.is_set || is_set(stpxmstinstanceeditvlansmap2k.yfilter)) leaf_name_data.push_back(stpxmstinstanceeditvlansmap2k.get_name_leafdata());
    if (stpxmstinstanceeditvlansmap3k.is_set || is_set(stpxmstinstanceeditvlansmap3k.yfilter)) leaf_name_data.push_back(stpxmstinstanceeditvlansmap3k.get_name_leafdata());
    if (stpxmstinstanceeditvlansmap4k.is_set || is_set(stpxmstinstanceeditvlansmap4k.yfilter)) leaf_name_data.push_back(stpxmstinstanceeditvlansmap4k.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSTPEXTENSIONSMIB::Stpxmstinstanceedittable::Stpxmstinstanceeditentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSTPEXTENSIONSMIB::Stpxmstinstanceedittable::Stpxmstinstanceeditentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOSTPEXTENSIONSMIB::Stpxmstinstanceedittable::Stpxmstinstanceeditentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stpxMSTInstanceEditIndex")
    {
        stpxmstinstanceeditindex = value;
        stpxmstinstanceeditindex.value_namespace = name_space;
        stpxmstinstanceeditindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxMSTInstanceEditVlansMap")
    {
        stpxmstinstanceeditvlansmap = value;
        stpxmstinstanceeditvlansmap.value_namespace = name_space;
        stpxmstinstanceeditvlansmap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxMSTInstanceEditVlansMap2k")
    {
        stpxmstinstanceeditvlansmap2k = value;
        stpxmstinstanceeditvlansmap2k.value_namespace = name_space;
        stpxmstinstanceeditvlansmap2k.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxMSTInstanceEditVlansMap3k")
    {
        stpxmstinstanceeditvlansmap3k = value;
        stpxmstinstanceeditvlansmap3k.value_namespace = name_space;
        stpxmstinstanceeditvlansmap3k.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxMSTInstanceEditVlansMap4k")
    {
        stpxmstinstanceeditvlansmap4k = value;
        stpxmstinstanceeditvlansmap4k.value_namespace = name_space;
        stpxmstinstanceeditvlansmap4k.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSTPEXTENSIONSMIB::Stpxmstinstanceedittable::Stpxmstinstanceeditentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stpxMSTInstanceEditIndex")
    {
        stpxmstinstanceeditindex.yfilter = yfilter;
    }
    if(value_path == "stpxMSTInstanceEditVlansMap")
    {
        stpxmstinstanceeditvlansmap.yfilter = yfilter;
    }
    if(value_path == "stpxMSTInstanceEditVlansMap2k")
    {
        stpxmstinstanceeditvlansmap2k.yfilter = yfilter;
    }
    if(value_path == "stpxMSTInstanceEditVlansMap3k")
    {
        stpxmstinstanceeditvlansmap3k.yfilter = yfilter;
    }
    if(value_path == "stpxMSTInstanceEditVlansMap4k")
    {
        stpxmstinstanceeditvlansmap4k.yfilter = yfilter;
    }
}

bool CISCOSTPEXTENSIONSMIB::Stpxmstinstanceedittable::Stpxmstinstanceeditentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxMSTInstanceEditIndex" || name == "stpxMSTInstanceEditVlansMap" || name == "stpxMSTInstanceEditVlansMap2k" || name == "stpxMSTInstanceEditVlansMap3k" || name == "stpxMSTInstanceEditVlansMap4k")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::Stpxmstinstancetable::Stpxmstinstancetable()
{

    yang_name = "stpxMSTInstanceTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSTPEXTENSIONSMIB::Stpxmstinstancetable::~Stpxmstinstancetable()
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxmstinstancetable::has_data() const
{
    for (std::size_t index=0; index<stpxmstinstanceentry.size(); index++)
    {
        if(stpxmstinstanceentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSTPEXTENSIONSMIB::Stpxmstinstancetable::has_operation() const
{
    for (std::size_t index=0; index<stpxmstinstanceentry.size(); index++)
    {
        if(stpxmstinstanceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::Stpxmstinstancetable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::Stpxmstinstancetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxMSTInstanceTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::Stpxmstinstancetable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSTPEXTENSIONSMIB::Stpxmstinstancetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxmstinstancetable::Stpxmstinstanceentry>();
        c->parent = this;
        stpxmstinstanceentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSTPEXTENSIONSMIB::Stpxmstinstancetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stpxmstinstanceentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOSTPEXTENSIONSMIB::Stpxmstinstancetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSTPEXTENSIONSMIB::Stpxmstinstancetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxmstinstancetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxMSTInstanceEntry")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::Stpxmstinstancetable::Stpxmstinstanceentry::Stpxmstinstanceentry()
    :
    stpxmstinstanceindex{YType::int32, "stpxMSTInstanceIndex"},
    stpxmstinstanceremaininghopcount{YType::int32, "stpxMSTInstanceRemainingHopCount"},
    stpxmstinstancevlansmapped{YType::str, "stpxMSTInstanceVlansMapped"},
    stpxmstinstancevlansmapped2k{YType::str, "stpxMSTInstanceVlansMapped2k"},
    stpxmstinstancevlansmapped3k{YType::str, "stpxMSTInstanceVlansMapped3k"},
    stpxmstinstancevlansmapped4k{YType::str, "stpxMSTInstanceVlansMapped4k"}
{

    yang_name = "stpxMSTInstanceEntry"; yang_parent_name = "stpxMSTInstanceTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSTPEXTENSIONSMIB::Stpxmstinstancetable::Stpxmstinstanceentry::~Stpxmstinstanceentry()
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxmstinstancetable::Stpxmstinstanceentry::has_data() const
{
    return stpxmstinstanceindex.is_set
	|| stpxmstinstanceremaininghopcount.is_set
	|| stpxmstinstancevlansmapped.is_set
	|| stpxmstinstancevlansmapped2k.is_set
	|| stpxmstinstancevlansmapped3k.is_set
	|| stpxmstinstancevlansmapped4k.is_set;
}

bool CISCOSTPEXTENSIONSMIB::Stpxmstinstancetable::Stpxmstinstanceentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxmstinstanceindex.yfilter)
	|| ydk::is_set(stpxmstinstanceremaininghopcount.yfilter)
	|| ydk::is_set(stpxmstinstancevlansmapped.yfilter)
	|| ydk::is_set(stpxmstinstancevlansmapped2k.yfilter)
	|| ydk::is_set(stpxmstinstancevlansmapped3k.yfilter)
	|| ydk::is_set(stpxmstinstancevlansmapped4k.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::Stpxmstinstancetable::Stpxmstinstanceentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxMSTInstanceTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::Stpxmstinstancetable::Stpxmstinstanceentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxMSTInstanceEntry" <<"[stpxMSTInstanceIndex='" <<stpxmstinstanceindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::Stpxmstinstancetable::Stpxmstinstanceentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxmstinstanceindex.is_set || is_set(stpxmstinstanceindex.yfilter)) leaf_name_data.push_back(stpxmstinstanceindex.get_name_leafdata());
    if (stpxmstinstanceremaininghopcount.is_set || is_set(stpxmstinstanceremaininghopcount.yfilter)) leaf_name_data.push_back(stpxmstinstanceremaininghopcount.get_name_leafdata());
    if (stpxmstinstancevlansmapped.is_set || is_set(stpxmstinstancevlansmapped.yfilter)) leaf_name_data.push_back(stpxmstinstancevlansmapped.get_name_leafdata());
    if (stpxmstinstancevlansmapped2k.is_set || is_set(stpxmstinstancevlansmapped2k.yfilter)) leaf_name_data.push_back(stpxmstinstancevlansmapped2k.get_name_leafdata());
    if (stpxmstinstancevlansmapped3k.is_set || is_set(stpxmstinstancevlansmapped3k.yfilter)) leaf_name_data.push_back(stpxmstinstancevlansmapped3k.get_name_leafdata());
    if (stpxmstinstancevlansmapped4k.is_set || is_set(stpxmstinstancevlansmapped4k.yfilter)) leaf_name_data.push_back(stpxmstinstancevlansmapped4k.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSTPEXTENSIONSMIB::Stpxmstinstancetable::Stpxmstinstanceentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSTPEXTENSIONSMIB::Stpxmstinstancetable::Stpxmstinstanceentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOSTPEXTENSIONSMIB::Stpxmstinstancetable::Stpxmstinstanceentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stpxMSTInstanceIndex")
    {
        stpxmstinstanceindex = value;
        stpxmstinstanceindex.value_namespace = name_space;
        stpxmstinstanceindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxMSTInstanceRemainingHopCount")
    {
        stpxmstinstanceremaininghopcount = value;
        stpxmstinstanceremaininghopcount.value_namespace = name_space;
        stpxmstinstanceremaininghopcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxMSTInstanceVlansMapped")
    {
        stpxmstinstancevlansmapped = value;
        stpxmstinstancevlansmapped.value_namespace = name_space;
        stpxmstinstancevlansmapped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxMSTInstanceVlansMapped2k")
    {
        stpxmstinstancevlansmapped2k = value;
        stpxmstinstancevlansmapped2k.value_namespace = name_space;
        stpxmstinstancevlansmapped2k.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxMSTInstanceVlansMapped3k")
    {
        stpxmstinstancevlansmapped3k = value;
        stpxmstinstancevlansmapped3k.value_namespace = name_space;
        stpxmstinstancevlansmapped3k.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxMSTInstanceVlansMapped4k")
    {
        stpxmstinstancevlansmapped4k = value;
        stpxmstinstancevlansmapped4k.value_namespace = name_space;
        stpxmstinstancevlansmapped4k.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSTPEXTENSIONSMIB::Stpxmstinstancetable::Stpxmstinstanceentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stpxMSTInstanceIndex")
    {
        stpxmstinstanceindex.yfilter = yfilter;
    }
    if(value_path == "stpxMSTInstanceRemainingHopCount")
    {
        stpxmstinstanceremaininghopcount.yfilter = yfilter;
    }
    if(value_path == "stpxMSTInstanceVlansMapped")
    {
        stpxmstinstancevlansmapped.yfilter = yfilter;
    }
    if(value_path == "stpxMSTInstanceVlansMapped2k")
    {
        stpxmstinstancevlansmapped2k.yfilter = yfilter;
    }
    if(value_path == "stpxMSTInstanceVlansMapped3k")
    {
        stpxmstinstancevlansmapped3k.yfilter = yfilter;
    }
    if(value_path == "stpxMSTInstanceVlansMapped4k")
    {
        stpxmstinstancevlansmapped4k.yfilter = yfilter;
    }
}

bool CISCOSTPEXTENSIONSMIB::Stpxmstinstancetable::Stpxmstinstanceentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxMSTInstanceIndex" || name == "stpxMSTInstanceRemainingHopCount" || name == "stpxMSTInstanceVlansMapped" || name == "stpxMSTInstanceVlansMapped2k" || name == "stpxMSTInstanceVlansMapped3k" || name == "stpxMSTInstanceVlansMapped4k")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::Stpxmstobjects::Stpxmstobjects()
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

    yang_name = "stpxMSTObjects"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSTPEXTENSIONSMIB::Stpxmstobjects::~Stpxmstobjects()
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxmstobjects::has_data() const
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

bool CISCOSTPEXTENSIONSMIB::Stpxmstobjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxmstmaxhopcount.yfilter)
	|| ydk::is_set(stpxmstmaxinstancenumber.yfilter)
	|| ydk::is_set(stpxmstregioneditbufferoperation.yfilter)
	|| ydk::is_set(stpxmstregioneditbufferstatus.yfilter)
	|| ydk::is_set(stpxmstregioneditname.yfilter)
	|| ydk::is_set(stpxmstregioneditrevision.yfilter)
	|| ydk::is_set(stpxmstregionname.yfilter)
	|| ydk::is_set(stpxmstregionrevision.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::Stpxmstobjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::Stpxmstobjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxMSTObjects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::Stpxmstobjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxmstmaxhopcount.is_set || is_set(stpxmstmaxhopcount.yfilter)) leaf_name_data.push_back(stpxmstmaxhopcount.get_name_leafdata());
    if (stpxmstmaxinstancenumber.is_set || is_set(stpxmstmaxinstancenumber.yfilter)) leaf_name_data.push_back(stpxmstmaxinstancenumber.get_name_leafdata());
    if (stpxmstregioneditbufferoperation.is_set || is_set(stpxmstregioneditbufferoperation.yfilter)) leaf_name_data.push_back(stpxmstregioneditbufferoperation.get_name_leafdata());
    if (stpxmstregioneditbufferstatus.is_set || is_set(stpxmstregioneditbufferstatus.yfilter)) leaf_name_data.push_back(stpxmstregioneditbufferstatus.get_name_leafdata());
    if (stpxmstregioneditname.is_set || is_set(stpxmstregioneditname.yfilter)) leaf_name_data.push_back(stpxmstregioneditname.get_name_leafdata());
    if (stpxmstregioneditrevision.is_set || is_set(stpxmstregioneditrevision.yfilter)) leaf_name_data.push_back(stpxmstregioneditrevision.get_name_leafdata());
    if (stpxmstregionname.is_set || is_set(stpxmstregionname.yfilter)) leaf_name_data.push_back(stpxmstregionname.get_name_leafdata());
    if (stpxmstregionrevision.is_set || is_set(stpxmstregionrevision.yfilter)) leaf_name_data.push_back(stpxmstregionrevision.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSTPEXTENSIONSMIB::Stpxmstobjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSTPEXTENSIONSMIB::Stpxmstobjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOSTPEXTENSIONSMIB::Stpxmstobjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stpxMSTMaxHopCount")
    {
        stpxmstmaxhopcount = value;
        stpxmstmaxhopcount.value_namespace = name_space;
        stpxmstmaxhopcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxMSTMaxInstanceNumber")
    {
        stpxmstmaxinstancenumber = value;
        stpxmstmaxinstancenumber.value_namespace = name_space;
        stpxmstmaxinstancenumber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxMSTRegionEditBufferOperation")
    {
        stpxmstregioneditbufferoperation = value;
        stpxmstregioneditbufferoperation.value_namespace = name_space;
        stpxmstregioneditbufferoperation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxMSTRegionEditBufferStatus")
    {
        stpxmstregioneditbufferstatus = value;
        stpxmstregioneditbufferstatus.value_namespace = name_space;
        stpxmstregioneditbufferstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxMSTRegionEditName")
    {
        stpxmstregioneditname = value;
        stpxmstregioneditname.value_namespace = name_space;
        stpxmstregioneditname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxMSTRegionEditRevision")
    {
        stpxmstregioneditrevision = value;
        stpxmstregioneditrevision.value_namespace = name_space;
        stpxmstregioneditrevision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxMSTRegionName")
    {
        stpxmstregionname = value;
        stpxmstregionname.value_namespace = name_space;
        stpxmstregionname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxMSTRegionRevision")
    {
        stpxmstregionrevision = value;
        stpxmstregionrevision.value_namespace = name_space;
        stpxmstregionrevision.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSTPEXTENSIONSMIB::Stpxmstobjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stpxMSTMaxHopCount")
    {
        stpxmstmaxhopcount.yfilter = yfilter;
    }
    if(value_path == "stpxMSTMaxInstanceNumber")
    {
        stpxmstmaxinstancenumber.yfilter = yfilter;
    }
    if(value_path == "stpxMSTRegionEditBufferOperation")
    {
        stpxmstregioneditbufferoperation.yfilter = yfilter;
    }
    if(value_path == "stpxMSTRegionEditBufferStatus")
    {
        stpxmstregioneditbufferstatus.yfilter = yfilter;
    }
    if(value_path == "stpxMSTRegionEditName")
    {
        stpxmstregioneditname.yfilter = yfilter;
    }
    if(value_path == "stpxMSTRegionEditRevision")
    {
        stpxmstregioneditrevision.yfilter = yfilter;
    }
    if(value_path == "stpxMSTRegionName")
    {
        stpxmstregionname.yfilter = yfilter;
    }
    if(value_path == "stpxMSTRegionRevision")
    {
        stpxmstregionrevision.yfilter = yfilter;
    }
}

bool CISCOSTPEXTENSIONSMIB::Stpxmstobjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxMSTMaxHopCount" || name == "stpxMSTMaxInstanceNumber" || name == "stpxMSTRegionEditBufferOperation" || name == "stpxMSTRegionEditBufferStatus" || name == "stpxMSTRegionEditName" || name == "stpxMSTRegionEditRevision" || name == "stpxMSTRegionName" || name == "stpxMSTRegionRevision")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::Stpxmstportroletable::Stpxmstportroletable()
{

    yang_name = "stpxMSTPortRoleTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSTPEXTENSIONSMIB::Stpxmstportroletable::~Stpxmstportroletable()
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxmstportroletable::has_data() const
{
    for (std::size_t index=0; index<stpxmstportroleentry.size(); index++)
    {
        if(stpxmstportroleentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSTPEXTENSIONSMIB::Stpxmstportroletable::has_operation() const
{
    for (std::size_t index=0; index<stpxmstportroleentry.size(); index++)
    {
        if(stpxmstportroleentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::Stpxmstportroletable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::Stpxmstportroletable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxMSTPortRoleTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::Stpxmstportroletable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSTPEXTENSIONSMIB::Stpxmstportroletable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxmstportroletable::Stpxmstportroleentry>();
        c->parent = this;
        stpxmstportroleentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSTPEXTENSIONSMIB::Stpxmstportroletable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stpxmstportroleentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOSTPEXTENSIONSMIB::Stpxmstportroletable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSTPEXTENSIONSMIB::Stpxmstportroletable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxmstportroletable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxMSTPortRoleEntry")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::Stpxmstportroletable::Stpxmstportroleentry::Stpxmstportroleentry()
    :
    stpxmstportroleinstanceindex{YType::int32, "stpxMSTPortRoleInstanceIndex"},
    stpxmstportroleportindex{YType::int32, "stpxMSTPortRolePortIndex"},
    stpxmstportrolevalue{YType::enumeration, "stpxMSTPortRoleValue"}
{

    yang_name = "stpxMSTPortRoleEntry"; yang_parent_name = "stpxMSTPortRoleTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSTPEXTENSIONSMIB::Stpxmstportroletable::Stpxmstportroleentry::~Stpxmstportroleentry()
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxmstportroletable::Stpxmstportroleentry::has_data() const
{
    return stpxmstportroleinstanceindex.is_set
	|| stpxmstportroleportindex.is_set
	|| stpxmstportrolevalue.is_set;
}

bool CISCOSTPEXTENSIONSMIB::Stpxmstportroletable::Stpxmstportroleentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxmstportroleinstanceindex.yfilter)
	|| ydk::is_set(stpxmstportroleportindex.yfilter)
	|| ydk::is_set(stpxmstportrolevalue.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::Stpxmstportroletable::Stpxmstportroleentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxMSTPortRoleTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::Stpxmstportroletable::Stpxmstportroleentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxMSTPortRoleEntry" <<"[stpxMSTPortRoleInstanceIndex='" <<stpxmstportroleinstanceindex <<"']" <<"[stpxMSTPortRolePortIndex='" <<stpxmstportroleportindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::Stpxmstportroletable::Stpxmstportroleentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxmstportroleinstanceindex.is_set || is_set(stpxmstportroleinstanceindex.yfilter)) leaf_name_data.push_back(stpxmstportroleinstanceindex.get_name_leafdata());
    if (stpxmstportroleportindex.is_set || is_set(stpxmstportroleportindex.yfilter)) leaf_name_data.push_back(stpxmstportroleportindex.get_name_leafdata());
    if (stpxmstportrolevalue.is_set || is_set(stpxmstportrolevalue.yfilter)) leaf_name_data.push_back(stpxmstportrolevalue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSTPEXTENSIONSMIB::Stpxmstportroletable::Stpxmstportroleentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSTPEXTENSIONSMIB::Stpxmstportroletable::Stpxmstportroleentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOSTPEXTENSIONSMIB::Stpxmstportroletable::Stpxmstportroleentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stpxMSTPortRoleInstanceIndex")
    {
        stpxmstportroleinstanceindex = value;
        stpxmstportroleinstanceindex.value_namespace = name_space;
        stpxmstportroleinstanceindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxMSTPortRolePortIndex")
    {
        stpxmstportroleportindex = value;
        stpxmstportroleportindex.value_namespace = name_space;
        stpxmstportroleportindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxMSTPortRoleValue")
    {
        stpxmstportrolevalue = value;
        stpxmstportrolevalue.value_namespace = name_space;
        stpxmstportrolevalue.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSTPEXTENSIONSMIB::Stpxmstportroletable::Stpxmstportroleentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stpxMSTPortRoleInstanceIndex")
    {
        stpxmstportroleinstanceindex.yfilter = yfilter;
    }
    if(value_path == "stpxMSTPortRolePortIndex")
    {
        stpxmstportroleportindex.yfilter = yfilter;
    }
    if(value_path == "stpxMSTPortRoleValue")
    {
        stpxmstportrolevalue.yfilter = yfilter;
    }
}

bool CISCOSTPEXTENSIONSMIB::Stpxmstportroletable::Stpxmstportroleentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxMSTPortRoleInstanceIndex" || name == "stpxMSTPortRolePortIndex" || name == "stpxMSTPortRoleValue")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::Stpxmstporttable::Stpxmstporttable()
{

    yang_name = "stpxMSTPortTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSTPEXTENSIONSMIB::Stpxmstporttable::~Stpxmstporttable()
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxmstporttable::has_data() const
{
    for (std::size_t index=0; index<stpxmstportentry.size(); index++)
    {
        if(stpxmstportentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSTPEXTENSIONSMIB::Stpxmstporttable::has_operation() const
{
    for (std::size_t index=0; index<stpxmstportentry.size(); index++)
    {
        if(stpxmstportentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::Stpxmstporttable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::Stpxmstporttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxMSTPortTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::Stpxmstporttable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSTPEXTENSIONSMIB::Stpxmstporttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxmstporttable::Stpxmstportentry>();
        c->parent = this;
        stpxmstportentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSTPEXTENSIONSMIB::Stpxmstporttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stpxmstportentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOSTPEXTENSIONSMIB::Stpxmstporttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSTPEXTENSIONSMIB::Stpxmstporttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxmstporttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxMSTPortEntry")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::Stpxmstporttable::Stpxmstportentry::Stpxmstportentry()
    :
    stpxmstportindex{YType::int32, "stpxMSTPortIndex"},
    stpxmstportadminlinktype{YType::enumeration, "stpxMSTPortAdminLinkType"},
    stpxmstportoperlinktype{YType::enumeration, "stpxMSTPortOperLinkType"},
    stpxmstportprotocolmigration{YType::boolean, "stpxMSTPortProtocolMigration"},
    stpxmstportstatus{YType::bits, "stpxMSTPortStatus"}
{

    yang_name = "stpxMSTPortEntry"; yang_parent_name = "stpxMSTPortTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSTPEXTENSIONSMIB::Stpxmstporttable::Stpxmstportentry::~Stpxmstportentry()
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxmstporttable::Stpxmstportentry::has_data() const
{
    return stpxmstportindex.is_set
	|| stpxmstportadminlinktype.is_set
	|| stpxmstportoperlinktype.is_set
	|| stpxmstportprotocolmigration.is_set
	|| stpxmstportstatus.is_set;
}

bool CISCOSTPEXTENSIONSMIB::Stpxmstporttable::Stpxmstportentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxmstportindex.yfilter)
	|| ydk::is_set(stpxmstportadminlinktype.yfilter)
	|| ydk::is_set(stpxmstportoperlinktype.yfilter)
	|| ydk::is_set(stpxmstportprotocolmigration.yfilter)
	|| ydk::is_set(stpxmstportstatus.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::Stpxmstporttable::Stpxmstportentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxMSTPortTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::Stpxmstporttable::Stpxmstportentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxMSTPortEntry" <<"[stpxMSTPortIndex='" <<stpxmstportindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::Stpxmstporttable::Stpxmstportentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxmstportindex.is_set || is_set(stpxmstportindex.yfilter)) leaf_name_data.push_back(stpxmstportindex.get_name_leafdata());
    if (stpxmstportadminlinktype.is_set || is_set(stpxmstportadminlinktype.yfilter)) leaf_name_data.push_back(stpxmstportadminlinktype.get_name_leafdata());
    if (stpxmstportoperlinktype.is_set || is_set(stpxmstportoperlinktype.yfilter)) leaf_name_data.push_back(stpxmstportoperlinktype.get_name_leafdata());
    if (stpxmstportprotocolmigration.is_set || is_set(stpxmstportprotocolmigration.yfilter)) leaf_name_data.push_back(stpxmstportprotocolmigration.get_name_leafdata());
    if (stpxmstportstatus.is_set || is_set(stpxmstportstatus.yfilter)) leaf_name_data.push_back(stpxmstportstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSTPEXTENSIONSMIB::Stpxmstporttable::Stpxmstportentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSTPEXTENSIONSMIB::Stpxmstporttable::Stpxmstportentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOSTPEXTENSIONSMIB::Stpxmstporttable::Stpxmstportentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stpxMSTPortIndex")
    {
        stpxmstportindex = value;
        stpxmstportindex.value_namespace = name_space;
        stpxmstportindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxMSTPortAdminLinkType")
    {
        stpxmstportadminlinktype = value;
        stpxmstportadminlinktype.value_namespace = name_space;
        stpxmstportadminlinktype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxMSTPortOperLinkType")
    {
        stpxmstportoperlinktype = value;
        stpxmstportoperlinktype.value_namespace = name_space;
        stpxmstportoperlinktype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxMSTPortProtocolMigration")
    {
        stpxmstportprotocolmigration = value;
        stpxmstportprotocolmigration.value_namespace = name_space;
        stpxmstportprotocolmigration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxMSTPortStatus")
    {
        stpxmstportstatus[value] = true;
    }
}

void CISCOSTPEXTENSIONSMIB::Stpxmstporttable::Stpxmstportentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stpxMSTPortIndex")
    {
        stpxmstportindex.yfilter = yfilter;
    }
    if(value_path == "stpxMSTPortAdminLinkType")
    {
        stpxmstportadminlinktype.yfilter = yfilter;
    }
    if(value_path == "stpxMSTPortOperLinkType")
    {
        stpxmstportoperlinktype.yfilter = yfilter;
    }
    if(value_path == "stpxMSTPortProtocolMigration")
    {
        stpxmstportprotocolmigration.yfilter = yfilter;
    }
    if(value_path == "stpxMSTPortStatus")
    {
        stpxmstportstatus.yfilter = yfilter;
    }
}

bool CISCOSTPEXTENSIONSMIB::Stpxmstporttable::Stpxmstportentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxMSTPortIndex" || name == "stpxMSTPortAdminLinkType" || name == "stpxMSTPortOperLinkType" || name == "stpxMSTPortProtocolMigration" || name == "stpxMSTPortStatus")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::Stpxpvstvlantable::Stpxpvstvlantable()
{

    yang_name = "stpxPVSTVlanTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSTPEXTENSIONSMIB::Stpxpvstvlantable::~Stpxpvstvlantable()
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxpvstvlantable::has_data() const
{
    for (std::size_t index=0; index<stpxpvstvlanentry.size(); index++)
    {
        if(stpxpvstvlanentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSTPEXTENSIONSMIB::Stpxpvstvlantable::has_operation() const
{
    for (std::size_t index=0; index<stpxpvstvlanentry.size(); index++)
    {
        if(stpxpvstvlanentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::Stpxpvstvlantable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::Stpxpvstvlantable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxPVSTVlanTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::Stpxpvstvlantable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSTPEXTENSIONSMIB::Stpxpvstvlantable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxpvstvlantable::Stpxpvstvlanentry>();
        c->parent = this;
        stpxpvstvlanentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSTPEXTENSIONSMIB::Stpxpvstvlantable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stpxpvstvlanentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOSTPEXTENSIONSMIB::Stpxpvstvlantable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSTPEXTENSIONSMIB::Stpxpvstvlantable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxpvstvlantable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxPVSTVlanEntry")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::Stpxpvstvlantable::Stpxpvstvlanentry::Stpxpvstvlanentry()
    :
    stpxpvstvlanindex{YType::int32, "stpxPVSTVlanIndex"},
    stpxpvstvlanenable{YType::enumeration, "stpxPVSTVlanEnable"}
{

    yang_name = "stpxPVSTVlanEntry"; yang_parent_name = "stpxPVSTVlanTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSTPEXTENSIONSMIB::Stpxpvstvlantable::Stpxpvstvlanentry::~Stpxpvstvlanentry()
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxpvstvlantable::Stpxpvstvlanentry::has_data() const
{
    return stpxpvstvlanindex.is_set
	|| stpxpvstvlanenable.is_set;
}

bool CISCOSTPEXTENSIONSMIB::Stpxpvstvlantable::Stpxpvstvlanentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxpvstvlanindex.yfilter)
	|| ydk::is_set(stpxpvstvlanenable.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::Stpxpvstvlantable::Stpxpvstvlanentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxPVSTVlanTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::Stpxpvstvlantable::Stpxpvstvlanentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxPVSTVlanEntry" <<"[stpxPVSTVlanIndex='" <<stpxpvstvlanindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::Stpxpvstvlantable::Stpxpvstvlanentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxpvstvlanindex.is_set || is_set(stpxpvstvlanindex.yfilter)) leaf_name_data.push_back(stpxpvstvlanindex.get_name_leafdata());
    if (stpxpvstvlanenable.is_set || is_set(stpxpvstvlanenable.yfilter)) leaf_name_data.push_back(stpxpvstvlanenable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSTPEXTENSIONSMIB::Stpxpvstvlantable::Stpxpvstvlanentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSTPEXTENSIONSMIB::Stpxpvstvlantable::Stpxpvstvlanentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOSTPEXTENSIONSMIB::Stpxpvstvlantable::Stpxpvstvlanentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stpxPVSTVlanIndex")
    {
        stpxpvstvlanindex = value;
        stpxpvstvlanindex.value_namespace = name_space;
        stpxpvstvlanindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxPVSTVlanEnable")
    {
        stpxpvstvlanenable = value;
        stpxpvstvlanenable.value_namespace = name_space;
        stpxpvstvlanenable.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSTPEXTENSIONSMIB::Stpxpvstvlantable::Stpxpvstvlanentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stpxPVSTVlanIndex")
    {
        stpxpvstvlanindex.yfilter = yfilter;
    }
    if(value_path == "stpxPVSTVlanEnable")
    {
        stpxpvstvlanenable.yfilter = yfilter;
    }
}

bool CISCOSTPEXTENSIONSMIB::Stpxpvstvlantable::Stpxpvstvlanentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxPVSTVlanIndex" || name == "stpxPVSTVlanEnable")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::Stpxrootguardconfigtable::Stpxrootguardconfigtable()
{

    yang_name = "stpxRootGuardConfigTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSTPEXTENSIONSMIB::Stpxrootguardconfigtable::~Stpxrootguardconfigtable()
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxrootguardconfigtable::has_data() const
{
    for (std::size_t index=0; index<stpxrootguardconfigentry.size(); index++)
    {
        if(stpxrootguardconfigentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSTPEXTENSIONSMIB::Stpxrootguardconfigtable::has_operation() const
{
    for (std::size_t index=0; index<stpxrootguardconfigentry.size(); index++)
    {
        if(stpxrootguardconfigentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::Stpxrootguardconfigtable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::Stpxrootguardconfigtable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxRootGuardConfigTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::Stpxrootguardconfigtable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSTPEXTENSIONSMIB::Stpxrootguardconfigtable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxrootguardconfigtable::Stpxrootguardconfigentry>();
        c->parent = this;
        stpxrootguardconfigentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSTPEXTENSIONSMIB::Stpxrootguardconfigtable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stpxrootguardconfigentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOSTPEXTENSIONSMIB::Stpxrootguardconfigtable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSTPEXTENSIONSMIB::Stpxrootguardconfigtable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxrootguardconfigtable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxRootGuardConfigEntry")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::Stpxrootguardconfigtable::Stpxrootguardconfigentry::Stpxrootguardconfigentry()
    :
    stpxrootguardconfigportindex{YType::int32, "stpxRootGuardConfigPortIndex"},
    stpxrootguardconfigenabled{YType::boolean, "stpxRootGuardConfigEnabled"}
{

    yang_name = "stpxRootGuardConfigEntry"; yang_parent_name = "stpxRootGuardConfigTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSTPEXTENSIONSMIB::Stpxrootguardconfigtable::Stpxrootguardconfigentry::~Stpxrootguardconfigentry()
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxrootguardconfigtable::Stpxrootguardconfigentry::has_data() const
{
    return stpxrootguardconfigportindex.is_set
	|| stpxrootguardconfigenabled.is_set;
}

bool CISCOSTPEXTENSIONSMIB::Stpxrootguardconfigtable::Stpxrootguardconfigentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxrootguardconfigportindex.yfilter)
	|| ydk::is_set(stpxrootguardconfigenabled.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::Stpxrootguardconfigtable::Stpxrootguardconfigentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxRootGuardConfigTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::Stpxrootguardconfigtable::Stpxrootguardconfigentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxRootGuardConfigEntry" <<"[stpxRootGuardConfigPortIndex='" <<stpxrootguardconfigportindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::Stpxrootguardconfigtable::Stpxrootguardconfigentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxrootguardconfigportindex.is_set || is_set(stpxrootguardconfigportindex.yfilter)) leaf_name_data.push_back(stpxrootguardconfigportindex.get_name_leafdata());
    if (stpxrootguardconfigenabled.is_set || is_set(stpxrootguardconfigenabled.yfilter)) leaf_name_data.push_back(stpxrootguardconfigenabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSTPEXTENSIONSMIB::Stpxrootguardconfigtable::Stpxrootguardconfigentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSTPEXTENSIONSMIB::Stpxrootguardconfigtable::Stpxrootguardconfigentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOSTPEXTENSIONSMIB::Stpxrootguardconfigtable::Stpxrootguardconfigentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stpxRootGuardConfigPortIndex")
    {
        stpxrootguardconfigportindex = value;
        stpxrootguardconfigportindex.value_namespace = name_space;
        stpxrootguardconfigportindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxRootGuardConfigEnabled")
    {
        stpxrootguardconfigenabled = value;
        stpxrootguardconfigenabled.value_namespace = name_space;
        stpxrootguardconfigenabled.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSTPEXTENSIONSMIB::Stpxrootguardconfigtable::Stpxrootguardconfigentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stpxRootGuardConfigPortIndex")
    {
        stpxrootguardconfigportindex.yfilter = yfilter;
    }
    if(value_path == "stpxRootGuardConfigEnabled")
    {
        stpxrootguardconfigenabled.yfilter = yfilter;
    }
}

bool CISCOSTPEXTENSIONSMIB::Stpxrootguardconfigtable::Stpxrootguardconfigentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxRootGuardConfigPortIndex" || name == "stpxRootGuardConfigEnabled")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::Stpxrootinconsistencytable::Stpxrootinconsistencytable()
{

    yang_name = "stpxRootInconsistencyTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSTPEXTENSIONSMIB::Stpxrootinconsistencytable::~Stpxrootinconsistencytable()
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxrootinconsistencytable::has_data() const
{
    for (std::size_t index=0; index<stpxrootinconsistencyentry.size(); index++)
    {
        if(stpxrootinconsistencyentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSTPEXTENSIONSMIB::Stpxrootinconsistencytable::has_operation() const
{
    for (std::size_t index=0; index<stpxrootinconsistencyentry.size(); index++)
    {
        if(stpxrootinconsistencyentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::Stpxrootinconsistencytable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::Stpxrootinconsistencytable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxRootInconsistencyTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::Stpxrootinconsistencytable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSTPEXTENSIONSMIB::Stpxrootinconsistencytable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxrootinconsistencytable::Stpxrootinconsistencyentry>();
        c->parent = this;
        stpxrootinconsistencyentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSTPEXTENSIONSMIB::Stpxrootinconsistencytable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stpxrootinconsistencyentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOSTPEXTENSIONSMIB::Stpxrootinconsistencytable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSTPEXTENSIONSMIB::Stpxrootinconsistencytable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxrootinconsistencytable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxRootInconsistencyEntry")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::Stpxrootinconsistencytable::Stpxrootinconsistencyentry::Stpxrootinconsistencyentry()
    :
    stpxrootinconsistencyindex{YType::int32, "stpxRootInconsistencyIndex"},
    stpxrootinconsistencyportindex{YType::int32, "stpxRootInconsistencyPortIndex"},
    stpxrootinconsistencystate{YType::boolean, "stpxRootInconsistencyState"}
{

    yang_name = "stpxRootInconsistencyEntry"; yang_parent_name = "stpxRootInconsistencyTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSTPEXTENSIONSMIB::Stpxrootinconsistencytable::Stpxrootinconsistencyentry::~Stpxrootinconsistencyentry()
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxrootinconsistencytable::Stpxrootinconsistencyentry::has_data() const
{
    return stpxrootinconsistencyindex.is_set
	|| stpxrootinconsistencyportindex.is_set
	|| stpxrootinconsistencystate.is_set;
}

bool CISCOSTPEXTENSIONSMIB::Stpxrootinconsistencytable::Stpxrootinconsistencyentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxrootinconsistencyindex.yfilter)
	|| ydk::is_set(stpxrootinconsistencyportindex.yfilter)
	|| ydk::is_set(stpxrootinconsistencystate.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::Stpxrootinconsistencytable::Stpxrootinconsistencyentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxRootInconsistencyTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::Stpxrootinconsistencytable::Stpxrootinconsistencyentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxRootInconsistencyEntry" <<"[stpxRootInconsistencyIndex='" <<stpxrootinconsistencyindex <<"']" <<"[stpxRootInconsistencyPortIndex='" <<stpxrootinconsistencyportindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::Stpxrootinconsistencytable::Stpxrootinconsistencyentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxrootinconsistencyindex.is_set || is_set(stpxrootinconsistencyindex.yfilter)) leaf_name_data.push_back(stpxrootinconsistencyindex.get_name_leafdata());
    if (stpxrootinconsistencyportindex.is_set || is_set(stpxrootinconsistencyportindex.yfilter)) leaf_name_data.push_back(stpxrootinconsistencyportindex.get_name_leafdata());
    if (stpxrootinconsistencystate.is_set || is_set(stpxrootinconsistencystate.yfilter)) leaf_name_data.push_back(stpxrootinconsistencystate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSTPEXTENSIONSMIB::Stpxrootinconsistencytable::Stpxrootinconsistencyentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSTPEXTENSIONSMIB::Stpxrootinconsistencytable::Stpxrootinconsistencyentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOSTPEXTENSIONSMIB::Stpxrootinconsistencytable::Stpxrootinconsistencyentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stpxRootInconsistencyIndex")
    {
        stpxrootinconsistencyindex = value;
        stpxrootinconsistencyindex.value_namespace = name_space;
        stpxrootinconsistencyindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxRootInconsistencyPortIndex")
    {
        stpxrootinconsistencyportindex = value;
        stpxrootinconsistencyportindex.value_namespace = name_space;
        stpxrootinconsistencyportindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxRootInconsistencyState")
    {
        stpxrootinconsistencystate = value;
        stpxrootinconsistencystate.value_namespace = name_space;
        stpxrootinconsistencystate.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSTPEXTENSIONSMIB::Stpxrootinconsistencytable::Stpxrootinconsistencyentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stpxRootInconsistencyIndex")
    {
        stpxrootinconsistencyindex.yfilter = yfilter;
    }
    if(value_path == "stpxRootInconsistencyPortIndex")
    {
        stpxrootinconsistencyportindex.yfilter = yfilter;
    }
    if(value_path == "stpxRootInconsistencyState")
    {
        stpxrootinconsistencystate.yfilter = yfilter;
    }
}

bool CISCOSTPEXTENSIONSMIB::Stpxrootinconsistencytable::Stpxrootinconsistencyentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxRootInconsistencyIndex" || name == "stpxRootInconsistencyPortIndex" || name == "stpxRootInconsistencyState")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::Stpxrpvstporttable::Stpxrpvstporttable()
{

    yang_name = "stpxRPVSTPortTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSTPEXTENSIONSMIB::Stpxrpvstporttable::~Stpxrpvstporttable()
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxrpvstporttable::has_data() const
{
    for (std::size_t index=0; index<stpxrpvstportentry.size(); index++)
    {
        if(stpxrpvstportentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSTPEXTENSIONSMIB::Stpxrpvstporttable::has_operation() const
{
    for (std::size_t index=0; index<stpxrpvstportentry.size(); index++)
    {
        if(stpxrpvstportentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::Stpxrpvstporttable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::Stpxrpvstporttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxRPVSTPortTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::Stpxrpvstporttable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSTPEXTENSIONSMIB::Stpxrpvstporttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxrpvstporttable::Stpxrpvstportentry>();
        c->parent = this;
        stpxrpvstportentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSTPEXTENSIONSMIB::Stpxrpvstporttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stpxrpvstportentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOSTPEXTENSIONSMIB::Stpxrpvstporttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSTPEXTENSIONSMIB::Stpxrpvstporttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxrpvstporttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxRPVSTPortEntry")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::Stpxrpvstporttable::Stpxrpvstportentry::Stpxrpvstportentry()
    :
    stpxrpvstportvlanindex{YType::int32, "stpxRPVSTPortVlanIndex"},
    stpxrpvstportindex{YType::int32, "stpxRPVSTPortIndex"},
    stpxrpvstportstatus{YType::bits, "stpxRPVSTPortStatus"}
{

    yang_name = "stpxRPVSTPortEntry"; yang_parent_name = "stpxRPVSTPortTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSTPEXTENSIONSMIB::Stpxrpvstporttable::Stpxrpvstportentry::~Stpxrpvstportentry()
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxrpvstporttable::Stpxrpvstportentry::has_data() const
{
    return stpxrpvstportvlanindex.is_set
	|| stpxrpvstportindex.is_set
	|| stpxrpvstportstatus.is_set;
}

bool CISCOSTPEXTENSIONSMIB::Stpxrpvstporttable::Stpxrpvstportentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxrpvstportvlanindex.yfilter)
	|| ydk::is_set(stpxrpvstportindex.yfilter)
	|| ydk::is_set(stpxrpvstportstatus.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::Stpxrpvstporttable::Stpxrpvstportentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxRPVSTPortTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::Stpxrpvstporttable::Stpxrpvstportentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxRPVSTPortEntry" <<"[stpxRPVSTPortVlanIndex='" <<stpxrpvstportvlanindex <<"']" <<"[stpxRPVSTPortIndex='" <<stpxrpvstportindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::Stpxrpvstporttable::Stpxrpvstportentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxrpvstportvlanindex.is_set || is_set(stpxrpvstportvlanindex.yfilter)) leaf_name_data.push_back(stpxrpvstportvlanindex.get_name_leafdata());
    if (stpxrpvstportindex.is_set || is_set(stpxrpvstportindex.yfilter)) leaf_name_data.push_back(stpxrpvstportindex.get_name_leafdata());
    if (stpxrpvstportstatus.is_set || is_set(stpxrpvstportstatus.yfilter)) leaf_name_data.push_back(stpxrpvstportstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSTPEXTENSIONSMIB::Stpxrpvstporttable::Stpxrpvstportentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSTPEXTENSIONSMIB::Stpxrpvstporttable::Stpxrpvstportentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOSTPEXTENSIONSMIB::Stpxrpvstporttable::Stpxrpvstportentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stpxRPVSTPortVlanIndex")
    {
        stpxrpvstportvlanindex = value;
        stpxrpvstportvlanindex.value_namespace = name_space;
        stpxrpvstportvlanindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxRPVSTPortIndex")
    {
        stpxrpvstportindex = value;
        stpxrpvstportindex.value_namespace = name_space;
        stpxrpvstportindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxRPVSTPortStatus")
    {
        stpxrpvstportstatus[value] = true;
    }
}

void CISCOSTPEXTENSIONSMIB::Stpxrpvstporttable::Stpxrpvstportentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stpxRPVSTPortVlanIndex")
    {
        stpxrpvstportvlanindex.yfilter = yfilter;
    }
    if(value_path == "stpxRPVSTPortIndex")
    {
        stpxrpvstportindex.yfilter = yfilter;
    }
    if(value_path == "stpxRPVSTPortStatus")
    {
        stpxrpvstportstatus.yfilter = yfilter;
    }
}

bool CISCOSTPEXTENSIONSMIB::Stpxrpvstporttable::Stpxrpvstportentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxRPVSTPortVlanIndex" || name == "stpxRPVSTPortIndex" || name == "stpxRPVSTPortStatus")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::Stpxrstpobjects::Stpxrstpobjects()
    :
    stpxrstptransmitholdcount{YType::uint32, "stpxRSTPTransmitHoldCount"}
{

    yang_name = "stpxRSTPObjects"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSTPEXTENSIONSMIB::Stpxrstpobjects::~Stpxrstpobjects()
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxrstpobjects::has_data() const
{
    return stpxrstptransmitholdcount.is_set;
}

bool CISCOSTPEXTENSIONSMIB::Stpxrstpobjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxrstptransmitholdcount.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::Stpxrstpobjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::Stpxrstpobjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxRSTPObjects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::Stpxrstpobjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxrstptransmitholdcount.is_set || is_set(stpxrstptransmitholdcount.yfilter)) leaf_name_data.push_back(stpxrstptransmitholdcount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSTPEXTENSIONSMIB::Stpxrstpobjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSTPEXTENSIONSMIB::Stpxrstpobjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOSTPEXTENSIONSMIB::Stpxrstpobjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stpxRSTPTransmitHoldCount")
    {
        stpxrstptransmitholdcount = value;
        stpxrstptransmitholdcount.value_namespace = name_space;
        stpxrstptransmitholdcount.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSTPEXTENSIONSMIB::Stpxrstpobjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stpxRSTPTransmitHoldCount")
    {
        stpxrstptransmitholdcount.yfilter = yfilter;
    }
}

bool CISCOSTPEXTENSIONSMIB::Stpxrstpobjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxRSTPTransmitHoldCount")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::Stpxrstpportroletable::Stpxrstpportroletable()
{

    yang_name = "stpxRSTPPortRoleTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSTPEXTENSIONSMIB::Stpxrstpportroletable::~Stpxrstpportroletable()
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxrstpportroletable::has_data() const
{
    for (std::size_t index=0; index<stpxrstpportroleentry.size(); index++)
    {
        if(stpxrstpportroleentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSTPEXTENSIONSMIB::Stpxrstpportroletable::has_operation() const
{
    for (std::size_t index=0; index<stpxrstpportroleentry.size(); index++)
    {
        if(stpxrstpportroleentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::Stpxrstpportroletable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::Stpxrstpportroletable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxRSTPPortRoleTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::Stpxrstpportroletable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSTPEXTENSIONSMIB::Stpxrstpportroletable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxrstpportroletable::Stpxrstpportroleentry>();
        c->parent = this;
        stpxrstpportroleentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSTPEXTENSIONSMIB::Stpxrstpportroletable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stpxrstpportroleentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOSTPEXTENSIONSMIB::Stpxrstpportroletable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSTPEXTENSIONSMIB::Stpxrstpportroletable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxrstpportroletable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxRSTPPortRoleEntry")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::Stpxrstpportroletable::Stpxrstpportroleentry::Stpxrstpportroleentry()
    :
    stpxrstpportroleinstanceindex{YType::int32, "stpxRSTPPortRoleInstanceIndex"},
    stpxrstpportroleportindex{YType::int32, "stpxRSTPPortRolePortIndex"},
    stpxrstpportrolevalue{YType::enumeration, "stpxRSTPPortRoleValue"}
{

    yang_name = "stpxRSTPPortRoleEntry"; yang_parent_name = "stpxRSTPPortRoleTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSTPEXTENSIONSMIB::Stpxrstpportroletable::Stpxrstpportroleentry::~Stpxrstpportroleentry()
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxrstpportroletable::Stpxrstpportroleentry::has_data() const
{
    return stpxrstpportroleinstanceindex.is_set
	|| stpxrstpportroleportindex.is_set
	|| stpxrstpportrolevalue.is_set;
}

bool CISCOSTPEXTENSIONSMIB::Stpxrstpportroletable::Stpxrstpportroleentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxrstpportroleinstanceindex.yfilter)
	|| ydk::is_set(stpxrstpportroleportindex.yfilter)
	|| ydk::is_set(stpxrstpportrolevalue.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::Stpxrstpportroletable::Stpxrstpportroleentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxRSTPPortRoleTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::Stpxrstpportroletable::Stpxrstpportroleentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxRSTPPortRoleEntry" <<"[stpxRSTPPortRoleInstanceIndex='" <<stpxrstpportroleinstanceindex <<"']" <<"[stpxRSTPPortRolePortIndex='" <<stpxrstpportroleportindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::Stpxrstpportroletable::Stpxrstpportroleentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxrstpportroleinstanceindex.is_set || is_set(stpxrstpportroleinstanceindex.yfilter)) leaf_name_data.push_back(stpxrstpportroleinstanceindex.get_name_leafdata());
    if (stpxrstpportroleportindex.is_set || is_set(stpxrstpportroleportindex.yfilter)) leaf_name_data.push_back(stpxrstpportroleportindex.get_name_leafdata());
    if (stpxrstpportrolevalue.is_set || is_set(stpxrstpportrolevalue.yfilter)) leaf_name_data.push_back(stpxrstpportrolevalue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSTPEXTENSIONSMIB::Stpxrstpportroletable::Stpxrstpportroleentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSTPEXTENSIONSMIB::Stpxrstpportroletable::Stpxrstpportroleentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOSTPEXTENSIONSMIB::Stpxrstpportroletable::Stpxrstpportroleentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stpxRSTPPortRoleInstanceIndex")
    {
        stpxrstpportroleinstanceindex = value;
        stpxrstpportroleinstanceindex.value_namespace = name_space;
        stpxrstpportroleinstanceindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxRSTPPortRolePortIndex")
    {
        stpxrstpportroleportindex = value;
        stpxrstpportroleportindex.value_namespace = name_space;
        stpxrstpportroleportindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxRSTPPortRoleValue")
    {
        stpxrstpportrolevalue = value;
        stpxrstpportrolevalue.value_namespace = name_space;
        stpxrstpportrolevalue.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSTPEXTENSIONSMIB::Stpxrstpportroletable::Stpxrstpportroleentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stpxRSTPPortRoleInstanceIndex")
    {
        stpxrstpportroleinstanceindex.yfilter = yfilter;
    }
    if(value_path == "stpxRSTPPortRolePortIndex")
    {
        stpxrstpportroleportindex.yfilter = yfilter;
    }
    if(value_path == "stpxRSTPPortRoleValue")
    {
        stpxrstpportrolevalue.yfilter = yfilter;
    }
}

bool CISCOSTPEXTENSIONSMIB::Stpxrstpportroletable::Stpxrstpportroleentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxRSTPPortRoleInstanceIndex" || name == "stpxRSTPPortRolePortIndex" || name == "stpxRSTPPortRoleValue")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::Stpxrstpporttable::Stpxrstpporttable()
{

    yang_name = "stpxRSTPPortTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSTPEXTENSIONSMIB::Stpxrstpporttable::~Stpxrstpporttable()
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxrstpporttable::has_data() const
{
    for (std::size_t index=0; index<stpxrstpportentry.size(); index++)
    {
        if(stpxrstpportentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSTPEXTENSIONSMIB::Stpxrstpporttable::has_operation() const
{
    for (std::size_t index=0; index<stpxrstpportentry.size(); index++)
    {
        if(stpxrstpportentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::Stpxrstpporttable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::Stpxrstpporttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxRSTPPortTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::Stpxrstpporttable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSTPEXTENSIONSMIB::Stpxrstpporttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxrstpporttable::Stpxrstpportentry>();
        c->parent = this;
        stpxrstpportentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSTPEXTENSIONSMIB::Stpxrstpporttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stpxrstpportentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOSTPEXTENSIONSMIB::Stpxrstpporttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSTPEXTENSIONSMIB::Stpxrstpporttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxrstpporttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxRSTPPortEntry")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::Stpxrstpporttable::Stpxrstpportentry::Stpxrstpportentry()
    :
    stpxrstpportindex{YType::int32, "stpxRSTPPortIndex"},
    stpxrstpportadminlinktype{YType::enumeration, "stpxRSTPPortAdminLinkType"},
    stpxrstpportoperlinktype{YType::enumeration, "stpxRSTPPortOperLinkType"},
    stpxrstpportprotocolmigration{YType::boolean, "stpxRSTPPortProtocolMigration"}
{

    yang_name = "stpxRSTPPortEntry"; yang_parent_name = "stpxRSTPPortTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSTPEXTENSIONSMIB::Stpxrstpporttable::Stpxrstpportentry::~Stpxrstpportentry()
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxrstpporttable::Stpxrstpportentry::has_data() const
{
    return stpxrstpportindex.is_set
	|| stpxrstpportadminlinktype.is_set
	|| stpxrstpportoperlinktype.is_set
	|| stpxrstpportprotocolmigration.is_set;
}

bool CISCOSTPEXTENSIONSMIB::Stpxrstpporttable::Stpxrstpportentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxrstpportindex.yfilter)
	|| ydk::is_set(stpxrstpportadminlinktype.yfilter)
	|| ydk::is_set(stpxrstpportoperlinktype.yfilter)
	|| ydk::is_set(stpxrstpportprotocolmigration.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::Stpxrstpporttable::Stpxrstpportentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxRSTPPortTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::Stpxrstpporttable::Stpxrstpportentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxRSTPPortEntry" <<"[stpxRSTPPortIndex='" <<stpxrstpportindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::Stpxrstpporttable::Stpxrstpportentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxrstpportindex.is_set || is_set(stpxrstpportindex.yfilter)) leaf_name_data.push_back(stpxrstpportindex.get_name_leafdata());
    if (stpxrstpportadminlinktype.is_set || is_set(stpxrstpportadminlinktype.yfilter)) leaf_name_data.push_back(stpxrstpportadminlinktype.get_name_leafdata());
    if (stpxrstpportoperlinktype.is_set || is_set(stpxrstpportoperlinktype.yfilter)) leaf_name_data.push_back(stpxrstpportoperlinktype.get_name_leafdata());
    if (stpxrstpportprotocolmigration.is_set || is_set(stpxrstpportprotocolmigration.yfilter)) leaf_name_data.push_back(stpxrstpportprotocolmigration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSTPEXTENSIONSMIB::Stpxrstpporttable::Stpxrstpportentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSTPEXTENSIONSMIB::Stpxrstpporttable::Stpxrstpportentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOSTPEXTENSIONSMIB::Stpxrstpporttable::Stpxrstpportentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stpxRSTPPortIndex")
    {
        stpxrstpportindex = value;
        stpxrstpportindex.value_namespace = name_space;
        stpxrstpportindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxRSTPPortAdminLinkType")
    {
        stpxrstpportadminlinktype = value;
        stpxrstpportadminlinktype.value_namespace = name_space;
        stpxrstpportadminlinktype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxRSTPPortOperLinkType")
    {
        stpxrstpportoperlinktype = value;
        stpxrstpportoperlinktype.value_namespace = name_space;
        stpxrstpportoperlinktype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxRSTPPortProtocolMigration")
    {
        stpxrstpportprotocolmigration = value;
        stpxrstpportprotocolmigration.value_namespace = name_space;
        stpxrstpportprotocolmigration.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSTPEXTENSIONSMIB::Stpxrstpporttable::Stpxrstpportentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stpxRSTPPortIndex")
    {
        stpxrstpportindex.yfilter = yfilter;
    }
    if(value_path == "stpxRSTPPortAdminLinkType")
    {
        stpxrstpportadminlinktype.yfilter = yfilter;
    }
    if(value_path == "stpxRSTPPortOperLinkType")
    {
        stpxrstpportoperlinktype.yfilter = yfilter;
    }
    if(value_path == "stpxRSTPPortProtocolMigration")
    {
        stpxrstpportprotocolmigration.yfilter = yfilter;
    }
}

bool CISCOSTPEXTENSIONSMIB::Stpxrstpporttable::Stpxrstpportentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxRSTPPortIndex" || name == "stpxRSTPPortAdminLinkType" || name == "stpxRSTPPortOperLinkType" || name == "stpxRSTPPortProtocolMigration")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::Stpxsmstinstanceedittable::Stpxsmstinstanceedittable()
{

    yang_name = "stpxSMSTInstanceEditTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSTPEXTENSIONSMIB::Stpxsmstinstanceedittable::~Stpxsmstinstanceedittable()
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxsmstinstanceedittable::has_data() const
{
    for (std::size_t index=0; index<stpxsmstinstanceeditentry.size(); index++)
    {
        if(stpxsmstinstanceeditentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSTPEXTENSIONSMIB::Stpxsmstinstanceedittable::has_operation() const
{
    for (std::size_t index=0; index<stpxsmstinstanceeditentry.size(); index++)
    {
        if(stpxsmstinstanceeditentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::Stpxsmstinstanceedittable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::Stpxsmstinstanceedittable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxSMSTInstanceEditTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::Stpxsmstinstanceedittable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSTPEXTENSIONSMIB::Stpxsmstinstanceedittable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxsmstinstanceedittable::Stpxsmstinstanceeditentry>();
        c->parent = this;
        stpxsmstinstanceeditentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSTPEXTENSIONSMIB::Stpxsmstinstanceedittable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stpxsmstinstanceeditentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOSTPEXTENSIONSMIB::Stpxsmstinstanceedittable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSTPEXTENSIONSMIB::Stpxsmstinstanceedittable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxsmstinstanceedittable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxSMSTInstanceEditEntry")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::Stpxsmstinstanceedittable::Stpxsmstinstanceeditentry::Stpxsmstinstanceeditentry()
    :
    stpxsmstinstanceeditindex{YType::uint32, "stpxSMSTInstanceEditIndex"},
    stpxsmstinstanceeditrowstatus{YType::enumeration, "stpxSMSTInstanceEditRowStatus"},
    stpxsmstinstanceeditvlansmap1k2k{YType::str, "stpxSMSTInstanceEditVlansMap1k2k"},
    stpxsmstinstanceeditvlansmap3k4k{YType::str, "stpxSMSTInstanceEditVlansMap3k4k"}
{

    yang_name = "stpxSMSTInstanceEditEntry"; yang_parent_name = "stpxSMSTInstanceEditTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSTPEXTENSIONSMIB::Stpxsmstinstanceedittable::Stpxsmstinstanceeditentry::~Stpxsmstinstanceeditentry()
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxsmstinstanceedittable::Stpxsmstinstanceeditentry::has_data() const
{
    return stpxsmstinstanceeditindex.is_set
	|| stpxsmstinstanceeditrowstatus.is_set
	|| stpxsmstinstanceeditvlansmap1k2k.is_set
	|| stpxsmstinstanceeditvlansmap3k4k.is_set;
}

bool CISCOSTPEXTENSIONSMIB::Stpxsmstinstanceedittable::Stpxsmstinstanceeditentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxsmstinstanceeditindex.yfilter)
	|| ydk::is_set(stpxsmstinstanceeditrowstatus.yfilter)
	|| ydk::is_set(stpxsmstinstanceeditvlansmap1k2k.yfilter)
	|| ydk::is_set(stpxsmstinstanceeditvlansmap3k4k.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::Stpxsmstinstanceedittable::Stpxsmstinstanceeditentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxSMSTInstanceEditTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::Stpxsmstinstanceedittable::Stpxsmstinstanceeditentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxSMSTInstanceEditEntry" <<"[stpxSMSTInstanceEditIndex='" <<stpxsmstinstanceeditindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::Stpxsmstinstanceedittable::Stpxsmstinstanceeditentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxsmstinstanceeditindex.is_set || is_set(stpxsmstinstanceeditindex.yfilter)) leaf_name_data.push_back(stpxsmstinstanceeditindex.get_name_leafdata());
    if (stpxsmstinstanceeditrowstatus.is_set || is_set(stpxsmstinstanceeditrowstatus.yfilter)) leaf_name_data.push_back(stpxsmstinstanceeditrowstatus.get_name_leafdata());
    if (stpxsmstinstanceeditvlansmap1k2k.is_set || is_set(stpxsmstinstanceeditvlansmap1k2k.yfilter)) leaf_name_data.push_back(stpxsmstinstanceeditvlansmap1k2k.get_name_leafdata());
    if (stpxsmstinstanceeditvlansmap3k4k.is_set || is_set(stpxsmstinstanceeditvlansmap3k4k.yfilter)) leaf_name_data.push_back(stpxsmstinstanceeditvlansmap3k4k.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSTPEXTENSIONSMIB::Stpxsmstinstanceedittable::Stpxsmstinstanceeditentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSTPEXTENSIONSMIB::Stpxsmstinstanceedittable::Stpxsmstinstanceeditentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOSTPEXTENSIONSMIB::Stpxsmstinstanceedittable::Stpxsmstinstanceeditentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stpxSMSTInstanceEditIndex")
    {
        stpxsmstinstanceeditindex = value;
        stpxsmstinstanceeditindex.value_namespace = name_space;
        stpxsmstinstanceeditindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxSMSTInstanceEditRowStatus")
    {
        stpxsmstinstanceeditrowstatus = value;
        stpxsmstinstanceeditrowstatus.value_namespace = name_space;
        stpxsmstinstanceeditrowstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxSMSTInstanceEditVlansMap1k2k")
    {
        stpxsmstinstanceeditvlansmap1k2k = value;
        stpxsmstinstanceeditvlansmap1k2k.value_namespace = name_space;
        stpxsmstinstanceeditvlansmap1k2k.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxSMSTInstanceEditVlansMap3k4k")
    {
        stpxsmstinstanceeditvlansmap3k4k = value;
        stpxsmstinstanceeditvlansmap3k4k.value_namespace = name_space;
        stpxsmstinstanceeditvlansmap3k4k.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSTPEXTENSIONSMIB::Stpxsmstinstanceedittable::Stpxsmstinstanceeditentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stpxSMSTInstanceEditIndex")
    {
        stpxsmstinstanceeditindex.yfilter = yfilter;
    }
    if(value_path == "stpxSMSTInstanceEditRowStatus")
    {
        stpxsmstinstanceeditrowstatus.yfilter = yfilter;
    }
    if(value_path == "stpxSMSTInstanceEditVlansMap1k2k")
    {
        stpxsmstinstanceeditvlansmap1k2k.yfilter = yfilter;
    }
    if(value_path == "stpxSMSTInstanceEditVlansMap3k4k")
    {
        stpxsmstinstanceeditvlansmap3k4k.yfilter = yfilter;
    }
}

bool CISCOSTPEXTENSIONSMIB::Stpxsmstinstanceedittable::Stpxsmstinstanceeditentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxSMSTInstanceEditIndex" || name == "stpxSMSTInstanceEditRowStatus" || name == "stpxSMSTInstanceEditVlansMap1k2k" || name == "stpxSMSTInstanceEditVlansMap3k4k")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::Stpxsmstinstancetable::Stpxsmstinstancetable()
{

    yang_name = "stpxSMSTInstanceTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSTPEXTENSIONSMIB::Stpxsmstinstancetable::~Stpxsmstinstancetable()
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxsmstinstancetable::has_data() const
{
    for (std::size_t index=0; index<stpxsmstinstanceentry.size(); index++)
    {
        if(stpxsmstinstanceentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSTPEXTENSIONSMIB::Stpxsmstinstancetable::has_operation() const
{
    for (std::size_t index=0; index<stpxsmstinstanceentry.size(); index++)
    {
        if(stpxsmstinstanceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::Stpxsmstinstancetable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::Stpxsmstinstancetable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxSMSTInstanceTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::Stpxsmstinstancetable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSTPEXTENSIONSMIB::Stpxsmstinstancetable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxsmstinstancetable::Stpxsmstinstanceentry>();
        c->parent = this;
        stpxsmstinstanceentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSTPEXTENSIONSMIB::Stpxsmstinstancetable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stpxsmstinstanceentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOSTPEXTENSIONSMIB::Stpxsmstinstancetable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSTPEXTENSIONSMIB::Stpxsmstinstancetable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxsmstinstancetable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxSMSTInstanceEntry")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::Stpxsmstinstancetable::Stpxsmstinstanceentry::Stpxsmstinstanceentry()
    :
    stpxsmstinstanceindex{YType::uint32, "stpxSMSTInstanceIndex"},
    stpxsmstinstancecistintrootcost{YType::uint32, "stpxSMSTInstanceCISTIntRootCost"},
    stpxsmstinstancecistregionalroot{YType::str, "stpxSMSTInstanceCISTRegionalRoot"},
    stpxsmstinstanceremaininghopcount{YType::int32, "stpxSMSTInstanceRemainingHopCount"},
    stpxsmstinstancevlansmapped1k2k{YType::str, "stpxSMSTInstanceVlansMapped1k2k"},
    stpxsmstinstancevlansmapped3k4k{YType::str, "stpxSMSTInstanceVlansMapped3k4k"}
{

    yang_name = "stpxSMSTInstanceEntry"; yang_parent_name = "stpxSMSTInstanceTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSTPEXTENSIONSMIB::Stpxsmstinstancetable::Stpxsmstinstanceentry::~Stpxsmstinstanceentry()
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxsmstinstancetable::Stpxsmstinstanceentry::has_data() const
{
    return stpxsmstinstanceindex.is_set
	|| stpxsmstinstancecistintrootcost.is_set
	|| stpxsmstinstancecistregionalroot.is_set
	|| stpxsmstinstanceremaininghopcount.is_set
	|| stpxsmstinstancevlansmapped1k2k.is_set
	|| stpxsmstinstancevlansmapped3k4k.is_set;
}

bool CISCOSTPEXTENSIONSMIB::Stpxsmstinstancetable::Stpxsmstinstanceentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxsmstinstanceindex.yfilter)
	|| ydk::is_set(stpxsmstinstancecistintrootcost.yfilter)
	|| ydk::is_set(stpxsmstinstancecistregionalroot.yfilter)
	|| ydk::is_set(stpxsmstinstanceremaininghopcount.yfilter)
	|| ydk::is_set(stpxsmstinstancevlansmapped1k2k.yfilter)
	|| ydk::is_set(stpxsmstinstancevlansmapped3k4k.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::Stpxsmstinstancetable::Stpxsmstinstanceentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxSMSTInstanceTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::Stpxsmstinstancetable::Stpxsmstinstanceentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxSMSTInstanceEntry" <<"[stpxSMSTInstanceIndex='" <<stpxsmstinstanceindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::Stpxsmstinstancetable::Stpxsmstinstanceentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxsmstinstanceindex.is_set || is_set(stpxsmstinstanceindex.yfilter)) leaf_name_data.push_back(stpxsmstinstanceindex.get_name_leafdata());
    if (stpxsmstinstancecistintrootcost.is_set || is_set(stpxsmstinstancecistintrootcost.yfilter)) leaf_name_data.push_back(stpxsmstinstancecistintrootcost.get_name_leafdata());
    if (stpxsmstinstancecistregionalroot.is_set || is_set(stpxsmstinstancecistregionalroot.yfilter)) leaf_name_data.push_back(stpxsmstinstancecistregionalroot.get_name_leafdata());
    if (stpxsmstinstanceremaininghopcount.is_set || is_set(stpxsmstinstanceremaininghopcount.yfilter)) leaf_name_data.push_back(stpxsmstinstanceremaininghopcount.get_name_leafdata());
    if (stpxsmstinstancevlansmapped1k2k.is_set || is_set(stpxsmstinstancevlansmapped1k2k.yfilter)) leaf_name_data.push_back(stpxsmstinstancevlansmapped1k2k.get_name_leafdata());
    if (stpxsmstinstancevlansmapped3k4k.is_set || is_set(stpxsmstinstancevlansmapped3k4k.yfilter)) leaf_name_data.push_back(stpxsmstinstancevlansmapped3k4k.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSTPEXTENSIONSMIB::Stpxsmstinstancetable::Stpxsmstinstanceentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSTPEXTENSIONSMIB::Stpxsmstinstancetable::Stpxsmstinstanceentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOSTPEXTENSIONSMIB::Stpxsmstinstancetable::Stpxsmstinstanceentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stpxSMSTInstanceIndex")
    {
        stpxsmstinstanceindex = value;
        stpxsmstinstanceindex.value_namespace = name_space;
        stpxsmstinstanceindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxSMSTInstanceCISTIntRootCost")
    {
        stpxsmstinstancecistintrootcost = value;
        stpxsmstinstancecistintrootcost.value_namespace = name_space;
        stpxsmstinstancecistintrootcost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxSMSTInstanceCISTRegionalRoot")
    {
        stpxsmstinstancecistregionalroot = value;
        stpxsmstinstancecistregionalroot.value_namespace = name_space;
        stpxsmstinstancecistregionalroot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxSMSTInstanceRemainingHopCount")
    {
        stpxsmstinstanceremaininghopcount = value;
        stpxsmstinstanceremaininghopcount.value_namespace = name_space;
        stpxsmstinstanceremaininghopcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxSMSTInstanceVlansMapped1k2k")
    {
        stpxsmstinstancevlansmapped1k2k = value;
        stpxsmstinstancevlansmapped1k2k.value_namespace = name_space;
        stpxsmstinstancevlansmapped1k2k.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxSMSTInstanceVlansMapped3k4k")
    {
        stpxsmstinstancevlansmapped3k4k = value;
        stpxsmstinstancevlansmapped3k4k.value_namespace = name_space;
        stpxsmstinstancevlansmapped3k4k.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSTPEXTENSIONSMIB::Stpxsmstinstancetable::Stpxsmstinstanceentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stpxSMSTInstanceIndex")
    {
        stpxsmstinstanceindex.yfilter = yfilter;
    }
    if(value_path == "stpxSMSTInstanceCISTIntRootCost")
    {
        stpxsmstinstancecistintrootcost.yfilter = yfilter;
    }
    if(value_path == "stpxSMSTInstanceCISTRegionalRoot")
    {
        stpxsmstinstancecistregionalroot.yfilter = yfilter;
    }
    if(value_path == "stpxSMSTInstanceRemainingHopCount")
    {
        stpxsmstinstanceremaininghopcount.yfilter = yfilter;
    }
    if(value_path == "stpxSMSTInstanceVlansMapped1k2k")
    {
        stpxsmstinstancevlansmapped1k2k.yfilter = yfilter;
    }
    if(value_path == "stpxSMSTInstanceVlansMapped3k4k")
    {
        stpxsmstinstancevlansmapped3k4k.yfilter = yfilter;
    }
}

bool CISCOSTPEXTENSIONSMIB::Stpxsmstinstancetable::Stpxsmstinstanceentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxSMSTInstanceIndex" || name == "stpxSMSTInstanceCISTIntRootCost" || name == "stpxSMSTInstanceCISTRegionalRoot" || name == "stpxSMSTInstanceRemainingHopCount" || name == "stpxSMSTInstanceVlansMapped1k2k" || name == "stpxSMSTInstanceVlansMapped3k4k")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::Stpxsmstobjects::Stpxsmstobjects()
    :
    stpxsmstconfigdigest{YType::str, "stpxSMSTConfigDigest"},
    stpxsmstconfigprestandarddigest{YType::str, "stpxSMSTConfigPreStandardDigest"},
    stpxsmstmaxhopcount{YType::uint32, "stpxSMSTMaxHopCount"},
    stpxsmstmaxinstanceid{YType::uint32, "stpxSMSTMaxInstanceID"},
    stpxsmstmaxinstances{YType::uint32, "stpxSMSTMaxInstances"},
    stpxsmstregioneditrevision{YType::uint32, "stpxSMSTRegionEditRevision"},
    stpxsmstregionrevision{YType::uint32, "stpxSMSTRegionRevision"}
{

    yang_name = "stpxSMSTObjects"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSTPEXTENSIONSMIB::Stpxsmstobjects::~Stpxsmstobjects()
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxsmstobjects::has_data() const
{
    return stpxsmstconfigdigest.is_set
	|| stpxsmstconfigprestandarddigest.is_set
	|| stpxsmstmaxhopcount.is_set
	|| stpxsmstmaxinstanceid.is_set
	|| stpxsmstmaxinstances.is_set
	|| stpxsmstregioneditrevision.is_set
	|| stpxsmstregionrevision.is_set;
}

bool CISCOSTPEXTENSIONSMIB::Stpxsmstobjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxsmstconfigdigest.yfilter)
	|| ydk::is_set(stpxsmstconfigprestandarddigest.yfilter)
	|| ydk::is_set(stpxsmstmaxhopcount.yfilter)
	|| ydk::is_set(stpxsmstmaxinstanceid.yfilter)
	|| ydk::is_set(stpxsmstmaxinstances.yfilter)
	|| ydk::is_set(stpxsmstregioneditrevision.yfilter)
	|| ydk::is_set(stpxsmstregionrevision.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::Stpxsmstobjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::Stpxsmstobjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxSMSTObjects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::Stpxsmstobjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxsmstconfigdigest.is_set || is_set(stpxsmstconfigdigest.yfilter)) leaf_name_data.push_back(stpxsmstconfigdigest.get_name_leafdata());
    if (stpxsmstconfigprestandarddigest.is_set || is_set(stpxsmstconfigprestandarddigest.yfilter)) leaf_name_data.push_back(stpxsmstconfigprestandarddigest.get_name_leafdata());
    if (stpxsmstmaxhopcount.is_set || is_set(stpxsmstmaxhopcount.yfilter)) leaf_name_data.push_back(stpxsmstmaxhopcount.get_name_leafdata());
    if (stpxsmstmaxinstanceid.is_set || is_set(stpxsmstmaxinstanceid.yfilter)) leaf_name_data.push_back(stpxsmstmaxinstanceid.get_name_leafdata());
    if (stpxsmstmaxinstances.is_set || is_set(stpxsmstmaxinstances.yfilter)) leaf_name_data.push_back(stpxsmstmaxinstances.get_name_leafdata());
    if (stpxsmstregioneditrevision.is_set || is_set(stpxsmstregioneditrevision.yfilter)) leaf_name_data.push_back(stpxsmstregioneditrevision.get_name_leafdata());
    if (stpxsmstregionrevision.is_set || is_set(stpxsmstregionrevision.yfilter)) leaf_name_data.push_back(stpxsmstregionrevision.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSTPEXTENSIONSMIB::Stpxsmstobjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSTPEXTENSIONSMIB::Stpxsmstobjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOSTPEXTENSIONSMIB::Stpxsmstobjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stpxSMSTConfigDigest")
    {
        stpxsmstconfigdigest = value;
        stpxsmstconfigdigest.value_namespace = name_space;
        stpxsmstconfigdigest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxSMSTConfigPreStandardDigest")
    {
        stpxsmstconfigprestandarddigest = value;
        stpxsmstconfigprestandarddigest.value_namespace = name_space;
        stpxsmstconfigprestandarddigest.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxSMSTMaxHopCount")
    {
        stpxsmstmaxhopcount = value;
        stpxsmstmaxhopcount.value_namespace = name_space;
        stpxsmstmaxhopcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxSMSTMaxInstanceID")
    {
        stpxsmstmaxinstanceid = value;
        stpxsmstmaxinstanceid.value_namespace = name_space;
        stpxsmstmaxinstanceid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxSMSTMaxInstances")
    {
        stpxsmstmaxinstances = value;
        stpxsmstmaxinstances.value_namespace = name_space;
        stpxsmstmaxinstances.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxSMSTRegionEditRevision")
    {
        stpxsmstregioneditrevision = value;
        stpxsmstregioneditrevision.value_namespace = name_space;
        stpxsmstregioneditrevision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxSMSTRegionRevision")
    {
        stpxsmstregionrevision = value;
        stpxsmstregionrevision.value_namespace = name_space;
        stpxsmstregionrevision.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSTPEXTENSIONSMIB::Stpxsmstobjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stpxSMSTConfigDigest")
    {
        stpxsmstconfigdigest.yfilter = yfilter;
    }
    if(value_path == "stpxSMSTConfigPreStandardDigest")
    {
        stpxsmstconfigprestandarddigest.yfilter = yfilter;
    }
    if(value_path == "stpxSMSTMaxHopCount")
    {
        stpxsmstmaxhopcount.yfilter = yfilter;
    }
    if(value_path == "stpxSMSTMaxInstanceID")
    {
        stpxsmstmaxinstanceid.yfilter = yfilter;
    }
    if(value_path == "stpxSMSTMaxInstances")
    {
        stpxsmstmaxinstances.yfilter = yfilter;
    }
    if(value_path == "stpxSMSTRegionEditRevision")
    {
        stpxsmstregioneditrevision.yfilter = yfilter;
    }
    if(value_path == "stpxSMSTRegionRevision")
    {
        stpxsmstregionrevision.yfilter = yfilter;
    }
}

bool CISCOSTPEXTENSIONSMIB::Stpxsmstobjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxSMSTConfigDigest" || name == "stpxSMSTConfigPreStandardDigest" || name == "stpxSMSTMaxHopCount" || name == "stpxSMSTMaxInstanceID" || name == "stpxSMSTMaxInstances" || name == "stpxSMSTRegionEditRevision" || name == "stpxSMSTRegionRevision")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::Stpxsmstporttable::Stpxsmstporttable()
{

    yang_name = "stpxSMSTPortTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSTPEXTENSIONSMIB::Stpxsmstporttable::~Stpxsmstporttable()
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxsmstporttable::has_data() const
{
    for (std::size_t index=0; index<stpxsmstportentry.size(); index++)
    {
        if(stpxsmstportentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSTPEXTENSIONSMIB::Stpxsmstporttable::has_operation() const
{
    for (std::size_t index=0; index<stpxsmstportentry.size(); index++)
    {
        if(stpxsmstportentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::Stpxsmstporttable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::Stpxsmstporttable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxSMSTPortTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::Stpxsmstporttable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSTPEXTENSIONSMIB::Stpxsmstporttable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CISCOSTPEXTENSIONSMIB::Stpxsmstporttable::Stpxsmstportentry>();
        c->parent = this;
        stpxsmstportentry.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSTPEXTENSIONSMIB::Stpxsmstporttable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : stpxsmstportentry)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CISCOSTPEXTENSIONSMIB::Stpxsmstporttable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSTPEXTENSIONSMIB::Stpxsmstporttable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxsmstporttable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxSMSTPortEntry")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::Stpxsmstporttable::Stpxsmstportentry::Stpxsmstportentry()
    :
    stpxsmstportindex{YType::int32, "stpxSMSTPortIndex"},
    stpxsmstportadminhellotime{YType::uint32, "stpxSMSTPortAdminHelloTime"},
    stpxsmstportadminmstmode{YType::enumeration, "stpxSMSTPortAdminMSTMode"},
    stpxsmstportconfigedhellotime{YType::uint32, "stpxSMSTPortConfigedHelloTime"},
    stpxsmstportoperhellotime{YType::int32, "stpxSMSTPortOperHelloTime"},
    stpxsmstportopermstmode{YType::enumeration, "stpxSMSTPortOperMSTMode"},
    stpxsmstportstatus{YType::bits, "stpxSMSTPortStatus"}
{

    yang_name = "stpxSMSTPortEntry"; yang_parent_name = "stpxSMSTPortTable"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSTPEXTENSIONSMIB::Stpxsmstporttable::Stpxsmstportentry::~Stpxsmstportentry()
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxsmstporttable::Stpxsmstportentry::has_data() const
{
    return stpxsmstportindex.is_set
	|| stpxsmstportadminhellotime.is_set
	|| stpxsmstportadminmstmode.is_set
	|| stpxsmstportconfigedhellotime.is_set
	|| stpxsmstportoperhellotime.is_set
	|| stpxsmstportopermstmode.is_set
	|| stpxsmstportstatus.is_set;
}

bool CISCOSTPEXTENSIONSMIB::Stpxsmstporttable::Stpxsmstportentry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxsmstportindex.yfilter)
	|| ydk::is_set(stpxsmstportadminhellotime.yfilter)
	|| ydk::is_set(stpxsmstportadminmstmode.yfilter)
	|| ydk::is_set(stpxsmstportconfigedhellotime.yfilter)
	|| ydk::is_set(stpxsmstportoperhellotime.yfilter)
	|| ydk::is_set(stpxsmstportopermstmode.yfilter)
	|| ydk::is_set(stpxsmstportstatus.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::Stpxsmstporttable::Stpxsmstportentry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxSMSTPortTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::Stpxsmstporttable::Stpxsmstportentry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxSMSTPortEntry" <<"[stpxSMSTPortIndex='" <<stpxsmstportindex <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::Stpxsmstporttable::Stpxsmstportentry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxsmstportindex.is_set || is_set(stpxsmstportindex.yfilter)) leaf_name_data.push_back(stpxsmstportindex.get_name_leafdata());
    if (stpxsmstportadminhellotime.is_set || is_set(stpxsmstportadminhellotime.yfilter)) leaf_name_data.push_back(stpxsmstportadminhellotime.get_name_leafdata());
    if (stpxsmstportadminmstmode.is_set || is_set(stpxsmstportadminmstmode.yfilter)) leaf_name_data.push_back(stpxsmstportadminmstmode.get_name_leafdata());
    if (stpxsmstportconfigedhellotime.is_set || is_set(stpxsmstportconfigedhellotime.yfilter)) leaf_name_data.push_back(stpxsmstportconfigedhellotime.get_name_leafdata());
    if (stpxsmstportoperhellotime.is_set || is_set(stpxsmstportoperhellotime.yfilter)) leaf_name_data.push_back(stpxsmstportoperhellotime.get_name_leafdata());
    if (stpxsmstportopermstmode.is_set || is_set(stpxsmstportopermstmode.yfilter)) leaf_name_data.push_back(stpxsmstportopermstmode.get_name_leafdata());
    if (stpxsmstportstatus.is_set || is_set(stpxsmstportstatus.yfilter)) leaf_name_data.push_back(stpxsmstportstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSTPEXTENSIONSMIB::Stpxsmstporttable::Stpxsmstportentry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSTPEXTENSIONSMIB::Stpxsmstporttable::Stpxsmstportentry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOSTPEXTENSIONSMIB::Stpxsmstporttable::Stpxsmstportentry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stpxSMSTPortIndex")
    {
        stpxsmstportindex = value;
        stpxsmstportindex.value_namespace = name_space;
        stpxsmstportindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxSMSTPortAdminHelloTime")
    {
        stpxsmstportadminhellotime = value;
        stpxsmstportadminhellotime.value_namespace = name_space;
        stpxsmstportadminhellotime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxSMSTPortAdminMSTMode")
    {
        stpxsmstportadminmstmode = value;
        stpxsmstportadminmstmode.value_namespace = name_space;
        stpxsmstportadminmstmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxSMSTPortConfigedHelloTime")
    {
        stpxsmstportconfigedhellotime = value;
        stpxsmstportconfigedhellotime.value_namespace = name_space;
        stpxsmstportconfigedhellotime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxSMSTPortOperHelloTime")
    {
        stpxsmstportoperhellotime = value;
        stpxsmstportoperhellotime.value_namespace = name_space;
        stpxsmstportoperhellotime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxSMSTPortOperMSTMode")
    {
        stpxsmstportopermstmode = value;
        stpxsmstportopermstmode.value_namespace = name_space;
        stpxsmstportopermstmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxSMSTPortStatus")
    {
        stpxsmstportstatus[value] = true;
    }
}

void CISCOSTPEXTENSIONSMIB::Stpxsmstporttable::Stpxsmstportentry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stpxSMSTPortIndex")
    {
        stpxsmstportindex.yfilter = yfilter;
    }
    if(value_path == "stpxSMSTPortAdminHelloTime")
    {
        stpxsmstportadminhellotime.yfilter = yfilter;
    }
    if(value_path == "stpxSMSTPortAdminMSTMode")
    {
        stpxsmstportadminmstmode.yfilter = yfilter;
    }
    if(value_path == "stpxSMSTPortConfigedHelloTime")
    {
        stpxsmstportconfigedhellotime.yfilter = yfilter;
    }
    if(value_path == "stpxSMSTPortOperHelloTime")
    {
        stpxsmstportoperhellotime.yfilter = yfilter;
    }
    if(value_path == "stpxSMSTPortOperMSTMode")
    {
        stpxsmstportopermstmode.yfilter = yfilter;
    }
    if(value_path == "stpxSMSTPortStatus")
    {
        stpxsmstportstatus.yfilter = yfilter;
    }
}

bool CISCOSTPEXTENSIONSMIB::Stpxsmstporttable::Stpxsmstportentry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxSMSTPortIndex" || name == "stpxSMSTPortAdminHelloTime" || name == "stpxSMSTPortAdminMSTMode" || name == "stpxSMSTPortConfigedHelloTime" || name == "stpxSMSTPortOperHelloTime" || name == "stpxSMSTPortOperMSTMode" || name == "stpxSMSTPortStatus")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::Stpxspanningtreeobjects::Stpxspanningtreeobjects()
    :
    stpxextendedsysidadminenabled{YType::boolean, "stpxExtendedSysIDAdminEnabled"},
    stpxextendedsysidoperenabled{YType::boolean, "stpxExtendedSysIDOperEnabled"},
    stpxnotificationenable{YType::bits, "stpxNotificationEnable"},
    stpxspanningtreepathcostmode{YType::enumeration, "stpxSpanningTreePathCostMode"},
    stpxspanningtreepathcostopermode{YType::enumeration, "stpxSpanningTreePathCostOperMode"},
    stpxspanningtreetype{YType::enumeration, "stpxSpanningTreeType"}
{

    yang_name = "stpxSpanningTreeObjects"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSTPEXTENSIONSMIB::Stpxspanningtreeobjects::~Stpxspanningtreeobjects()
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxspanningtreeobjects::has_data() const
{
    return stpxextendedsysidadminenabled.is_set
	|| stpxextendedsysidoperenabled.is_set
	|| stpxnotificationenable.is_set
	|| stpxspanningtreepathcostmode.is_set
	|| stpxspanningtreepathcostopermode.is_set
	|| stpxspanningtreetype.is_set;
}

bool CISCOSTPEXTENSIONSMIB::Stpxspanningtreeobjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxextendedsysidadminenabled.yfilter)
	|| ydk::is_set(stpxextendedsysidoperenabled.yfilter)
	|| ydk::is_set(stpxnotificationenable.yfilter)
	|| ydk::is_set(stpxspanningtreepathcostmode.yfilter)
	|| ydk::is_set(stpxspanningtreepathcostopermode.yfilter)
	|| ydk::is_set(stpxspanningtreetype.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::Stpxspanningtreeobjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::Stpxspanningtreeobjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxSpanningTreeObjects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::Stpxspanningtreeobjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxextendedsysidadminenabled.is_set || is_set(stpxextendedsysidadminenabled.yfilter)) leaf_name_data.push_back(stpxextendedsysidadminenabled.get_name_leafdata());
    if (stpxextendedsysidoperenabled.is_set || is_set(stpxextendedsysidoperenabled.yfilter)) leaf_name_data.push_back(stpxextendedsysidoperenabled.get_name_leafdata());
    if (stpxnotificationenable.is_set || is_set(stpxnotificationenable.yfilter)) leaf_name_data.push_back(stpxnotificationenable.get_name_leafdata());
    if (stpxspanningtreepathcostmode.is_set || is_set(stpxspanningtreepathcostmode.yfilter)) leaf_name_data.push_back(stpxspanningtreepathcostmode.get_name_leafdata());
    if (stpxspanningtreepathcostopermode.is_set || is_set(stpxspanningtreepathcostopermode.yfilter)) leaf_name_data.push_back(stpxspanningtreepathcostopermode.get_name_leafdata());
    if (stpxspanningtreetype.is_set || is_set(stpxspanningtreetype.yfilter)) leaf_name_data.push_back(stpxspanningtreetype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSTPEXTENSIONSMIB::Stpxspanningtreeobjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSTPEXTENSIONSMIB::Stpxspanningtreeobjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOSTPEXTENSIONSMIB::Stpxspanningtreeobjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stpxExtendedSysIDAdminEnabled")
    {
        stpxextendedsysidadminenabled = value;
        stpxextendedsysidadminenabled.value_namespace = name_space;
        stpxextendedsysidadminenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxExtendedSysIDOperEnabled")
    {
        stpxextendedsysidoperenabled = value;
        stpxextendedsysidoperenabled.value_namespace = name_space;
        stpxextendedsysidoperenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxNotificationEnable")
    {
        stpxnotificationenable[value] = true;
    }
    if(value_path == "stpxSpanningTreePathCostMode")
    {
        stpxspanningtreepathcostmode = value;
        stpxspanningtreepathcostmode.value_namespace = name_space;
        stpxspanningtreepathcostmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxSpanningTreePathCostOperMode")
    {
        stpxspanningtreepathcostopermode = value;
        stpxspanningtreepathcostopermode.value_namespace = name_space;
        stpxspanningtreepathcostopermode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxSpanningTreeType")
    {
        stpxspanningtreetype = value;
        stpxspanningtreetype.value_namespace = name_space;
        stpxspanningtreetype.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSTPEXTENSIONSMIB::Stpxspanningtreeobjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stpxExtendedSysIDAdminEnabled")
    {
        stpxextendedsysidadminenabled.yfilter = yfilter;
    }
    if(value_path == "stpxExtendedSysIDOperEnabled")
    {
        stpxextendedsysidoperenabled.yfilter = yfilter;
    }
    if(value_path == "stpxNotificationEnable")
    {
        stpxnotificationenable.yfilter = yfilter;
    }
    if(value_path == "stpxSpanningTreePathCostMode")
    {
        stpxspanningtreepathcostmode.yfilter = yfilter;
    }
    if(value_path == "stpxSpanningTreePathCostOperMode")
    {
        stpxspanningtreepathcostopermode.yfilter = yfilter;
    }
    if(value_path == "stpxSpanningTreeType")
    {
        stpxspanningtreetype.yfilter = yfilter;
    }
}

bool CISCOSTPEXTENSIONSMIB::Stpxspanningtreeobjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxExtendedSysIDAdminEnabled" || name == "stpxExtendedSysIDOperEnabled" || name == "stpxNotificationEnable" || name == "stpxSpanningTreePathCostMode" || name == "stpxSpanningTreePathCostOperMode" || name == "stpxSpanningTreeType")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::Stpxuplinkfastobjects::Stpxuplinkfastobjects()
    :
    stpxuplinkfastenabled{YType::boolean, "stpxUplinkFastEnabled"},
    stpxuplinkfastoperenabled{YType::boolean, "stpxUplinkFastOperEnabled"},
    stpxuplinkfasttransitions{YType::uint32, "stpxUplinkFastTransitions"},
    stpxuplinkstationlearningframes{YType::uint32, "stpxUplinkStationLearningFrames"},
    stpxuplinkstationlearninggenrate{YType::int32, "stpxUplinkStationLearningGenRate"}
{

    yang_name = "stpxUplinkFastObjects"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false;
}

CISCOSTPEXTENSIONSMIB::Stpxuplinkfastobjects::~Stpxuplinkfastobjects()
{
}

bool CISCOSTPEXTENSIONSMIB::Stpxuplinkfastobjects::has_data() const
{
    return stpxuplinkfastenabled.is_set
	|| stpxuplinkfastoperenabled.is_set
	|| stpxuplinkfasttransitions.is_set
	|| stpxuplinkstationlearningframes.is_set
	|| stpxuplinkstationlearninggenrate.is_set;
}

bool CISCOSTPEXTENSIONSMIB::Stpxuplinkfastobjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxuplinkfastenabled.yfilter)
	|| ydk::is_set(stpxuplinkfastoperenabled.yfilter)
	|| ydk::is_set(stpxuplinkfasttransitions.yfilter)
	|| ydk::is_set(stpxuplinkstationlearningframes.yfilter)
	|| ydk::is_set(stpxuplinkstationlearninggenrate.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::Stpxuplinkfastobjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::Stpxuplinkfastobjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxUplinkFastObjects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::Stpxuplinkfastobjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxuplinkfastenabled.is_set || is_set(stpxuplinkfastenabled.yfilter)) leaf_name_data.push_back(stpxuplinkfastenabled.get_name_leafdata());
    if (stpxuplinkfastoperenabled.is_set || is_set(stpxuplinkfastoperenabled.yfilter)) leaf_name_data.push_back(stpxuplinkfastoperenabled.get_name_leafdata());
    if (stpxuplinkfasttransitions.is_set || is_set(stpxuplinkfasttransitions.yfilter)) leaf_name_data.push_back(stpxuplinkfasttransitions.get_name_leafdata());
    if (stpxuplinkstationlearningframes.is_set || is_set(stpxuplinkstationlearningframes.yfilter)) leaf_name_data.push_back(stpxuplinkstationlearningframes.get_name_leafdata());
    if (stpxuplinkstationlearninggenrate.is_set || is_set(stpxuplinkstationlearninggenrate.yfilter)) leaf_name_data.push_back(stpxuplinkstationlearninggenrate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CISCOSTPEXTENSIONSMIB::Stpxuplinkfastobjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CISCOSTPEXTENSIONSMIB::Stpxuplinkfastobjects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CISCOSTPEXTENSIONSMIB::Stpxuplinkfastobjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stpxUplinkFastEnabled")
    {
        stpxuplinkfastenabled = value;
        stpxuplinkfastenabled.value_namespace = name_space;
        stpxuplinkfastenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxUplinkFastOperEnabled")
    {
        stpxuplinkfastoperenabled = value;
        stpxuplinkfastoperenabled.value_namespace = name_space;
        stpxuplinkfastoperenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxUplinkFastTransitions")
    {
        stpxuplinkfasttransitions = value;
        stpxuplinkfasttransitions.value_namespace = name_space;
        stpxuplinkfasttransitions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxUplinkStationLearningFrames")
    {
        stpxuplinkstationlearningframes = value;
        stpxuplinkstationlearningframes.value_namespace = name_space;
        stpxuplinkstationlearningframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxUplinkStationLearningGenRate")
    {
        stpxuplinkstationlearninggenrate = value;
        stpxuplinkstationlearninggenrate.value_namespace = name_space;
        stpxuplinkstationlearninggenrate.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSTPEXTENSIONSMIB::Stpxuplinkfastobjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stpxUplinkFastEnabled")
    {
        stpxuplinkfastenabled.yfilter = yfilter;
    }
    if(value_path == "stpxUplinkFastOperEnabled")
    {
        stpxuplinkfastoperenabled.yfilter = yfilter;
    }
    if(value_path == "stpxUplinkFastTransitions")
    {
        stpxuplinkfasttransitions.yfilter = yfilter;
    }
    if(value_path == "stpxUplinkStationLearningFrames")
    {
        stpxuplinkstationlearningframes.yfilter = yfilter;
    }
    if(value_path == "stpxUplinkStationLearningGenRate")
    {
        stpxuplinkstationlearninggenrate.yfilter = yfilter;
    }
}

bool CISCOSTPEXTENSIONSMIB::Stpxuplinkfastobjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxUplinkFastEnabled" || name == "stpxUplinkFastOperEnabled" || name == "stpxUplinkFastTransitions" || name == "stpxUplinkStationLearningFrames" || name == "stpxUplinkStationLearningGenRate")
        return true;
    return false;
}

const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxfaststartobjects::Stpxfaststartglobaldefaultmode::enable {1, "enable"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxfaststartobjects::Stpxfaststartglobaldefaultmode::disable {2, "disable"};

const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxfaststartopermodetable::Stpxfaststartopermodeentry::Stpxfaststartopermode::enabled {1, "enabled"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxfaststartopermodetable::Stpxfaststartopermodeentry::Stpxfaststartopermode::disabled {2, "disabled"};

const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxfaststartporttable::Stpxfaststartportentry::Stpxfaststartportmode::enable {1, "enable"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxfaststartporttable::Stpxfaststartportentry::Stpxfaststartportmode::disable {2, "disable"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxfaststartporttable::Stpxfaststartportentry::Stpxfaststartportmode::enableForTrunk {3, "enableForTrunk"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxfaststartporttable::Stpxfaststartportentry::Stpxfaststartportmode::default_ {4, "default"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxfaststartporttable::Stpxfaststartportentry::Stpxfaststartportmode::network {5, "network"};

const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxfaststartporttable::Stpxfaststartportentry::Stpxfaststartportbpduguardmode::enable {1, "enable"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxfaststartporttable::Stpxfaststartportentry::Stpxfaststartportbpduguardmode::disable {2, "disable"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxfaststartporttable::Stpxfaststartportentry::Stpxfaststartportbpduguardmode::default_ {3, "default"};

const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxfaststartporttable::Stpxfaststartportentry::Stpxfaststartportbpdufiltermode::enable {1, "enable"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxfaststartporttable::Stpxfaststartportentry::Stpxfaststartportbpdufiltermode::disable {2, "disable"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxfaststartporttable::Stpxfaststartportentry::Stpxfaststartportbpdufiltermode::default_ {3, "default"};

const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxloopguardconfigtable::Stpxloopguardconfigentry::Stpxloopguardconfigmode::enable {1, "enable"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxloopguardconfigtable::Stpxloopguardconfigentry::Stpxloopguardconfigmode::disable {2, "disable"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxloopguardconfigtable::Stpxloopguardconfigentry::Stpxloopguardconfigmode::default_ {3, "default"};

const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxloopguardobjects::Stpxloopguardglobaldefaultmode::enable {1, "enable"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxloopguardobjects::Stpxloopguardglobaldefaultmode::disable {2, "disable"};

const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxmstobjects::Stpxmstregioneditbufferstatus::released {1, "released"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxmstobjects::Stpxmstregioneditbufferstatus::acquiredBySnmp {2, "acquiredBySnmp"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxmstobjects::Stpxmstregioneditbufferstatus::acquiredByNonSnmp {3, "acquiredByNonSnmp"};

const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxmstobjects::Stpxmstregioneditbufferoperation::other {1, "other"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxmstobjects::Stpxmstregioneditbufferoperation::acquire {2, "acquire"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxmstobjects::Stpxmstregioneditbufferoperation::releaseWithForce {3, "releaseWithForce"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxmstobjects::Stpxmstregioneditbufferoperation::commit {4, "commit"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxmstobjects::Stpxmstregioneditbufferoperation::rollBack {5, "rollBack"};

const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxmstportroletable::Stpxmstportroleentry::Stpxmstportrolevalue::disabled {1, "disabled"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxmstportroletable::Stpxmstportroleentry::Stpxmstportrolevalue::root {2, "root"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxmstportroletable::Stpxmstportroleentry::Stpxmstportrolevalue::designated {3, "designated"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxmstportroletable::Stpxmstportroleentry::Stpxmstportrolevalue::alternate {4, "alternate"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxmstportroletable::Stpxmstportroleentry::Stpxmstportrolevalue::backUp {5, "backUp"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxmstportroletable::Stpxmstportroleentry::Stpxmstportrolevalue::boundary {6, "boundary"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxmstportroletable::Stpxmstportroleentry::Stpxmstportrolevalue::master {7, "master"};

const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxmstporttable::Stpxmstportentry::Stpxmstportadminlinktype::pointToPoint {1, "pointToPoint"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxmstporttable::Stpxmstportentry::Stpxmstportadminlinktype::shared {2, "shared"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxmstporttable::Stpxmstportentry::Stpxmstportadminlinktype::auto_ {3, "auto"};

const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxmstporttable::Stpxmstportentry::Stpxmstportoperlinktype::pointToPoint {1, "pointToPoint"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxmstporttable::Stpxmstportentry::Stpxmstportoperlinktype::shared {2, "shared"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxmstporttable::Stpxmstportentry::Stpxmstportoperlinktype::other {3, "other"};

const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxpvstvlantable::Stpxpvstvlanentry::Stpxpvstvlanenable::enabled {1, "enabled"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxpvstvlantable::Stpxpvstvlanentry::Stpxpvstvlanenable::disabled {2, "disabled"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxpvstvlantable::Stpxpvstvlanentry::Stpxpvstvlanenable::notApplicable {3, "notApplicable"};

const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxrstpportroletable::Stpxrstpportroleentry::Stpxrstpportrolevalue::disabled {1, "disabled"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxrstpportroletable::Stpxrstpportroleentry::Stpxrstpportrolevalue::root {2, "root"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxrstpportroletable::Stpxrstpportroleentry::Stpxrstpportrolevalue::designated {3, "designated"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxrstpportroletable::Stpxrstpportroleentry::Stpxrstpportrolevalue::alternate {4, "alternate"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxrstpportroletable::Stpxrstpportroleentry::Stpxrstpportrolevalue::backUp {5, "backUp"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxrstpportroletable::Stpxrstpportroleentry::Stpxrstpportrolevalue::boundary {6, "boundary"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxrstpportroletable::Stpxrstpportroleentry::Stpxrstpportrolevalue::master {7, "master"};

const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxrstpporttable::Stpxrstpportentry::Stpxrstpportadminlinktype::pointToPoint {1, "pointToPoint"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxrstpporttable::Stpxrstpportentry::Stpxrstpportadminlinktype::shared {2, "shared"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxrstpporttable::Stpxrstpportentry::Stpxrstpportadminlinktype::auto_ {3, "auto"};

const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxrstpporttable::Stpxrstpportentry::Stpxrstpportoperlinktype::pointToPoint {1, "pointToPoint"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxrstpporttable::Stpxrstpportentry::Stpxrstpportoperlinktype::shared {2, "shared"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxrstpporttable::Stpxrstpportentry::Stpxrstpportoperlinktype::other {3, "other"};

const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxsmstporttable::Stpxsmstportentry::Stpxsmstportadminmstmode::preStandard {1, "preStandard"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxsmstporttable::Stpxsmstportentry::Stpxsmstportadminmstmode::auto_ {2, "auto"};

const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxsmstporttable::Stpxsmstportentry::Stpxsmstportopermstmode::unknown {1, "unknown"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxsmstporttable::Stpxsmstportentry::Stpxsmstportopermstmode::preStandard {2, "preStandard"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxsmstporttable::Stpxsmstportentry::Stpxsmstportopermstmode::standard {3, "standard"};

const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxspanningtreeobjects::Stpxspanningtreetype::pvstPlus {1, "pvstPlus"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxspanningtreeobjects::Stpxspanningtreetype::mistp {2, "mistp"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxspanningtreeobjects::Stpxspanningtreetype::mistpPvstPlus {3, "mistpPvstPlus"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxspanningtreeobjects::Stpxspanningtreetype::mst {4, "mst"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxspanningtreeobjects::Stpxspanningtreetype::rapidPvstPlus {5, "rapidPvstPlus"};

const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxspanningtreeobjects::Stpxspanningtreepathcostmode::short_ {1, "short"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxspanningtreeobjects::Stpxspanningtreepathcostmode::long_ {2, "long"};

const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxspanningtreeobjects::Stpxspanningtreepathcostopermode::short_ {1, "short"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::Stpxspanningtreeobjects::Stpxspanningtreepathcostopermode::long_ {2, "long"};


}
}

