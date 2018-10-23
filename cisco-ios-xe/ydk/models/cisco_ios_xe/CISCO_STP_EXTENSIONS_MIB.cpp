
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
    stpxuplinkfastobjects(std::make_shared<CISCOSTPEXTENSIONSMIB::StpxUplinkFastObjects>())
    , stpxbackbonefastobjects(std::make_shared<CISCOSTPEXTENSIONSMIB::StpxBackboneFastObjects>())
    , stpxspanningtreeobjects(std::make_shared<CISCOSTPEXTENSIONSMIB::StpxSpanningTreeObjects>())
    , stpxmistpobjects(std::make_shared<CISCOSTPEXTENSIONSMIB::StpxMISTPObjects>())
    , stpxloopguardobjects(std::make_shared<CISCOSTPEXTENSIONSMIB::StpxLoopGuardObjects>())
    , stpxfaststartobjects(std::make_shared<CISCOSTPEXTENSIONSMIB::StpxFastStartObjects>())
    , stpxbpduskewingobjects(std::make_shared<CISCOSTPEXTENSIONSMIB::StpxBpduSkewingObjects>())
    , stpxmstobjects(std::make_shared<CISCOSTPEXTENSIONSMIB::StpxMSTObjects>())
    , stpxrstpobjects(std::make_shared<CISCOSTPEXTENSIONSMIB::StpxRSTPObjects>())
    , stpxsmstobjects(std::make_shared<CISCOSTPEXTENSIONSMIB::StpxSMSTObjects>())
    , stpxpvstvlantable(std::make_shared<CISCOSTPEXTENSIONSMIB::StpxPVSTVlanTable>())
    , stpxinconsistencytable(std::make_shared<CISCOSTPEXTENSIONSMIB::StpxInconsistencyTable>())
    , stpxrootguardconfigtable(std::make_shared<CISCOSTPEXTENSIONSMIB::StpxRootGuardConfigTable>())
    , stpxrootinconsistencytable(std::make_shared<CISCOSTPEXTENSIONSMIB::StpxRootInconsistencyTable>())
    , stpxmistpinstancetable(std::make_shared<CISCOSTPEXTENSIONSMIB::StpxMISTPInstanceTable>())
    , stpxloopguardconfigtable(std::make_shared<CISCOSTPEXTENSIONSMIB::StpxLoopGuardConfigTable>())
    , stpxloopinconsistencytable(std::make_shared<CISCOSTPEXTENSIONSMIB::StpxLoopInconsistencyTable>())
    , stpxfaststartporttable(std::make_shared<CISCOSTPEXTENSIONSMIB::StpxFastStartPortTable>())
    , stpxfaststartopermodetable(std::make_shared<CISCOSTPEXTENSIONSMIB::StpxFastStartOperModeTable>())
    , stpxbpduskewingtable(std::make_shared<CISCOSTPEXTENSIONSMIB::StpxBpduSkewingTable>())
    , stpxmstinstancetable(std::make_shared<CISCOSTPEXTENSIONSMIB::StpxMSTInstanceTable>())
    , stpxmstinstanceedittable(std::make_shared<CISCOSTPEXTENSIONSMIB::StpxMSTInstanceEditTable>())
    , stpxmstporttable(std::make_shared<CISCOSTPEXTENSIONSMIB::StpxMSTPortTable>())
    , stpxmstportroletable(std::make_shared<CISCOSTPEXTENSIONSMIB::StpxMSTPortRoleTable>())
    , stpxrstpporttable(std::make_shared<CISCOSTPEXTENSIONSMIB::StpxRSTPPortTable>())
    , stpxrstpportroletable(std::make_shared<CISCOSTPEXTENSIONSMIB::StpxRSTPPortRoleTable>())
    , stpxrpvstporttable(std::make_shared<CISCOSTPEXTENSIONSMIB::StpxRPVSTPortTable>())
    , stpxsmstinstancetable(std::make_shared<CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceTable>())
    , stpxsmstinstanceedittable(std::make_shared<CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceEditTable>())
    , stpxsmstporttable(std::make_shared<CISCOSTPEXTENSIONSMIB::StpxSMSTPortTable>())
{
    stpxuplinkfastobjects->parent = this;
    stpxbackbonefastobjects->parent = this;
    stpxspanningtreeobjects->parent = this;
    stpxmistpobjects->parent = this;
    stpxloopguardobjects->parent = this;
    stpxfaststartobjects->parent = this;
    stpxbpduskewingobjects->parent = this;
    stpxmstobjects->parent = this;
    stpxrstpobjects->parent = this;
    stpxsmstobjects->parent = this;
    stpxpvstvlantable->parent = this;
    stpxinconsistencytable->parent = this;
    stpxrootguardconfigtable->parent = this;
    stpxrootinconsistencytable->parent = this;
    stpxmistpinstancetable->parent = this;
    stpxloopguardconfigtable->parent = this;
    stpxloopinconsistencytable->parent = this;
    stpxfaststartporttable->parent = this;
    stpxfaststartopermodetable->parent = this;
    stpxbpduskewingtable->parent = this;
    stpxmstinstancetable->parent = this;
    stpxmstinstanceedittable->parent = this;
    stpxmstporttable->parent = this;
    stpxmstportroletable->parent = this;
    stpxrstpporttable->parent = this;
    stpxrstpportroletable->parent = this;
    stpxrpvstporttable->parent = this;
    stpxsmstinstancetable->parent = this;
    stpxsmstinstanceedittable->parent = this;
    stpxsmstporttable->parent = this;

    yang_name = "CISCO-STP-EXTENSIONS-MIB"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

CISCOSTPEXTENSIONSMIB::~CISCOSTPEXTENSIONSMIB()
{
}

bool CISCOSTPEXTENSIONSMIB::has_data() const
{
    if (is_presence_container) return true;
    return (stpxuplinkfastobjects !=  nullptr && stpxuplinkfastobjects->has_data())
	|| (stpxbackbonefastobjects !=  nullptr && stpxbackbonefastobjects->has_data())
	|| (stpxspanningtreeobjects !=  nullptr && stpxspanningtreeobjects->has_data())
	|| (stpxmistpobjects !=  nullptr && stpxmistpobjects->has_data())
	|| (stpxloopguardobjects !=  nullptr && stpxloopguardobjects->has_data())
	|| (stpxfaststartobjects !=  nullptr && stpxfaststartobjects->has_data())
	|| (stpxbpduskewingobjects !=  nullptr && stpxbpduskewingobjects->has_data())
	|| (stpxmstobjects !=  nullptr && stpxmstobjects->has_data())
	|| (stpxrstpobjects !=  nullptr && stpxrstpobjects->has_data())
	|| (stpxsmstobjects !=  nullptr && stpxsmstobjects->has_data())
	|| (stpxpvstvlantable !=  nullptr && stpxpvstvlantable->has_data())
	|| (stpxinconsistencytable !=  nullptr && stpxinconsistencytable->has_data())
	|| (stpxrootguardconfigtable !=  nullptr && stpxrootguardconfigtable->has_data())
	|| (stpxrootinconsistencytable !=  nullptr && stpxrootinconsistencytable->has_data())
	|| (stpxmistpinstancetable !=  nullptr && stpxmistpinstancetable->has_data())
	|| (stpxloopguardconfigtable !=  nullptr && stpxloopguardconfigtable->has_data())
	|| (stpxloopinconsistencytable !=  nullptr && stpxloopinconsistencytable->has_data())
	|| (stpxfaststartporttable !=  nullptr && stpxfaststartporttable->has_data())
	|| (stpxfaststartopermodetable !=  nullptr && stpxfaststartopermodetable->has_data())
	|| (stpxbpduskewingtable !=  nullptr && stpxbpduskewingtable->has_data())
	|| (stpxmstinstancetable !=  nullptr && stpxmstinstancetable->has_data())
	|| (stpxmstinstanceedittable !=  nullptr && stpxmstinstanceedittable->has_data())
	|| (stpxmstporttable !=  nullptr && stpxmstporttable->has_data())
	|| (stpxmstportroletable !=  nullptr && stpxmstportroletable->has_data())
	|| (stpxrstpporttable !=  nullptr && stpxrstpporttable->has_data())
	|| (stpxrstpportroletable !=  nullptr && stpxrstpportroletable->has_data())
	|| (stpxrpvstporttable !=  nullptr && stpxrpvstporttable->has_data())
	|| (stpxsmstinstancetable !=  nullptr && stpxsmstinstancetable->has_data())
	|| (stpxsmstinstanceedittable !=  nullptr && stpxsmstinstanceedittable->has_data())
	|| (stpxsmstporttable !=  nullptr && stpxsmstporttable->has_data());
}

bool CISCOSTPEXTENSIONSMIB::has_operation() const
{
    return is_set(yfilter)
	|| (stpxuplinkfastobjects !=  nullptr && stpxuplinkfastobjects->has_operation())
	|| (stpxbackbonefastobjects !=  nullptr && stpxbackbonefastobjects->has_operation())
	|| (stpxspanningtreeobjects !=  nullptr && stpxspanningtreeobjects->has_operation())
	|| (stpxmistpobjects !=  nullptr && stpxmistpobjects->has_operation())
	|| (stpxloopguardobjects !=  nullptr && stpxloopguardobjects->has_operation())
	|| (stpxfaststartobjects !=  nullptr && stpxfaststartobjects->has_operation())
	|| (stpxbpduskewingobjects !=  nullptr && stpxbpduskewingobjects->has_operation())
	|| (stpxmstobjects !=  nullptr && stpxmstobjects->has_operation())
	|| (stpxrstpobjects !=  nullptr && stpxrstpobjects->has_operation())
	|| (stpxsmstobjects !=  nullptr && stpxsmstobjects->has_operation())
	|| (stpxpvstvlantable !=  nullptr && stpxpvstvlantable->has_operation())
	|| (stpxinconsistencytable !=  nullptr && stpxinconsistencytable->has_operation())
	|| (stpxrootguardconfigtable !=  nullptr && stpxrootguardconfigtable->has_operation())
	|| (stpxrootinconsistencytable !=  nullptr && stpxrootinconsistencytable->has_operation())
	|| (stpxmistpinstancetable !=  nullptr && stpxmistpinstancetable->has_operation())
	|| (stpxloopguardconfigtable !=  nullptr && stpxloopguardconfigtable->has_operation())
	|| (stpxloopinconsistencytable !=  nullptr && stpxloopinconsistencytable->has_operation())
	|| (stpxfaststartporttable !=  nullptr && stpxfaststartporttable->has_operation())
	|| (stpxfaststartopermodetable !=  nullptr && stpxfaststartopermodetable->has_operation())
	|| (stpxbpduskewingtable !=  nullptr && stpxbpduskewingtable->has_operation())
	|| (stpxmstinstancetable !=  nullptr && stpxmstinstancetable->has_operation())
	|| (stpxmstinstanceedittable !=  nullptr && stpxmstinstanceedittable->has_operation())
	|| (stpxmstporttable !=  nullptr && stpxmstporttable->has_operation())
	|| (stpxmstportroletable !=  nullptr && stpxmstportroletable->has_operation())
	|| (stpxrstpporttable !=  nullptr && stpxrstpporttable->has_operation())
	|| (stpxrstpportroletable !=  nullptr && stpxrstpportroletable->has_operation())
	|| (stpxrpvstporttable !=  nullptr && stpxrpvstporttable->has_operation())
	|| (stpxsmstinstancetable !=  nullptr && stpxsmstinstancetable->has_operation())
	|| (stpxsmstinstanceedittable !=  nullptr && stpxsmstinstanceedittable->has_operation())
	|| (stpxsmstporttable !=  nullptr && stpxsmstporttable->has_operation());
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

std::shared_ptr<ydk::Entity> CISCOSTPEXTENSIONSMIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stpxUplinkFastObjects")
    {
        if(stpxuplinkfastobjects == nullptr)
        {
            stpxuplinkfastobjects = std::make_shared<CISCOSTPEXTENSIONSMIB::StpxUplinkFastObjects>();
        }
        return stpxuplinkfastobjects;
    }

    if(child_yang_name == "stpxBackboneFastObjects")
    {
        if(stpxbackbonefastobjects == nullptr)
        {
            stpxbackbonefastobjects = std::make_shared<CISCOSTPEXTENSIONSMIB::StpxBackboneFastObjects>();
        }
        return stpxbackbonefastobjects;
    }

    if(child_yang_name == "stpxSpanningTreeObjects")
    {
        if(stpxspanningtreeobjects == nullptr)
        {
            stpxspanningtreeobjects = std::make_shared<CISCOSTPEXTENSIONSMIB::StpxSpanningTreeObjects>();
        }
        return stpxspanningtreeobjects;
    }

    if(child_yang_name == "stpxMISTPObjects")
    {
        if(stpxmistpobjects == nullptr)
        {
            stpxmistpobjects = std::make_shared<CISCOSTPEXTENSIONSMIB::StpxMISTPObjects>();
        }
        return stpxmistpobjects;
    }

    if(child_yang_name == "stpxLoopGuardObjects")
    {
        if(stpxloopguardobjects == nullptr)
        {
            stpxloopguardobjects = std::make_shared<CISCOSTPEXTENSIONSMIB::StpxLoopGuardObjects>();
        }
        return stpxloopguardobjects;
    }

    if(child_yang_name == "stpxFastStartObjects")
    {
        if(stpxfaststartobjects == nullptr)
        {
            stpxfaststartobjects = std::make_shared<CISCOSTPEXTENSIONSMIB::StpxFastStartObjects>();
        }
        return stpxfaststartobjects;
    }

    if(child_yang_name == "stpxBpduSkewingObjects")
    {
        if(stpxbpduskewingobjects == nullptr)
        {
            stpxbpduskewingobjects = std::make_shared<CISCOSTPEXTENSIONSMIB::StpxBpduSkewingObjects>();
        }
        return stpxbpduskewingobjects;
    }

    if(child_yang_name == "stpxMSTObjects")
    {
        if(stpxmstobjects == nullptr)
        {
            stpxmstobjects = std::make_shared<CISCOSTPEXTENSIONSMIB::StpxMSTObjects>();
        }
        return stpxmstobjects;
    }

    if(child_yang_name == "stpxRSTPObjects")
    {
        if(stpxrstpobjects == nullptr)
        {
            stpxrstpobjects = std::make_shared<CISCOSTPEXTENSIONSMIB::StpxRSTPObjects>();
        }
        return stpxrstpobjects;
    }

    if(child_yang_name == "stpxSMSTObjects")
    {
        if(stpxsmstobjects == nullptr)
        {
            stpxsmstobjects = std::make_shared<CISCOSTPEXTENSIONSMIB::StpxSMSTObjects>();
        }
        return stpxsmstobjects;
    }

    if(child_yang_name == "stpxPVSTVlanTable")
    {
        if(stpxpvstvlantable == nullptr)
        {
            stpxpvstvlantable = std::make_shared<CISCOSTPEXTENSIONSMIB::StpxPVSTVlanTable>();
        }
        return stpxpvstvlantable;
    }

    if(child_yang_name == "stpxInconsistencyTable")
    {
        if(stpxinconsistencytable == nullptr)
        {
            stpxinconsistencytable = std::make_shared<CISCOSTPEXTENSIONSMIB::StpxInconsistencyTable>();
        }
        return stpxinconsistencytable;
    }

    if(child_yang_name == "stpxRootGuardConfigTable")
    {
        if(stpxrootguardconfigtable == nullptr)
        {
            stpxrootguardconfigtable = std::make_shared<CISCOSTPEXTENSIONSMIB::StpxRootGuardConfigTable>();
        }
        return stpxrootguardconfigtable;
    }

    if(child_yang_name == "stpxRootInconsistencyTable")
    {
        if(stpxrootinconsistencytable == nullptr)
        {
            stpxrootinconsistencytable = std::make_shared<CISCOSTPEXTENSIONSMIB::StpxRootInconsistencyTable>();
        }
        return stpxrootinconsistencytable;
    }

    if(child_yang_name == "stpxMISTPInstanceTable")
    {
        if(stpxmistpinstancetable == nullptr)
        {
            stpxmistpinstancetable = std::make_shared<CISCOSTPEXTENSIONSMIB::StpxMISTPInstanceTable>();
        }
        return stpxmistpinstancetable;
    }

    if(child_yang_name == "stpxLoopGuardConfigTable")
    {
        if(stpxloopguardconfigtable == nullptr)
        {
            stpxloopguardconfigtable = std::make_shared<CISCOSTPEXTENSIONSMIB::StpxLoopGuardConfigTable>();
        }
        return stpxloopguardconfigtable;
    }

    if(child_yang_name == "stpxLoopInconsistencyTable")
    {
        if(stpxloopinconsistencytable == nullptr)
        {
            stpxloopinconsistencytable = std::make_shared<CISCOSTPEXTENSIONSMIB::StpxLoopInconsistencyTable>();
        }
        return stpxloopinconsistencytable;
    }

    if(child_yang_name == "stpxFastStartPortTable")
    {
        if(stpxfaststartporttable == nullptr)
        {
            stpxfaststartporttable = std::make_shared<CISCOSTPEXTENSIONSMIB::StpxFastStartPortTable>();
        }
        return stpxfaststartporttable;
    }

    if(child_yang_name == "stpxFastStartOperModeTable")
    {
        if(stpxfaststartopermodetable == nullptr)
        {
            stpxfaststartopermodetable = std::make_shared<CISCOSTPEXTENSIONSMIB::StpxFastStartOperModeTable>();
        }
        return stpxfaststartopermodetable;
    }

    if(child_yang_name == "stpxBpduSkewingTable")
    {
        if(stpxbpduskewingtable == nullptr)
        {
            stpxbpduskewingtable = std::make_shared<CISCOSTPEXTENSIONSMIB::StpxBpduSkewingTable>();
        }
        return stpxbpduskewingtable;
    }

    if(child_yang_name == "stpxMSTInstanceTable")
    {
        if(stpxmstinstancetable == nullptr)
        {
            stpxmstinstancetable = std::make_shared<CISCOSTPEXTENSIONSMIB::StpxMSTInstanceTable>();
        }
        return stpxmstinstancetable;
    }

    if(child_yang_name == "stpxMSTInstanceEditTable")
    {
        if(stpxmstinstanceedittable == nullptr)
        {
            stpxmstinstanceedittable = std::make_shared<CISCOSTPEXTENSIONSMIB::StpxMSTInstanceEditTable>();
        }
        return stpxmstinstanceedittable;
    }

    if(child_yang_name == "stpxMSTPortTable")
    {
        if(stpxmstporttable == nullptr)
        {
            stpxmstporttable = std::make_shared<CISCOSTPEXTENSIONSMIB::StpxMSTPortTable>();
        }
        return stpxmstporttable;
    }

    if(child_yang_name == "stpxMSTPortRoleTable")
    {
        if(stpxmstportroletable == nullptr)
        {
            stpxmstportroletable = std::make_shared<CISCOSTPEXTENSIONSMIB::StpxMSTPortRoleTable>();
        }
        return stpxmstportroletable;
    }

    if(child_yang_name == "stpxRSTPPortTable")
    {
        if(stpxrstpporttable == nullptr)
        {
            stpxrstpporttable = std::make_shared<CISCOSTPEXTENSIONSMIB::StpxRSTPPortTable>();
        }
        return stpxrstpporttable;
    }

    if(child_yang_name == "stpxRSTPPortRoleTable")
    {
        if(stpxrstpportroletable == nullptr)
        {
            stpxrstpportroletable = std::make_shared<CISCOSTPEXTENSIONSMIB::StpxRSTPPortRoleTable>();
        }
        return stpxrstpportroletable;
    }

    if(child_yang_name == "stpxRPVSTPortTable")
    {
        if(stpxrpvstporttable == nullptr)
        {
            stpxrpvstporttable = std::make_shared<CISCOSTPEXTENSIONSMIB::StpxRPVSTPortTable>();
        }
        return stpxrpvstporttable;
    }

    if(child_yang_name == "stpxSMSTInstanceTable")
    {
        if(stpxsmstinstancetable == nullptr)
        {
            stpxsmstinstancetable = std::make_shared<CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceTable>();
        }
        return stpxsmstinstancetable;
    }

    if(child_yang_name == "stpxSMSTInstanceEditTable")
    {
        if(stpxsmstinstanceedittable == nullptr)
        {
            stpxsmstinstanceedittable = std::make_shared<CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceEditTable>();
        }
        return stpxsmstinstanceedittable;
    }

    if(child_yang_name == "stpxSMSTPortTable")
    {
        if(stpxsmstporttable == nullptr)
        {
            stpxsmstporttable = std::make_shared<CISCOSTPEXTENSIONSMIB::StpxSMSTPortTable>();
        }
        return stpxsmstporttable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSTPEXTENSIONSMIB::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(stpxuplinkfastobjects != nullptr)
    {
        _children["stpxUplinkFastObjects"] = stpxuplinkfastobjects;
    }

    if(stpxbackbonefastobjects != nullptr)
    {
        _children["stpxBackboneFastObjects"] = stpxbackbonefastobjects;
    }

    if(stpxspanningtreeobjects != nullptr)
    {
        _children["stpxSpanningTreeObjects"] = stpxspanningtreeobjects;
    }

    if(stpxmistpobjects != nullptr)
    {
        _children["stpxMISTPObjects"] = stpxmistpobjects;
    }

    if(stpxloopguardobjects != nullptr)
    {
        _children["stpxLoopGuardObjects"] = stpxloopguardobjects;
    }

    if(stpxfaststartobjects != nullptr)
    {
        _children["stpxFastStartObjects"] = stpxfaststartobjects;
    }

    if(stpxbpduskewingobjects != nullptr)
    {
        _children["stpxBpduSkewingObjects"] = stpxbpduskewingobjects;
    }

    if(stpxmstobjects != nullptr)
    {
        _children["stpxMSTObjects"] = stpxmstobjects;
    }

    if(stpxrstpobjects != nullptr)
    {
        _children["stpxRSTPObjects"] = stpxrstpobjects;
    }

    if(stpxsmstobjects != nullptr)
    {
        _children["stpxSMSTObjects"] = stpxsmstobjects;
    }

    if(stpxpvstvlantable != nullptr)
    {
        _children["stpxPVSTVlanTable"] = stpxpvstvlantable;
    }

    if(stpxinconsistencytable != nullptr)
    {
        _children["stpxInconsistencyTable"] = stpxinconsistencytable;
    }

    if(stpxrootguardconfigtable != nullptr)
    {
        _children["stpxRootGuardConfigTable"] = stpxrootguardconfigtable;
    }

    if(stpxrootinconsistencytable != nullptr)
    {
        _children["stpxRootInconsistencyTable"] = stpxrootinconsistencytable;
    }

    if(stpxmistpinstancetable != nullptr)
    {
        _children["stpxMISTPInstanceTable"] = stpxmistpinstancetable;
    }

    if(stpxloopguardconfigtable != nullptr)
    {
        _children["stpxLoopGuardConfigTable"] = stpxloopguardconfigtable;
    }

    if(stpxloopinconsistencytable != nullptr)
    {
        _children["stpxLoopInconsistencyTable"] = stpxloopinconsistencytable;
    }

    if(stpxfaststartporttable != nullptr)
    {
        _children["stpxFastStartPortTable"] = stpxfaststartporttable;
    }

    if(stpxfaststartopermodetable != nullptr)
    {
        _children["stpxFastStartOperModeTable"] = stpxfaststartopermodetable;
    }

    if(stpxbpduskewingtable != nullptr)
    {
        _children["stpxBpduSkewingTable"] = stpxbpduskewingtable;
    }

    if(stpxmstinstancetable != nullptr)
    {
        _children["stpxMSTInstanceTable"] = stpxmstinstancetable;
    }

    if(stpxmstinstanceedittable != nullptr)
    {
        _children["stpxMSTInstanceEditTable"] = stpxmstinstanceedittable;
    }

    if(stpxmstporttable != nullptr)
    {
        _children["stpxMSTPortTable"] = stpxmstporttable;
    }

    if(stpxmstportroletable != nullptr)
    {
        _children["stpxMSTPortRoleTable"] = stpxmstportroletable;
    }

    if(stpxrstpporttable != nullptr)
    {
        _children["stpxRSTPPortTable"] = stpxrstpporttable;
    }

    if(stpxrstpportroletable != nullptr)
    {
        _children["stpxRSTPPortRoleTable"] = stpxrstpportroletable;
    }

    if(stpxrpvstporttable != nullptr)
    {
        _children["stpxRPVSTPortTable"] = stpxrpvstporttable;
    }

    if(stpxsmstinstancetable != nullptr)
    {
        _children["stpxSMSTInstanceTable"] = stpxsmstinstancetable;
    }

    if(stpxsmstinstanceedittable != nullptr)
    {
        _children["stpxSMSTInstanceEditTable"] = stpxsmstinstanceedittable;
    }

    if(stpxsmstporttable != nullptr)
    {
        _children["stpxSMSTPortTable"] = stpxsmstporttable;
    }

    return _children;
}

void CISCOSTPEXTENSIONSMIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSTPEXTENSIONSMIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> CISCOSTPEXTENSIONSMIB::clone_ptr() const
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
    if(name == "stpxUplinkFastObjects" || name == "stpxBackboneFastObjects" || name == "stpxSpanningTreeObjects" || name == "stpxMISTPObjects" || name == "stpxLoopGuardObjects" || name == "stpxFastStartObjects" || name == "stpxBpduSkewingObjects" || name == "stpxMSTObjects" || name == "stpxRSTPObjects" || name == "stpxSMSTObjects" || name == "stpxPVSTVlanTable" || name == "stpxInconsistencyTable" || name == "stpxRootGuardConfigTable" || name == "stpxRootInconsistencyTable" || name == "stpxMISTPInstanceTable" || name == "stpxLoopGuardConfigTable" || name == "stpxLoopInconsistencyTable" || name == "stpxFastStartPortTable" || name == "stpxFastStartOperModeTable" || name == "stpxBpduSkewingTable" || name == "stpxMSTInstanceTable" || name == "stpxMSTInstanceEditTable" || name == "stpxMSTPortTable" || name == "stpxMSTPortRoleTable" || name == "stpxRSTPPortTable" || name == "stpxRSTPPortRoleTable" || name == "stpxRPVSTPortTable" || name == "stpxSMSTInstanceTable" || name == "stpxSMSTInstanceEditTable" || name == "stpxSMSTPortTable")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::StpxUplinkFastObjects::StpxUplinkFastObjects()
    :
    stpxuplinkfastenabled{YType::boolean, "stpxUplinkFastEnabled"},
    stpxuplinkfasttransitions{YType::uint32, "stpxUplinkFastTransitions"},
    stpxuplinkstationlearninggenrate{YType::int32, "stpxUplinkStationLearningGenRate"},
    stpxuplinkstationlearningframes{YType::uint32, "stpxUplinkStationLearningFrames"},
    stpxuplinkfastoperenabled{YType::boolean, "stpxUplinkFastOperEnabled"}
{

    yang_name = "stpxUplinkFastObjects"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSTPEXTENSIONSMIB::StpxUplinkFastObjects::~StpxUplinkFastObjects()
{
}

bool CISCOSTPEXTENSIONSMIB::StpxUplinkFastObjects::has_data() const
{
    if (is_presence_container) return true;
    return stpxuplinkfastenabled.is_set
	|| stpxuplinkfasttransitions.is_set
	|| stpxuplinkstationlearninggenrate.is_set
	|| stpxuplinkstationlearningframes.is_set
	|| stpxuplinkfastoperenabled.is_set;
}

bool CISCOSTPEXTENSIONSMIB::StpxUplinkFastObjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxuplinkfastenabled.yfilter)
	|| ydk::is_set(stpxuplinkfasttransitions.yfilter)
	|| ydk::is_set(stpxuplinkstationlearninggenrate.yfilter)
	|| ydk::is_set(stpxuplinkstationlearningframes.yfilter)
	|| ydk::is_set(stpxuplinkfastoperenabled.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::StpxUplinkFastObjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::StpxUplinkFastObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxUplinkFastObjects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::StpxUplinkFastObjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxuplinkfastenabled.is_set || is_set(stpxuplinkfastenabled.yfilter)) leaf_name_data.push_back(stpxuplinkfastenabled.get_name_leafdata());
    if (stpxuplinkfasttransitions.is_set || is_set(stpxuplinkfasttransitions.yfilter)) leaf_name_data.push_back(stpxuplinkfasttransitions.get_name_leafdata());
    if (stpxuplinkstationlearninggenrate.is_set || is_set(stpxuplinkstationlearninggenrate.yfilter)) leaf_name_data.push_back(stpxuplinkstationlearninggenrate.get_name_leafdata());
    if (stpxuplinkstationlearningframes.is_set || is_set(stpxuplinkstationlearningframes.yfilter)) leaf_name_data.push_back(stpxuplinkstationlearningframes.get_name_leafdata());
    if (stpxuplinkfastoperenabled.is_set || is_set(stpxuplinkfastoperenabled.yfilter)) leaf_name_data.push_back(stpxuplinkfastoperenabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSTPEXTENSIONSMIB::StpxUplinkFastObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSTPEXTENSIONSMIB::StpxUplinkFastObjects::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSTPEXTENSIONSMIB::StpxUplinkFastObjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stpxUplinkFastEnabled")
    {
        stpxuplinkfastenabled = value;
        stpxuplinkfastenabled.value_namespace = name_space;
        stpxuplinkfastenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxUplinkFastTransitions")
    {
        stpxuplinkfasttransitions = value;
        stpxuplinkfasttransitions.value_namespace = name_space;
        stpxuplinkfasttransitions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxUplinkStationLearningGenRate")
    {
        stpxuplinkstationlearninggenrate = value;
        stpxuplinkstationlearninggenrate.value_namespace = name_space;
        stpxuplinkstationlearninggenrate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxUplinkStationLearningFrames")
    {
        stpxuplinkstationlearningframes = value;
        stpxuplinkstationlearningframes.value_namespace = name_space;
        stpxuplinkstationlearningframes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxUplinkFastOperEnabled")
    {
        stpxuplinkfastoperenabled = value;
        stpxuplinkfastoperenabled.value_namespace = name_space;
        stpxuplinkfastoperenabled.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSTPEXTENSIONSMIB::StpxUplinkFastObjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stpxUplinkFastEnabled")
    {
        stpxuplinkfastenabled.yfilter = yfilter;
    }
    if(value_path == "stpxUplinkFastTransitions")
    {
        stpxuplinkfasttransitions.yfilter = yfilter;
    }
    if(value_path == "stpxUplinkStationLearningGenRate")
    {
        stpxuplinkstationlearninggenrate.yfilter = yfilter;
    }
    if(value_path == "stpxUplinkStationLearningFrames")
    {
        stpxuplinkstationlearningframes.yfilter = yfilter;
    }
    if(value_path == "stpxUplinkFastOperEnabled")
    {
        stpxuplinkfastoperenabled.yfilter = yfilter;
    }
}

bool CISCOSTPEXTENSIONSMIB::StpxUplinkFastObjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxUplinkFastEnabled" || name == "stpxUplinkFastTransitions" || name == "stpxUplinkStationLearningGenRate" || name == "stpxUplinkStationLearningFrames" || name == "stpxUplinkFastOperEnabled")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::StpxBackboneFastObjects::StpxBackboneFastObjects()
    :
    stpxbackbonefastenabled{YType::boolean, "stpxBackboneFastEnabled"},
    stpxbackbonefastininferiorbpdus{YType::uint32, "stpxBackboneFastInInferiorBPDUs"},
    stpxbackbonefastinrlqrequestpdus{YType::uint32, "stpxBackboneFastInRLQRequestPDUs"},
    stpxbackbonefastinrlqresponsepdus{YType::uint32, "stpxBackboneFastInRLQResponsePDUs"},
    stpxbackbonefastoutrlqrequestpdus{YType::uint32, "stpxBackboneFastOutRLQRequestPDUs"},
    stpxbackbonefastoutrlqresponsepdus{YType::uint32, "stpxBackboneFastOutRLQResponsePDUs"},
    stpxbackbonefastoperenabled{YType::boolean, "stpxBackboneFastOperEnabled"}
{

    yang_name = "stpxBackboneFastObjects"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSTPEXTENSIONSMIB::StpxBackboneFastObjects::~StpxBackboneFastObjects()
{
}

bool CISCOSTPEXTENSIONSMIB::StpxBackboneFastObjects::has_data() const
{
    if (is_presence_container) return true;
    return stpxbackbonefastenabled.is_set
	|| stpxbackbonefastininferiorbpdus.is_set
	|| stpxbackbonefastinrlqrequestpdus.is_set
	|| stpxbackbonefastinrlqresponsepdus.is_set
	|| stpxbackbonefastoutrlqrequestpdus.is_set
	|| stpxbackbonefastoutrlqresponsepdus.is_set
	|| stpxbackbonefastoperenabled.is_set;
}

bool CISCOSTPEXTENSIONSMIB::StpxBackboneFastObjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxbackbonefastenabled.yfilter)
	|| ydk::is_set(stpxbackbonefastininferiorbpdus.yfilter)
	|| ydk::is_set(stpxbackbonefastinrlqrequestpdus.yfilter)
	|| ydk::is_set(stpxbackbonefastinrlqresponsepdus.yfilter)
	|| ydk::is_set(stpxbackbonefastoutrlqrequestpdus.yfilter)
	|| ydk::is_set(stpxbackbonefastoutrlqresponsepdus.yfilter)
	|| ydk::is_set(stpxbackbonefastoperenabled.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::StpxBackboneFastObjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::StpxBackboneFastObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxBackboneFastObjects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::StpxBackboneFastObjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxbackbonefastenabled.is_set || is_set(stpxbackbonefastenabled.yfilter)) leaf_name_data.push_back(stpxbackbonefastenabled.get_name_leafdata());
    if (stpxbackbonefastininferiorbpdus.is_set || is_set(stpxbackbonefastininferiorbpdus.yfilter)) leaf_name_data.push_back(stpxbackbonefastininferiorbpdus.get_name_leafdata());
    if (stpxbackbonefastinrlqrequestpdus.is_set || is_set(stpxbackbonefastinrlqrequestpdus.yfilter)) leaf_name_data.push_back(stpxbackbonefastinrlqrequestpdus.get_name_leafdata());
    if (stpxbackbonefastinrlqresponsepdus.is_set || is_set(stpxbackbonefastinrlqresponsepdus.yfilter)) leaf_name_data.push_back(stpxbackbonefastinrlqresponsepdus.get_name_leafdata());
    if (stpxbackbonefastoutrlqrequestpdus.is_set || is_set(stpxbackbonefastoutrlqrequestpdus.yfilter)) leaf_name_data.push_back(stpxbackbonefastoutrlqrequestpdus.get_name_leafdata());
    if (stpxbackbonefastoutrlqresponsepdus.is_set || is_set(stpxbackbonefastoutrlqresponsepdus.yfilter)) leaf_name_data.push_back(stpxbackbonefastoutrlqresponsepdus.get_name_leafdata());
    if (stpxbackbonefastoperenabled.is_set || is_set(stpxbackbonefastoperenabled.yfilter)) leaf_name_data.push_back(stpxbackbonefastoperenabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSTPEXTENSIONSMIB::StpxBackboneFastObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSTPEXTENSIONSMIB::StpxBackboneFastObjects::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSTPEXTENSIONSMIB::StpxBackboneFastObjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "stpxBackboneFastOperEnabled")
    {
        stpxbackbonefastoperenabled = value;
        stpxbackbonefastoperenabled.value_namespace = name_space;
        stpxbackbonefastoperenabled.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSTPEXTENSIONSMIB::StpxBackboneFastObjects::set_filter(const std::string & value_path, YFilter yfilter)
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
    if(value_path == "stpxBackboneFastOutRLQRequestPDUs")
    {
        stpxbackbonefastoutrlqrequestpdus.yfilter = yfilter;
    }
    if(value_path == "stpxBackboneFastOutRLQResponsePDUs")
    {
        stpxbackbonefastoutrlqresponsepdus.yfilter = yfilter;
    }
    if(value_path == "stpxBackboneFastOperEnabled")
    {
        stpxbackbonefastoperenabled.yfilter = yfilter;
    }
}

bool CISCOSTPEXTENSIONSMIB::StpxBackboneFastObjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxBackboneFastEnabled" || name == "stpxBackboneFastInInferiorBPDUs" || name == "stpxBackboneFastInRLQRequestPDUs" || name == "stpxBackboneFastInRLQResponsePDUs" || name == "stpxBackboneFastOutRLQRequestPDUs" || name == "stpxBackboneFastOutRLQResponsePDUs" || name == "stpxBackboneFastOperEnabled")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::StpxSpanningTreeObjects::StpxSpanningTreeObjects()
    :
    stpxspanningtreetype{YType::enumeration, "stpxSpanningTreeType"},
    stpxspanningtreepathcostmode{YType::enumeration, "stpxSpanningTreePathCostMode"},
    stpxextendedsysidadminenabled{YType::boolean, "stpxExtendedSysIDAdminEnabled"},
    stpxextendedsysidoperenabled{YType::boolean, "stpxExtendedSysIDOperEnabled"},
    stpxnotificationenable{YType::bits, "stpxNotificationEnable"},
    stpxspanningtreepathcostopermode{YType::enumeration, "stpxSpanningTreePathCostOperMode"}
{

    yang_name = "stpxSpanningTreeObjects"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSTPEXTENSIONSMIB::StpxSpanningTreeObjects::~StpxSpanningTreeObjects()
{
}

bool CISCOSTPEXTENSIONSMIB::StpxSpanningTreeObjects::has_data() const
{
    if (is_presence_container) return true;
    return stpxspanningtreetype.is_set
	|| stpxspanningtreepathcostmode.is_set
	|| stpxextendedsysidadminenabled.is_set
	|| stpxextendedsysidoperenabled.is_set
	|| stpxnotificationenable.is_set
	|| stpxspanningtreepathcostopermode.is_set;
}

bool CISCOSTPEXTENSIONSMIB::StpxSpanningTreeObjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxspanningtreetype.yfilter)
	|| ydk::is_set(stpxspanningtreepathcostmode.yfilter)
	|| ydk::is_set(stpxextendedsysidadminenabled.yfilter)
	|| ydk::is_set(stpxextendedsysidoperenabled.yfilter)
	|| ydk::is_set(stpxnotificationenable.yfilter)
	|| ydk::is_set(stpxspanningtreepathcostopermode.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::StpxSpanningTreeObjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::StpxSpanningTreeObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxSpanningTreeObjects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::StpxSpanningTreeObjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxspanningtreetype.is_set || is_set(stpxspanningtreetype.yfilter)) leaf_name_data.push_back(stpxspanningtreetype.get_name_leafdata());
    if (stpxspanningtreepathcostmode.is_set || is_set(stpxspanningtreepathcostmode.yfilter)) leaf_name_data.push_back(stpxspanningtreepathcostmode.get_name_leafdata());
    if (stpxextendedsysidadminenabled.is_set || is_set(stpxextendedsysidadminenabled.yfilter)) leaf_name_data.push_back(stpxextendedsysidadminenabled.get_name_leafdata());
    if (stpxextendedsysidoperenabled.is_set || is_set(stpxextendedsysidoperenabled.yfilter)) leaf_name_data.push_back(stpxextendedsysidoperenabled.get_name_leafdata());
    if (stpxnotificationenable.is_set || is_set(stpxnotificationenable.yfilter)) leaf_name_data.push_back(stpxnotificationenable.get_name_leafdata());
    if (stpxspanningtreepathcostopermode.is_set || is_set(stpxspanningtreepathcostopermode.yfilter)) leaf_name_data.push_back(stpxspanningtreepathcostopermode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSTPEXTENSIONSMIB::StpxSpanningTreeObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSTPEXTENSIONSMIB::StpxSpanningTreeObjects::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSTPEXTENSIONSMIB::StpxSpanningTreeObjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stpxSpanningTreeType")
    {
        stpxspanningtreetype = value;
        stpxspanningtreetype.value_namespace = name_space;
        stpxspanningtreetype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxSpanningTreePathCostMode")
    {
        stpxspanningtreepathcostmode = value;
        stpxspanningtreepathcostmode.value_namespace = name_space;
        stpxspanningtreepathcostmode.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "stpxSpanningTreePathCostOperMode")
    {
        stpxspanningtreepathcostopermode = value;
        stpxspanningtreepathcostopermode.value_namespace = name_space;
        stpxspanningtreepathcostopermode.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSTPEXTENSIONSMIB::StpxSpanningTreeObjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stpxSpanningTreeType")
    {
        stpxspanningtreetype.yfilter = yfilter;
    }
    if(value_path == "stpxSpanningTreePathCostMode")
    {
        stpxspanningtreepathcostmode.yfilter = yfilter;
    }
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
    if(value_path == "stpxSpanningTreePathCostOperMode")
    {
        stpxspanningtreepathcostopermode.yfilter = yfilter;
    }
}

bool CISCOSTPEXTENSIONSMIB::StpxSpanningTreeObjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxSpanningTreeType" || name == "stpxSpanningTreePathCostMode" || name == "stpxExtendedSysIDAdminEnabled" || name == "stpxExtendedSysIDOperEnabled" || name == "stpxNotificationEnable" || name == "stpxSpanningTreePathCostOperMode")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::StpxMISTPObjects::StpxMISTPObjects()
    :
    stpxmistpinstancenumber{YType::int32, "stpxMISTPInstanceNumber"}
{

    yang_name = "stpxMISTPObjects"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSTPEXTENSIONSMIB::StpxMISTPObjects::~StpxMISTPObjects()
{
}

bool CISCOSTPEXTENSIONSMIB::StpxMISTPObjects::has_data() const
{
    if (is_presence_container) return true;
    return stpxmistpinstancenumber.is_set;
}

bool CISCOSTPEXTENSIONSMIB::StpxMISTPObjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxmistpinstancenumber.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::StpxMISTPObjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::StpxMISTPObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxMISTPObjects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::StpxMISTPObjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxmistpinstancenumber.is_set || is_set(stpxmistpinstancenumber.yfilter)) leaf_name_data.push_back(stpxmistpinstancenumber.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSTPEXTENSIONSMIB::StpxMISTPObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSTPEXTENSIONSMIB::StpxMISTPObjects::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSTPEXTENSIONSMIB::StpxMISTPObjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stpxMISTPInstanceNumber")
    {
        stpxmistpinstancenumber = value;
        stpxmistpinstancenumber.value_namespace = name_space;
        stpxmistpinstancenumber.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSTPEXTENSIONSMIB::StpxMISTPObjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stpxMISTPInstanceNumber")
    {
        stpxmistpinstancenumber.yfilter = yfilter;
    }
}

bool CISCOSTPEXTENSIONSMIB::StpxMISTPObjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxMISTPInstanceNumber")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::StpxLoopGuardObjects::StpxLoopGuardObjects()
    :
    stpxloopguardglobaldefaultmode{YType::enumeration, "stpxLoopGuardGlobalDefaultMode"}
{

    yang_name = "stpxLoopGuardObjects"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSTPEXTENSIONSMIB::StpxLoopGuardObjects::~StpxLoopGuardObjects()
{
}

bool CISCOSTPEXTENSIONSMIB::StpxLoopGuardObjects::has_data() const
{
    if (is_presence_container) return true;
    return stpxloopguardglobaldefaultmode.is_set;
}

bool CISCOSTPEXTENSIONSMIB::StpxLoopGuardObjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxloopguardglobaldefaultmode.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::StpxLoopGuardObjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::StpxLoopGuardObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxLoopGuardObjects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::StpxLoopGuardObjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxloopguardglobaldefaultmode.is_set || is_set(stpxloopguardglobaldefaultmode.yfilter)) leaf_name_data.push_back(stpxloopguardglobaldefaultmode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSTPEXTENSIONSMIB::StpxLoopGuardObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSTPEXTENSIONSMIB::StpxLoopGuardObjects::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSTPEXTENSIONSMIB::StpxLoopGuardObjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stpxLoopGuardGlobalDefaultMode")
    {
        stpxloopguardglobaldefaultmode = value;
        stpxloopguardglobaldefaultmode.value_namespace = name_space;
        stpxloopguardglobaldefaultmode.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSTPEXTENSIONSMIB::StpxLoopGuardObjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stpxLoopGuardGlobalDefaultMode")
    {
        stpxloopguardglobaldefaultmode.yfilter = yfilter;
    }
}

bool CISCOSTPEXTENSIONSMIB::StpxLoopGuardObjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxLoopGuardGlobalDefaultMode")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::StpxFastStartObjects::StpxFastStartObjects()
    :
    stpxfaststartbpduguardenable{YType::boolean, "stpxFastStartBpduGuardEnable"},
    stpxfaststartbpdufilterenable{YType::boolean, "stpxFastStartBpduFilterEnable"},
    stpxfaststartglobaldefaultmode{YType::enumeration, "stpxFastStartGlobalDefaultMode"}
{

    yang_name = "stpxFastStartObjects"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSTPEXTENSIONSMIB::StpxFastStartObjects::~StpxFastStartObjects()
{
}

bool CISCOSTPEXTENSIONSMIB::StpxFastStartObjects::has_data() const
{
    if (is_presence_container) return true;
    return stpxfaststartbpduguardenable.is_set
	|| stpxfaststartbpdufilterenable.is_set
	|| stpxfaststartglobaldefaultmode.is_set;
}

bool CISCOSTPEXTENSIONSMIB::StpxFastStartObjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxfaststartbpduguardenable.yfilter)
	|| ydk::is_set(stpxfaststartbpdufilterenable.yfilter)
	|| ydk::is_set(stpxfaststartglobaldefaultmode.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::StpxFastStartObjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::StpxFastStartObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxFastStartObjects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::StpxFastStartObjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxfaststartbpduguardenable.is_set || is_set(stpxfaststartbpduguardenable.yfilter)) leaf_name_data.push_back(stpxfaststartbpduguardenable.get_name_leafdata());
    if (stpxfaststartbpdufilterenable.is_set || is_set(stpxfaststartbpdufilterenable.yfilter)) leaf_name_data.push_back(stpxfaststartbpdufilterenable.get_name_leafdata());
    if (stpxfaststartglobaldefaultmode.is_set || is_set(stpxfaststartglobaldefaultmode.yfilter)) leaf_name_data.push_back(stpxfaststartglobaldefaultmode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSTPEXTENSIONSMIB::StpxFastStartObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSTPEXTENSIONSMIB::StpxFastStartObjects::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSTPEXTENSIONSMIB::StpxFastStartObjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stpxFastStartBpduGuardEnable")
    {
        stpxfaststartbpduguardenable = value;
        stpxfaststartbpduguardenable.value_namespace = name_space;
        stpxfaststartbpduguardenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxFastStartBpduFilterEnable")
    {
        stpxfaststartbpdufilterenable = value;
        stpxfaststartbpdufilterenable.value_namespace = name_space;
        stpxfaststartbpdufilterenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxFastStartGlobalDefaultMode")
    {
        stpxfaststartglobaldefaultmode = value;
        stpxfaststartglobaldefaultmode.value_namespace = name_space;
        stpxfaststartglobaldefaultmode.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSTPEXTENSIONSMIB::StpxFastStartObjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stpxFastStartBpduGuardEnable")
    {
        stpxfaststartbpduguardenable.yfilter = yfilter;
    }
    if(value_path == "stpxFastStartBpduFilterEnable")
    {
        stpxfaststartbpdufilterenable.yfilter = yfilter;
    }
    if(value_path == "stpxFastStartGlobalDefaultMode")
    {
        stpxfaststartglobaldefaultmode.yfilter = yfilter;
    }
}

bool CISCOSTPEXTENSIONSMIB::StpxFastStartObjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxFastStartBpduGuardEnable" || name == "stpxFastStartBpduFilterEnable" || name == "stpxFastStartGlobalDefaultMode")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::StpxBpduSkewingObjects::StpxBpduSkewingObjects()
    :
    stpxbpduskewingdetectionenable{YType::boolean, "stpxBpduSkewingDetectionEnable"}
{

    yang_name = "stpxBpduSkewingObjects"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSTPEXTENSIONSMIB::StpxBpduSkewingObjects::~StpxBpduSkewingObjects()
{
}

bool CISCOSTPEXTENSIONSMIB::StpxBpduSkewingObjects::has_data() const
{
    if (is_presence_container) return true;
    return stpxbpduskewingdetectionenable.is_set;
}

bool CISCOSTPEXTENSIONSMIB::StpxBpduSkewingObjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxbpduskewingdetectionenable.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::StpxBpduSkewingObjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::StpxBpduSkewingObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxBpduSkewingObjects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::StpxBpduSkewingObjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxbpduskewingdetectionenable.is_set || is_set(stpxbpduskewingdetectionenable.yfilter)) leaf_name_data.push_back(stpxbpduskewingdetectionenable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSTPEXTENSIONSMIB::StpxBpduSkewingObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSTPEXTENSIONSMIB::StpxBpduSkewingObjects::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSTPEXTENSIONSMIB::StpxBpduSkewingObjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stpxBpduSkewingDetectionEnable")
    {
        stpxbpduskewingdetectionenable = value;
        stpxbpduskewingdetectionenable.value_namespace = name_space;
        stpxbpduskewingdetectionenable.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSTPEXTENSIONSMIB::StpxBpduSkewingObjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stpxBpduSkewingDetectionEnable")
    {
        stpxbpduskewingdetectionenable.yfilter = yfilter;
    }
}

bool CISCOSTPEXTENSIONSMIB::StpxBpduSkewingObjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxBpduSkewingDetectionEnable")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::StpxMSTObjects::StpxMSTObjects()
    :
    stpxmstmaxinstancenumber{YType::int32, "stpxMSTMaxInstanceNumber"},
    stpxmstregionname{YType::str, "stpxMSTRegionName"},
    stpxmstregionrevision{YType::int32, "stpxMSTRegionRevision"},
    stpxmstregioneditbufferstatus{YType::enumeration, "stpxMSTRegionEditBufferStatus"},
    stpxmstregioneditbufferoperation{YType::enumeration, "stpxMSTRegionEditBufferOperation"},
    stpxmstregioneditname{YType::str, "stpxMSTRegionEditName"},
    stpxmstregioneditrevision{YType::int32, "stpxMSTRegionEditRevision"},
    stpxmstmaxhopcount{YType::int32, "stpxMSTMaxHopCount"}
{

    yang_name = "stpxMSTObjects"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSTPEXTENSIONSMIB::StpxMSTObjects::~StpxMSTObjects()
{
}

bool CISCOSTPEXTENSIONSMIB::StpxMSTObjects::has_data() const
{
    if (is_presence_container) return true;
    return stpxmstmaxinstancenumber.is_set
	|| stpxmstregionname.is_set
	|| stpxmstregionrevision.is_set
	|| stpxmstregioneditbufferstatus.is_set
	|| stpxmstregioneditbufferoperation.is_set
	|| stpxmstregioneditname.is_set
	|| stpxmstregioneditrevision.is_set
	|| stpxmstmaxhopcount.is_set;
}

bool CISCOSTPEXTENSIONSMIB::StpxMSTObjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxmstmaxinstancenumber.yfilter)
	|| ydk::is_set(stpxmstregionname.yfilter)
	|| ydk::is_set(stpxmstregionrevision.yfilter)
	|| ydk::is_set(stpxmstregioneditbufferstatus.yfilter)
	|| ydk::is_set(stpxmstregioneditbufferoperation.yfilter)
	|| ydk::is_set(stpxmstregioneditname.yfilter)
	|| ydk::is_set(stpxmstregioneditrevision.yfilter)
	|| ydk::is_set(stpxmstmaxhopcount.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::StpxMSTObjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::StpxMSTObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxMSTObjects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::StpxMSTObjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxmstmaxinstancenumber.is_set || is_set(stpxmstmaxinstancenumber.yfilter)) leaf_name_data.push_back(stpxmstmaxinstancenumber.get_name_leafdata());
    if (stpxmstregionname.is_set || is_set(stpxmstregionname.yfilter)) leaf_name_data.push_back(stpxmstregionname.get_name_leafdata());
    if (stpxmstregionrevision.is_set || is_set(stpxmstregionrevision.yfilter)) leaf_name_data.push_back(stpxmstregionrevision.get_name_leafdata());
    if (stpxmstregioneditbufferstatus.is_set || is_set(stpxmstregioneditbufferstatus.yfilter)) leaf_name_data.push_back(stpxmstregioneditbufferstatus.get_name_leafdata());
    if (stpxmstregioneditbufferoperation.is_set || is_set(stpxmstregioneditbufferoperation.yfilter)) leaf_name_data.push_back(stpxmstregioneditbufferoperation.get_name_leafdata());
    if (stpxmstregioneditname.is_set || is_set(stpxmstregioneditname.yfilter)) leaf_name_data.push_back(stpxmstregioneditname.get_name_leafdata());
    if (stpxmstregioneditrevision.is_set || is_set(stpxmstregioneditrevision.yfilter)) leaf_name_data.push_back(stpxmstregioneditrevision.get_name_leafdata());
    if (stpxmstmaxhopcount.is_set || is_set(stpxmstmaxhopcount.yfilter)) leaf_name_data.push_back(stpxmstmaxhopcount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSTPEXTENSIONSMIB::StpxMSTObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSTPEXTENSIONSMIB::StpxMSTObjects::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSTPEXTENSIONSMIB::StpxMSTObjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stpxMSTMaxInstanceNumber")
    {
        stpxmstmaxinstancenumber = value;
        stpxmstmaxinstancenumber.value_namespace = name_space;
        stpxmstmaxinstancenumber.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "stpxMSTRegionEditBufferStatus")
    {
        stpxmstregioneditbufferstatus = value;
        stpxmstregioneditbufferstatus.value_namespace = name_space;
        stpxmstregioneditbufferstatus.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxMSTRegionEditBufferOperation")
    {
        stpxmstregioneditbufferoperation = value;
        stpxmstregioneditbufferoperation.value_namespace = name_space;
        stpxmstregioneditbufferoperation.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "stpxMSTMaxHopCount")
    {
        stpxmstmaxhopcount = value;
        stpxmstmaxhopcount.value_namespace = name_space;
        stpxmstmaxhopcount.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSTPEXTENSIONSMIB::StpxMSTObjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stpxMSTMaxInstanceNumber")
    {
        stpxmstmaxinstancenumber.yfilter = yfilter;
    }
    if(value_path == "stpxMSTRegionName")
    {
        stpxmstregionname.yfilter = yfilter;
    }
    if(value_path == "stpxMSTRegionRevision")
    {
        stpxmstregionrevision.yfilter = yfilter;
    }
    if(value_path == "stpxMSTRegionEditBufferStatus")
    {
        stpxmstregioneditbufferstatus.yfilter = yfilter;
    }
    if(value_path == "stpxMSTRegionEditBufferOperation")
    {
        stpxmstregioneditbufferoperation.yfilter = yfilter;
    }
    if(value_path == "stpxMSTRegionEditName")
    {
        stpxmstregioneditname.yfilter = yfilter;
    }
    if(value_path == "stpxMSTRegionEditRevision")
    {
        stpxmstregioneditrevision.yfilter = yfilter;
    }
    if(value_path == "stpxMSTMaxHopCount")
    {
        stpxmstmaxhopcount.yfilter = yfilter;
    }
}

bool CISCOSTPEXTENSIONSMIB::StpxMSTObjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxMSTMaxInstanceNumber" || name == "stpxMSTRegionName" || name == "stpxMSTRegionRevision" || name == "stpxMSTRegionEditBufferStatus" || name == "stpxMSTRegionEditBufferOperation" || name == "stpxMSTRegionEditName" || name == "stpxMSTRegionEditRevision" || name == "stpxMSTMaxHopCount")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::StpxRSTPObjects::StpxRSTPObjects()
    :
    stpxrstptransmitholdcount{YType::uint32, "stpxRSTPTransmitHoldCount"}
{

    yang_name = "stpxRSTPObjects"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSTPEXTENSIONSMIB::StpxRSTPObjects::~StpxRSTPObjects()
{
}

bool CISCOSTPEXTENSIONSMIB::StpxRSTPObjects::has_data() const
{
    if (is_presence_container) return true;
    return stpxrstptransmitholdcount.is_set;
}

bool CISCOSTPEXTENSIONSMIB::StpxRSTPObjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxrstptransmitholdcount.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::StpxRSTPObjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::StpxRSTPObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxRSTPObjects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::StpxRSTPObjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxrstptransmitholdcount.is_set || is_set(stpxrstptransmitholdcount.yfilter)) leaf_name_data.push_back(stpxrstptransmitholdcount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSTPEXTENSIONSMIB::StpxRSTPObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSTPEXTENSIONSMIB::StpxRSTPObjects::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSTPEXTENSIONSMIB::StpxRSTPObjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stpxRSTPTransmitHoldCount")
    {
        stpxrstptransmitholdcount = value;
        stpxrstptransmitholdcount.value_namespace = name_space;
        stpxrstptransmitholdcount.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSTPEXTENSIONSMIB::StpxRSTPObjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stpxRSTPTransmitHoldCount")
    {
        stpxrstptransmitholdcount.yfilter = yfilter;
    }
}

bool CISCOSTPEXTENSIONSMIB::StpxRSTPObjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxRSTPTransmitHoldCount")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::StpxSMSTObjects::StpxSMSTObjects()
    :
    stpxsmstmaxinstances{YType::uint32, "stpxSMSTMaxInstances"},
    stpxsmstmaxinstanceid{YType::uint32, "stpxSMSTMaxInstanceID"},
    stpxsmstregionrevision{YType::uint32, "stpxSMSTRegionRevision"},
    stpxsmstregioneditrevision{YType::uint32, "stpxSMSTRegionEditRevision"},
    stpxsmstmaxhopcount{YType::uint32, "stpxSMSTMaxHopCount"},
    stpxsmstconfigdigest{YType::str, "stpxSMSTConfigDigest"},
    stpxsmstconfigprestandarddigest{YType::str, "stpxSMSTConfigPreStandardDigest"}
{

    yang_name = "stpxSMSTObjects"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSTPEXTENSIONSMIB::StpxSMSTObjects::~StpxSMSTObjects()
{
}

bool CISCOSTPEXTENSIONSMIB::StpxSMSTObjects::has_data() const
{
    if (is_presence_container) return true;
    return stpxsmstmaxinstances.is_set
	|| stpxsmstmaxinstanceid.is_set
	|| stpxsmstregionrevision.is_set
	|| stpxsmstregioneditrevision.is_set
	|| stpxsmstmaxhopcount.is_set
	|| stpxsmstconfigdigest.is_set
	|| stpxsmstconfigprestandarddigest.is_set;
}

bool CISCOSTPEXTENSIONSMIB::StpxSMSTObjects::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxsmstmaxinstances.yfilter)
	|| ydk::is_set(stpxsmstmaxinstanceid.yfilter)
	|| ydk::is_set(stpxsmstregionrevision.yfilter)
	|| ydk::is_set(stpxsmstregioneditrevision.yfilter)
	|| ydk::is_set(stpxsmstmaxhopcount.yfilter)
	|| ydk::is_set(stpxsmstconfigdigest.yfilter)
	|| ydk::is_set(stpxsmstconfigprestandarddigest.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::StpxSMSTObjects::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::StpxSMSTObjects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxSMSTObjects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::StpxSMSTObjects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxsmstmaxinstances.is_set || is_set(stpxsmstmaxinstances.yfilter)) leaf_name_data.push_back(stpxsmstmaxinstances.get_name_leafdata());
    if (stpxsmstmaxinstanceid.is_set || is_set(stpxsmstmaxinstanceid.yfilter)) leaf_name_data.push_back(stpxsmstmaxinstanceid.get_name_leafdata());
    if (stpxsmstregionrevision.is_set || is_set(stpxsmstregionrevision.yfilter)) leaf_name_data.push_back(stpxsmstregionrevision.get_name_leafdata());
    if (stpxsmstregioneditrevision.is_set || is_set(stpxsmstregioneditrevision.yfilter)) leaf_name_data.push_back(stpxsmstregioneditrevision.get_name_leafdata());
    if (stpxsmstmaxhopcount.is_set || is_set(stpxsmstmaxhopcount.yfilter)) leaf_name_data.push_back(stpxsmstmaxhopcount.get_name_leafdata());
    if (stpxsmstconfigdigest.is_set || is_set(stpxsmstconfigdigest.yfilter)) leaf_name_data.push_back(stpxsmstconfigdigest.get_name_leafdata());
    if (stpxsmstconfigprestandarddigest.is_set || is_set(stpxsmstconfigprestandarddigest.yfilter)) leaf_name_data.push_back(stpxsmstconfigprestandarddigest.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSTPEXTENSIONSMIB::StpxSMSTObjects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSTPEXTENSIONSMIB::StpxSMSTObjects::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSTPEXTENSIONSMIB::StpxSMSTObjects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stpxSMSTMaxInstances")
    {
        stpxsmstmaxinstances = value;
        stpxsmstmaxinstances.value_namespace = name_space;
        stpxsmstmaxinstances.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxSMSTMaxInstanceID")
    {
        stpxsmstmaxinstanceid = value;
        stpxsmstmaxinstanceid.value_namespace = name_space;
        stpxsmstmaxinstanceid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxSMSTRegionRevision")
    {
        stpxsmstregionrevision = value;
        stpxsmstregionrevision.value_namespace = name_space;
        stpxsmstregionrevision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxSMSTRegionEditRevision")
    {
        stpxsmstregioneditrevision = value;
        stpxsmstregioneditrevision.value_namespace = name_space;
        stpxsmstregioneditrevision.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxSMSTMaxHopCount")
    {
        stpxsmstmaxhopcount = value;
        stpxsmstmaxhopcount.value_namespace = name_space;
        stpxsmstmaxhopcount.value_namespace_prefix = name_space_prefix;
    }
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
}

void CISCOSTPEXTENSIONSMIB::StpxSMSTObjects::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stpxSMSTMaxInstances")
    {
        stpxsmstmaxinstances.yfilter = yfilter;
    }
    if(value_path == "stpxSMSTMaxInstanceID")
    {
        stpxsmstmaxinstanceid.yfilter = yfilter;
    }
    if(value_path == "stpxSMSTRegionRevision")
    {
        stpxsmstregionrevision.yfilter = yfilter;
    }
    if(value_path == "stpxSMSTRegionEditRevision")
    {
        stpxsmstregioneditrevision.yfilter = yfilter;
    }
    if(value_path == "stpxSMSTMaxHopCount")
    {
        stpxsmstmaxhopcount.yfilter = yfilter;
    }
    if(value_path == "stpxSMSTConfigDigest")
    {
        stpxsmstconfigdigest.yfilter = yfilter;
    }
    if(value_path == "stpxSMSTConfigPreStandardDigest")
    {
        stpxsmstconfigprestandarddigest.yfilter = yfilter;
    }
}

bool CISCOSTPEXTENSIONSMIB::StpxSMSTObjects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxSMSTMaxInstances" || name == "stpxSMSTMaxInstanceID" || name == "stpxSMSTRegionRevision" || name == "stpxSMSTRegionEditRevision" || name == "stpxSMSTMaxHopCount" || name == "stpxSMSTConfigDigest" || name == "stpxSMSTConfigPreStandardDigest")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::StpxPVSTVlanTable::StpxPVSTVlanTable()
    :
    stpxpvstvlanentry(this, {"stpxpvstvlanindex"})
{

    yang_name = "stpxPVSTVlanTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSTPEXTENSIONSMIB::StpxPVSTVlanTable::~StpxPVSTVlanTable()
{
}

bool CISCOSTPEXTENSIONSMIB::StpxPVSTVlanTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stpxpvstvlanentry.len(); index++)
    {
        if(stpxpvstvlanentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSTPEXTENSIONSMIB::StpxPVSTVlanTable::has_operation() const
{
    for (std::size_t index=0; index<stpxpvstvlanentry.len(); index++)
    {
        if(stpxpvstvlanentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::StpxPVSTVlanTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::StpxPVSTVlanTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxPVSTVlanTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::StpxPVSTVlanTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSTPEXTENSIONSMIB::StpxPVSTVlanTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stpxPVSTVlanEntry")
    {
        auto ent_ = std::make_shared<CISCOSTPEXTENSIONSMIB::StpxPVSTVlanTable::StpxPVSTVlanEntry>();
        ent_->parent = this;
        stpxpvstvlanentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSTPEXTENSIONSMIB::StpxPVSTVlanTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : stpxpvstvlanentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOSTPEXTENSIONSMIB::StpxPVSTVlanTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSTPEXTENSIONSMIB::StpxPVSTVlanTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSTPEXTENSIONSMIB::StpxPVSTVlanTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxPVSTVlanEntry")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::StpxPVSTVlanTable::StpxPVSTVlanEntry::StpxPVSTVlanEntry()
    :
    stpxpvstvlanindex{YType::int32, "stpxPVSTVlanIndex"},
    stpxpvstvlanenable{YType::enumeration, "stpxPVSTVlanEnable"}
{

    yang_name = "stpxPVSTVlanEntry"; yang_parent_name = "stpxPVSTVlanTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSTPEXTENSIONSMIB::StpxPVSTVlanTable::StpxPVSTVlanEntry::~StpxPVSTVlanEntry()
{
}

bool CISCOSTPEXTENSIONSMIB::StpxPVSTVlanTable::StpxPVSTVlanEntry::has_data() const
{
    if (is_presence_container) return true;
    return stpxpvstvlanindex.is_set
	|| stpxpvstvlanenable.is_set;
}

bool CISCOSTPEXTENSIONSMIB::StpxPVSTVlanTable::StpxPVSTVlanEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxpvstvlanindex.yfilter)
	|| ydk::is_set(stpxpvstvlanenable.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::StpxPVSTVlanTable::StpxPVSTVlanEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxPVSTVlanTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::StpxPVSTVlanTable::StpxPVSTVlanEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxPVSTVlanEntry";
    ADD_KEY_TOKEN(stpxpvstvlanindex, "stpxPVSTVlanIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::StpxPVSTVlanTable::StpxPVSTVlanEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxpvstvlanindex.is_set || is_set(stpxpvstvlanindex.yfilter)) leaf_name_data.push_back(stpxpvstvlanindex.get_name_leafdata());
    if (stpxpvstvlanenable.is_set || is_set(stpxpvstvlanenable.yfilter)) leaf_name_data.push_back(stpxpvstvlanenable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSTPEXTENSIONSMIB::StpxPVSTVlanTable::StpxPVSTVlanEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSTPEXTENSIONSMIB::StpxPVSTVlanTable::StpxPVSTVlanEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSTPEXTENSIONSMIB::StpxPVSTVlanTable::StpxPVSTVlanEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOSTPEXTENSIONSMIB::StpxPVSTVlanTable::StpxPVSTVlanEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOSTPEXTENSIONSMIB::StpxPVSTVlanTable::StpxPVSTVlanEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxPVSTVlanIndex" || name == "stpxPVSTVlanEnable")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::StpxInconsistencyTable::StpxInconsistencyTable()
    :
    stpxinconsistencyentry(this, {"stpxvlanindex", "stpxportindex"})
{

    yang_name = "stpxInconsistencyTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSTPEXTENSIONSMIB::StpxInconsistencyTable::~StpxInconsistencyTable()
{
}

bool CISCOSTPEXTENSIONSMIB::StpxInconsistencyTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stpxinconsistencyentry.len(); index++)
    {
        if(stpxinconsistencyentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSTPEXTENSIONSMIB::StpxInconsistencyTable::has_operation() const
{
    for (std::size_t index=0; index<stpxinconsistencyentry.len(); index++)
    {
        if(stpxinconsistencyentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::StpxInconsistencyTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::StpxInconsistencyTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxInconsistencyTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::StpxInconsistencyTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSTPEXTENSIONSMIB::StpxInconsistencyTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stpxInconsistencyEntry")
    {
        auto ent_ = std::make_shared<CISCOSTPEXTENSIONSMIB::StpxInconsistencyTable::StpxInconsistencyEntry>();
        ent_->parent = this;
        stpxinconsistencyentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSTPEXTENSIONSMIB::StpxInconsistencyTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : stpxinconsistencyentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOSTPEXTENSIONSMIB::StpxInconsistencyTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSTPEXTENSIONSMIB::StpxInconsistencyTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSTPEXTENSIONSMIB::StpxInconsistencyTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxInconsistencyEntry")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::StpxInconsistencyTable::StpxInconsistencyEntry::StpxInconsistencyEntry()
    :
    stpxvlanindex{YType::int32, "stpxVlanIndex"},
    stpxportindex{YType::int32, "stpxPortIndex"},
    stpxinconsistentstate{YType::bits, "stpxInconsistentState"}
{

    yang_name = "stpxInconsistencyEntry"; yang_parent_name = "stpxInconsistencyTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSTPEXTENSIONSMIB::StpxInconsistencyTable::StpxInconsistencyEntry::~StpxInconsistencyEntry()
{
}

bool CISCOSTPEXTENSIONSMIB::StpxInconsistencyTable::StpxInconsistencyEntry::has_data() const
{
    if (is_presence_container) return true;
    return stpxvlanindex.is_set
	|| stpxportindex.is_set
	|| stpxinconsistentstate.is_set;
}

bool CISCOSTPEXTENSIONSMIB::StpxInconsistencyTable::StpxInconsistencyEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxvlanindex.yfilter)
	|| ydk::is_set(stpxportindex.yfilter)
	|| ydk::is_set(stpxinconsistentstate.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::StpxInconsistencyTable::StpxInconsistencyEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxInconsistencyTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::StpxInconsistencyTable::StpxInconsistencyEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxInconsistencyEntry";
    ADD_KEY_TOKEN(stpxvlanindex, "stpxVlanIndex");
    ADD_KEY_TOKEN(stpxportindex, "stpxPortIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::StpxInconsistencyTable::StpxInconsistencyEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxvlanindex.is_set || is_set(stpxvlanindex.yfilter)) leaf_name_data.push_back(stpxvlanindex.get_name_leafdata());
    if (stpxportindex.is_set || is_set(stpxportindex.yfilter)) leaf_name_data.push_back(stpxportindex.get_name_leafdata());
    if (stpxinconsistentstate.is_set || is_set(stpxinconsistentstate.yfilter)) leaf_name_data.push_back(stpxinconsistentstate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSTPEXTENSIONSMIB::StpxInconsistencyTable::StpxInconsistencyEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSTPEXTENSIONSMIB::StpxInconsistencyTable::StpxInconsistencyEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSTPEXTENSIONSMIB::StpxInconsistencyTable::StpxInconsistencyEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOSTPEXTENSIONSMIB::StpxInconsistencyTable::StpxInconsistencyEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOSTPEXTENSIONSMIB::StpxInconsistencyTable::StpxInconsistencyEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxVlanIndex" || name == "stpxPortIndex" || name == "stpxInconsistentState")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::StpxRootGuardConfigTable::StpxRootGuardConfigTable()
    :
    stpxrootguardconfigentry(this, {"stpxrootguardconfigportindex"})
{

    yang_name = "stpxRootGuardConfigTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSTPEXTENSIONSMIB::StpxRootGuardConfigTable::~StpxRootGuardConfigTable()
{
}

bool CISCOSTPEXTENSIONSMIB::StpxRootGuardConfigTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stpxrootguardconfigentry.len(); index++)
    {
        if(stpxrootguardconfigentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSTPEXTENSIONSMIB::StpxRootGuardConfigTable::has_operation() const
{
    for (std::size_t index=0; index<stpxrootguardconfigentry.len(); index++)
    {
        if(stpxrootguardconfigentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::StpxRootGuardConfigTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::StpxRootGuardConfigTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxRootGuardConfigTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::StpxRootGuardConfigTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSTPEXTENSIONSMIB::StpxRootGuardConfigTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stpxRootGuardConfigEntry")
    {
        auto ent_ = std::make_shared<CISCOSTPEXTENSIONSMIB::StpxRootGuardConfigTable::StpxRootGuardConfigEntry>();
        ent_->parent = this;
        stpxrootguardconfigentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSTPEXTENSIONSMIB::StpxRootGuardConfigTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : stpxrootguardconfigentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOSTPEXTENSIONSMIB::StpxRootGuardConfigTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSTPEXTENSIONSMIB::StpxRootGuardConfigTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSTPEXTENSIONSMIB::StpxRootGuardConfigTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxRootGuardConfigEntry")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::StpxRootGuardConfigTable::StpxRootGuardConfigEntry::StpxRootGuardConfigEntry()
    :
    stpxrootguardconfigportindex{YType::int32, "stpxRootGuardConfigPortIndex"},
    stpxrootguardconfigenabled{YType::boolean, "stpxRootGuardConfigEnabled"}
{

    yang_name = "stpxRootGuardConfigEntry"; yang_parent_name = "stpxRootGuardConfigTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSTPEXTENSIONSMIB::StpxRootGuardConfigTable::StpxRootGuardConfigEntry::~StpxRootGuardConfigEntry()
{
}

bool CISCOSTPEXTENSIONSMIB::StpxRootGuardConfigTable::StpxRootGuardConfigEntry::has_data() const
{
    if (is_presence_container) return true;
    return stpxrootguardconfigportindex.is_set
	|| stpxrootguardconfigenabled.is_set;
}

bool CISCOSTPEXTENSIONSMIB::StpxRootGuardConfigTable::StpxRootGuardConfigEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxrootguardconfigportindex.yfilter)
	|| ydk::is_set(stpxrootguardconfigenabled.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::StpxRootGuardConfigTable::StpxRootGuardConfigEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxRootGuardConfigTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::StpxRootGuardConfigTable::StpxRootGuardConfigEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxRootGuardConfigEntry";
    ADD_KEY_TOKEN(stpxrootguardconfigportindex, "stpxRootGuardConfigPortIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::StpxRootGuardConfigTable::StpxRootGuardConfigEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxrootguardconfigportindex.is_set || is_set(stpxrootguardconfigportindex.yfilter)) leaf_name_data.push_back(stpxrootguardconfigportindex.get_name_leafdata());
    if (stpxrootguardconfigenabled.is_set || is_set(stpxrootguardconfigenabled.yfilter)) leaf_name_data.push_back(stpxrootguardconfigenabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSTPEXTENSIONSMIB::StpxRootGuardConfigTable::StpxRootGuardConfigEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSTPEXTENSIONSMIB::StpxRootGuardConfigTable::StpxRootGuardConfigEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSTPEXTENSIONSMIB::StpxRootGuardConfigTable::StpxRootGuardConfigEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOSTPEXTENSIONSMIB::StpxRootGuardConfigTable::StpxRootGuardConfigEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOSTPEXTENSIONSMIB::StpxRootGuardConfigTable::StpxRootGuardConfigEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxRootGuardConfigPortIndex" || name == "stpxRootGuardConfigEnabled")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::StpxRootInconsistencyTable::StpxRootInconsistencyTable()
    :
    stpxrootinconsistencyentry(this, {"stpxrootinconsistencyindex", "stpxrootinconsistencyportindex"})
{

    yang_name = "stpxRootInconsistencyTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSTPEXTENSIONSMIB::StpxRootInconsistencyTable::~StpxRootInconsistencyTable()
{
}

bool CISCOSTPEXTENSIONSMIB::StpxRootInconsistencyTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stpxrootinconsistencyentry.len(); index++)
    {
        if(stpxrootinconsistencyentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSTPEXTENSIONSMIB::StpxRootInconsistencyTable::has_operation() const
{
    for (std::size_t index=0; index<stpxrootinconsistencyentry.len(); index++)
    {
        if(stpxrootinconsistencyentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::StpxRootInconsistencyTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::StpxRootInconsistencyTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxRootInconsistencyTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::StpxRootInconsistencyTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSTPEXTENSIONSMIB::StpxRootInconsistencyTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stpxRootInconsistencyEntry")
    {
        auto ent_ = std::make_shared<CISCOSTPEXTENSIONSMIB::StpxRootInconsistencyTable::StpxRootInconsistencyEntry>();
        ent_->parent = this;
        stpxrootinconsistencyentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSTPEXTENSIONSMIB::StpxRootInconsistencyTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : stpxrootinconsistencyentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOSTPEXTENSIONSMIB::StpxRootInconsistencyTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSTPEXTENSIONSMIB::StpxRootInconsistencyTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSTPEXTENSIONSMIB::StpxRootInconsistencyTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxRootInconsistencyEntry")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::StpxRootInconsistencyTable::StpxRootInconsistencyEntry::StpxRootInconsistencyEntry()
    :
    stpxrootinconsistencyindex{YType::int32, "stpxRootInconsistencyIndex"},
    stpxrootinconsistencyportindex{YType::int32, "stpxRootInconsistencyPortIndex"},
    stpxrootinconsistencystate{YType::boolean, "stpxRootInconsistencyState"}
{

    yang_name = "stpxRootInconsistencyEntry"; yang_parent_name = "stpxRootInconsistencyTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSTPEXTENSIONSMIB::StpxRootInconsistencyTable::StpxRootInconsistencyEntry::~StpxRootInconsistencyEntry()
{
}

bool CISCOSTPEXTENSIONSMIB::StpxRootInconsistencyTable::StpxRootInconsistencyEntry::has_data() const
{
    if (is_presence_container) return true;
    return stpxrootinconsistencyindex.is_set
	|| stpxrootinconsistencyportindex.is_set
	|| stpxrootinconsistencystate.is_set;
}

bool CISCOSTPEXTENSIONSMIB::StpxRootInconsistencyTable::StpxRootInconsistencyEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxrootinconsistencyindex.yfilter)
	|| ydk::is_set(stpxrootinconsistencyportindex.yfilter)
	|| ydk::is_set(stpxrootinconsistencystate.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::StpxRootInconsistencyTable::StpxRootInconsistencyEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxRootInconsistencyTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::StpxRootInconsistencyTable::StpxRootInconsistencyEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxRootInconsistencyEntry";
    ADD_KEY_TOKEN(stpxrootinconsistencyindex, "stpxRootInconsistencyIndex");
    ADD_KEY_TOKEN(stpxrootinconsistencyportindex, "stpxRootInconsistencyPortIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::StpxRootInconsistencyTable::StpxRootInconsistencyEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxrootinconsistencyindex.is_set || is_set(stpxrootinconsistencyindex.yfilter)) leaf_name_data.push_back(stpxrootinconsistencyindex.get_name_leafdata());
    if (stpxrootinconsistencyportindex.is_set || is_set(stpxrootinconsistencyportindex.yfilter)) leaf_name_data.push_back(stpxrootinconsistencyportindex.get_name_leafdata());
    if (stpxrootinconsistencystate.is_set || is_set(stpxrootinconsistencystate.yfilter)) leaf_name_data.push_back(stpxrootinconsistencystate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSTPEXTENSIONSMIB::StpxRootInconsistencyTable::StpxRootInconsistencyEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSTPEXTENSIONSMIB::StpxRootInconsistencyTable::StpxRootInconsistencyEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSTPEXTENSIONSMIB::StpxRootInconsistencyTable::StpxRootInconsistencyEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOSTPEXTENSIONSMIB::StpxRootInconsistencyTable::StpxRootInconsistencyEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOSTPEXTENSIONSMIB::StpxRootInconsistencyTable::StpxRootInconsistencyEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxRootInconsistencyIndex" || name == "stpxRootInconsistencyPortIndex" || name == "stpxRootInconsistencyState")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::StpxMISTPInstanceTable::StpxMISTPInstanceTable()
    :
    stpxmistpinstanceentry(this, {"stpxmistpinstanceindex"})
{

    yang_name = "stpxMISTPInstanceTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSTPEXTENSIONSMIB::StpxMISTPInstanceTable::~StpxMISTPInstanceTable()
{
}

bool CISCOSTPEXTENSIONSMIB::StpxMISTPInstanceTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stpxmistpinstanceentry.len(); index++)
    {
        if(stpxmistpinstanceentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSTPEXTENSIONSMIB::StpxMISTPInstanceTable::has_operation() const
{
    for (std::size_t index=0; index<stpxmistpinstanceentry.len(); index++)
    {
        if(stpxmistpinstanceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::StpxMISTPInstanceTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::StpxMISTPInstanceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxMISTPInstanceTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::StpxMISTPInstanceTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSTPEXTENSIONSMIB::StpxMISTPInstanceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stpxMISTPInstanceEntry")
    {
        auto ent_ = std::make_shared<CISCOSTPEXTENSIONSMIB::StpxMISTPInstanceTable::StpxMISTPInstanceEntry>();
        ent_->parent = this;
        stpxmistpinstanceentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSTPEXTENSIONSMIB::StpxMISTPInstanceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : stpxmistpinstanceentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOSTPEXTENSIONSMIB::StpxMISTPInstanceTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSTPEXTENSIONSMIB::StpxMISTPInstanceTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSTPEXTENSIONSMIB::StpxMISTPInstanceTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxMISTPInstanceEntry")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::StpxMISTPInstanceTable::StpxMISTPInstanceEntry::StpxMISTPInstanceEntry()
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

CISCOSTPEXTENSIONSMIB::StpxMISTPInstanceTable::StpxMISTPInstanceEntry::~StpxMISTPInstanceEntry()
{
}

bool CISCOSTPEXTENSIONSMIB::StpxMISTPInstanceTable::StpxMISTPInstanceEntry::has_data() const
{
    if (is_presence_container) return true;
    return stpxmistpinstanceindex.is_set
	|| stpxmistpinstanceenable.is_set
	|| stpxmistpinstancevlansmapped.is_set
	|| stpxmistpinstancevlansmapped2k.is_set
	|| stpxmistpinstancevlansmapped3k.is_set
	|| stpxmistpinstancevlansmapped4k.is_set;
}

bool CISCOSTPEXTENSIONSMIB::StpxMISTPInstanceTable::StpxMISTPInstanceEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxmistpinstanceindex.yfilter)
	|| ydk::is_set(stpxmistpinstanceenable.yfilter)
	|| ydk::is_set(stpxmistpinstancevlansmapped.yfilter)
	|| ydk::is_set(stpxmistpinstancevlansmapped2k.yfilter)
	|| ydk::is_set(stpxmistpinstancevlansmapped3k.yfilter)
	|| ydk::is_set(stpxmistpinstancevlansmapped4k.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::StpxMISTPInstanceTable::StpxMISTPInstanceEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxMISTPInstanceTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::StpxMISTPInstanceTable::StpxMISTPInstanceEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxMISTPInstanceEntry";
    ADD_KEY_TOKEN(stpxmistpinstanceindex, "stpxMISTPInstanceIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::StpxMISTPInstanceTable::StpxMISTPInstanceEntry::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> CISCOSTPEXTENSIONSMIB::StpxMISTPInstanceTable::StpxMISTPInstanceEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSTPEXTENSIONSMIB::StpxMISTPInstanceTable::StpxMISTPInstanceEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSTPEXTENSIONSMIB::StpxMISTPInstanceTable::StpxMISTPInstanceEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOSTPEXTENSIONSMIB::StpxMISTPInstanceTable::StpxMISTPInstanceEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOSTPEXTENSIONSMIB::StpxMISTPInstanceTable::StpxMISTPInstanceEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxMISTPInstanceIndex" || name == "stpxMISTPInstanceEnable" || name == "stpxMISTPInstanceVlansMapped" || name == "stpxMISTPInstanceVlansMapped2k" || name == "stpxMISTPInstanceVlansMapped3k" || name == "stpxMISTPInstanceVlansMapped4k")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::StpxLoopGuardConfigTable::StpxLoopGuardConfigTable()
    :
    stpxloopguardconfigentry(this, {"stpxloopguardconfigportindex"})
{

    yang_name = "stpxLoopGuardConfigTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSTPEXTENSIONSMIB::StpxLoopGuardConfigTable::~StpxLoopGuardConfigTable()
{
}

bool CISCOSTPEXTENSIONSMIB::StpxLoopGuardConfigTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stpxloopguardconfigentry.len(); index++)
    {
        if(stpxloopguardconfigentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSTPEXTENSIONSMIB::StpxLoopGuardConfigTable::has_operation() const
{
    for (std::size_t index=0; index<stpxloopguardconfigentry.len(); index++)
    {
        if(stpxloopguardconfigentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::StpxLoopGuardConfigTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::StpxLoopGuardConfigTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxLoopGuardConfigTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::StpxLoopGuardConfigTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSTPEXTENSIONSMIB::StpxLoopGuardConfigTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stpxLoopGuardConfigEntry")
    {
        auto ent_ = std::make_shared<CISCOSTPEXTENSIONSMIB::StpxLoopGuardConfigTable::StpxLoopGuardConfigEntry>();
        ent_->parent = this;
        stpxloopguardconfigentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSTPEXTENSIONSMIB::StpxLoopGuardConfigTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : stpxloopguardconfigentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOSTPEXTENSIONSMIB::StpxLoopGuardConfigTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSTPEXTENSIONSMIB::StpxLoopGuardConfigTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSTPEXTENSIONSMIB::StpxLoopGuardConfigTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxLoopGuardConfigEntry")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::StpxLoopGuardConfigTable::StpxLoopGuardConfigEntry::StpxLoopGuardConfigEntry()
    :
    stpxloopguardconfigportindex{YType::int32, "stpxLoopGuardConfigPortIndex"},
    stpxloopguardconfigenabled{YType::boolean, "stpxLoopGuardConfigEnabled"},
    stpxloopguardconfigmode{YType::enumeration, "stpxLoopGuardConfigMode"}
{

    yang_name = "stpxLoopGuardConfigEntry"; yang_parent_name = "stpxLoopGuardConfigTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSTPEXTENSIONSMIB::StpxLoopGuardConfigTable::StpxLoopGuardConfigEntry::~StpxLoopGuardConfigEntry()
{
}

bool CISCOSTPEXTENSIONSMIB::StpxLoopGuardConfigTable::StpxLoopGuardConfigEntry::has_data() const
{
    if (is_presence_container) return true;
    return stpxloopguardconfigportindex.is_set
	|| stpxloopguardconfigenabled.is_set
	|| stpxloopguardconfigmode.is_set;
}

bool CISCOSTPEXTENSIONSMIB::StpxLoopGuardConfigTable::StpxLoopGuardConfigEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxloopguardconfigportindex.yfilter)
	|| ydk::is_set(stpxloopguardconfigenabled.yfilter)
	|| ydk::is_set(stpxloopguardconfigmode.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::StpxLoopGuardConfigTable::StpxLoopGuardConfigEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxLoopGuardConfigTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::StpxLoopGuardConfigTable::StpxLoopGuardConfigEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxLoopGuardConfigEntry";
    ADD_KEY_TOKEN(stpxloopguardconfigportindex, "stpxLoopGuardConfigPortIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::StpxLoopGuardConfigTable::StpxLoopGuardConfigEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxloopguardconfigportindex.is_set || is_set(stpxloopguardconfigportindex.yfilter)) leaf_name_data.push_back(stpxloopguardconfigportindex.get_name_leafdata());
    if (stpxloopguardconfigenabled.is_set || is_set(stpxloopguardconfigenabled.yfilter)) leaf_name_data.push_back(stpxloopguardconfigenabled.get_name_leafdata());
    if (stpxloopguardconfigmode.is_set || is_set(stpxloopguardconfigmode.yfilter)) leaf_name_data.push_back(stpxloopguardconfigmode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSTPEXTENSIONSMIB::StpxLoopGuardConfigTable::StpxLoopGuardConfigEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSTPEXTENSIONSMIB::StpxLoopGuardConfigTable::StpxLoopGuardConfigEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSTPEXTENSIONSMIB::StpxLoopGuardConfigTable::StpxLoopGuardConfigEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOSTPEXTENSIONSMIB::StpxLoopGuardConfigTable::StpxLoopGuardConfigEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOSTPEXTENSIONSMIB::StpxLoopGuardConfigTable::StpxLoopGuardConfigEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxLoopGuardConfigPortIndex" || name == "stpxLoopGuardConfigEnabled" || name == "stpxLoopGuardConfigMode")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::StpxLoopInconsistencyTable::StpxLoopInconsistencyTable()
    :
    stpxloopinconsistencyentry(this, {"stpxloopinconsistencyindex", "stpxloopinconsistencyportindex"})
{

    yang_name = "stpxLoopInconsistencyTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSTPEXTENSIONSMIB::StpxLoopInconsistencyTable::~StpxLoopInconsistencyTable()
{
}

bool CISCOSTPEXTENSIONSMIB::StpxLoopInconsistencyTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stpxloopinconsistencyentry.len(); index++)
    {
        if(stpxloopinconsistencyentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSTPEXTENSIONSMIB::StpxLoopInconsistencyTable::has_operation() const
{
    for (std::size_t index=0; index<stpxloopinconsistencyentry.len(); index++)
    {
        if(stpxloopinconsistencyentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::StpxLoopInconsistencyTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::StpxLoopInconsistencyTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxLoopInconsistencyTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::StpxLoopInconsistencyTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSTPEXTENSIONSMIB::StpxLoopInconsistencyTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stpxLoopInconsistencyEntry")
    {
        auto ent_ = std::make_shared<CISCOSTPEXTENSIONSMIB::StpxLoopInconsistencyTable::StpxLoopInconsistencyEntry>();
        ent_->parent = this;
        stpxloopinconsistencyentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSTPEXTENSIONSMIB::StpxLoopInconsistencyTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : stpxloopinconsistencyentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOSTPEXTENSIONSMIB::StpxLoopInconsistencyTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSTPEXTENSIONSMIB::StpxLoopInconsistencyTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSTPEXTENSIONSMIB::StpxLoopInconsistencyTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxLoopInconsistencyEntry")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::StpxLoopInconsistencyTable::StpxLoopInconsistencyEntry::StpxLoopInconsistencyEntry()
    :
    stpxloopinconsistencyindex{YType::int32, "stpxLoopInconsistencyIndex"},
    stpxloopinconsistencyportindex{YType::int32, "stpxLoopInconsistencyPortIndex"},
    stpxloopinconsistencystate{YType::boolean, "stpxLoopInconsistencyState"}
{

    yang_name = "stpxLoopInconsistencyEntry"; yang_parent_name = "stpxLoopInconsistencyTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSTPEXTENSIONSMIB::StpxLoopInconsistencyTable::StpxLoopInconsistencyEntry::~StpxLoopInconsistencyEntry()
{
}

bool CISCOSTPEXTENSIONSMIB::StpxLoopInconsistencyTable::StpxLoopInconsistencyEntry::has_data() const
{
    if (is_presence_container) return true;
    return stpxloopinconsistencyindex.is_set
	|| stpxloopinconsistencyportindex.is_set
	|| stpxloopinconsistencystate.is_set;
}

bool CISCOSTPEXTENSIONSMIB::StpxLoopInconsistencyTable::StpxLoopInconsistencyEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxloopinconsistencyindex.yfilter)
	|| ydk::is_set(stpxloopinconsistencyportindex.yfilter)
	|| ydk::is_set(stpxloopinconsistencystate.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::StpxLoopInconsistencyTable::StpxLoopInconsistencyEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxLoopInconsistencyTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::StpxLoopInconsistencyTable::StpxLoopInconsistencyEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxLoopInconsistencyEntry";
    ADD_KEY_TOKEN(stpxloopinconsistencyindex, "stpxLoopInconsistencyIndex");
    ADD_KEY_TOKEN(stpxloopinconsistencyportindex, "stpxLoopInconsistencyPortIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::StpxLoopInconsistencyTable::StpxLoopInconsistencyEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxloopinconsistencyindex.is_set || is_set(stpxloopinconsistencyindex.yfilter)) leaf_name_data.push_back(stpxloopinconsistencyindex.get_name_leafdata());
    if (stpxloopinconsistencyportindex.is_set || is_set(stpxloopinconsistencyportindex.yfilter)) leaf_name_data.push_back(stpxloopinconsistencyportindex.get_name_leafdata());
    if (stpxloopinconsistencystate.is_set || is_set(stpxloopinconsistencystate.yfilter)) leaf_name_data.push_back(stpxloopinconsistencystate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSTPEXTENSIONSMIB::StpxLoopInconsistencyTable::StpxLoopInconsistencyEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSTPEXTENSIONSMIB::StpxLoopInconsistencyTable::StpxLoopInconsistencyEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSTPEXTENSIONSMIB::StpxLoopInconsistencyTable::StpxLoopInconsistencyEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOSTPEXTENSIONSMIB::StpxLoopInconsistencyTable::StpxLoopInconsistencyEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOSTPEXTENSIONSMIB::StpxLoopInconsistencyTable::StpxLoopInconsistencyEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxLoopInconsistencyIndex" || name == "stpxLoopInconsistencyPortIndex" || name == "stpxLoopInconsistencyState")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::StpxFastStartPortTable::StpxFastStartPortTable()
    :
    stpxfaststartportentry(this, {"stpxfaststartportindex"})
{

    yang_name = "stpxFastStartPortTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSTPEXTENSIONSMIB::StpxFastStartPortTable::~StpxFastStartPortTable()
{
}

bool CISCOSTPEXTENSIONSMIB::StpxFastStartPortTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stpxfaststartportentry.len(); index++)
    {
        if(stpxfaststartportentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSTPEXTENSIONSMIB::StpxFastStartPortTable::has_operation() const
{
    for (std::size_t index=0; index<stpxfaststartportentry.len(); index++)
    {
        if(stpxfaststartportentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::StpxFastStartPortTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::StpxFastStartPortTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxFastStartPortTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::StpxFastStartPortTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSTPEXTENSIONSMIB::StpxFastStartPortTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stpxFastStartPortEntry")
    {
        auto ent_ = std::make_shared<CISCOSTPEXTENSIONSMIB::StpxFastStartPortTable::StpxFastStartPortEntry>();
        ent_->parent = this;
        stpxfaststartportentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSTPEXTENSIONSMIB::StpxFastStartPortTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : stpxfaststartportentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOSTPEXTENSIONSMIB::StpxFastStartPortTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSTPEXTENSIONSMIB::StpxFastStartPortTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSTPEXTENSIONSMIB::StpxFastStartPortTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxFastStartPortEntry")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::StpxFastStartPortTable::StpxFastStartPortEntry::StpxFastStartPortEntry()
    :
    stpxfaststartportindex{YType::int32, "stpxFastStartPortIndex"},
    stpxfaststartportenable{YType::boolean, "stpxFastStartPortEnable"},
    stpxfaststartportmode{YType::enumeration, "stpxFastStartPortMode"},
    stpxfaststartportbpduguardmode{YType::enumeration, "stpxFastStartPortBpduGuardMode"},
    stpxfaststartportbpdufiltermode{YType::enumeration, "stpxFastStartPortBpduFilterMode"}
{

    yang_name = "stpxFastStartPortEntry"; yang_parent_name = "stpxFastStartPortTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSTPEXTENSIONSMIB::StpxFastStartPortTable::StpxFastStartPortEntry::~StpxFastStartPortEntry()
{
}

bool CISCOSTPEXTENSIONSMIB::StpxFastStartPortTable::StpxFastStartPortEntry::has_data() const
{
    if (is_presence_container) return true;
    return stpxfaststartportindex.is_set
	|| stpxfaststartportenable.is_set
	|| stpxfaststartportmode.is_set
	|| stpxfaststartportbpduguardmode.is_set
	|| stpxfaststartportbpdufiltermode.is_set;
}

bool CISCOSTPEXTENSIONSMIB::StpxFastStartPortTable::StpxFastStartPortEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxfaststartportindex.yfilter)
	|| ydk::is_set(stpxfaststartportenable.yfilter)
	|| ydk::is_set(stpxfaststartportmode.yfilter)
	|| ydk::is_set(stpxfaststartportbpduguardmode.yfilter)
	|| ydk::is_set(stpxfaststartportbpdufiltermode.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::StpxFastStartPortTable::StpxFastStartPortEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxFastStartPortTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::StpxFastStartPortTable::StpxFastStartPortEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxFastStartPortEntry";
    ADD_KEY_TOKEN(stpxfaststartportindex, "stpxFastStartPortIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::StpxFastStartPortTable::StpxFastStartPortEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxfaststartportindex.is_set || is_set(stpxfaststartportindex.yfilter)) leaf_name_data.push_back(stpxfaststartportindex.get_name_leafdata());
    if (stpxfaststartportenable.is_set || is_set(stpxfaststartportenable.yfilter)) leaf_name_data.push_back(stpxfaststartportenable.get_name_leafdata());
    if (stpxfaststartportmode.is_set || is_set(stpxfaststartportmode.yfilter)) leaf_name_data.push_back(stpxfaststartportmode.get_name_leafdata());
    if (stpxfaststartportbpduguardmode.is_set || is_set(stpxfaststartportbpduguardmode.yfilter)) leaf_name_data.push_back(stpxfaststartportbpduguardmode.get_name_leafdata());
    if (stpxfaststartportbpdufiltermode.is_set || is_set(stpxfaststartportbpdufiltermode.yfilter)) leaf_name_data.push_back(stpxfaststartportbpdufiltermode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSTPEXTENSIONSMIB::StpxFastStartPortTable::StpxFastStartPortEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSTPEXTENSIONSMIB::StpxFastStartPortTable::StpxFastStartPortEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSTPEXTENSIONSMIB::StpxFastStartPortTable::StpxFastStartPortEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stpxFastStartPortIndex")
    {
        stpxfaststartportindex = value;
        stpxfaststartportindex.value_namespace = name_space;
        stpxfaststartportindex.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "stpxFastStartPortBpduGuardMode")
    {
        stpxfaststartportbpduguardmode = value;
        stpxfaststartportbpduguardmode.value_namespace = name_space;
        stpxfaststartportbpduguardmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxFastStartPortBpduFilterMode")
    {
        stpxfaststartportbpdufiltermode = value;
        stpxfaststartportbpdufiltermode.value_namespace = name_space;
        stpxfaststartportbpdufiltermode.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSTPEXTENSIONSMIB::StpxFastStartPortTable::StpxFastStartPortEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stpxFastStartPortIndex")
    {
        stpxfaststartportindex.yfilter = yfilter;
    }
    if(value_path == "stpxFastStartPortEnable")
    {
        stpxfaststartportenable.yfilter = yfilter;
    }
    if(value_path == "stpxFastStartPortMode")
    {
        stpxfaststartportmode.yfilter = yfilter;
    }
    if(value_path == "stpxFastStartPortBpduGuardMode")
    {
        stpxfaststartportbpduguardmode.yfilter = yfilter;
    }
    if(value_path == "stpxFastStartPortBpduFilterMode")
    {
        stpxfaststartportbpdufiltermode.yfilter = yfilter;
    }
}

bool CISCOSTPEXTENSIONSMIB::StpxFastStartPortTable::StpxFastStartPortEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxFastStartPortIndex" || name == "stpxFastStartPortEnable" || name == "stpxFastStartPortMode" || name == "stpxFastStartPortBpduGuardMode" || name == "stpxFastStartPortBpduFilterMode")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::StpxFastStartOperModeTable::StpxFastStartOperModeTable()
    :
    stpxfaststartopermodeentry(this, {"stpxfaststartopermodeinstindex", "stpxfaststartopermodeportindex"})
{

    yang_name = "stpxFastStartOperModeTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSTPEXTENSIONSMIB::StpxFastStartOperModeTable::~StpxFastStartOperModeTable()
{
}

bool CISCOSTPEXTENSIONSMIB::StpxFastStartOperModeTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stpxfaststartopermodeentry.len(); index++)
    {
        if(stpxfaststartopermodeentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSTPEXTENSIONSMIB::StpxFastStartOperModeTable::has_operation() const
{
    for (std::size_t index=0; index<stpxfaststartopermodeentry.len(); index++)
    {
        if(stpxfaststartopermodeentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::StpxFastStartOperModeTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::StpxFastStartOperModeTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxFastStartOperModeTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::StpxFastStartOperModeTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSTPEXTENSIONSMIB::StpxFastStartOperModeTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stpxFastStartOperModeEntry")
    {
        auto ent_ = std::make_shared<CISCOSTPEXTENSIONSMIB::StpxFastStartOperModeTable::StpxFastStartOperModeEntry>();
        ent_->parent = this;
        stpxfaststartopermodeentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSTPEXTENSIONSMIB::StpxFastStartOperModeTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : stpxfaststartopermodeentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOSTPEXTENSIONSMIB::StpxFastStartOperModeTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSTPEXTENSIONSMIB::StpxFastStartOperModeTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSTPEXTENSIONSMIB::StpxFastStartOperModeTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxFastStartOperModeEntry")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::StpxFastStartOperModeTable::StpxFastStartOperModeEntry::StpxFastStartOperModeEntry()
    :
    stpxfaststartopermodeinstindex{YType::int32, "stpxFastStartOperModeInstIndex"},
    stpxfaststartopermodeportindex{YType::int32, "stpxFastStartOperModePortIndex"},
    stpxfaststartopermode{YType::enumeration, "stpxFastStartOperMode"}
{

    yang_name = "stpxFastStartOperModeEntry"; yang_parent_name = "stpxFastStartOperModeTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSTPEXTENSIONSMIB::StpxFastStartOperModeTable::StpxFastStartOperModeEntry::~StpxFastStartOperModeEntry()
{
}

bool CISCOSTPEXTENSIONSMIB::StpxFastStartOperModeTable::StpxFastStartOperModeEntry::has_data() const
{
    if (is_presence_container) return true;
    return stpxfaststartopermodeinstindex.is_set
	|| stpxfaststartopermodeportindex.is_set
	|| stpxfaststartopermode.is_set;
}

bool CISCOSTPEXTENSIONSMIB::StpxFastStartOperModeTable::StpxFastStartOperModeEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxfaststartopermodeinstindex.yfilter)
	|| ydk::is_set(stpxfaststartopermodeportindex.yfilter)
	|| ydk::is_set(stpxfaststartopermode.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::StpxFastStartOperModeTable::StpxFastStartOperModeEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxFastStartOperModeTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::StpxFastStartOperModeTable::StpxFastStartOperModeEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxFastStartOperModeEntry";
    ADD_KEY_TOKEN(stpxfaststartopermodeinstindex, "stpxFastStartOperModeInstIndex");
    ADD_KEY_TOKEN(stpxfaststartopermodeportindex, "stpxFastStartOperModePortIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::StpxFastStartOperModeTable::StpxFastStartOperModeEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxfaststartopermodeinstindex.is_set || is_set(stpxfaststartopermodeinstindex.yfilter)) leaf_name_data.push_back(stpxfaststartopermodeinstindex.get_name_leafdata());
    if (stpxfaststartopermodeportindex.is_set || is_set(stpxfaststartopermodeportindex.yfilter)) leaf_name_data.push_back(stpxfaststartopermodeportindex.get_name_leafdata());
    if (stpxfaststartopermode.is_set || is_set(stpxfaststartopermode.yfilter)) leaf_name_data.push_back(stpxfaststartopermode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSTPEXTENSIONSMIB::StpxFastStartOperModeTable::StpxFastStartOperModeEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSTPEXTENSIONSMIB::StpxFastStartOperModeTable::StpxFastStartOperModeEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSTPEXTENSIONSMIB::StpxFastStartOperModeTable::StpxFastStartOperModeEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOSTPEXTENSIONSMIB::StpxFastStartOperModeTable::StpxFastStartOperModeEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOSTPEXTENSIONSMIB::StpxFastStartOperModeTable::StpxFastStartOperModeEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxFastStartOperModeInstIndex" || name == "stpxFastStartOperModePortIndex" || name == "stpxFastStartOperMode")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::StpxBpduSkewingTable::StpxBpduSkewingTable()
    :
    stpxbpduskewingentry(this, {"stpxbpduskewinginstanceindex", "stpxbpduskewingportindex"})
{

    yang_name = "stpxBpduSkewingTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSTPEXTENSIONSMIB::StpxBpduSkewingTable::~StpxBpduSkewingTable()
{
}

bool CISCOSTPEXTENSIONSMIB::StpxBpduSkewingTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stpxbpduskewingentry.len(); index++)
    {
        if(stpxbpduskewingentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSTPEXTENSIONSMIB::StpxBpduSkewingTable::has_operation() const
{
    for (std::size_t index=0; index<stpxbpduskewingentry.len(); index++)
    {
        if(stpxbpduskewingentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::StpxBpduSkewingTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::StpxBpduSkewingTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxBpduSkewingTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::StpxBpduSkewingTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSTPEXTENSIONSMIB::StpxBpduSkewingTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stpxBpduSkewingEntry")
    {
        auto ent_ = std::make_shared<CISCOSTPEXTENSIONSMIB::StpxBpduSkewingTable::StpxBpduSkewingEntry>();
        ent_->parent = this;
        stpxbpduskewingentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSTPEXTENSIONSMIB::StpxBpduSkewingTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : stpxbpduskewingentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOSTPEXTENSIONSMIB::StpxBpduSkewingTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSTPEXTENSIONSMIB::StpxBpduSkewingTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSTPEXTENSIONSMIB::StpxBpduSkewingTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxBpduSkewingEntry")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::StpxBpduSkewingTable::StpxBpduSkewingEntry::StpxBpduSkewingEntry()
    :
    stpxbpduskewinginstanceindex{YType::int32, "stpxBpduSkewingInstanceIndex"},
    stpxbpduskewingportindex{YType::int32, "stpxBpduSkewingPortIndex"},
    stpxbpduskewinglastskewduration{YType::uint32, "stpxBpduSkewingLastSkewDuration"},
    stpxbpduskewingworstskewduration{YType::uint32, "stpxBpduSkewingWorstSkewDuration"},
    stpxbpduskewingworstskewtime{YType::uint32, "stpxBpduSkewingWorstSkewTime"}
{

    yang_name = "stpxBpduSkewingEntry"; yang_parent_name = "stpxBpduSkewingTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSTPEXTENSIONSMIB::StpxBpduSkewingTable::StpxBpduSkewingEntry::~StpxBpduSkewingEntry()
{
}

bool CISCOSTPEXTENSIONSMIB::StpxBpduSkewingTable::StpxBpduSkewingEntry::has_data() const
{
    if (is_presence_container) return true;
    return stpxbpduskewinginstanceindex.is_set
	|| stpxbpduskewingportindex.is_set
	|| stpxbpduskewinglastskewduration.is_set
	|| stpxbpduskewingworstskewduration.is_set
	|| stpxbpduskewingworstskewtime.is_set;
}

bool CISCOSTPEXTENSIONSMIB::StpxBpduSkewingTable::StpxBpduSkewingEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxbpduskewinginstanceindex.yfilter)
	|| ydk::is_set(stpxbpduskewingportindex.yfilter)
	|| ydk::is_set(stpxbpduskewinglastskewduration.yfilter)
	|| ydk::is_set(stpxbpduskewingworstskewduration.yfilter)
	|| ydk::is_set(stpxbpduskewingworstskewtime.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::StpxBpduSkewingTable::StpxBpduSkewingEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxBpduSkewingTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::StpxBpduSkewingTable::StpxBpduSkewingEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxBpduSkewingEntry";
    ADD_KEY_TOKEN(stpxbpduskewinginstanceindex, "stpxBpduSkewingInstanceIndex");
    ADD_KEY_TOKEN(stpxbpduskewingportindex, "stpxBpduSkewingPortIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::StpxBpduSkewingTable::StpxBpduSkewingEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxbpduskewinginstanceindex.is_set || is_set(stpxbpduskewinginstanceindex.yfilter)) leaf_name_data.push_back(stpxbpduskewinginstanceindex.get_name_leafdata());
    if (stpxbpduskewingportindex.is_set || is_set(stpxbpduskewingportindex.yfilter)) leaf_name_data.push_back(stpxbpduskewingportindex.get_name_leafdata());
    if (stpxbpduskewinglastskewduration.is_set || is_set(stpxbpduskewinglastskewduration.yfilter)) leaf_name_data.push_back(stpxbpduskewinglastskewduration.get_name_leafdata());
    if (stpxbpduskewingworstskewduration.is_set || is_set(stpxbpduskewingworstskewduration.yfilter)) leaf_name_data.push_back(stpxbpduskewingworstskewduration.get_name_leafdata());
    if (stpxbpduskewingworstskewtime.is_set || is_set(stpxbpduskewingworstskewtime.yfilter)) leaf_name_data.push_back(stpxbpduskewingworstskewtime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSTPEXTENSIONSMIB::StpxBpduSkewingTable::StpxBpduSkewingEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSTPEXTENSIONSMIB::StpxBpduSkewingTable::StpxBpduSkewingEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSTPEXTENSIONSMIB::StpxBpduSkewingTable::StpxBpduSkewingEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOSTPEXTENSIONSMIB::StpxBpduSkewingTable::StpxBpduSkewingEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOSTPEXTENSIONSMIB::StpxBpduSkewingTable::StpxBpduSkewingEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxBpduSkewingInstanceIndex" || name == "stpxBpduSkewingPortIndex" || name == "stpxBpduSkewingLastSkewDuration" || name == "stpxBpduSkewingWorstSkewDuration" || name == "stpxBpduSkewingWorstSkewTime")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::StpxMSTInstanceTable::StpxMSTInstanceTable()
    :
    stpxmstinstanceentry(this, {"stpxmstinstanceindex"})
{

    yang_name = "stpxMSTInstanceTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSTPEXTENSIONSMIB::StpxMSTInstanceTable::~StpxMSTInstanceTable()
{
}

bool CISCOSTPEXTENSIONSMIB::StpxMSTInstanceTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stpxmstinstanceentry.len(); index++)
    {
        if(stpxmstinstanceentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSTPEXTENSIONSMIB::StpxMSTInstanceTable::has_operation() const
{
    for (std::size_t index=0; index<stpxmstinstanceentry.len(); index++)
    {
        if(stpxmstinstanceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::StpxMSTInstanceTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::StpxMSTInstanceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxMSTInstanceTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::StpxMSTInstanceTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSTPEXTENSIONSMIB::StpxMSTInstanceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stpxMSTInstanceEntry")
    {
        auto ent_ = std::make_shared<CISCOSTPEXTENSIONSMIB::StpxMSTInstanceTable::StpxMSTInstanceEntry>();
        ent_->parent = this;
        stpxmstinstanceentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSTPEXTENSIONSMIB::StpxMSTInstanceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : stpxmstinstanceentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOSTPEXTENSIONSMIB::StpxMSTInstanceTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSTPEXTENSIONSMIB::StpxMSTInstanceTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSTPEXTENSIONSMIB::StpxMSTInstanceTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxMSTInstanceEntry")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::StpxMSTInstanceTable::StpxMSTInstanceEntry::StpxMSTInstanceEntry()
    :
    stpxmstinstanceindex{YType::int32, "stpxMSTInstanceIndex"},
    stpxmstinstancevlansmapped{YType::str, "stpxMSTInstanceVlansMapped"},
    stpxmstinstancevlansmapped2k{YType::str, "stpxMSTInstanceVlansMapped2k"},
    stpxmstinstancevlansmapped3k{YType::str, "stpxMSTInstanceVlansMapped3k"},
    stpxmstinstancevlansmapped4k{YType::str, "stpxMSTInstanceVlansMapped4k"},
    stpxmstinstanceremaininghopcount{YType::int32, "stpxMSTInstanceRemainingHopCount"}
{

    yang_name = "stpxMSTInstanceEntry"; yang_parent_name = "stpxMSTInstanceTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSTPEXTENSIONSMIB::StpxMSTInstanceTable::StpxMSTInstanceEntry::~StpxMSTInstanceEntry()
{
}

bool CISCOSTPEXTENSIONSMIB::StpxMSTInstanceTable::StpxMSTInstanceEntry::has_data() const
{
    if (is_presence_container) return true;
    return stpxmstinstanceindex.is_set
	|| stpxmstinstancevlansmapped.is_set
	|| stpxmstinstancevlansmapped2k.is_set
	|| stpxmstinstancevlansmapped3k.is_set
	|| stpxmstinstancevlansmapped4k.is_set
	|| stpxmstinstanceremaininghopcount.is_set;
}

bool CISCOSTPEXTENSIONSMIB::StpxMSTInstanceTable::StpxMSTInstanceEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxmstinstanceindex.yfilter)
	|| ydk::is_set(stpxmstinstancevlansmapped.yfilter)
	|| ydk::is_set(stpxmstinstancevlansmapped2k.yfilter)
	|| ydk::is_set(stpxmstinstancevlansmapped3k.yfilter)
	|| ydk::is_set(stpxmstinstancevlansmapped4k.yfilter)
	|| ydk::is_set(stpxmstinstanceremaininghopcount.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::StpxMSTInstanceTable::StpxMSTInstanceEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxMSTInstanceTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::StpxMSTInstanceTable::StpxMSTInstanceEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxMSTInstanceEntry";
    ADD_KEY_TOKEN(stpxmstinstanceindex, "stpxMSTInstanceIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::StpxMSTInstanceTable::StpxMSTInstanceEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxmstinstanceindex.is_set || is_set(stpxmstinstanceindex.yfilter)) leaf_name_data.push_back(stpxmstinstanceindex.get_name_leafdata());
    if (stpxmstinstancevlansmapped.is_set || is_set(stpxmstinstancevlansmapped.yfilter)) leaf_name_data.push_back(stpxmstinstancevlansmapped.get_name_leafdata());
    if (stpxmstinstancevlansmapped2k.is_set || is_set(stpxmstinstancevlansmapped2k.yfilter)) leaf_name_data.push_back(stpxmstinstancevlansmapped2k.get_name_leafdata());
    if (stpxmstinstancevlansmapped3k.is_set || is_set(stpxmstinstancevlansmapped3k.yfilter)) leaf_name_data.push_back(stpxmstinstancevlansmapped3k.get_name_leafdata());
    if (stpxmstinstancevlansmapped4k.is_set || is_set(stpxmstinstancevlansmapped4k.yfilter)) leaf_name_data.push_back(stpxmstinstancevlansmapped4k.get_name_leafdata());
    if (stpxmstinstanceremaininghopcount.is_set || is_set(stpxmstinstanceremaininghopcount.yfilter)) leaf_name_data.push_back(stpxmstinstanceremaininghopcount.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSTPEXTENSIONSMIB::StpxMSTInstanceTable::StpxMSTInstanceEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSTPEXTENSIONSMIB::StpxMSTInstanceTable::StpxMSTInstanceEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSTPEXTENSIONSMIB::StpxMSTInstanceTable::StpxMSTInstanceEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stpxMSTInstanceIndex")
    {
        stpxmstinstanceindex = value;
        stpxmstinstanceindex.value_namespace = name_space;
        stpxmstinstanceindex.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "stpxMSTInstanceRemainingHopCount")
    {
        stpxmstinstanceremaininghopcount = value;
        stpxmstinstanceremaininghopcount.value_namespace = name_space;
        stpxmstinstanceremaininghopcount.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSTPEXTENSIONSMIB::StpxMSTInstanceTable::StpxMSTInstanceEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stpxMSTInstanceIndex")
    {
        stpxmstinstanceindex.yfilter = yfilter;
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
    if(value_path == "stpxMSTInstanceRemainingHopCount")
    {
        stpxmstinstanceremaininghopcount.yfilter = yfilter;
    }
}

bool CISCOSTPEXTENSIONSMIB::StpxMSTInstanceTable::StpxMSTInstanceEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxMSTInstanceIndex" || name == "stpxMSTInstanceVlansMapped" || name == "stpxMSTInstanceVlansMapped2k" || name == "stpxMSTInstanceVlansMapped3k" || name == "stpxMSTInstanceVlansMapped4k" || name == "stpxMSTInstanceRemainingHopCount")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::StpxMSTInstanceEditTable::StpxMSTInstanceEditTable()
    :
    stpxmstinstanceeditentry(this, {"stpxmstinstanceeditindex"})
{

    yang_name = "stpxMSTInstanceEditTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSTPEXTENSIONSMIB::StpxMSTInstanceEditTable::~StpxMSTInstanceEditTable()
{
}

bool CISCOSTPEXTENSIONSMIB::StpxMSTInstanceEditTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stpxmstinstanceeditentry.len(); index++)
    {
        if(stpxmstinstanceeditentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSTPEXTENSIONSMIB::StpxMSTInstanceEditTable::has_operation() const
{
    for (std::size_t index=0; index<stpxmstinstanceeditentry.len(); index++)
    {
        if(stpxmstinstanceeditentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::StpxMSTInstanceEditTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::StpxMSTInstanceEditTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxMSTInstanceEditTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::StpxMSTInstanceEditTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSTPEXTENSIONSMIB::StpxMSTInstanceEditTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stpxMSTInstanceEditEntry")
    {
        auto ent_ = std::make_shared<CISCOSTPEXTENSIONSMIB::StpxMSTInstanceEditTable::StpxMSTInstanceEditEntry>();
        ent_->parent = this;
        stpxmstinstanceeditentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSTPEXTENSIONSMIB::StpxMSTInstanceEditTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : stpxmstinstanceeditentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOSTPEXTENSIONSMIB::StpxMSTInstanceEditTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSTPEXTENSIONSMIB::StpxMSTInstanceEditTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSTPEXTENSIONSMIB::StpxMSTInstanceEditTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxMSTInstanceEditEntry")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::StpxMSTInstanceEditTable::StpxMSTInstanceEditEntry::StpxMSTInstanceEditEntry()
    :
    stpxmstinstanceeditindex{YType::int32, "stpxMSTInstanceEditIndex"},
    stpxmstinstanceeditvlansmap{YType::str, "stpxMSTInstanceEditVlansMap"},
    stpxmstinstanceeditvlansmap2k{YType::str, "stpxMSTInstanceEditVlansMap2k"},
    stpxmstinstanceeditvlansmap3k{YType::str, "stpxMSTInstanceEditVlansMap3k"},
    stpxmstinstanceeditvlansmap4k{YType::str, "stpxMSTInstanceEditVlansMap4k"}
{

    yang_name = "stpxMSTInstanceEditEntry"; yang_parent_name = "stpxMSTInstanceEditTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSTPEXTENSIONSMIB::StpxMSTInstanceEditTable::StpxMSTInstanceEditEntry::~StpxMSTInstanceEditEntry()
{
}

bool CISCOSTPEXTENSIONSMIB::StpxMSTInstanceEditTable::StpxMSTInstanceEditEntry::has_data() const
{
    if (is_presence_container) return true;
    return stpxmstinstanceeditindex.is_set
	|| stpxmstinstanceeditvlansmap.is_set
	|| stpxmstinstanceeditvlansmap2k.is_set
	|| stpxmstinstanceeditvlansmap3k.is_set
	|| stpxmstinstanceeditvlansmap4k.is_set;
}

bool CISCOSTPEXTENSIONSMIB::StpxMSTInstanceEditTable::StpxMSTInstanceEditEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxmstinstanceeditindex.yfilter)
	|| ydk::is_set(stpxmstinstanceeditvlansmap.yfilter)
	|| ydk::is_set(stpxmstinstanceeditvlansmap2k.yfilter)
	|| ydk::is_set(stpxmstinstanceeditvlansmap3k.yfilter)
	|| ydk::is_set(stpxmstinstanceeditvlansmap4k.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::StpxMSTInstanceEditTable::StpxMSTInstanceEditEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxMSTInstanceEditTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::StpxMSTInstanceEditTable::StpxMSTInstanceEditEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxMSTInstanceEditEntry";
    ADD_KEY_TOKEN(stpxmstinstanceeditindex, "stpxMSTInstanceEditIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::StpxMSTInstanceEditTable::StpxMSTInstanceEditEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxmstinstanceeditindex.is_set || is_set(stpxmstinstanceeditindex.yfilter)) leaf_name_data.push_back(stpxmstinstanceeditindex.get_name_leafdata());
    if (stpxmstinstanceeditvlansmap.is_set || is_set(stpxmstinstanceeditvlansmap.yfilter)) leaf_name_data.push_back(stpxmstinstanceeditvlansmap.get_name_leafdata());
    if (stpxmstinstanceeditvlansmap2k.is_set || is_set(stpxmstinstanceeditvlansmap2k.yfilter)) leaf_name_data.push_back(stpxmstinstanceeditvlansmap2k.get_name_leafdata());
    if (stpxmstinstanceeditvlansmap3k.is_set || is_set(stpxmstinstanceeditvlansmap3k.yfilter)) leaf_name_data.push_back(stpxmstinstanceeditvlansmap3k.get_name_leafdata());
    if (stpxmstinstanceeditvlansmap4k.is_set || is_set(stpxmstinstanceeditvlansmap4k.yfilter)) leaf_name_data.push_back(stpxmstinstanceeditvlansmap4k.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSTPEXTENSIONSMIB::StpxMSTInstanceEditTable::StpxMSTInstanceEditEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSTPEXTENSIONSMIB::StpxMSTInstanceEditTable::StpxMSTInstanceEditEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSTPEXTENSIONSMIB::StpxMSTInstanceEditTable::StpxMSTInstanceEditEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOSTPEXTENSIONSMIB::StpxMSTInstanceEditTable::StpxMSTInstanceEditEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOSTPEXTENSIONSMIB::StpxMSTInstanceEditTable::StpxMSTInstanceEditEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxMSTInstanceEditIndex" || name == "stpxMSTInstanceEditVlansMap" || name == "stpxMSTInstanceEditVlansMap2k" || name == "stpxMSTInstanceEditVlansMap3k" || name == "stpxMSTInstanceEditVlansMap4k")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::StpxMSTPortTable::StpxMSTPortTable()
    :
    stpxmstportentry(this, {"stpxmstportindex"})
{

    yang_name = "stpxMSTPortTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSTPEXTENSIONSMIB::StpxMSTPortTable::~StpxMSTPortTable()
{
}

bool CISCOSTPEXTENSIONSMIB::StpxMSTPortTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stpxmstportentry.len(); index++)
    {
        if(stpxmstportentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSTPEXTENSIONSMIB::StpxMSTPortTable::has_operation() const
{
    for (std::size_t index=0; index<stpxmstportentry.len(); index++)
    {
        if(stpxmstportentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::StpxMSTPortTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::StpxMSTPortTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxMSTPortTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::StpxMSTPortTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSTPEXTENSIONSMIB::StpxMSTPortTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stpxMSTPortEntry")
    {
        auto ent_ = std::make_shared<CISCOSTPEXTENSIONSMIB::StpxMSTPortTable::StpxMSTPortEntry>();
        ent_->parent = this;
        stpxmstportentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSTPEXTENSIONSMIB::StpxMSTPortTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : stpxmstportentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOSTPEXTENSIONSMIB::StpxMSTPortTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSTPEXTENSIONSMIB::StpxMSTPortTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSTPEXTENSIONSMIB::StpxMSTPortTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxMSTPortEntry")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::StpxMSTPortTable::StpxMSTPortEntry::StpxMSTPortEntry()
    :
    stpxmstportindex{YType::int32, "stpxMSTPortIndex"},
    stpxmstportadminlinktype{YType::enumeration, "stpxMSTPortAdminLinkType"},
    stpxmstportoperlinktype{YType::enumeration, "stpxMSTPortOperLinkType"},
    stpxmstportprotocolmigration{YType::boolean, "stpxMSTPortProtocolMigration"},
    stpxmstportstatus{YType::bits, "stpxMSTPortStatus"}
{

    yang_name = "stpxMSTPortEntry"; yang_parent_name = "stpxMSTPortTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSTPEXTENSIONSMIB::StpxMSTPortTable::StpxMSTPortEntry::~StpxMSTPortEntry()
{
}

bool CISCOSTPEXTENSIONSMIB::StpxMSTPortTable::StpxMSTPortEntry::has_data() const
{
    if (is_presence_container) return true;
    return stpxmstportindex.is_set
	|| stpxmstportadminlinktype.is_set
	|| stpxmstportoperlinktype.is_set
	|| stpxmstportprotocolmigration.is_set
	|| stpxmstportstatus.is_set;
}

bool CISCOSTPEXTENSIONSMIB::StpxMSTPortTable::StpxMSTPortEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxmstportindex.yfilter)
	|| ydk::is_set(stpxmstportadminlinktype.yfilter)
	|| ydk::is_set(stpxmstportoperlinktype.yfilter)
	|| ydk::is_set(stpxmstportprotocolmigration.yfilter)
	|| ydk::is_set(stpxmstportstatus.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::StpxMSTPortTable::StpxMSTPortEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxMSTPortTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::StpxMSTPortTable::StpxMSTPortEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxMSTPortEntry";
    ADD_KEY_TOKEN(stpxmstportindex, "stpxMSTPortIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::StpxMSTPortTable::StpxMSTPortEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxmstportindex.is_set || is_set(stpxmstportindex.yfilter)) leaf_name_data.push_back(stpxmstportindex.get_name_leafdata());
    if (stpxmstportadminlinktype.is_set || is_set(stpxmstportadminlinktype.yfilter)) leaf_name_data.push_back(stpxmstportadminlinktype.get_name_leafdata());
    if (stpxmstportoperlinktype.is_set || is_set(stpxmstportoperlinktype.yfilter)) leaf_name_data.push_back(stpxmstportoperlinktype.get_name_leafdata());
    if (stpxmstportprotocolmigration.is_set || is_set(stpxmstportprotocolmigration.yfilter)) leaf_name_data.push_back(stpxmstportprotocolmigration.get_name_leafdata());
    if (stpxmstportstatus.is_set || is_set(stpxmstportstatus.yfilter)) leaf_name_data.push_back(stpxmstportstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSTPEXTENSIONSMIB::StpxMSTPortTable::StpxMSTPortEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSTPEXTENSIONSMIB::StpxMSTPortTable::StpxMSTPortEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSTPEXTENSIONSMIB::StpxMSTPortTable::StpxMSTPortEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOSTPEXTENSIONSMIB::StpxMSTPortTable::StpxMSTPortEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOSTPEXTENSIONSMIB::StpxMSTPortTable::StpxMSTPortEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxMSTPortIndex" || name == "stpxMSTPortAdminLinkType" || name == "stpxMSTPortOperLinkType" || name == "stpxMSTPortProtocolMigration" || name == "stpxMSTPortStatus")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::StpxMSTPortRoleTable::StpxMSTPortRoleTable()
    :
    stpxmstportroleentry(this, {"stpxmstportroleinstanceindex", "stpxmstportroleportindex"})
{

    yang_name = "stpxMSTPortRoleTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSTPEXTENSIONSMIB::StpxMSTPortRoleTable::~StpxMSTPortRoleTable()
{
}

bool CISCOSTPEXTENSIONSMIB::StpxMSTPortRoleTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stpxmstportroleentry.len(); index++)
    {
        if(stpxmstportroleentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSTPEXTENSIONSMIB::StpxMSTPortRoleTable::has_operation() const
{
    for (std::size_t index=0; index<stpxmstportroleentry.len(); index++)
    {
        if(stpxmstportroleentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::StpxMSTPortRoleTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::StpxMSTPortRoleTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxMSTPortRoleTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::StpxMSTPortRoleTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSTPEXTENSIONSMIB::StpxMSTPortRoleTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stpxMSTPortRoleEntry")
    {
        auto ent_ = std::make_shared<CISCOSTPEXTENSIONSMIB::StpxMSTPortRoleTable::StpxMSTPortRoleEntry>();
        ent_->parent = this;
        stpxmstportroleentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSTPEXTENSIONSMIB::StpxMSTPortRoleTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : stpxmstportroleentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOSTPEXTENSIONSMIB::StpxMSTPortRoleTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSTPEXTENSIONSMIB::StpxMSTPortRoleTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSTPEXTENSIONSMIB::StpxMSTPortRoleTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxMSTPortRoleEntry")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::StpxMSTPortRoleTable::StpxMSTPortRoleEntry::StpxMSTPortRoleEntry()
    :
    stpxmstportroleinstanceindex{YType::int32, "stpxMSTPortRoleInstanceIndex"},
    stpxmstportroleportindex{YType::int32, "stpxMSTPortRolePortIndex"},
    stpxmstportrolevalue{YType::enumeration, "stpxMSTPortRoleValue"}
{

    yang_name = "stpxMSTPortRoleEntry"; yang_parent_name = "stpxMSTPortRoleTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSTPEXTENSIONSMIB::StpxMSTPortRoleTable::StpxMSTPortRoleEntry::~StpxMSTPortRoleEntry()
{
}

bool CISCOSTPEXTENSIONSMIB::StpxMSTPortRoleTable::StpxMSTPortRoleEntry::has_data() const
{
    if (is_presence_container) return true;
    return stpxmstportroleinstanceindex.is_set
	|| stpxmstportroleportindex.is_set
	|| stpxmstportrolevalue.is_set;
}

bool CISCOSTPEXTENSIONSMIB::StpxMSTPortRoleTable::StpxMSTPortRoleEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxmstportroleinstanceindex.yfilter)
	|| ydk::is_set(stpxmstportroleportindex.yfilter)
	|| ydk::is_set(stpxmstportrolevalue.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::StpxMSTPortRoleTable::StpxMSTPortRoleEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxMSTPortRoleTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::StpxMSTPortRoleTable::StpxMSTPortRoleEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxMSTPortRoleEntry";
    ADD_KEY_TOKEN(stpxmstportroleinstanceindex, "stpxMSTPortRoleInstanceIndex");
    ADD_KEY_TOKEN(stpxmstportroleportindex, "stpxMSTPortRolePortIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::StpxMSTPortRoleTable::StpxMSTPortRoleEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxmstportroleinstanceindex.is_set || is_set(stpxmstportroleinstanceindex.yfilter)) leaf_name_data.push_back(stpxmstportroleinstanceindex.get_name_leafdata());
    if (stpxmstportroleportindex.is_set || is_set(stpxmstportroleportindex.yfilter)) leaf_name_data.push_back(stpxmstportroleportindex.get_name_leafdata());
    if (stpxmstportrolevalue.is_set || is_set(stpxmstportrolevalue.yfilter)) leaf_name_data.push_back(stpxmstportrolevalue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSTPEXTENSIONSMIB::StpxMSTPortRoleTable::StpxMSTPortRoleEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSTPEXTENSIONSMIB::StpxMSTPortRoleTable::StpxMSTPortRoleEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSTPEXTENSIONSMIB::StpxMSTPortRoleTable::StpxMSTPortRoleEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOSTPEXTENSIONSMIB::StpxMSTPortRoleTable::StpxMSTPortRoleEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOSTPEXTENSIONSMIB::StpxMSTPortRoleTable::StpxMSTPortRoleEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxMSTPortRoleInstanceIndex" || name == "stpxMSTPortRolePortIndex" || name == "stpxMSTPortRoleValue")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::StpxRSTPPortTable::StpxRSTPPortTable()
    :
    stpxrstpportentry(this, {"stpxrstpportindex"})
{

    yang_name = "stpxRSTPPortTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSTPEXTENSIONSMIB::StpxRSTPPortTable::~StpxRSTPPortTable()
{
}

bool CISCOSTPEXTENSIONSMIB::StpxRSTPPortTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stpxrstpportentry.len(); index++)
    {
        if(stpxrstpportentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSTPEXTENSIONSMIB::StpxRSTPPortTable::has_operation() const
{
    for (std::size_t index=0; index<stpxrstpportentry.len(); index++)
    {
        if(stpxrstpportentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::StpxRSTPPortTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::StpxRSTPPortTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxRSTPPortTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::StpxRSTPPortTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSTPEXTENSIONSMIB::StpxRSTPPortTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stpxRSTPPortEntry")
    {
        auto ent_ = std::make_shared<CISCOSTPEXTENSIONSMIB::StpxRSTPPortTable::StpxRSTPPortEntry>();
        ent_->parent = this;
        stpxrstpportentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSTPEXTENSIONSMIB::StpxRSTPPortTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : stpxrstpportentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOSTPEXTENSIONSMIB::StpxRSTPPortTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSTPEXTENSIONSMIB::StpxRSTPPortTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSTPEXTENSIONSMIB::StpxRSTPPortTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxRSTPPortEntry")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::StpxRSTPPortTable::StpxRSTPPortEntry::StpxRSTPPortEntry()
    :
    stpxrstpportindex{YType::int32, "stpxRSTPPortIndex"},
    stpxrstpportadminlinktype{YType::enumeration, "stpxRSTPPortAdminLinkType"},
    stpxrstpportoperlinktype{YType::enumeration, "stpxRSTPPortOperLinkType"},
    stpxrstpportprotocolmigration{YType::boolean, "stpxRSTPPortProtocolMigration"}
{

    yang_name = "stpxRSTPPortEntry"; yang_parent_name = "stpxRSTPPortTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSTPEXTENSIONSMIB::StpxRSTPPortTable::StpxRSTPPortEntry::~StpxRSTPPortEntry()
{
}

bool CISCOSTPEXTENSIONSMIB::StpxRSTPPortTable::StpxRSTPPortEntry::has_data() const
{
    if (is_presence_container) return true;
    return stpxrstpportindex.is_set
	|| stpxrstpportadminlinktype.is_set
	|| stpxrstpportoperlinktype.is_set
	|| stpxrstpportprotocolmigration.is_set;
}

bool CISCOSTPEXTENSIONSMIB::StpxRSTPPortTable::StpxRSTPPortEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxrstpportindex.yfilter)
	|| ydk::is_set(stpxrstpportadminlinktype.yfilter)
	|| ydk::is_set(stpxrstpportoperlinktype.yfilter)
	|| ydk::is_set(stpxrstpportprotocolmigration.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::StpxRSTPPortTable::StpxRSTPPortEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxRSTPPortTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::StpxRSTPPortTable::StpxRSTPPortEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxRSTPPortEntry";
    ADD_KEY_TOKEN(stpxrstpportindex, "stpxRSTPPortIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::StpxRSTPPortTable::StpxRSTPPortEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxrstpportindex.is_set || is_set(stpxrstpportindex.yfilter)) leaf_name_data.push_back(stpxrstpportindex.get_name_leafdata());
    if (stpxrstpportadminlinktype.is_set || is_set(stpxrstpportadminlinktype.yfilter)) leaf_name_data.push_back(stpxrstpportadminlinktype.get_name_leafdata());
    if (stpxrstpportoperlinktype.is_set || is_set(stpxrstpportoperlinktype.yfilter)) leaf_name_data.push_back(stpxrstpportoperlinktype.get_name_leafdata());
    if (stpxrstpportprotocolmigration.is_set || is_set(stpxrstpportprotocolmigration.yfilter)) leaf_name_data.push_back(stpxrstpportprotocolmigration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSTPEXTENSIONSMIB::StpxRSTPPortTable::StpxRSTPPortEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSTPEXTENSIONSMIB::StpxRSTPPortTable::StpxRSTPPortEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSTPEXTENSIONSMIB::StpxRSTPPortTable::StpxRSTPPortEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOSTPEXTENSIONSMIB::StpxRSTPPortTable::StpxRSTPPortEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOSTPEXTENSIONSMIB::StpxRSTPPortTable::StpxRSTPPortEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxRSTPPortIndex" || name == "stpxRSTPPortAdminLinkType" || name == "stpxRSTPPortOperLinkType" || name == "stpxRSTPPortProtocolMigration")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::StpxRSTPPortRoleTable::StpxRSTPPortRoleTable()
    :
    stpxrstpportroleentry(this, {"stpxrstpportroleinstanceindex", "stpxrstpportroleportindex"})
{

    yang_name = "stpxRSTPPortRoleTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSTPEXTENSIONSMIB::StpxRSTPPortRoleTable::~StpxRSTPPortRoleTable()
{
}

bool CISCOSTPEXTENSIONSMIB::StpxRSTPPortRoleTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stpxrstpportroleentry.len(); index++)
    {
        if(stpxrstpportroleentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSTPEXTENSIONSMIB::StpxRSTPPortRoleTable::has_operation() const
{
    for (std::size_t index=0; index<stpxrstpportroleentry.len(); index++)
    {
        if(stpxrstpportroleentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::StpxRSTPPortRoleTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::StpxRSTPPortRoleTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxRSTPPortRoleTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::StpxRSTPPortRoleTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSTPEXTENSIONSMIB::StpxRSTPPortRoleTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stpxRSTPPortRoleEntry")
    {
        auto ent_ = std::make_shared<CISCOSTPEXTENSIONSMIB::StpxRSTPPortRoleTable::StpxRSTPPortRoleEntry>();
        ent_->parent = this;
        stpxrstpportroleentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSTPEXTENSIONSMIB::StpxRSTPPortRoleTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : stpxrstpportroleentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOSTPEXTENSIONSMIB::StpxRSTPPortRoleTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSTPEXTENSIONSMIB::StpxRSTPPortRoleTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSTPEXTENSIONSMIB::StpxRSTPPortRoleTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxRSTPPortRoleEntry")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::StpxRSTPPortRoleTable::StpxRSTPPortRoleEntry::StpxRSTPPortRoleEntry()
    :
    stpxrstpportroleinstanceindex{YType::int32, "stpxRSTPPortRoleInstanceIndex"},
    stpxrstpportroleportindex{YType::int32, "stpxRSTPPortRolePortIndex"},
    stpxrstpportrolevalue{YType::enumeration, "stpxRSTPPortRoleValue"}
{

    yang_name = "stpxRSTPPortRoleEntry"; yang_parent_name = "stpxRSTPPortRoleTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSTPEXTENSIONSMIB::StpxRSTPPortRoleTable::StpxRSTPPortRoleEntry::~StpxRSTPPortRoleEntry()
{
}

bool CISCOSTPEXTENSIONSMIB::StpxRSTPPortRoleTable::StpxRSTPPortRoleEntry::has_data() const
{
    if (is_presence_container) return true;
    return stpxrstpportroleinstanceindex.is_set
	|| stpxrstpportroleportindex.is_set
	|| stpxrstpportrolevalue.is_set;
}

bool CISCOSTPEXTENSIONSMIB::StpxRSTPPortRoleTable::StpxRSTPPortRoleEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxrstpportroleinstanceindex.yfilter)
	|| ydk::is_set(stpxrstpportroleportindex.yfilter)
	|| ydk::is_set(stpxrstpportrolevalue.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::StpxRSTPPortRoleTable::StpxRSTPPortRoleEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxRSTPPortRoleTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::StpxRSTPPortRoleTable::StpxRSTPPortRoleEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxRSTPPortRoleEntry";
    ADD_KEY_TOKEN(stpxrstpportroleinstanceindex, "stpxRSTPPortRoleInstanceIndex");
    ADD_KEY_TOKEN(stpxrstpportroleportindex, "stpxRSTPPortRolePortIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::StpxRSTPPortRoleTable::StpxRSTPPortRoleEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxrstpportroleinstanceindex.is_set || is_set(stpxrstpportroleinstanceindex.yfilter)) leaf_name_data.push_back(stpxrstpportroleinstanceindex.get_name_leafdata());
    if (stpxrstpportroleportindex.is_set || is_set(stpxrstpportroleportindex.yfilter)) leaf_name_data.push_back(stpxrstpportroleportindex.get_name_leafdata());
    if (stpxrstpportrolevalue.is_set || is_set(stpxrstpportrolevalue.yfilter)) leaf_name_data.push_back(stpxrstpportrolevalue.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSTPEXTENSIONSMIB::StpxRSTPPortRoleTable::StpxRSTPPortRoleEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSTPEXTENSIONSMIB::StpxRSTPPortRoleTable::StpxRSTPPortRoleEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSTPEXTENSIONSMIB::StpxRSTPPortRoleTable::StpxRSTPPortRoleEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOSTPEXTENSIONSMIB::StpxRSTPPortRoleTable::StpxRSTPPortRoleEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOSTPEXTENSIONSMIB::StpxRSTPPortRoleTable::StpxRSTPPortRoleEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxRSTPPortRoleInstanceIndex" || name == "stpxRSTPPortRolePortIndex" || name == "stpxRSTPPortRoleValue")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::StpxRPVSTPortTable::StpxRPVSTPortTable()
    :
    stpxrpvstportentry(this, {"stpxrpvstportvlanindex", "stpxrpvstportindex"})
{

    yang_name = "stpxRPVSTPortTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSTPEXTENSIONSMIB::StpxRPVSTPortTable::~StpxRPVSTPortTable()
{
}

bool CISCOSTPEXTENSIONSMIB::StpxRPVSTPortTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stpxrpvstportentry.len(); index++)
    {
        if(stpxrpvstportentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSTPEXTENSIONSMIB::StpxRPVSTPortTable::has_operation() const
{
    for (std::size_t index=0; index<stpxrpvstportentry.len(); index++)
    {
        if(stpxrpvstportentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::StpxRPVSTPortTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::StpxRPVSTPortTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxRPVSTPortTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::StpxRPVSTPortTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSTPEXTENSIONSMIB::StpxRPVSTPortTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stpxRPVSTPortEntry")
    {
        auto ent_ = std::make_shared<CISCOSTPEXTENSIONSMIB::StpxRPVSTPortTable::StpxRPVSTPortEntry>();
        ent_->parent = this;
        stpxrpvstportentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSTPEXTENSIONSMIB::StpxRPVSTPortTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : stpxrpvstportentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOSTPEXTENSIONSMIB::StpxRPVSTPortTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSTPEXTENSIONSMIB::StpxRPVSTPortTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSTPEXTENSIONSMIB::StpxRPVSTPortTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxRPVSTPortEntry")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::StpxRPVSTPortTable::StpxRPVSTPortEntry::StpxRPVSTPortEntry()
    :
    stpxrpvstportvlanindex{YType::int32, "stpxRPVSTPortVlanIndex"},
    stpxrpvstportindex{YType::int32, "stpxRPVSTPortIndex"},
    stpxrpvstportstatus{YType::bits, "stpxRPVSTPortStatus"}
{

    yang_name = "stpxRPVSTPortEntry"; yang_parent_name = "stpxRPVSTPortTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSTPEXTENSIONSMIB::StpxRPVSTPortTable::StpxRPVSTPortEntry::~StpxRPVSTPortEntry()
{
}

bool CISCOSTPEXTENSIONSMIB::StpxRPVSTPortTable::StpxRPVSTPortEntry::has_data() const
{
    if (is_presence_container) return true;
    return stpxrpvstportvlanindex.is_set
	|| stpxrpvstportindex.is_set
	|| stpxrpvstportstatus.is_set;
}

bool CISCOSTPEXTENSIONSMIB::StpxRPVSTPortTable::StpxRPVSTPortEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxrpvstportvlanindex.yfilter)
	|| ydk::is_set(stpxrpvstportindex.yfilter)
	|| ydk::is_set(stpxrpvstportstatus.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::StpxRPVSTPortTable::StpxRPVSTPortEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxRPVSTPortTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::StpxRPVSTPortTable::StpxRPVSTPortEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxRPVSTPortEntry";
    ADD_KEY_TOKEN(stpxrpvstportvlanindex, "stpxRPVSTPortVlanIndex");
    ADD_KEY_TOKEN(stpxrpvstportindex, "stpxRPVSTPortIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::StpxRPVSTPortTable::StpxRPVSTPortEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxrpvstportvlanindex.is_set || is_set(stpxrpvstportvlanindex.yfilter)) leaf_name_data.push_back(stpxrpvstportvlanindex.get_name_leafdata());
    if (stpxrpvstportindex.is_set || is_set(stpxrpvstportindex.yfilter)) leaf_name_data.push_back(stpxrpvstportindex.get_name_leafdata());
    if (stpxrpvstportstatus.is_set || is_set(stpxrpvstportstatus.yfilter)) leaf_name_data.push_back(stpxrpvstportstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSTPEXTENSIONSMIB::StpxRPVSTPortTable::StpxRPVSTPortEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSTPEXTENSIONSMIB::StpxRPVSTPortTable::StpxRPVSTPortEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSTPEXTENSIONSMIB::StpxRPVSTPortTable::StpxRPVSTPortEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void CISCOSTPEXTENSIONSMIB::StpxRPVSTPortTable::StpxRPVSTPortEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool CISCOSTPEXTENSIONSMIB::StpxRPVSTPortTable::StpxRPVSTPortEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxRPVSTPortVlanIndex" || name == "stpxRPVSTPortIndex" || name == "stpxRPVSTPortStatus")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceTable::StpxSMSTInstanceTable()
    :
    stpxsmstinstanceentry(this, {"stpxsmstinstanceindex"})
{

    yang_name = "stpxSMSTInstanceTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceTable::~StpxSMSTInstanceTable()
{
}

bool CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stpxsmstinstanceentry.len(); index++)
    {
        if(stpxsmstinstanceentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceTable::has_operation() const
{
    for (std::size_t index=0; index<stpxsmstinstanceentry.len(); index++)
    {
        if(stpxsmstinstanceentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxSMSTInstanceTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stpxSMSTInstanceEntry")
    {
        auto ent_ = std::make_shared<CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceTable::StpxSMSTInstanceEntry>();
        ent_->parent = this;
        stpxsmstinstanceentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : stpxsmstinstanceentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxSMSTInstanceEntry")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceTable::StpxSMSTInstanceEntry::StpxSMSTInstanceEntry()
    :
    stpxsmstinstanceindex{YType::uint32, "stpxSMSTInstanceIndex"},
    stpxsmstinstancevlansmapped1k2k{YType::str, "stpxSMSTInstanceVlansMapped1k2k"},
    stpxsmstinstancevlansmapped3k4k{YType::str, "stpxSMSTInstanceVlansMapped3k4k"},
    stpxsmstinstanceremaininghopcount{YType::int32, "stpxSMSTInstanceRemainingHopCount"},
    stpxsmstinstancecistregionalroot{YType::str, "stpxSMSTInstanceCISTRegionalRoot"},
    stpxsmstinstancecistintrootcost{YType::uint32, "stpxSMSTInstanceCISTIntRootCost"}
{

    yang_name = "stpxSMSTInstanceEntry"; yang_parent_name = "stpxSMSTInstanceTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceTable::StpxSMSTInstanceEntry::~StpxSMSTInstanceEntry()
{
}

bool CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceTable::StpxSMSTInstanceEntry::has_data() const
{
    if (is_presence_container) return true;
    return stpxsmstinstanceindex.is_set
	|| stpxsmstinstancevlansmapped1k2k.is_set
	|| stpxsmstinstancevlansmapped3k4k.is_set
	|| stpxsmstinstanceremaininghopcount.is_set
	|| stpxsmstinstancecistregionalroot.is_set
	|| stpxsmstinstancecistintrootcost.is_set;
}

bool CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceTable::StpxSMSTInstanceEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxsmstinstanceindex.yfilter)
	|| ydk::is_set(stpxsmstinstancevlansmapped1k2k.yfilter)
	|| ydk::is_set(stpxsmstinstancevlansmapped3k4k.yfilter)
	|| ydk::is_set(stpxsmstinstanceremaininghopcount.yfilter)
	|| ydk::is_set(stpxsmstinstancecistregionalroot.yfilter)
	|| ydk::is_set(stpxsmstinstancecistintrootcost.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceTable::StpxSMSTInstanceEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxSMSTInstanceTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceTable::StpxSMSTInstanceEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxSMSTInstanceEntry";
    ADD_KEY_TOKEN(stpxsmstinstanceindex, "stpxSMSTInstanceIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceTable::StpxSMSTInstanceEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxsmstinstanceindex.is_set || is_set(stpxsmstinstanceindex.yfilter)) leaf_name_data.push_back(stpxsmstinstanceindex.get_name_leafdata());
    if (stpxsmstinstancevlansmapped1k2k.is_set || is_set(stpxsmstinstancevlansmapped1k2k.yfilter)) leaf_name_data.push_back(stpxsmstinstancevlansmapped1k2k.get_name_leafdata());
    if (stpxsmstinstancevlansmapped3k4k.is_set || is_set(stpxsmstinstancevlansmapped3k4k.yfilter)) leaf_name_data.push_back(stpxsmstinstancevlansmapped3k4k.get_name_leafdata());
    if (stpxsmstinstanceremaininghopcount.is_set || is_set(stpxsmstinstanceremaininghopcount.yfilter)) leaf_name_data.push_back(stpxsmstinstanceremaininghopcount.get_name_leafdata());
    if (stpxsmstinstancecistregionalroot.is_set || is_set(stpxsmstinstancecistregionalroot.yfilter)) leaf_name_data.push_back(stpxsmstinstancecistregionalroot.get_name_leafdata());
    if (stpxsmstinstancecistintrootcost.is_set || is_set(stpxsmstinstancecistintrootcost.yfilter)) leaf_name_data.push_back(stpxsmstinstancecistintrootcost.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceTable::StpxSMSTInstanceEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceTable::StpxSMSTInstanceEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceTable::StpxSMSTInstanceEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stpxSMSTInstanceIndex")
    {
        stpxsmstinstanceindex = value;
        stpxsmstinstanceindex.value_namespace = name_space;
        stpxsmstinstanceindex.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "stpxSMSTInstanceRemainingHopCount")
    {
        stpxsmstinstanceremaininghopcount = value;
        stpxsmstinstanceremaininghopcount.value_namespace = name_space;
        stpxsmstinstanceremaininghopcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxSMSTInstanceCISTRegionalRoot")
    {
        stpxsmstinstancecistregionalroot = value;
        stpxsmstinstancecistregionalroot.value_namespace = name_space;
        stpxsmstinstancecistregionalroot.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxSMSTInstanceCISTIntRootCost")
    {
        stpxsmstinstancecistintrootcost = value;
        stpxsmstinstancecistintrootcost.value_namespace = name_space;
        stpxsmstinstancecistintrootcost.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceTable::StpxSMSTInstanceEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stpxSMSTInstanceIndex")
    {
        stpxsmstinstanceindex.yfilter = yfilter;
    }
    if(value_path == "stpxSMSTInstanceVlansMapped1k2k")
    {
        stpxsmstinstancevlansmapped1k2k.yfilter = yfilter;
    }
    if(value_path == "stpxSMSTInstanceVlansMapped3k4k")
    {
        stpxsmstinstancevlansmapped3k4k.yfilter = yfilter;
    }
    if(value_path == "stpxSMSTInstanceRemainingHopCount")
    {
        stpxsmstinstanceremaininghopcount.yfilter = yfilter;
    }
    if(value_path == "stpxSMSTInstanceCISTRegionalRoot")
    {
        stpxsmstinstancecistregionalroot.yfilter = yfilter;
    }
    if(value_path == "stpxSMSTInstanceCISTIntRootCost")
    {
        stpxsmstinstancecistintrootcost.yfilter = yfilter;
    }
}

bool CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceTable::StpxSMSTInstanceEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxSMSTInstanceIndex" || name == "stpxSMSTInstanceVlansMapped1k2k" || name == "stpxSMSTInstanceVlansMapped3k4k" || name == "stpxSMSTInstanceRemainingHopCount" || name == "stpxSMSTInstanceCISTRegionalRoot" || name == "stpxSMSTInstanceCISTIntRootCost")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceEditTable::StpxSMSTInstanceEditTable()
    :
    stpxsmstinstanceeditentry(this, {"stpxsmstinstanceeditindex"})
{

    yang_name = "stpxSMSTInstanceEditTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceEditTable::~StpxSMSTInstanceEditTable()
{
}

bool CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceEditTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stpxsmstinstanceeditentry.len(); index++)
    {
        if(stpxsmstinstanceeditentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceEditTable::has_operation() const
{
    for (std::size_t index=0; index<stpxsmstinstanceeditentry.len(); index++)
    {
        if(stpxsmstinstanceeditentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceEditTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceEditTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxSMSTInstanceEditTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceEditTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceEditTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stpxSMSTInstanceEditEntry")
    {
        auto ent_ = std::make_shared<CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceEditTable::StpxSMSTInstanceEditEntry>();
        ent_->parent = this;
        stpxsmstinstanceeditentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceEditTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : stpxsmstinstanceeditentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceEditTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceEditTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceEditTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxSMSTInstanceEditEntry")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceEditTable::StpxSMSTInstanceEditEntry::StpxSMSTInstanceEditEntry()
    :
    stpxsmstinstanceeditindex{YType::uint32, "stpxSMSTInstanceEditIndex"},
    stpxsmstinstanceeditvlansmap1k2k{YType::str, "stpxSMSTInstanceEditVlansMap1k2k"},
    stpxsmstinstanceeditvlansmap3k4k{YType::str, "stpxSMSTInstanceEditVlansMap3k4k"},
    stpxsmstinstanceeditrowstatus{YType::enumeration, "stpxSMSTInstanceEditRowStatus"}
{

    yang_name = "stpxSMSTInstanceEditEntry"; yang_parent_name = "stpxSMSTInstanceEditTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceEditTable::StpxSMSTInstanceEditEntry::~StpxSMSTInstanceEditEntry()
{
}

bool CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceEditTable::StpxSMSTInstanceEditEntry::has_data() const
{
    if (is_presence_container) return true;
    return stpxsmstinstanceeditindex.is_set
	|| stpxsmstinstanceeditvlansmap1k2k.is_set
	|| stpxsmstinstanceeditvlansmap3k4k.is_set
	|| stpxsmstinstanceeditrowstatus.is_set;
}

bool CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceEditTable::StpxSMSTInstanceEditEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxsmstinstanceeditindex.yfilter)
	|| ydk::is_set(stpxsmstinstanceeditvlansmap1k2k.yfilter)
	|| ydk::is_set(stpxsmstinstanceeditvlansmap3k4k.yfilter)
	|| ydk::is_set(stpxsmstinstanceeditrowstatus.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceEditTable::StpxSMSTInstanceEditEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxSMSTInstanceEditTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceEditTable::StpxSMSTInstanceEditEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxSMSTInstanceEditEntry";
    ADD_KEY_TOKEN(stpxsmstinstanceeditindex, "stpxSMSTInstanceEditIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceEditTable::StpxSMSTInstanceEditEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxsmstinstanceeditindex.is_set || is_set(stpxsmstinstanceeditindex.yfilter)) leaf_name_data.push_back(stpxsmstinstanceeditindex.get_name_leafdata());
    if (stpxsmstinstanceeditvlansmap1k2k.is_set || is_set(stpxsmstinstanceeditvlansmap1k2k.yfilter)) leaf_name_data.push_back(stpxsmstinstanceeditvlansmap1k2k.get_name_leafdata());
    if (stpxsmstinstanceeditvlansmap3k4k.is_set || is_set(stpxsmstinstanceeditvlansmap3k4k.yfilter)) leaf_name_data.push_back(stpxsmstinstanceeditvlansmap3k4k.get_name_leafdata());
    if (stpxsmstinstanceeditrowstatus.is_set || is_set(stpxsmstinstanceeditrowstatus.yfilter)) leaf_name_data.push_back(stpxsmstinstanceeditrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceEditTable::StpxSMSTInstanceEditEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceEditTable::StpxSMSTInstanceEditEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceEditTable::StpxSMSTInstanceEditEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stpxSMSTInstanceEditIndex")
    {
        stpxsmstinstanceeditindex = value;
        stpxsmstinstanceeditindex.value_namespace = name_space;
        stpxsmstinstanceeditindex.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "stpxSMSTInstanceEditRowStatus")
    {
        stpxsmstinstanceeditrowstatus = value;
        stpxsmstinstanceeditrowstatus.value_namespace = name_space;
        stpxsmstinstanceeditrowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceEditTable::StpxSMSTInstanceEditEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stpxSMSTInstanceEditIndex")
    {
        stpxsmstinstanceeditindex.yfilter = yfilter;
    }
    if(value_path == "stpxSMSTInstanceEditVlansMap1k2k")
    {
        stpxsmstinstanceeditvlansmap1k2k.yfilter = yfilter;
    }
    if(value_path == "stpxSMSTInstanceEditVlansMap3k4k")
    {
        stpxsmstinstanceeditvlansmap3k4k.yfilter = yfilter;
    }
    if(value_path == "stpxSMSTInstanceEditRowStatus")
    {
        stpxsmstinstanceeditrowstatus.yfilter = yfilter;
    }
}

bool CISCOSTPEXTENSIONSMIB::StpxSMSTInstanceEditTable::StpxSMSTInstanceEditEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxSMSTInstanceEditIndex" || name == "stpxSMSTInstanceEditVlansMap1k2k" || name == "stpxSMSTInstanceEditVlansMap3k4k" || name == "stpxSMSTInstanceEditRowStatus")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::StpxSMSTPortTable::StpxSMSTPortTable()
    :
    stpxsmstportentry(this, {"stpxsmstportindex"})
{

    yang_name = "stpxSMSTPortTable"; yang_parent_name = "CISCO-STP-EXTENSIONS-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSTPEXTENSIONSMIB::StpxSMSTPortTable::~StpxSMSTPortTable()
{
}

bool CISCOSTPEXTENSIONSMIB::StpxSMSTPortTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<stpxsmstportentry.len(); index++)
    {
        if(stpxsmstportentry[index]->has_data())
            return true;
    }
    return false;
}

bool CISCOSTPEXTENSIONSMIB::StpxSMSTPortTable::has_operation() const
{
    for (std::size_t index=0; index<stpxsmstportentry.len(); index++)
    {
        if(stpxsmstportentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::StpxSMSTPortTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::StpxSMSTPortTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxSMSTPortTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::StpxSMSTPortTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSTPEXTENSIONSMIB::StpxSMSTPortTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stpxSMSTPortEntry")
    {
        auto ent_ = std::make_shared<CISCOSTPEXTENSIONSMIB::StpxSMSTPortTable::StpxSMSTPortEntry>();
        ent_->parent = this;
        stpxsmstportentry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSTPEXTENSIONSMIB::StpxSMSTPortTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : stpxsmstportentry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void CISCOSTPEXTENSIONSMIB::StpxSMSTPortTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CISCOSTPEXTENSIONSMIB::StpxSMSTPortTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool CISCOSTPEXTENSIONSMIB::StpxSMSTPortTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxSMSTPortEntry")
        return true;
    return false;
}

CISCOSTPEXTENSIONSMIB::StpxSMSTPortTable::StpxSMSTPortEntry::StpxSMSTPortEntry()
    :
    stpxsmstportindex{YType::int32, "stpxSMSTPortIndex"},
    stpxsmstportstatus{YType::bits, "stpxSMSTPortStatus"},
    stpxsmstportadminhellotime{YType::uint32, "stpxSMSTPortAdminHelloTime"},
    stpxsmstportconfigedhellotime{YType::uint32, "stpxSMSTPortConfigedHelloTime"},
    stpxsmstportoperhellotime{YType::int32, "stpxSMSTPortOperHelloTime"},
    stpxsmstportadminmstmode{YType::enumeration, "stpxSMSTPortAdminMSTMode"},
    stpxsmstportopermstmode{YType::enumeration, "stpxSMSTPortOperMSTMode"}
{

    yang_name = "stpxSMSTPortEntry"; yang_parent_name = "stpxSMSTPortTable"; is_top_level_class = false; has_list_ancestor = false; 
}

CISCOSTPEXTENSIONSMIB::StpxSMSTPortTable::StpxSMSTPortEntry::~StpxSMSTPortEntry()
{
}

bool CISCOSTPEXTENSIONSMIB::StpxSMSTPortTable::StpxSMSTPortEntry::has_data() const
{
    if (is_presence_container) return true;
    return stpxsmstportindex.is_set
	|| stpxsmstportstatus.is_set
	|| stpxsmstportadminhellotime.is_set
	|| stpxsmstportconfigedhellotime.is_set
	|| stpxsmstportoperhellotime.is_set
	|| stpxsmstportadminmstmode.is_set
	|| stpxsmstportopermstmode.is_set;
}

bool CISCOSTPEXTENSIONSMIB::StpxSMSTPortTable::StpxSMSTPortEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(stpxsmstportindex.yfilter)
	|| ydk::is_set(stpxsmstportstatus.yfilter)
	|| ydk::is_set(stpxsmstportadminhellotime.yfilter)
	|| ydk::is_set(stpxsmstportconfigedhellotime.yfilter)
	|| ydk::is_set(stpxsmstportoperhellotime.yfilter)
	|| ydk::is_set(stpxsmstportadminmstmode.yfilter)
	|| ydk::is_set(stpxsmstportopermstmode.yfilter);
}

std::string CISCOSTPEXTENSIONSMIB::StpxSMSTPortTable::StpxSMSTPortEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "CISCO-STP-EXTENSIONS-MIB:CISCO-STP-EXTENSIONS-MIB/stpxSMSTPortTable/" << get_segment_path();
    return path_buffer.str();
}

std::string CISCOSTPEXTENSIONSMIB::StpxSMSTPortTable::StpxSMSTPortEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stpxSMSTPortEntry";
    ADD_KEY_TOKEN(stpxsmstportindex, "stpxSMSTPortIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CISCOSTPEXTENSIONSMIB::StpxSMSTPortTable::StpxSMSTPortEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (stpxsmstportindex.is_set || is_set(stpxsmstportindex.yfilter)) leaf_name_data.push_back(stpxsmstportindex.get_name_leafdata());
    if (stpxsmstportstatus.is_set || is_set(stpxsmstportstatus.yfilter)) leaf_name_data.push_back(stpxsmstportstatus.get_name_leafdata());
    if (stpxsmstportadminhellotime.is_set || is_set(stpxsmstportadminhellotime.yfilter)) leaf_name_data.push_back(stpxsmstportadminhellotime.get_name_leafdata());
    if (stpxsmstportconfigedhellotime.is_set || is_set(stpxsmstportconfigedhellotime.yfilter)) leaf_name_data.push_back(stpxsmstportconfigedhellotime.get_name_leafdata());
    if (stpxsmstportoperhellotime.is_set || is_set(stpxsmstportoperhellotime.yfilter)) leaf_name_data.push_back(stpxsmstportoperhellotime.get_name_leafdata());
    if (stpxsmstportadminmstmode.is_set || is_set(stpxsmstportadminmstmode.yfilter)) leaf_name_data.push_back(stpxsmstportadminmstmode.get_name_leafdata());
    if (stpxsmstportopermstmode.is_set || is_set(stpxsmstportopermstmode.yfilter)) leaf_name_data.push_back(stpxsmstportopermstmode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> CISCOSTPEXTENSIONSMIB::StpxSMSTPortTable::StpxSMSTPortEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> CISCOSTPEXTENSIONSMIB::StpxSMSTPortTable::StpxSMSTPortEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void CISCOSTPEXTENSIONSMIB::StpxSMSTPortTable::StpxSMSTPortEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "stpxSMSTPortIndex")
    {
        stpxsmstportindex = value;
        stpxsmstportindex.value_namespace = name_space;
        stpxsmstportindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxSMSTPortStatus")
    {
        stpxsmstportstatus[value] = true;
    }
    if(value_path == "stpxSMSTPortAdminHelloTime")
    {
        stpxsmstportadminhellotime = value;
        stpxsmstportadminhellotime.value_namespace = name_space;
        stpxsmstportadminhellotime.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "stpxSMSTPortAdminMSTMode")
    {
        stpxsmstportadminmstmode = value;
        stpxsmstportadminmstmode.value_namespace = name_space;
        stpxsmstportadminmstmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stpxSMSTPortOperMSTMode")
    {
        stpxsmstportopermstmode = value;
        stpxsmstportopermstmode.value_namespace = name_space;
        stpxsmstportopermstmode.value_namespace_prefix = name_space_prefix;
    }
}

void CISCOSTPEXTENSIONSMIB::StpxSMSTPortTable::StpxSMSTPortEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "stpxSMSTPortIndex")
    {
        stpxsmstportindex.yfilter = yfilter;
    }
    if(value_path == "stpxSMSTPortStatus")
    {
        stpxsmstportstatus.yfilter = yfilter;
    }
    if(value_path == "stpxSMSTPortAdminHelloTime")
    {
        stpxsmstportadminhellotime.yfilter = yfilter;
    }
    if(value_path == "stpxSMSTPortConfigedHelloTime")
    {
        stpxsmstportconfigedhellotime.yfilter = yfilter;
    }
    if(value_path == "stpxSMSTPortOperHelloTime")
    {
        stpxsmstportoperhellotime.yfilter = yfilter;
    }
    if(value_path == "stpxSMSTPortAdminMSTMode")
    {
        stpxsmstportadminmstmode.yfilter = yfilter;
    }
    if(value_path == "stpxSMSTPortOperMSTMode")
    {
        stpxsmstportopermstmode.yfilter = yfilter;
    }
}

bool CISCOSTPEXTENSIONSMIB::StpxSMSTPortTable::StpxSMSTPortEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "stpxSMSTPortIndex" || name == "stpxSMSTPortStatus" || name == "stpxSMSTPortAdminHelloTime" || name == "stpxSMSTPortConfigedHelloTime" || name == "stpxSMSTPortOperHelloTime" || name == "stpxSMSTPortAdminMSTMode" || name == "stpxSMSTPortOperMSTMode")
        return true;
    return false;
}

const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxSpanningTreeObjects::StpxSpanningTreeType::pvstPlus {1, "pvstPlus"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxSpanningTreeObjects::StpxSpanningTreeType::mistp {2, "mistp"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxSpanningTreeObjects::StpxSpanningTreeType::mistpPvstPlus {3, "mistpPvstPlus"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxSpanningTreeObjects::StpxSpanningTreeType::mst {4, "mst"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxSpanningTreeObjects::StpxSpanningTreeType::rapidPvstPlus {5, "rapidPvstPlus"};

const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxSpanningTreeObjects::StpxSpanningTreePathCostMode::short_ {1, "short"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxSpanningTreeObjects::StpxSpanningTreePathCostMode::long_ {2, "long"};

const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxSpanningTreeObjects::StpxSpanningTreePathCostOperMode::short_ {1, "short"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxSpanningTreeObjects::StpxSpanningTreePathCostOperMode::long_ {2, "long"};

const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxLoopGuardObjects::StpxLoopGuardGlobalDefaultMode::enable {1, "enable"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxLoopGuardObjects::StpxLoopGuardGlobalDefaultMode::disable {2, "disable"};

const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxFastStartObjects::StpxFastStartGlobalDefaultMode::enable {1, "enable"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxFastStartObjects::StpxFastStartGlobalDefaultMode::disable {2, "disable"};

const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxMSTObjects::StpxMSTRegionEditBufferStatus::released {1, "released"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxMSTObjects::StpxMSTRegionEditBufferStatus::acquiredBySnmp {2, "acquiredBySnmp"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxMSTObjects::StpxMSTRegionEditBufferStatus::acquiredByNonSnmp {3, "acquiredByNonSnmp"};

const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxMSTObjects::StpxMSTRegionEditBufferOperation::other {1, "other"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxMSTObjects::StpxMSTRegionEditBufferOperation::acquire {2, "acquire"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxMSTObjects::StpxMSTRegionEditBufferOperation::releaseWithForce {3, "releaseWithForce"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxMSTObjects::StpxMSTRegionEditBufferOperation::commit {4, "commit"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxMSTObjects::StpxMSTRegionEditBufferOperation::rollBack {5, "rollBack"};

const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxPVSTVlanTable::StpxPVSTVlanEntry::StpxPVSTVlanEnable::enabled {1, "enabled"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxPVSTVlanTable::StpxPVSTVlanEntry::StpxPVSTVlanEnable::disabled {2, "disabled"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxPVSTVlanTable::StpxPVSTVlanEntry::StpxPVSTVlanEnable::notApplicable {3, "notApplicable"};

const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxLoopGuardConfigTable::StpxLoopGuardConfigEntry::StpxLoopGuardConfigMode::enable {1, "enable"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxLoopGuardConfigTable::StpxLoopGuardConfigEntry::StpxLoopGuardConfigMode::disable {2, "disable"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxLoopGuardConfigTable::StpxLoopGuardConfigEntry::StpxLoopGuardConfigMode::default_ {3, "default"};

const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxFastStartPortTable::StpxFastStartPortEntry::StpxFastStartPortMode::enable {1, "enable"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxFastStartPortTable::StpxFastStartPortEntry::StpxFastStartPortMode::disable {2, "disable"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxFastStartPortTable::StpxFastStartPortEntry::StpxFastStartPortMode::enableForTrunk {3, "enableForTrunk"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxFastStartPortTable::StpxFastStartPortEntry::StpxFastStartPortMode::default_ {4, "default"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxFastStartPortTable::StpxFastStartPortEntry::StpxFastStartPortMode::network {5, "network"};

const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxFastStartPortTable::StpxFastStartPortEntry::StpxFastStartPortBpduGuardMode::enable {1, "enable"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxFastStartPortTable::StpxFastStartPortEntry::StpxFastStartPortBpduGuardMode::disable {2, "disable"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxFastStartPortTable::StpxFastStartPortEntry::StpxFastStartPortBpduGuardMode::default_ {3, "default"};

const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxFastStartPortTable::StpxFastStartPortEntry::StpxFastStartPortBpduFilterMode::enable {1, "enable"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxFastStartPortTable::StpxFastStartPortEntry::StpxFastStartPortBpduFilterMode::disable {2, "disable"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxFastStartPortTable::StpxFastStartPortEntry::StpxFastStartPortBpduFilterMode::default_ {3, "default"};

const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxFastStartOperModeTable::StpxFastStartOperModeEntry::StpxFastStartOperMode::enabled {1, "enabled"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxFastStartOperModeTable::StpxFastStartOperModeEntry::StpxFastStartOperMode::disabled {2, "disabled"};

const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxMSTPortTable::StpxMSTPortEntry::StpxMSTPortAdminLinkType::pointToPoint {1, "pointToPoint"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxMSTPortTable::StpxMSTPortEntry::StpxMSTPortAdminLinkType::shared {2, "shared"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxMSTPortTable::StpxMSTPortEntry::StpxMSTPortAdminLinkType::auto_ {3, "auto"};

const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxMSTPortTable::StpxMSTPortEntry::StpxMSTPortOperLinkType::pointToPoint {1, "pointToPoint"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxMSTPortTable::StpxMSTPortEntry::StpxMSTPortOperLinkType::shared {2, "shared"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxMSTPortTable::StpxMSTPortEntry::StpxMSTPortOperLinkType::other {3, "other"};

const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxMSTPortRoleTable::StpxMSTPortRoleEntry::StpxMSTPortRoleValue::disabled {1, "disabled"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxMSTPortRoleTable::StpxMSTPortRoleEntry::StpxMSTPortRoleValue::root {2, "root"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxMSTPortRoleTable::StpxMSTPortRoleEntry::StpxMSTPortRoleValue::designated {3, "designated"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxMSTPortRoleTable::StpxMSTPortRoleEntry::StpxMSTPortRoleValue::alternate {4, "alternate"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxMSTPortRoleTable::StpxMSTPortRoleEntry::StpxMSTPortRoleValue::backUp {5, "backUp"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxMSTPortRoleTable::StpxMSTPortRoleEntry::StpxMSTPortRoleValue::boundary {6, "boundary"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxMSTPortRoleTable::StpxMSTPortRoleEntry::StpxMSTPortRoleValue::master {7, "master"};

const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxRSTPPortTable::StpxRSTPPortEntry::StpxRSTPPortAdminLinkType::pointToPoint {1, "pointToPoint"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxRSTPPortTable::StpxRSTPPortEntry::StpxRSTPPortAdminLinkType::shared {2, "shared"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxRSTPPortTable::StpxRSTPPortEntry::StpxRSTPPortAdminLinkType::auto_ {3, "auto"};

const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxRSTPPortTable::StpxRSTPPortEntry::StpxRSTPPortOperLinkType::pointToPoint {1, "pointToPoint"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxRSTPPortTable::StpxRSTPPortEntry::StpxRSTPPortOperLinkType::shared {2, "shared"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxRSTPPortTable::StpxRSTPPortEntry::StpxRSTPPortOperLinkType::other {3, "other"};

const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxRSTPPortRoleTable::StpxRSTPPortRoleEntry::StpxRSTPPortRoleValue::disabled {1, "disabled"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxRSTPPortRoleTable::StpxRSTPPortRoleEntry::StpxRSTPPortRoleValue::root {2, "root"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxRSTPPortRoleTable::StpxRSTPPortRoleEntry::StpxRSTPPortRoleValue::designated {3, "designated"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxRSTPPortRoleTable::StpxRSTPPortRoleEntry::StpxRSTPPortRoleValue::alternate {4, "alternate"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxRSTPPortRoleTable::StpxRSTPPortRoleEntry::StpxRSTPPortRoleValue::backUp {5, "backUp"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxRSTPPortRoleTable::StpxRSTPPortRoleEntry::StpxRSTPPortRoleValue::boundary {6, "boundary"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxRSTPPortRoleTable::StpxRSTPPortRoleEntry::StpxRSTPPortRoleValue::master {7, "master"};

const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxSMSTPortTable::StpxSMSTPortEntry::StpxSMSTPortAdminMSTMode::preStandard {1, "preStandard"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxSMSTPortTable::StpxSMSTPortEntry::StpxSMSTPortAdminMSTMode::auto_ {2, "auto"};

const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxSMSTPortTable::StpxSMSTPortEntry::StpxSMSTPortOperMSTMode::unknown {1, "unknown"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxSMSTPortTable::StpxSMSTPortEntry::StpxSMSTPortOperMSTMode::preStandard {2, "preStandard"};
const Enum::YLeaf CISCOSTPEXTENSIONSMIB::StpxSMSTPortTable::StpxSMSTPortEntry::StpxSMSTPortOperMSTMode::standard {3, "standard"};


}
}

