
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "DOCS_IF3_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace DOCS_IF3_MIB {

DOCSIF3MIB::DOCSIF3MIB()
    :
    docsif3cmcapabilities(std::make_shared<DOCSIF3MIB::DocsIf3CmCapabilities>())
    , docsif3cmtscmctrl(std::make_shared<DOCSIF3MIB::DocsIf3CmtsCmCtrl>())
    , docsif3cmenergymgtcfg(std::make_shared<DOCSIF3MIB::DocsIf3CmEnergyMgtCfg>())
    , docsif3cmspectrumanalysisctrlcmd(std::make_shared<DOCSIF3MIB::DocsIf3CmSpectrumAnalysisCtrlCmd>())
    , docsif3cmstatustable(std::make_shared<DOCSIF3MIB::DocsIf3CmStatusTable>())
    , docsif3cmstatusustable(std::make_shared<DOCSIF3MIB::DocsIf3CmStatusUsTable>())
    , docsif3cmtscmregstatustable(std::make_shared<DOCSIF3MIB::DocsIf3CmtsCmRegStatusTable>())
    , docsif3cmtscmusstatustable(std::make_shared<DOCSIF3MIB::DocsIf3CmtsCmUsStatusTable>())
    , docsif3mdchcfgtable(std::make_shared<DOCSIF3MIB::DocsIf3MdChCfgTable>())
    , docsif3rcccfgtable(std::make_shared<DOCSIF3MIB::DocsIf3RccCfgTable>())
    , docsif3rccstatustable(std::make_shared<DOCSIF3MIB::DocsIf3RccStatusTable>())
    , docsif3rxchcfgtable(std::make_shared<DOCSIF3MIB::DocsIf3RxChCfgTable>())
    , docsif3rxchstatustable(std::make_shared<DOCSIF3MIB::DocsIf3RxChStatusTable>())
    , docsif3rxmodulecfgtable(std::make_shared<DOCSIF3MIB::DocsIf3RxModuleCfgTable>())
    , docsif3rxmodulestatustable(std::make_shared<DOCSIF3MIB::DocsIf3RxModuleStatusTable>())
    , docsif3mdnodestatustable(std::make_shared<DOCSIF3MIB::DocsIf3MdNodeStatusTable>())
    , docsif3mddssgstatustable(std::make_shared<DOCSIF3MIB::DocsIf3MdDsSgStatusTable>())
    , docsif3mdussgstatustable(std::make_shared<DOCSIF3MIB::DocsIf3MdUsSgStatusTable>())
    , docsif3mdustodschmappingtable(std::make_shared<DOCSIF3MIB::DocsIf3MdUsToDsChMappingTable>())
    , docsif3mdcfgtable(std::make_shared<DOCSIF3MIB::DocsIf3MdCfgTable>())
    , docsif3bondinggrpcfgtable(std::make_shared<DOCSIF3MIB::DocsIf3BondingGrpCfgTable>())
    , docsif3dsbondinggrpstatustable(std::make_shared<DOCSIF3MIB::DocsIf3DsBondingGrpStatusTable>())
    , docsif3usbondinggrpstatustable(std::make_shared<DOCSIF3MIB::DocsIf3UsBondingGrpStatusTable>())
    , docsif3uschexttable(std::make_shared<DOCSIF3MIB::DocsIf3UsChExtTable>())
    , docsif3uschsettable(std::make_shared<DOCSIF3MIB::DocsIf3UsChSetTable>())
    , docsif3dschsettable(std::make_shared<DOCSIF3MIB::DocsIf3DsChSetTable>())
    , docsif3signalqualityexttable(std::make_shared<DOCSIF3MIB::DocsIf3SignalQualityExtTable>())
    , docsif3cmtssignalqualityexttable(std::make_shared<DOCSIF3MIB::DocsIf3CmtsSignalQualityExtTable>())
    , docsif3cmtsspectrumanalysismeastable(std::make_shared<DOCSIF3MIB::DocsIf3CmtsSpectrumAnalysisMeasTable>())
    , docsif3cmdpvstatstable(std::make_shared<DOCSIF3MIB::DocsIf3CmDpvStatsTable>())
    , docsif3cmeventctrltable(std::make_shared<DOCSIF3MIB::DocsIf3CmEventCtrlTable>())
    , docsif3cmtseventctrltable(std::make_shared<DOCSIF3MIB::DocsIf3CmtsEventCtrlTable>())
    , docsif3cmmdcfgtable(std::make_shared<DOCSIF3MIB::DocsIf3CmMdCfgTable>())
    , docsif3cmenergymgt1x1cfgtable(std::make_shared<DOCSIF3MIB::DocsIf3CmEnergyMgt1x1CfgTable>())
    , docsif3cmspectrumanalysismeastable(std::make_shared<DOCSIF3MIB::DocsIf3CmSpectrumAnalysisMeasTable>())
    , docsif3cmtscmemstatstable(std::make_shared<DOCSIF3MIB::DocsIf3CmtsCmEmStatsTable>())
    , docsif3cmem1x1statstable(std::make_shared<DOCSIF3MIB::DocsIf3CmEm1x1StatsTable>())
{
    docsif3cmcapabilities->parent = this;
    docsif3cmtscmctrl->parent = this;
    docsif3cmenergymgtcfg->parent = this;
    docsif3cmspectrumanalysisctrlcmd->parent = this;
    docsif3cmstatustable->parent = this;
    docsif3cmstatusustable->parent = this;
    docsif3cmtscmregstatustable->parent = this;
    docsif3cmtscmusstatustable->parent = this;
    docsif3mdchcfgtable->parent = this;
    docsif3rcccfgtable->parent = this;
    docsif3rccstatustable->parent = this;
    docsif3rxchcfgtable->parent = this;
    docsif3rxchstatustable->parent = this;
    docsif3rxmodulecfgtable->parent = this;
    docsif3rxmodulestatustable->parent = this;
    docsif3mdnodestatustable->parent = this;
    docsif3mddssgstatustable->parent = this;
    docsif3mdussgstatustable->parent = this;
    docsif3mdustodschmappingtable->parent = this;
    docsif3mdcfgtable->parent = this;
    docsif3bondinggrpcfgtable->parent = this;
    docsif3dsbondinggrpstatustable->parent = this;
    docsif3usbondinggrpstatustable->parent = this;
    docsif3uschexttable->parent = this;
    docsif3uschsettable->parent = this;
    docsif3dschsettable->parent = this;
    docsif3signalqualityexttable->parent = this;
    docsif3cmtssignalqualityexttable->parent = this;
    docsif3cmtsspectrumanalysismeastable->parent = this;
    docsif3cmdpvstatstable->parent = this;
    docsif3cmeventctrltable->parent = this;
    docsif3cmtseventctrltable->parent = this;
    docsif3cmmdcfgtable->parent = this;
    docsif3cmenergymgt1x1cfgtable->parent = this;
    docsif3cmspectrumanalysismeastable->parent = this;
    docsif3cmtscmemstatstable->parent = this;
    docsif3cmem1x1statstable->parent = this;

    yang_name = "DOCS-IF3-MIB"; yang_parent_name = "DOCS-IF3-MIB"; is_top_level_class = true; has_list_ancestor = false; 
}

DOCSIF3MIB::~DOCSIF3MIB()
{
}

bool DOCSIF3MIB::has_data() const
{
    if (is_presence_container) return true;
    return (docsif3cmcapabilities !=  nullptr && docsif3cmcapabilities->has_data())
	|| (docsif3cmtscmctrl !=  nullptr && docsif3cmtscmctrl->has_data())
	|| (docsif3cmenergymgtcfg !=  nullptr && docsif3cmenergymgtcfg->has_data())
	|| (docsif3cmspectrumanalysisctrlcmd !=  nullptr && docsif3cmspectrumanalysisctrlcmd->has_data())
	|| (docsif3cmstatustable !=  nullptr && docsif3cmstatustable->has_data())
	|| (docsif3cmstatusustable !=  nullptr && docsif3cmstatusustable->has_data())
	|| (docsif3cmtscmregstatustable !=  nullptr && docsif3cmtscmregstatustable->has_data())
	|| (docsif3cmtscmusstatustable !=  nullptr && docsif3cmtscmusstatustable->has_data())
	|| (docsif3mdchcfgtable !=  nullptr && docsif3mdchcfgtable->has_data())
	|| (docsif3rcccfgtable !=  nullptr && docsif3rcccfgtable->has_data())
	|| (docsif3rccstatustable !=  nullptr && docsif3rccstatustable->has_data())
	|| (docsif3rxchcfgtable !=  nullptr && docsif3rxchcfgtable->has_data())
	|| (docsif3rxchstatustable !=  nullptr && docsif3rxchstatustable->has_data())
	|| (docsif3rxmodulecfgtable !=  nullptr && docsif3rxmodulecfgtable->has_data())
	|| (docsif3rxmodulestatustable !=  nullptr && docsif3rxmodulestatustable->has_data())
	|| (docsif3mdnodestatustable !=  nullptr && docsif3mdnodestatustable->has_data())
	|| (docsif3mddssgstatustable !=  nullptr && docsif3mddssgstatustable->has_data())
	|| (docsif3mdussgstatustable !=  nullptr && docsif3mdussgstatustable->has_data())
	|| (docsif3mdustodschmappingtable !=  nullptr && docsif3mdustodschmappingtable->has_data())
	|| (docsif3mdcfgtable !=  nullptr && docsif3mdcfgtable->has_data())
	|| (docsif3bondinggrpcfgtable !=  nullptr && docsif3bondinggrpcfgtable->has_data())
	|| (docsif3dsbondinggrpstatustable !=  nullptr && docsif3dsbondinggrpstatustable->has_data())
	|| (docsif3usbondinggrpstatustable !=  nullptr && docsif3usbondinggrpstatustable->has_data())
	|| (docsif3uschexttable !=  nullptr && docsif3uschexttable->has_data())
	|| (docsif3uschsettable !=  nullptr && docsif3uschsettable->has_data())
	|| (docsif3dschsettable !=  nullptr && docsif3dschsettable->has_data())
	|| (docsif3signalqualityexttable !=  nullptr && docsif3signalqualityexttable->has_data())
	|| (docsif3cmtssignalqualityexttable !=  nullptr && docsif3cmtssignalqualityexttable->has_data())
	|| (docsif3cmtsspectrumanalysismeastable !=  nullptr && docsif3cmtsspectrumanalysismeastable->has_data())
	|| (docsif3cmdpvstatstable !=  nullptr && docsif3cmdpvstatstable->has_data())
	|| (docsif3cmeventctrltable !=  nullptr && docsif3cmeventctrltable->has_data())
	|| (docsif3cmtseventctrltable !=  nullptr && docsif3cmtseventctrltable->has_data())
	|| (docsif3cmmdcfgtable !=  nullptr && docsif3cmmdcfgtable->has_data())
	|| (docsif3cmenergymgt1x1cfgtable !=  nullptr && docsif3cmenergymgt1x1cfgtable->has_data())
	|| (docsif3cmspectrumanalysismeastable !=  nullptr && docsif3cmspectrumanalysismeastable->has_data())
	|| (docsif3cmtscmemstatstable !=  nullptr && docsif3cmtscmemstatstable->has_data())
	|| (docsif3cmem1x1statstable !=  nullptr && docsif3cmem1x1statstable->has_data());
}

bool DOCSIF3MIB::has_operation() const
{
    return is_set(yfilter)
	|| (docsif3cmcapabilities !=  nullptr && docsif3cmcapabilities->has_operation())
	|| (docsif3cmtscmctrl !=  nullptr && docsif3cmtscmctrl->has_operation())
	|| (docsif3cmenergymgtcfg !=  nullptr && docsif3cmenergymgtcfg->has_operation())
	|| (docsif3cmspectrumanalysisctrlcmd !=  nullptr && docsif3cmspectrumanalysisctrlcmd->has_operation())
	|| (docsif3cmstatustable !=  nullptr && docsif3cmstatustable->has_operation())
	|| (docsif3cmstatusustable !=  nullptr && docsif3cmstatusustable->has_operation())
	|| (docsif3cmtscmregstatustable !=  nullptr && docsif3cmtscmregstatustable->has_operation())
	|| (docsif3cmtscmusstatustable !=  nullptr && docsif3cmtscmusstatustable->has_operation())
	|| (docsif3mdchcfgtable !=  nullptr && docsif3mdchcfgtable->has_operation())
	|| (docsif3rcccfgtable !=  nullptr && docsif3rcccfgtable->has_operation())
	|| (docsif3rccstatustable !=  nullptr && docsif3rccstatustable->has_operation())
	|| (docsif3rxchcfgtable !=  nullptr && docsif3rxchcfgtable->has_operation())
	|| (docsif3rxchstatustable !=  nullptr && docsif3rxchstatustable->has_operation())
	|| (docsif3rxmodulecfgtable !=  nullptr && docsif3rxmodulecfgtable->has_operation())
	|| (docsif3rxmodulestatustable !=  nullptr && docsif3rxmodulestatustable->has_operation())
	|| (docsif3mdnodestatustable !=  nullptr && docsif3mdnodestatustable->has_operation())
	|| (docsif3mddssgstatustable !=  nullptr && docsif3mddssgstatustable->has_operation())
	|| (docsif3mdussgstatustable !=  nullptr && docsif3mdussgstatustable->has_operation())
	|| (docsif3mdustodschmappingtable !=  nullptr && docsif3mdustodschmappingtable->has_operation())
	|| (docsif3mdcfgtable !=  nullptr && docsif3mdcfgtable->has_operation())
	|| (docsif3bondinggrpcfgtable !=  nullptr && docsif3bondinggrpcfgtable->has_operation())
	|| (docsif3dsbondinggrpstatustable !=  nullptr && docsif3dsbondinggrpstatustable->has_operation())
	|| (docsif3usbondinggrpstatustable !=  nullptr && docsif3usbondinggrpstatustable->has_operation())
	|| (docsif3uschexttable !=  nullptr && docsif3uschexttable->has_operation())
	|| (docsif3uschsettable !=  nullptr && docsif3uschsettable->has_operation())
	|| (docsif3dschsettable !=  nullptr && docsif3dschsettable->has_operation())
	|| (docsif3signalqualityexttable !=  nullptr && docsif3signalqualityexttable->has_operation())
	|| (docsif3cmtssignalqualityexttable !=  nullptr && docsif3cmtssignalqualityexttable->has_operation())
	|| (docsif3cmtsspectrumanalysismeastable !=  nullptr && docsif3cmtsspectrumanalysismeastable->has_operation())
	|| (docsif3cmdpvstatstable !=  nullptr && docsif3cmdpvstatstable->has_operation())
	|| (docsif3cmeventctrltable !=  nullptr && docsif3cmeventctrltable->has_operation())
	|| (docsif3cmtseventctrltable !=  nullptr && docsif3cmtseventctrltable->has_operation())
	|| (docsif3cmmdcfgtable !=  nullptr && docsif3cmmdcfgtable->has_operation())
	|| (docsif3cmenergymgt1x1cfgtable !=  nullptr && docsif3cmenergymgt1x1cfgtable->has_operation())
	|| (docsif3cmspectrumanalysismeastable !=  nullptr && docsif3cmspectrumanalysismeastable->has_operation())
	|| (docsif3cmtscmemstatstable !=  nullptr && docsif3cmtscmemstatstable->has_operation())
	|| (docsif3cmem1x1statstable !=  nullptr && docsif3cmem1x1statstable->has_operation());
}

std::string DOCSIF3MIB::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIf3CmCapabilities")
    {
        if(docsif3cmcapabilities == nullptr)
        {
            docsif3cmcapabilities = std::make_shared<DOCSIF3MIB::DocsIf3CmCapabilities>();
        }
        return docsif3cmcapabilities;
    }

    if(child_yang_name == "docsIf3CmtsCmCtrl")
    {
        if(docsif3cmtscmctrl == nullptr)
        {
            docsif3cmtscmctrl = std::make_shared<DOCSIF3MIB::DocsIf3CmtsCmCtrl>();
        }
        return docsif3cmtscmctrl;
    }

    if(child_yang_name == "docsIf3CmEnergyMgtCfg")
    {
        if(docsif3cmenergymgtcfg == nullptr)
        {
            docsif3cmenergymgtcfg = std::make_shared<DOCSIF3MIB::DocsIf3CmEnergyMgtCfg>();
        }
        return docsif3cmenergymgtcfg;
    }

    if(child_yang_name == "docsIf3CmSpectrumAnalysisCtrlCmd")
    {
        if(docsif3cmspectrumanalysisctrlcmd == nullptr)
        {
            docsif3cmspectrumanalysisctrlcmd = std::make_shared<DOCSIF3MIB::DocsIf3CmSpectrumAnalysisCtrlCmd>();
        }
        return docsif3cmspectrumanalysisctrlcmd;
    }

    if(child_yang_name == "docsIf3CmStatusTable")
    {
        if(docsif3cmstatustable == nullptr)
        {
            docsif3cmstatustable = std::make_shared<DOCSIF3MIB::DocsIf3CmStatusTable>();
        }
        return docsif3cmstatustable;
    }

    if(child_yang_name == "docsIf3CmStatusUsTable")
    {
        if(docsif3cmstatusustable == nullptr)
        {
            docsif3cmstatusustable = std::make_shared<DOCSIF3MIB::DocsIf3CmStatusUsTable>();
        }
        return docsif3cmstatusustable;
    }

    if(child_yang_name == "docsIf3CmtsCmRegStatusTable")
    {
        if(docsif3cmtscmregstatustable == nullptr)
        {
            docsif3cmtscmregstatustable = std::make_shared<DOCSIF3MIB::DocsIf3CmtsCmRegStatusTable>();
        }
        return docsif3cmtscmregstatustable;
    }

    if(child_yang_name == "docsIf3CmtsCmUsStatusTable")
    {
        if(docsif3cmtscmusstatustable == nullptr)
        {
            docsif3cmtscmusstatustable = std::make_shared<DOCSIF3MIB::DocsIf3CmtsCmUsStatusTable>();
        }
        return docsif3cmtscmusstatustable;
    }

    if(child_yang_name == "docsIf3MdChCfgTable")
    {
        if(docsif3mdchcfgtable == nullptr)
        {
            docsif3mdchcfgtable = std::make_shared<DOCSIF3MIB::DocsIf3MdChCfgTable>();
        }
        return docsif3mdchcfgtable;
    }

    if(child_yang_name == "docsIf3RccCfgTable")
    {
        if(docsif3rcccfgtable == nullptr)
        {
            docsif3rcccfgtable = std::make_shared<DOCSIF3MIB::DocsIf3RccCfgTable>();
        }
        return docsif3rcccfgtable;
    }

    if(child_yang_name == "docsIf3RccStatusTable")
    {
        if(docsif3rccstatustable == nullptr)
        {
            docsif3rccstatustable = std::make_shared<DOCSIF3MIB::DocsIf3RccStatusTable>();
        }
        return docsif3rccstatustable;
    }

    if(child_yang_name == "docsIf3RxChCfgTable")
    {
        if(docsif3rxchcfgtable == nullptr)
        {
            docsif3rxchcfgtable = std::make_shared<DOCSIF3MIB::DocsIf3RxChCfgTable>();
        }
        return docsif3rxchcfgtable;
    }

    if(child_yang_name == "docsIf3RxChStatusTable")
    {
        if(docsif3rxchstatustable == nullptr)
        {
            docsif3rxchstatustable = std::make_shared<DOCSIF3MIB::DocsIf3RxChStatusTable>();
        }
        return docsif3rxchstatustable;
    }

    if(child_yang_name == "docsIf3RxModuleCfgTable")
    {
        if(docsif3rxmodulecfgtable == nullptr)
        {
            docsif3rxmodulecfgtable = std::make_shared<DOCSIF3MIB::DocsIf3RxModuleCfgTable>();
        }
        return docsif3rxmodulecfgtable;
    }

    if(child_yang_name == "docsIf3RxModuleStatusTable")
    {
        if(docsif3rxmodulestatustable == nullptr)
        {
            docsif3rxmodulestatustable = std::make_shared<DOCSIF3MIB::DocsIf3RxModuleStatusTable>();
        }
        return docsif3rxmodulestatustable;
    }

    if(child_yang_name == "docsIf3MdNodeStatusTable")
    {
        if(docsif3mdnodestatustable == nullptr)
        {
            docsif3mdnodestatustable = std::make_shared<DOCSIF3MIB::DocsIf3MdNodeStatusTable>();
        }
        return docsif3mdnodestatustable;
    }

    if(child_yang_name == "docsIf3MdDsSgStatusTable")
    {
        if(docsif3mddssgstatustable == nullptr)
        {
            docsif3mddssgstatustable = std::make_shared<DOCSIF3MIB::DocsIf3MdDsSgStatusTable>();
        }
        return docsif3mddssgstatustable;
    }

    if(child_yang_name == "docsIf3MdUsSgStatusTable")
    {
        if(docsif3mdussgstatustable == nullptr)
        {
            docsif3mdussgstatustable = std::make_shared<DOCSIF3MIB::DocsIf3MdUsSgStatusTable>();
        }
        return docsif3mdussgstatustable;
    }

    if(child_yang_name == "docsIf3MdUsToDsChMappingTable")
    {
        if(docsif3mdustodschmappingtable == nullptr)
        {
            docsif3mdustodschmappingtable = std::make_shared<DOCSIF3MIB::DocsIf3MdUsToDsChMappingTable>();
        }
        return docsif3mdustodschmappingtable;
    }

    if(child_yang_name == "docsIf3MdCfgTable")
    {
        if(docsif3mdcfgtable == nullptr)
        {
            docsif3mdcfgtable = std::make_shared<DOCSIF3MIB::DocsIf3MdCfgTable>();
        }
        return docsif3mdcfgtable;
    }

    if(child_yang_name == "docsIf3BondingGrpCfgTable")
    {
        if(docsif3bondinggrpcfgtable == nullptr)
        {
            docsif3bondinggrpcfgtable = std::make_shared<DOCSIF3MIB::DocsIf3BondingGrpCfgTable>();
        }
        return docsif3bondinggrpcfgtable;
    }

    if(child_yang_name == "docsIf3DsBondingGrpStatusTable")
    {
        if(docsif3dsbondinggrpstatustable == nullptr)
        {
            docsif3dsbondinggrpstatustable = std::make_shared<DOCSIF3MIB::DocsIf3DsBondingGrpStatusTable>();
        }
        return docsif3dsbondinggrpstatustable;
    }

    if(child_yang_name == "docsIf3UsBondingGrpStatusTable")
    {
        if(docsif3usbondinggrpstatustable == nullptr)
        {
            docsif3usbondinggrpstatustable = std::make_shared<DOCSIF3MIB::DocsIf3UsBondingGrpStatusTable>();
        }
        return docsif3usbondinggrpstatustable;
    }

    if(child_yang_name == "docsIf3UsChExtTable")
    {
        if(docsif3uschexttable == nullptr)
        {
            docsif3uschexttable = std::make_shared<DOCSIF3MIB::DocsIf3UsChExtTable>();
        }
        return docsif3uschexttable;
    }

    if(child_yang_name == "docsIf3UsChSetTable")
    {
        if(docsif3uschsettable == nullptr)
        {
            docsif3uschsettable = std::make_shared<DOCSIF3MIB::DocsIf3UsChSetTable>();
        }
        return docsif3uschsettable;
    }

    if(child_yang_name == "docsIf3DsChSetTable")
    {
        if(docsif3dschsettable == nullptr)
        {
            docsif3dschsettable = std::make_shared<DOCSIF3MIB::DocsIf3DsChSetTable>();
        }
        return docsif3dschsettable;
    }

    if(child_yang_name == "docsIf3SignalQualityExtTable")
    {
        if(docsif3signalqualityexttable == nullptr)
        {
            docsif3signalqualityexttable = std::make_shared<DOCSIF3MIB::DocsIf3SignalQualityExtTable>();
        }
        return docsif3signalqualityexttable;
    }

    if(child_yang_name == "docsIf3CmtsSignalQualityExtTable")
    {
        if(docsif3cmtssignalqualityexttable == nullptr)
        {
            docsif3cmtssignalqualityexttable = std::make_shared<DOCSIF3MIB::DocsIf3CmtsSignalQualityExtTable>();
        }
        return docsif3cmtssignalqualityexttable;
    }

    if(child_yang_name == "docsIf3CmtsSpectrumAnalysisMeasTable")
    {
        if(docsif3cmtsspectrumanalysismeastable == nullptr)
        {
            docsif3cmtsspectrumanalysismeastable = std::make_shared<DOCSIF3MIB::DocsIf3CmtsSpectrumAnalysisMeasTable>();
        }
        return docsif3cmtsspectrumanalysismeastable;
    }

    if(child_yang_name == "docsIf3CmDpvStatsTable")
    {
        if(docsif3cmdpvstatstable == nullptr)
        {
            docsif3cmdpvstatstable = std::make_shared<DOCSIF3MIB::DocsIf3CmDpvStatsTable>();
        }
        return docsif3cmdpvstatstable;
    }

    if(child_yang_name == "docsIf3CmEventCtrlTable")
    {
        if(docsif3cmeventctrltable == nullptr)
        {
            docsif3cmeventctrltable = std::make_shared<DOCSIF3MIB::DocsIf3CmEventCtrlTable>();
        }
        return docsif3cmeventctrltable;
    }

    if(child_yang_name == "docsIf3CmtsEventCtrlTable")
    {
        if(docsif3cmtseventctrltable == nullptr)
        {
            docsif3cmtseventctrltable = std::make_shared<DOCSIF3MIB::DocsIf3CmtsEventCtrlTable>();
        }
        return docsif3cmtseventctrltable;
    }

    if(child_yang_name == "docsIf3CmMdCfgTable")
    {
        if(docsif3cmmdcfgtable == nullptr)
        {
            docsif3cmmdcfgtable = std::make_shared<DOCSIF3MIB::DocsIf3CmMdCfgTable>();
        }
        return docsif3cmmdcfgtable;
    }

    if(child_yang_name == "docsIf3CmEnergyMgt1x1CfgTable")
    {
        if(docsif3cmenergymgt1x1cfgtable == nullptr)
        {
            docsif3cmenergymgt1x1cfgtable = std::make_shared<DOCSIF3MIB::DocsIf3CmEnergyMgt1x1CfgTable>();
        }
        return docsif3cmenergymgt1x1cfgtable;
    }

    if(child_yang_name == "docsIf3CmSpectrumAnalysisMeasTable")
    {
        if(docsif3cmspectrumanalysismeastable == nullptr)
        {
            docsif3cmspectrumanalysismeastable = std::make_shared<DOCSIF3MIB::DocsIf3CmSpectrumAnalysisMeasTable>();
        }
        return docsif3cmspectrumanalysismeastable;
    }

    if(child_yang_name == "docsIf3CmtsCmEmStatsTable")
    {
        if(docsif3cmtscmemstatstable == nullptr)
        {
            docsif3cmtscmemstatstable = std::make_shared<DOCSIF3MIB::DocsIf3CmtsCmEmStatsTable>();
        }
        return docsif3cmtscmemstatstable;
    }

    if(child_yang_name == "docsIf3CmEm1x1StatsTable")
    {
        if(docsif3cmem1x1statstable == nullptr)
        {
            docsif3cmem1x1statstable = std::make_shared<DOCSIF3MIB::DocsIf3CmEm1x1StatsTable>();
        }
        return docsif3cmem1x1statstable;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(docsif3cmcapabilities != nullptr)
    {
        children["docsIf3CmCapabilities"] = docsif3cmcapabilities;
    }

    if(docsif3cmtscmctrl != nullptr)
    {
        children["docsIf3CmtsCmCtrl"] = docsif3cmtscmctrl;
    }

    if(docsif3cmenergymgtcfg != nullptr)
    {
        children["docsIf3CmEnergyMgtCfg"] = docsif3cmenergymgtcfg;
    }

    if(docsif3cmspectrumanalysisctrlcmd != nullptr)
    {
        children["docsIf3CmSpectrumAnalysisCtrlCmd"] = docsif3cmspectrumanalysisctrlcmd;
    }

    if(docsif3cmstatustable != nullptr)
    {
        children["docsIf3CmStatusTable"] = docsif3cmstatustable;
    }

    if(docsif3cmstatusustable != nullptr)
    {
        children["docsIf3CmStatusUsTable"] = docsif3cmstatusustable;
    }

    if(docsif3cmtscmregstatustable != nullptr)
    {
        children["docsIf3CmtsCmRegStatusTable"] = docsif3cmtscmregstatustable;
    }

    if(docsif3cmtscmusstatustable != nullptr)
    {
        children["docsIf3CmtsCmUsStatusTable"] = docsif3cmtscmusstatustable;
    }

    if(docsif3mdchcfgtable != nullptr)
    {
        children["docsIf3MdChCfgTable"] = docsif3mdchcfgtable;
    }

    if(docsif3rcccfgtable != nullptr)
    {
        children["docsIf3RccCfgTable"] = docsif3rcccfgtable;
    }

    if(docsif3rccstatustable != nullptr)
    {
        children["docsIf3RccStatusTable"] = docsif3rccstatustable;
    }

    if(docsif3rxchcfgtable != nullptr)
    {
        children["docsIf3RxChCfgTable"] = docsif3rxchcfgtable;
    }

    if(docsif3rxchstatustable != nullptr)
    {
        children["docsIf3RxChStatusTable"] = docsif3rxchstatustable;
    }

    if(docsif3rxmodulecfgtable != nullptr)
    {
        children["docsIf3RxModuleCfgTable"] = docsif3rxmodulecfgtable;
    }

    if(docsif3rxmodulestatustable != nullptr)
    {
        children["docsIf3RxModuleStatusTable"] = docsif3rxmodulestatustable;
    }

    if(docsif3mdnodestatustable != nullptr)
    {
        children["docsIf3MdNodeStatusTable"] = docsif3mdnodestatustable;
    }

    if(docsif3mddssgstatustable != nullptr)
    {
        children["docsIf3MdDsSgStatusTable"] = docsif3mddssgstatustable;
    }

    if(docsif3mdussgstatustable != nullptr)
    {
        children["docsIf3MdUsSgStatusTable"] = docsif3mdussgstatustable;
    }

    if(docsif3mdustodschmappingtable != nullptr)
    {
        children["docsIf3MdUsToDsChMappingTable"] = docsif3mdustodschmappingtable;
    }

    if(docsif3mdcfgtable != nullptr)
    {
        children["docsIf3MdCfgTable"] = docsif3mdcfgtable;
    }

    if(docsif3bondinggrpcfgtable != nullptr)
    {
        children["docsIf3BondingGrpCfgTable"] = docsif3bondinggrpcfgtable;
    }

    if(docsif3dsbondinggrpstatustable != nullptr)
    {
        children["docsIf3DsBondingGrpStatusTable"] = docsif3dsbondinggrpstatustable;
    }

    if(docsif3usbondinggrpstatustable != nullptr)
    {
        children["docsIf3UsBondingGrpStatusTable"] = docsif3usbondinggrpstatustable;
    }

    if(docsif3uschexttable != nullptr)
    {
        children["docsIf3UsChExtTable"] = docsif3uschexttable;
    }

    if(docsif3uschsettable != nullptr)
    {
        children["docsIf3UsChSetTable"] = docsif3uschsettable;
    }

    if(docsif3dschsettable != nullptr)
    {
        children["docsIf3DsChSetTable"] = docsif3dschsettable;
    }

    if(docsif3signalqualityexttable != nullptr)
    {
        children["docsIf3SignalQualityExtTable"] = docsif3signalqualityexttable;
    }

    if(docsif3cmtssignalqualityexttable != nullptr)
    {
        children["docsIf3CmtsSignalQualityExtTable"] = docsif3cmtssignalqualityexttable;
    }

    if(docsif3cmtsspectrumanalysismeastable != nullptr)
    {
        children["docsIf3CmtsSpectrumAnalysisMeasTable"] = docsif3cmtsspectrumanalysismeastable;
    }

    if(docsif3cmdpvstatstable != nullptr)
    {
        children["docsIf3CmDpvStatsTable"] = docsif3cmdpvstatstable;
    }

    if(docsif3cmeventctrltable != nullptr)
    {
        children["docsIf3CmEventCtrlTable"] = docsif3cmeventctrltable;
    }

    if(docsif3cmtseventctrltable != nullptr)
    {
        children["docsIf3CmtsEventCtrlTable"] = docsif3cmtseventctrltable;
    }

    if(docsif3cmmdcfgtable != nullptr)
    {
        children["docsIf3CmMdCfgTable"] = docsif3cmmdcfgtable;
    }

    if(docsif3cmenergymgt1x1cfgtable != nullptr)
    {
        children["docsIf3CmEnergyMgt1x1CfgTable"] = docsif3cmenergymgt1x1cfgtable;
    }

    if(docsif3cmspectrumanalysismeastable != nullptr)
    {
        children["docsIf3CmSpectrumAnalysisMeasTable"] = docsif3cmspectrumanalysismeastable;
    }

    if(docsif3cmtscmemstatstable != nullptr)
    {
        children["docsIf3CmtsCmEmStatsTable"] = docsif3cmtscmemstatstable;
    }

    if(docsif3cmem1x1statstable != nullptr)
    {
        children["docsIf3CmEm1x1StatsTable"] = docsif3cmem1x1statstable;
    }

    return children;
}

void DOCSIF3MIB::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIF3MIB::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> DOCSIF3MIB::clone_ptr() const
{
    return std::make_shared<DOCSIF3MIB>();
}

std::string DOCSIF3MIB::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string DOCSIF3MIB::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function DOCSIF3MIB::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> DOCSIF3MIB::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool DOCSIF3MIB::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIf3CmCapabilities" || name == "docsIf3CmtsCmCtrl" || name == "docsIf3CmEnergyMgtCfg" || name == "docsIf3CmSpectrumAnalysisCtrlCmd" || name == "docsIf3CmStatusTable" || name == "docsIf3CmStatusUsTable" || name == "docsIf3CmtsCmRegStatusTable" || name == "docsIf3CmtsCmUsStatusTable" || name == "docsIf3MdChCfgTable" || name == "docsIf3RccCfgTable" || name == "docsIf3RccStatusTable" || name == "docsIf3RxChCfgTable" || name == "docsIf3RxChStatusTable" || name == "docsIf3RxModuleCfgTable" || name == "docsIf3RxModuleStatusTable" || name == "docsIf3MdNodeStatusTable" || name == "docsIf3MdDsSgStatusTable" || name == "docsIf3MdUsSgStatusTable" || name == "docsIf3MdUsToDsChMappingTable" || name == "docsIf3MdCfgTable" || name == "docsIf3BondingGrpCfgTable" || name == "docsIf3DsBondingGrpStatusTable" || name == "docsIf3UsBondingGrpStatusTable" || name == "docsIf3UsChExtTable" || name == "docsIf3UsChSetTable" || name == "docsIf3DsChSetTable" || name == "docsIf3SignalQualityExtTable" || name == "docsIf3CmtsSignalQualityExtTable" || name == "docsIf3CmtsSpectrumAnalysisMeasTable" || name == "docsIf3CmDpvStatsTable" || name == "docsIf3CmEventCtrlTable" || name == "docsIf3CmtsEventCtrlTable" || name == "docsIf3CmMdCfgTable" || name == "docsIf3CmEnergyMgt1x1CfgTable" || name == "docsIf3CmSpectrumAnalysisMeasTable" || name == "docsIf3CmtsCmEmStatsTable" || name == "docsIf3CmEm1x1StatsTable")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3CmCapabilities::DocsIf3CmCapabilities()
    :
    docsif3cmcapabilitiesreq{YType::str, "docsIf3CmCapabilitiesReq"},
    docsif3cmcapabilitiesrsp{YType::str, "docsIf3CmCapabilitiesRsp"}
{

    yang_name = "docsIf3CmCapabilities"; yang_parent_name = "DOCS-IF3-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3CmCapabilities::~DocsIf3CmCapabilities()
{
}

bool DOCSIF3MIB::DocsIf3CmCapabilities::has_data() const
{
    if (is_presence_container) return true;
    return docsif3cmcapabilitiesreq.is_set
	|| docsif3cmcapabilitiesrsp.is_set;
}

bool DOCSIF3MIB::DocsIf3CmCapabilities::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(docsif3cmcapabilitiesreq.yfilter)
	|| ydk::is_set(docsif3cmcapabilitiesrsp.yfilter);
}

std::string DOCSIF3MIB::DocsIf3CmCapabilities::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3CmCapabilities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3CmCapabilities";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3CmCapabilities::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (docsif3cmcapabilitiesreq.is_set || is_set(docsif3cmcapabilitiesreq.yfilter)) leaf_name_data.push_back(docsif3cmcapabilitiesreq.get_name_leafdata());
    if (docsif3cmcapabilitiesrsp.is_set || is_set(docsif3cmcapabilitiesrsp.yfilter)) leaf_name_data.push_back(docsif3cmcapabilitiesrsp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3CmCapabilities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3CmCapabilities::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSIF3MIB::DocsIf3CmCapabilities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "docsIf3CmCapabilitiesReq")
    {
        docsif3cmcapabilitiesreq = value;
        docsif3cmcapabilitiesreq.value_namespace = name_space;
        docsif3cmcapabilitiesreq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmCapabilitiesRsp")
    {
        docsif3cmcapabilitiesrsp = value;
        docsif3cmcapabilitiesrsp.value_namespace = name_space;
        docsif3cmcapabilitiesrsp.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIF3MIB::DocsIf3CmCapabilities::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "docsIf3CmCapabilitiesReq")
    {
        docsif3cmcapabilitiesreq.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmCapabilitiesRsp")
    {
        docsif3cmcapabilitiesrsp.yfilter = yfilter;
    }
}

bool DOCSIF3MIB::DocsIf3CmCapabilities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIf3CmCapabilitiesReq" || name == "docsIf3CmCapabilitiesRsp")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3CmtsCmCtrl::DocsIf3CmtsCmCtrl()
    :
    docsif3cmtscmctrlcmdmacaddr{YType::str, "docsIf3CmtsCmCtrlCmdMacAddr"},
    docsif3cmtscmctrlcmdmuteuschid{YType::uint32, "docsIf3CmtsCmCtrlCmdMuteUsChId"},
    docsif3cmtscmctrlcmdmuteinterval{YType::uint32, "docsIf3CmtsCmCtrlCmdMuteInterval"},
    docsif3cmtscmctrlcmddisableforwarding{YType::boolean, "docsIf3CmtsCmCtrlCmdDisableForwarding"},
    docsif3cmtscmctrlcmdcommit{YType::enumeration, "docsIf3CmtsCmCtrlCmdCommit"}
{

    yang_name = "docsIf3CmtsCmCtrl"; yang_parent_name = "DOCS-IF3-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3CmtsCmCtrl::~DocsIf3CmtsCmCtrl()
{
}

bool DOCSIF3MIB::DocsIf3CmtsCmCtrl::has_data() const
{
    if (is_presence_container) return true;
    return docsif3cmtscmctrlcmdmacaddr.is_set
	|| docsif3cmtscmctrlcmdmuteuschid.is_set
	|| docsif3cmtscmctrlcmdmuteinterval.is_set
	|| docsif3cmtscmctrlcmddisableforwarding.is_set
	|| docsif3cmtscmctrlcmdcommit.is_set;
}

bool DOCSIF3MIB::DocsIf3CmtsCmCtrl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(docsif3cmtscmctrlcmdmacaddr.yfilter)
	|| ydk::is_set(docsif3cmtscmctrlcmdmuteuschid.yfilter)
	|| ydk::is_set(docsif3cmtscmctrlcmdmuteinterval.yfilter)
	|| ydk::is_set(docsif3cmtscmctrlcmddisableforwarding.yfilter)
	|| ydk::is_set(docsif3cmtscmctrlcmdcommit.yfilter);
}

std::string DOCSIF3MIB::DocsIf3CmtsCmCtrl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3CmtsCmCtrl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3CmtsCmCtrl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3CmtsCmCtrl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (docsif3cmtscmctrlcmdmacaddr.is_set || is_set(docsif3cmtscmctrlcmdmacaddr.yfilter)) leaf_name_data.push_back(docsif3cmtscmctrlcmdmacaddr.get_name_leafdata());
    if (docsif3cmtscmctrlcmdmuteuschid.is_set || is_set(docsif3cmtscmctrlcmdmuteuschid.yfilter)) leaf_name_data.push_back(docsif3cmtscmctrlcmdmuteuschid.get_name_leafdata());
    if (docsif3cmtscmctrlcmdmuteinterval.is_set || is_set(docsif3cmtscmctrlcmdmuteinterval.yfilter)) leaf_name_data.push_back(docsif3cmtscmctrlcmdmuteinterval.get_name_leafdata());
    if (docsif3cmtscmctrlcmddisableforwarding.is_set || is_set(docsif3cmtscmctrlcmddisableforwarding.yfilter)) leaf_name_data.push_back(docsif3cmtscmctrlcmddisableforwarding.get_name_leafdata());
    if (docsif3cmtscmctrlcmdcommit.is_set || is_set(docsif3cmtscmctrlcmdcommit.yfilter)) leaf_name_data.push_back(docsif3cmtscmctrlcmdcommit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3CmtsCmCtrl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3CmtsCmCtrl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSIF3MIB::DocsIf3CmtsCmCtrl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "docsIf3CmtsCmCtrlCmdMacAddr")
    {
        docsif3cmtscmctrlcmdmacaddr = value;
        docsif3cmtscmctrlcmdmacaddr.value_namespace = name_space;
        docsif3cmtscmctrlcmdmacaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmtsCmCtrlCmdMuteUsChId")
    {
        docsif3cmtscmctrlcmdmuteuschid = value;
        docsif3cmtscmctrlcmdmuteuschid.value_namespace = name_space;
        docsif3cmtscmctrlcmdmuteuschid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmtsCmCtrlCmdMuteInterval")
    {
        docsif3cmtscmctrlcmdmuteinterval = value;
        docsif3cmtscmctrlcmdmuteinterval.value_namespace = name_space;
        docsif3cmtscmctrlcmdmuteinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmtsCmCtrlCmdDisableForwarding")
    {
        docsif3cmtscmctrlcmddisableforwarding = value;
        docsif3cmtscmctrlcmddisableforwarding.value_namespace = name_space;
        docsif3cmtscmctrlcmddisableforwarding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmtsCmCtrlCmdCommit")
    {
        docsif3cmtscmctrlcmdcommit = value;
        docsif3cmtscmctrlcmdcommit.value_namespace = name_space;
        docsif3cmtscmctrlcmdcommit.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIF3MIB::DocsIf3CmtsCmCtrl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "docsIf3CmtsCmCtrlCmdMacAddr")
    {
        docsif3cmtscmctrlcmdmacaddr.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmtsCmCtrlCmdMuteUsChId")
    {
        docsif3cmtscmctrlcmdmuteuschid.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmtsCmCtrlCmdMuteInterval")
    {
        docsif3cmtscmctrlcmdmuteinterval.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmtsCmCtrlCmdDisableForwarding")
    {
        docsif3cmtscmctrlcmddisableforwarding.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmtsCmCtrlCmdCommit")
    {
        docsif3cmtscmctrlcmdcommit.yfilter = yfilter;
    }
}

bool DOCSIF3MIB::DocsIf3CmtsCmCtrl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIf3CmtsCmCtrlCmdMacAddr" || name == "docsIf3CmtsCmCtrlCmdMuteUsChId" || name == "docsIf3CmtsCmCtrlCmdMuteInterval" || name == "docsIf3CmtsCmCtrlCmdDisableForwarding" || name == "docsIf3CmtsCmCtrlCmdCommit")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3CmEnergyMgtCfg::DocsIf3CmEnergyMgtCfg()
    :
    docsif3cmenergymgtcfgfeatureenabled{YType::bits, "docsIf3CmEnergyMgtCfgFeatureEnabled"},
    docsif3cmenergymgtcfgcycleperiod{YType::uint32, "docsIf3CmEnergyMgtCfgCyclePeriod"}
{

    yang_name = "docsIf3CmEnergyMgtCfg"; yang_parent_name = "DOCS-IF3-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3CmEnergyMgtCfg::~DocsIf3CmEnergyMgtCfg()
{
}

bool DOCSIF3MIB::DocsIf3CmEnergyMgtCfg::has_data() const
{
    if (is_presence_container) return true;
    return docsif3cmenergymgtcfgfeatureenabled.is_set
	|| docsif3cmenergymgtcfgcycleperiod.is_set;
}

bool DOCSIF3MIB::DocsIf3CmEnergyMgtCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(docsif3cmenergymgtcfgfeatureenabled.yfilter)
	|| ydk::is_set(docsif3cmenergymgtcfgcycleperiod.yfilter);
}

std::string DOCSIF3MIB::DocsIf3CmEnergyMgtCfg::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3CmEnergyMgtCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3CmEnergyMgtCfg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3CmEnergyMgtCfg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (docsif3cmenergymgtcfgfeatureenabled.is_set || is_set(docsif3cmenergymgtcfgfeatureenabled.yfilter)) leaf_name_data.push_back(docsif3cmenergymgtcfgfeatureenabled.get_name_leafdata());
    if (docsif3cmenergymgtcfgcycleperiod.is_set || is_set(docsif3cmenergymgtcfgcycleperiod.yfilter)) leaf_name_data.push_back(docsif3cmenergymgtcfgcycleperiod.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3CmEnergyMgtCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3CmEnergyMgtCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSIF3MIB::DocsIf3CmEnergyMgtCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "docsIf3CmEnergyMgtCfgFeatureEnabled")
    {
        docsif3cmenergymgtcfgfeatureenabled[value] = true;
    }
    if(value_path == "docsIf3CmEnergyMgtCfgCyclePeriod")
    {
        docsif3cmenergymgtcfgcycleperiod = value;
        docsif3cmenergymgtcfgcycleperiod.value_namespace = name_space;
        docsif3cmenergymgtcfgcycleperiod.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIF3MIB::DocsIf3CmEnergyMgtCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "docsIf3CmEnergyMgtCfgFeatureEnabled")
    {
        docsif3cmenergymgtcfgfeatureenabled.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmEnergyMgtCfgCyclePeriod")
    {
        docsif3cmenergymgtcfgcycleperiod.yfilter = yfilter;
    }
}

bool DOCSIF3MIB::DocsIf3CmEnergyMgtCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIf3CmEnergyMgtCfgFeatureEnabled" || name == "docsIf3CmEnergyMgtCfgCyclePeriod")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3CmSpectrumAnalysisCtrlCmd::DocsIf3CmSpectrumAnalysisCtrlCmd()
    :
    docsif3cmspectrumanalysisctrlcmdenable{YType::boolean, "docsIf3CmSpectrumAnalysisCtrlCmdEnable"},
    docsif3cmspectrumanalysisctrlcmdinactivitytimeout{YType::int32, "docsIf3CmSpectrumAnalysisCtrlCmdInactivityTimeout"},
    docsif3cmspectrumanalysisctrlcmdfirstsegmentcenterfrequency{YType::uint32, "docsIf3CmSpectrumAnalysisCtrlCmdFirstSegmentCenterFrequency"},
    docsif3cmspectrumanalysisctrlcmdlastsegmentcenterfrequency{YType::uint32, "docsIf3CmSpectrumAnalysisCtrlCmdLastSegmentCenterFrequency"},
    docsif3cmspectrumanalysisctrlcmdsegmentfrequencyspan{YType::uint32, "docsIf3CmSpectrumAnalysisCtrlCmdSegmentFrequencySpan"},
    docsif3cmspectrumanalysisctrlcmdnumbinspersegment{YType::uint32, "docsIf3CmSpectrumAnalysisCtrlCmdNumBinsPerSegment"},
    docsif3cmspectrumanalysisctrlcmdequivalentnoisebandwidth{YType::uint32, "docsIf3CmSpectrumAnalysisCtrlCmdEquivalentNoiseBandwidth"},
    docsif3cmspectrumanalysisctrlcmdwindowfunction{YType::enumeration, "docsIf3CmSpectrumAnalysisCtrlCmdWindowFunction"},
    docsif3cmspectrumanalysisctrlcmdnumberofaverages{YType::uint32, "docsIf3CmSpectrumAnalysisCtrlCmdNumberOfAverages"}
{

    yang_name = "docsIf3CmSpectrumAnalysisCtrlCmd"; yang_parent_name = "DOCS-IF3-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3CmSpectrumAnalysisCtrlCmd::~DocsIf3CmSpectrumAnalysisCtrlCmd()
{
}

bool DOCSIF3MIB::DocsIf3CmSpectrumAnalysisCtrlCmd::has_data() const
{
    if (is_presence_container) return true;
    return docsif3cmspectrumanalysisctrlcmdenable.is_set
	|| docsif3cmspectrumanalysisctrlcmdinactivitytimeout.is_set
	|| docsif3cmspectrumanalysisctrlcmdfirstsegmentcenterfrequency.is_set
	|| docsif3cmspectrumanalysisctrlcmdlastsegmentcenterfrequency.is_set
	|| docsif3cmspectrumanalysisctrlcmdsegmentfrequencyspan.is_set
	|| docsif3cmspectrumanalysisctrlcmdnumbinspersegment.is_set
	|| docsif3cmspectrumanalysisctrlcmdequivalentnoisebandwidth.is_set
	|| docsif3cmspectrumanalysisctrlcmdwindowfunction.is_set
	|| docsif3cmspectrumanalysisctrlcmdnumberofaverages.is_set;
}

bool DOCSIF3MIB::DocsIf3CmSpectrumAnalysisCtrlCmd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(docsif3cmspectrumanalysisctrlcmdenable.yfilter)
	|| ydk::is_set(docsif3cmspectrumanalysisctrlcmdinactivitytimeout.yfilter)
	|| ydk::is_set(docsif3cmspectrumanalysisctrlcmdfirstsegmentcenterfrequency.yfilter)
	|| ydk::is_set(docsif3cmspectrumanalysisctrlcmdlastsegmentcenterfrequency.yfilter)
	|| ydk::is_set(docsif3cmspectrumanalysisctrlcmdsegmentfrequencyspan.yfilter)
	|| ydk::is_set(docsif3cmspectrumanalysisctrlcmdnumbinspersegment.yfilter)
	|| ydk::is_set(docsif3cmspectrumanalysisctrlcmdequivalentnoisebandwidth.yfilter)
	|| ydk::is_set(docsif3cmspectrumanalysisctrlcmdwindowfunction.yfilter)
	|| ydk::is_set(docsif3cmspectrumanalysisctrlcmdnumberofaverages.yfilter);
}

std::string DOCSIF3MIB::DocsIf3CmSpectrumAnalysisCtrlCmd::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3CmSpectrumAnalysisCtrlCmd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3CmSpectrumAnalysisCtrlCmd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3CmSpectrumAnalysisCtrlCmd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (docsif3cmspectrumanalysisctrlcmdenable.is_set || is_set(docsif3cmspectrumanalysisctrlcmdenable.yfilter)) leaf_name_data.push_back(docsif3cmspectrumanalysisctrlcmdenable.get_name_leafdata());
    if (docsif3cmspectrumanalysisctrlcmdinactivitytimeout.is_set || is_set(docsif3cmspectrumanalysisctrlcmdinactivitytimeout.yfilter)) leaf_name_data.push_back(docsif3cmspectrumanalysisctrlcmdinactivitytimeout.get_name_leafdata());
    if (docsif3cmspectrumanalysisctrlcmdfirstsegmentcenterfrequency.is_set || is_set(docsif3cmspectrumanalysisctrlcmdfirstsegmentcenterfrequency.yfilter)) leaf_name_data.push_back(docsif3cmspectrumanalysisctrlcmdfirstsegmentcenterfrequency.get_name_leafdata());
    if (docsif3cmspectrumanalysisctrlcmdlastsegmentcenterfrequency.is_set || is_set(docsif3cmspectrumanalysisctrlcmdlastsegmentcenterfrequency.yfilter)) leaf_name_data.push_back(docsif3cmspectrumanalysisctrlcmdlastsegmentcenterfrequency.get_name_leafdata());
    if (docsif3cmspectrumanalysisctrlcmdsegmentfrequencyspan.is_set || is_set(docsif3cmspectrumanalysisctrlcmdsegmentfrequencyspan.yfilter)) leaf_name_data.push_back(docsif3cmspectrumanalysisctrlcmdsegmentfrequencyspan.get_name_leafdata());
    if (docsif3cmspectrumanalysisctrlcmdnumbinspersegment.is_set || is_set(docsif3cmspectrumanalysisctrlcmdnumbinspersegment.yfilter)) leaf_name_data.push_back(docsif3cmspectrumanalysisctrlcmdnumbinspersegment.get_name_leafdata());
    if (docsif3cmspectrumanalysisctrlcmdequivalentnoisebandwidth.is_set || is_set(docsif3cmspectrumanalysisctrlcmdequivalentnoisebandwidth.yfilter)) leaf_name_data.push_back(docsif3cmspectrumanalysisctrlcmdequivalentnoisebandwidth.get_name_leafdata());
    if (docsif3cmspectrumanalysisctrlcmdwindowfunction.is_set || is_set(docsif3cmspectrumanalysisctrlcmdwindowfunction.yfilter)) leaf_name_data.push_back(docsif3cmspectrumanalysisctrlcmdwindowfunction.get_name_leafdata());
    if (docsif3cmspectrumanalysisctrlcmdnumberofaverages.is_set || is_set(docsif3cmspectrumanalysisctrlcmdnumberofaverages.yfilter)) leaf_name_data.push_back(docsif3cmspectrumanalysisctrlcmdnumberofaverages.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3CmSpectrumAnalysisCtrlCmd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3CmSpectrumAnalysisCtrlCmd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSIF3MIB::DocsIf3CmSpectrumAnalysisCtrlCmd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "docsIf3CmSpectrumAnalysisCtrlCmdEnable")
    {
        docsif3cmspectrumanalysisctrlcmdenable = value;
        docsif3cmspectrumanalysisctrlcmdenable.value_namespace = name_space;
        docsif3cmspectrumanalysisctrlcmdenable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmSpectrumAnalysisCtrlCmdInactivityTimeout")
    {
        docsif3cmspectrumanalysisctrlcmdinactivitytimeout = value;
        docsif3cmspectrumanalysisctrlcmdinactivitytimeout.value_namespace = name_space;
        docsif3cmspectrumanalysisctrlcmdinactivitytimeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmSpectrumAnalysisCtrlCmdFirstSegmentCenterFrequency")
    {
        docsif3cmspectrumanalysisctrlcmdfirstsegmentcenterfrequency = value;
        docsif3cmspectrumanalysisctrlcmdfirstsegmentcenterfrequency.value_namespace = name_space;
        docsif3cmspectrumanalysisctrlcmdfirstsegmentcenterfrequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmSpectrumAnalysisCtrlCmdLastSegmentCenterFrequency")
    {
        docsif3cmspectrumanalysisctrlcmdlastsegmentcenterfrequency = value;
        docsif3cmspectrumanalysisctrlcmdlastsegmentcenterfrequency.value_namespace = name_space;
        docsif3cmspectrumanalysisctrlcmdlastsegmentcenterfrequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmSpectrumAnalysisCtrlCmdSegmentFrequencySpan")
    {
        docsif3cmspectrumanalysisctrlcmdsegmentfrequencyspan = value;
        docsif3cmspectrumanalysisctrlcmdsegmentfrequencyspan.value_namespace = name_space;
        docsif3cmspectrumanalysisctrlcmdsegmentfrequencyspan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmSpectrumAnalysisCtrlCmdNumBinsPerSegment")
    {
        docsif3cmspectrumanalysisctrlcmdnumbinspersegment = value;
        docsif3cmspectrumanalysisctrlcmdnumbinspersegment.value_namespace = name_space;
        docsif3cmspectrumanalysisctrlcmdnumbinspersegment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmSpectrumAnalysisCtrlCmdEquivalentNoiseBandwidth")
    {
        docsif3cmspectrumanalysisctrlcmdequivalentnoisebandwidth = value;
        docsif3cmspectrumanalysisctrlcmdequivalentnoisebandwidth.value_namespace = name_space;
        docsif3cmspectrumanalysisctrlcmdequivalentnoisebandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmSpectrumAnalysisCtrlCmdWindowFunction")
    {
        docsif3cmspectrumanalysisctrlcmdwindowfunction = value;
        docsif3cmspectrumanalysisctrlcmdwindowfunction.value_namespace = name_space;
        docsif3cmspectrumanalysisctrlcmdwindowfunction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmSpectrumAnalysisCtrlCmdNumberOfAverages")
    {
        docsif3cmspectrumanalysisctrlcmdnumberofaverages = value;
        docsif3cmspectrumanalysisctrlcmdnumberofaverages.value_namespace = name_space;
        docsif3cmspectrumanalysisctrlcmdnumberofaverages.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIF3MIB::DocsIf3CmSpectrumAnalysisCtrlCmd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "docsIf3CmSpectrumAnalysisCtrlCmdEnable")
    {
        docsif3cmspectrumanalysisctrlcmdenable.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmSpectrumAnalysisCtrlCmdInactivityTimeout")
    {
        docsif3cmspectrumanalysisctrlcmdinactivitytimeout.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmSpectrumAnalysisCtrlCmdFirstSegmentCenterFrequency")
    {
        docsif3cmspectrumanalysisctrlcmdfirstsegmentcenterfrequency.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmSpectrumAnalysisCtrlCmdLastSegmentCenterFrequency")
    {
        docsif3cmspectrumanalysisctrlcmdlastsegmentcenterfrequency.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmSpectrumAnalysisCtrlCmdSegmentFrequencySpan")
    {
        docsif3cmspectrumanalysisctrlcmdsegmentfrequencyspan.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmSpectrumAnalysisCtrlCmdNumBinsPerSegment")
    {
        docsif3cmspectrumanalysisctrlcmdnumbinspersegment.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmSpectrumAnalysisCtrlCmdEquivalentNoiseBandwidth")
    {
        docsif3cmspectrumanalysisctrlcmdequivalentnoisebandwidth.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmSpectrumAnalysisCtrlCmdWindowFunction")
    {
        docsif3cmspectrumanalysisctrlcmdwindowfunction.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmSpectrumAnalysisCtrlCmdNumberOfAverages")
    {
        docsif3cmspectrumanalysisctrlcmdnumberofaverages.yfilter = yfilter;
    }
}

bool DOCSIF3MIB::DocsIf3CmSpectrumAnalysisCtrlCmd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIf3CmSpectrumAnalysisCtrlCmdEnable" || name == "docsIf3CmSpectrumAnalysisCtrlCmdInactivityTimeout" || name == "docsIf3CmSpectrumAnalysisCtrlCmdFirstSegmentCenterFrequency" || name == "docsIf3CmSpectrumAnalysisCtrlCmdLastSegmentCenterFrequency" || name == "docsIf3CmSpectrumAnalysisCtrlCmdSegmentFrequencySpan" || name == "docsIf3CmSpectrumAnalysisCtrlCmdNumBinsPerSegment" || name == "docsIf3CmSpectrumAnalysisCtrlCmdEquivalentNoiseBandwidth" || name == "docsIf3CmSpectrumAnalysisCtrlCmdWindowFunction" || name == "docsIf3CmSpectrumAnalysisCtrlCmdNumberOfAverages")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3CmStatusTable::DocsIf3CmStatusTable()
    :
    docsif3cmstatusentry(this, {"ifindex"})
{

    yang_name = "docsIf3CmStatusTable"; yang_parent_name = "DOCS-IF3-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3CmStatusTable::~DocsIf3CmStatusTable()
{
}

bool DOCSIF3MIB::DocsIf3CmStatusTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsif3cmstatusentry.len(); index++)
    {
        if(docsif3cmstatusentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIF3MIB::DocsIf3CmStatusTable::has_operation() const
{
    for (std::size_t index=0; index<docsif3cmstatusentry.len(); index++)
    {
        if(docsif3cmstatusentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIF3MIB::DocsIf3CmStatusTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3CmStatusTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3CmStatusTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3CmStatusTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3CmStatusTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIf3CmStatusEntry")
    {
        auto c = std::make_shared<DOCSIF3MIB::DocsIf3CmStatusTable::DocsIf3CmStatusEntry>();
        c->parent = this;
        docsif3cmstatusentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3CmStatusTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsif3cmstatusentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSIF3MIB::DocsIf3CmStatusTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIF3MIB::DocsIf3CmStatusTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIF3MIB::DocsIf3CmStatusTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIf3CmStatusEntry")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3CmStatusTable::DocsIf3CmStatusEntry::DocsIf3CmStatusEntry()
    :
    ifindex{YType::str, "ifIndex"},
    docsif3cmstatusvalue{YType::enumeration, "docsIf3CmStatusValue"},
    docsif3cmstatuscode{YType::str, "docsIf3CmStatusCode"},
    docsif3cmstatusresets{YType::uint32, "docsIf3CmStatusResets"},
    docsif3cmstatuslostsyncs{YType::uint32, "docsIf3CmStatusLostSyncs"},
    docsif3cmstatusinvalidmaps{YType::uint32, "docsIf3CmStatusInvalidMaps"},
    docsif3cmstatusinvaliducds{YType::uint32, "docsIf3CmStatusInvalidUcds"},
    docsif3cmstatusinvalidrangingrsps{YType::uint32, "docsIf3CmStatusInvalidRangingRsps"},
    docsif3cmstatusinvalidregrsps{YType::uint32, "docsIf3CmStatusInvalidRegRsps"},
    docsif3cmstatust1timeouts{YType::uint32, "docsIf3CmStatusT1Timeouts"},
    docsif3cmstatust2timeouts{YType::uint32, "docsIf3CmStatusT2Timeouts"},
    docsif3cmstatusuccssuccesses{YType::uint32, "docsIf3CmStatusUCCsSuccesses"},
    docsif3cmstatusuccfails{YType::uint32, "docsIf3CmStatusUCCFails"},
    docsif3cmstatusenergymgt1x1operstatus{YType::boolean, "docsIf3CmStatusEnergyMgt1x1OperStatus"}
{

    yang_name = "docsIf3CmStatusEntry"; yang_parent_name = "docsIf3CmStatusTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3CmStatusTable::DocsIf3CmStatusEntry::~DocsIf3CmStatusEntry()
{
}

bool DOCSIF3MIB::DocsIf3CmStatusTable::DocsIf3CmStatusEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| docsif3cmstatusvalue.is_set
	|| docsif3cmstatuscode.is_set
	|| docsif3cmstatusresets.is_set
	|| docsif3cmstatuslostsyncs.is_set
	|| docsif3cmstatusinvalidmaps.is_set
	|| docsif3cmstatusinvaliducds.is_set
	|| docsif3cmstatusinvalidrangingrsps.is_set
	|| docsif3cmstatusinvalidregrsps.is_set
	|| docsif3cmstatust1timeouts.is_set
	|| docsif3cmstatust2timeouts.is_set
	|| docsif3cmstatusuccssuccesses.is_set
	|| docsif3cmstatusuccfails.is_set
	|| docsif3cmstatusenergymgt1x1operstatus.is_set;
}

bool DOCSIF3MIB::DocsIf3CmStatusTable::DocsIf3CmStatusEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(docsif3cmstatusvalue.yfilter)
	|| ydk::is_set(docsif3cmstatuscode.yfilter)
	|| ydk::is_set(docsif3cmstatusresets.yfilter)
	|| ydk::is_set(docsif3cmstatuslostsyncs.yfilter)
	|| ydk::is_set(docsif3cmstatusinvalidmaps.yfilter)
	|| ydk::is_set(docsif3cmstatusinvaliducds.yfilter)
	|| ydk::is_set(docsif3cmstatusinvalidrangingrsps.yfilter)
	|| ydk::is_set(docsif3cmstatusinvalidregrsps.yfilter)
	|| ydk::is_set(docsif3cmstatust1timeouts.yfilter)
	|| ydk::is_set(docsif3cmstatust2timeouts.yfilter)
	|| ydk::is_set(docsif3cmstatusuccssuccesses.yfilter)
	|| ydk::is_set(docsif3cmstatusuccfails.yfilter)
	|| ydk::is_set(docsif3cmstatusenergymgt1x1operstatus.yfilter);
}

std::string DOCSIF3MIB::DocsIf3CmStatusTable::DocsIf3CmStatusEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/docsIf3CmStatusTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3CmStatusTable::DocsIf3CmStatusEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3CmStatusEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3CmStatusTable::DocsIf3CmStatusEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (docsif3cmstatusvalue.is_set || is_set(docsif3cmstatusvalue.yfilter)) leaf_name_data.push_back(docsif3cmstatusvalue.get_name_leafdata());
    if (docsif3cmstatuscode.is_set || is_set(docsif3cmstatuscode.yfilter)) leaf_name_data.push_back(docsif3cmstatuscode.get_name_leafdata());
    if (docsif3cmstatusresets.is_set || is_set(docsif3cmstatusresets.yfilter)) leaf_name_data.push_back(docsif3cmstatusresets.get_name_leafdata());
    if (docsif3cmstatuslostsyncs.is_set || is_set(docsif3cmstatuslostsyncs.yfilter)) leaf_name_data.push_back(docsif3cmstatuslostsyncs.get_name_leafdata());
    if (docsif3cmstatusinvalidmaps.is_set || is_set(docsif3cmstatusinvalidmaps.yfilter)) leaf_name_data.push_back(docsif3cmstatusinvalidmaps.get_name_leafdata());
    if (docsif3cmstatusinvaliducds.is_set || is_set(docsif3cmstatusinvaliducds.yfilter)) leaf_name_data.push_back(docsif3cmstatusinvaliducds.get_name_leafdata());
    if (docsif3cmstatusinvalidrangingrsps.is_set || is_set(docsif3cmstatusinvalidrangingrsps.yfilter)) leaf_name_data.push_back(docsif3cmstatusinvalidrangingrsps.get_name_leafdata());
    if (docsif3cmstatusinvalidregrsps.is_set || is_set(docsif3cmstatusinvalidregrsps.yfilter)) leaf_name_data.push_back(docsif3cmstatusinvalidregrsps.get_name_leafdata());
    if (docsif3cmstatust1timeouts.is_set || is_set(docsif3cmstatust1timeouts.yfilter)) leaf_name_data.push_back(docsif3cmstatust1timeouts.get_name_leafdata());
    if (docsif3cmstatust2timeouts.is_set || is_set(docsif3cmstatust2timeouts.yfilter)) leaf_name_data.push_back(docsif3cmstatust2timeouts.get_name_leafdata());
    if (docsif3cmstatusuccssuccesses.is_set || is_set(docsif3cmstatusuccssuccesses.yfilter)) leaf_name_data.push_back(docsif3cmstatusuccssuccesses.get_name_leafdata());
    if (docsif3cmstatusuccfails.is_set || is_set(docsif3cmstatusuccfails.yfilter)) leaf_name_data.push_back(docsif3cmstatusuccfails.get_name_leafdata());
    if (docsif3cmstatusenergymgt1x1operstatus.is_set || is_set(docsif3cmstatusenergymgt1x1operstatus.yfilter)) leaf_name_data.push_back(docsif3cmstatusenergymgt1x1operstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3CmStatusTable::DocsIf3CmStatusEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3CmStatusTable::DocsIf3CmStatusEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSIF3MIB::DocsIf3CmStatusTable::DocsIf3CmStatusEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmStatusValue")
    {
        docsif3cmstatusvalue = value;
        docsif3cmstatusvalue.value_namespace = name_space;
        docsif3cmstatusvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmStatusCode")
    {
        docsif3cmstatuscode = value;
        docsif3cmstatuscode.value_namespace = name_space;
        docsif3cmstatuscode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmStatusResets")
    {
        docsif3cmstatusresets = value;
        docsif3cmstatusresets.value_namespace = name_space;
        docsif3cmstatusresets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmStatusLostSyncs")
    {
        docsif3cmstatuslostsyncs = value;
        docsif3cmstatuslostsyncs.value_namespace = name_space;
        docsif3cmstatuslostsyncs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmStatusInvalidMaps")
    {
        docsif3cmstatusinvalidmaps = value;
        docsif3cmstatusinvalidmaps.value_namespace = name_space;
        docsif3cmstatusinvalidmaps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmStatusInvalidUcds")
    {
        docsif3cmstatusinvaliducds = value;
        docsif3cmstatusinvaliducds.value_namespace = name_space;
        docsif3cmstatusinvaliducds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmStatusInvalidRangingRsps")
    {
        docsif3cmstatusinvalidrangingrsps = value;
        docsif3cmstatusinvalidrangingrsps.value_namespace = name_space;
        docsif3cmstatusinvalidrangingrsps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmStatusInvalidRegRsps")
    {
        docsif3cmstatusinvalidregrsps = value;
        docsif3cmstatusinvalidregrsps.value_namespace = name_space;
        docsif3cmstatusinvalidregrsps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmStatusT1Timeouts")
    {
        docsif3cmstatust1timeouts = value;
        docsif3cmstatust1timeouts.value_namespace = name_space;
        docsif3cmstatust1timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmStatusT2Timeouts")
    {
        docsif3cmstatust2timeouts = value;
        docsif3cmstatust2timeouts.value_namespace = name_space;
        docsif3cmstatust2timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmStatusUCCsSuccesses")
    {
        docsif3cmstatusuccssuccesses = value;
        docsif3cmstatusuccssuccesses.value_namespace = name_space;
        docsif3cmstatusuccssuccesses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmStatusUCCFails")
    {
        docsif3cmstatusuccfails = value;
        docsif3cmstatusuccfails.value_namespace = name_space;
        docsif3cmstatusuccfails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmStatusEnergyMgt1x1OperStatus")
    {
        docsif3cmstatusenergymgt1x1operstatus = value;
        docsif3cmstatusenergymgt1x1operstatus.value_namespace = name_space;
        docsif3cmstatusenergymgt1x1operstatus.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIF3MIB::DocsIf3CmStatusTable::DocsIf3CmStatusEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmStatusValue")
    {
        docsif3cmstatusvalue.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmStatusCode")
    {
        docsif3cmstatuscode.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmStatusResets")
    {
        docsif3cmstatusresets.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmStatusLostSyncs")
    {
        docsif3cmstatuslostsyncs.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmStatusInvalidMaps")
    {
        docsif3cmstatusinvalidmaps.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmStatusInvalidUcds")
    {
        docsif3cmstatusinvaliducds.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmStatusInvalidRangingRsps")
    {
        docsif3cmstatusinvalidrangingrsps.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmStatusInvalidRegRsps")
    {
        docsif3cmstatusinvalidregrsps.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmStatusT1Timeouts")
    {
        docsif3cmstatust1timeouts.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmStatusT2Timeouts")
    {
        docsif3cmstatust2timeouts.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmStatusUCCsSuccesses")
    {
        docsif3cmstatusuccssuccesses.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmStatusUCCFails")
    {
        docsif3cmstatusuccfails.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmStatusEnergyMgt1x1OperStatus")
    {
        docsif3cmstatusenergymgt1x1operstatus.yfilter = yfilter;
    }
}

bool DOCSIF3MIB::DocsIf3CmStatusTable::DocsIf3CmStatusEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "docsIf3CmStatusValue" || name == "docsIf3CmStatusCode" || name == "docsIf3CmStatusResets" || name == "docsIf3CmStatusLostSyncs" || name == "docsIf3CmStatusInvalidMaps" || name == "docsIf3CmStatusInvalidUcds" || name == "docsIf3CmStatusInvalidRangingRsps" || name == "docsIf3CmStatusInvalidRegRsps" || name == "docsIf3CmStatusT1Timeouts" || name == "docsIf3CmStatusT2Timeouts" || name == "docsIf3CmStatusUCCsSuccesses" || name == "docsIf3CmStatusUCCFails" || name == "docsIf3CmStatusEnergyMgt1x1OperStatus")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3CmStatusUsTable::DocsIf3CmStatusUsTable()
    :
    docsif3cmstatususentry(this, {"ifindex"})
{

    yang_name = "docsIf3CmStatusUsTable"; yang_parent_name = "DOCS-IF3-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3CmStatusUsTable::~DocsIf3CmStatusUsTable()
{
}

bool DOCSIF3MIB::DocsIf3CmStatusUsTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsif3cmstatususentry.len(); index++)
    {
        if(docsif3cmstatususentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIF3MIB::DocsIf3CmStatusUsTable::has_operation() const
{
    for (std::size_t index=0; index<docsif3cmstatususentry.len(); index++)
    {
        if(docsif3cmstatususentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIF3MIB::DocsIf3CmStatusUsTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3CmStatusUsTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3CmStatusUsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3CmStatusUsTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3CmStatusUsTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIf3CmStatusUsEntry")
    {
        auto c = std::make_shared<DOCSIF3MIB::DocsIf3CmStatusUsTable::DocsIf3CmStatusUsEntry>();
        c->parent = this;
        docsif3cmstatususentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3CmStatusUsTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsif3cmstatususentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSIF3MIB::DocsIf3CmStatusUsTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIF3MIB::DocsIf3CmStatusUsTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIF3MIB::DocsIf3CmStatusUsTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIf3CmStatusUsEntry")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3CmStatusUsTable::DocsIf3CmStatusUsEntry::DocsIf3CmStatusUsEntry()
    :
    ifindex{YType::str, "ifIndex"},
    docsif3cmstatusustxpower{YType::int32, "docsIf3CmStatusUsTxPower"},
    docsif3cmstatusust3timeouts{YType::uint32, "docsIf3CmStatusUsT3Timeouts"},
    docsif3cmstatusust4timeouts{YType::uint32, "docsIf3CmStatusUsT4Timeouts"},
    docsif3cmstatususrangingaborteds{YType::uint32, "docsIf3CmStatusUsRangingAborteds"},
    docsif3cmstatususmodulationtype{YType::enumeration, "docsIf3CmStatusUsModulationType"},
    docsif3cmstatususeqdata{YType::str, "docsIf3CmStatusUsEqData"},
    docsif3cmstatusust3exceededs{YType::uint32, "docsIf3CmStatusUsT3Exceededs"},
    docsif3cmstatususismuted{YType::boolean, "docsIf3CmStatusUsIsMuted"},
    docsif3cmstatususrangingstatus{YType::enumeration, "docsIf3CmStatusUsRangingStatus"}
{

    yang_name = "docsIf3CmStatusUsEntry"; yang_parent_name = "docsIf3CmStatusUsTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3CmStatusUsTable::DocsIf3CmStatusUsEntry::~DocsIf3CmStatusUsEntry()
{
}

bool DOCSIF3MIB::DocsIf3CmStatusUsTable::DocsIf3CmStatusUsEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| docsif3cmstatusustxpower.is_set
	|| docsif3cmstatusust3timeouts.is_set
	|| docsif3cmstatusust4timeouts.is_set
	|| docsif3cmstatususrangingaborteds.is_set
	|| docsif3cmstatususmodulationtype.is_set
	|| docsif3cmstatususeqdata.is_set
	|| docsif3cmstatusust3exceededs.is_set
	|| docsif3cmstatususismuted.is_set
	|| docsif3cmstatususrangingstatus.is_set;
}

bool DOCSIF3MIB::DocsIf3CmStatusUsTable::DocsIf3CmStatusUsEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(docsif3cmstatusustxpower.yfilter)
	|| ydk::is_set(docsif3cmstatusust3timeouts.yfilter)
	|| ydk::is_set(docsif3cmstatusust4timeouts.yfilter)
	|| ydk::is_set(docsif3cmstatususrangingaborteds.yfilter)
	|| ydk::is_set(docsif3cmstatususmodulationtype.yfilter)
	|| ydk::is_set(docsif3cmstatususeqdata.yfilter)
	|| ydk::is_set(docsif3cmstatusust3exceededs.yfilter)
	|| ydk::is_set(docsif3cmstatususismuted.yfilter)
	|| ydk::is_set(docsif3cmstatususrangingstatus.yfilter);
}

std::string DOCSIF3MIB::DocsIf3CmStatusUsTable::DocsIf3CmStatusUsEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/docsIf3CmStatusUsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3CmStatusUsTable::DocsIf3CmStatusUsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3CmStatusUsEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3CmStatusUsTable::DocsIf3CmStatusUsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (docsif3cmstatusustxpower.is_set || is_set(docsif3cmstatusustxpower.yfilter)) leaf_name_data.push_back(docsif3cmstatusustxpower.get_name_leafdata());
    if (docsif3cmstatusust3timeouts.is_set || is_set(docsif3cmstatusust3timeouts.yfilter)) leaf_name_data.push_back(docsif3cmstatusust3timeouts.get_name_leafdata());
    if (docsif3cmstatusust4timeouts.is_set || is_set(docsif3cmstatusust4timeouts.yfilter)) leaf_name_data.push_back(docsif3cmstatusust4timeouts.get_name_leafdata());
    if (docsif3cmstatususrangingaborteds.is_set || is_set(docsif3cmstatususrangingaborteds.yfilter)) leaf_name_data.push_back(docsif3cmstatususrangingaborteds.get_name_leafdata());
    if (docsif3cmstatususmodulationtype.is_set || is_set(docsif3cmstatususmodulationtype.yfilter)) leaf_name_data.push_back(docsif3cmstatususmodulationtype.get_name_leafdata());
    if (docsif3cmstatususeqdata.is_set || is_set(docsif3cmstatususeqdata.yfilter)) leaf_name_data.push_back(docsif3cmstatususeqdata.get_name_leafdata());
    if (docsif3cmstatusust3exceededs.is_set || is_set(docsif3cmstatusust3exceededs.yfilter)) leaf_name_data.push_back(docsif3cmstatusust3exceededs.get_name_leafdata());
    if (docsif3cmstatususismuted.is_set || is_set(docsif3cmstatususismuted.yfilter)) leaf_name_data.push_back(docsif3cmstatususismuted.get_name_leafdata());
    if (docsif3cmstatususrangingstatus.is_set || is_set(docsif3cmstatususrangingstatus.yfilter)) leaf_name_data.push_back(docsif3cmstatususrangingstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3CmStatusUsTable::DocsIf3CmStatusUsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3CmStatusUsTable::DocsIf3CmStatusUsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSIF3MIB::DocsIf3CmStatusUsTable::DocsIf3CmStatusUsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmStatusUsTxPower")
    {
        docsif3cmstatusustxpower = value;
        docsif3cmstatusustxpower.value_namespace = name_space;
        docsif3cmstatusustxpower.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmStatusUsT3Timeouts")
    {
        docsif3cmstatusust3timeouts = value;
        docsif3cmstatusust3timeouts.value_namespace = name_space;
        docsif3cmstatusust3timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmStatusUsT4Timeouts")
    {
        docsif3cmstatusust4timeouts = value;
        docsif3cmstatusust4timeouts.value_namespace = name_space;
        docsif3cmstatusust4timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmStatusUsRangingAborteds")
    {
        docsif3cmstatususrangingaborteds = value;
        docsif3cmstatususrangingaborteds.value_namespace = name_space;
        docsif3cmstatususrangingaborteds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmStatusUsModulationType")
    {
        docsif3cmstatususmodulationtype = value;
        docsif3cmstatususmodulationtype.value_namespace = name_space;
        docsif3cmstatususmodulationtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmStatusUsEqData")
    {
        docsif3cmstatususeqdata = value;
        docsif3cmstatususeqdata.value_namespace = name_space;
        docsif3cmstatususeqdata.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmStatusUsT3Exceededs")
    {
        docsif3cmstatusust3exceededs = value;
        docsif3cmstatusust3exceededs.value_namespace = name_space;
        docsif3cmstatusust3exceededs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmStatusUsIsMuted")
    {
        docsif3cmstatususismuted = value;
        docsif3cmstatususismuted.value_namespace = name_space;
        docsif3cmstatususismuted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmStatusUsRangingStatus")
    {
        docsif3cmstatususrangingstatus = value;
        docsif3cmstatususrangingstatus.value_namespace = name_space;
        docsif3cmstatususrangingstatus.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIF3MIB::DocsIf3CmStatusUsTable::DocsIf3CmStatusUsEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmStatusUsTxPower")
    {
        docsif3cmstatusustxpower.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmStatusUsT3Timeouts")
    {
        docsif3cmstatusust3timeouts.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmStatusUsT4Timeouts")
    {
        docsif3cmstatusust4timeouts.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmStatusUsRangingAborteds")
    {
        docsif3cmstatususrangingaborteds.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmStatusUsModulationType")
    {
        docsif3cmstatususmodulationtype.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmStatusUsEqData")
    {
        docsif3cmstatususeqdata.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmStatusUsT3Exceededs")
    {
        docsif3cmstatusust3exceededs.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmStatusUsIsMuted")
    {
        docsif3cmstatususismuted.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmStatusUsRangingStatus")
    {
        docsif3cmstatususrangingstatus.yfilter = yfilter;
    }
}

bool DOCSIF3MIB::DocsIf3CmStatusUsTable::DocsIf3CmStatusUsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "docsIf3CmStatusUsTxPower" || name == "docsIf3CmStatusUsT3Timeouts" || name == "docsIf3CmStatusUsT4Timeouts" || name == "docsIf3CmStatusUsRangingAborteds" || name == "docsIf3CmStatusUsModulationType" || name == "docsIf3CmStatusUsEqData" || name == "docsIf3CmStatusUsT3Exceededs" || name == "docsIf3CmStatusUsIsMuted" || name == "docsIf3CmStatusUsRangingStatus")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3CmtsCmRegStatusTable::DocsIf3CmtsCmRegStatusTable()
    :
    docsif3cmtscmregstatusentry(this, {"docsif3cmtscmregstatusid"})
{

    yang_name = "docsIf3CmtsCmRegStatusTable"; yang_parent_name = "DOCS-IF3-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3CmtsCmRegStatusTable::~DocsIf3CmtsCmRegStatusTable()
{
}

bool DOCSIF3MIB::DocsIf3CmtsCmRegStatusTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsif3cmtscmregstatusentry.len(); index++)
    {
        if(docsif3cmtscmregstatusentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIF3MIB::DocsIf3CmtsCmRegStatusTable::has_operation() const
{
    for (std::size_t index=0; index<docsif3cmtscmregstatusentry.len(); index++)
    {
        if(docsif3cmtscmregstatusentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIF3MIB::DocsIf3CmtsCmRegStatusTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3CmtsCmRegStatusTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3CmtsCmRegStatusTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3CmtsCmRegStatusTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3CmtsCmRegStatusTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIf3CmtsCmRegStatusEntry")
    {
        auto c = std::make_shared<DOCSIF3MIB::DocsIf3CmtsCmRegStatusTable::DocsIf3CmtsCmRegStatusEntry>();
        c->parent = this;
        docsif3cmtscmregstatusentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3CmtsCmRegStatusTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsif3cmtscmregstatusentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSIF3MIB::DocsIf3CmtsCmRegStatusTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIF3MIB::DocsIf3CmtsCmRegStatusTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIF3MIB::DocsIf3CmtsCmRegStatusTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIf3CmtsCmRegStatusEntry")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3CmtsCmRegStatusTable::DocsIf3CmtsCmRegStatusEntry::DocsIf3CmtsCmRegStatusEntry()
    :
    docsif3cmtscmregstatusid{YType::uint32, "docsIf3CmtsCmRegStatusId"},
    docsif3cmtscmregstatusmacaddr{YType::str, "docsIf3CmtsCmRegStatusMacAddr"},
    docsif3cmtscmregstatusipv6addr{YType::str, "docsIf3CmtsCmRegStatusIPv6Addr"},
    docsif3cmtscmregstatusipv6linklocal{YType::str, "docsIf3CmtsCmRegStatusIPv6LinkLocal"},
    docsif3cmtscmregstatusipv4addr{YType::str, "docsIf3CmtsCmRegStatusIPv4Addr"},
    docsif3cmtscmregstatusvalue{YType::enumeration, "docsIf3CmtsCmRegStatusValue"},
    docsif3cmtscmregstatusmdifindex{YType::int32, "docsIf3CmtsCmRegStatusMdIfIndex"},
    docsif3cmtscmregstatusmdcmsgid{YType::uint32, "docsIf3CmtsCmRegStatusMdCmSgId"},
    docsif3cmtscmregstatusrcpid{YType::str, "docsIf3CmtsCmRegStatusRcpId"},
    docsif3cmtscmregstatusrccstatusid{YType::uint32, "docsIf3CmtsCmRegStatusRccStatusId"},
    docsif3cmtscmregstatusrcsid{YType::uint32, "docsIf3CmtsCmRegStatusRcsId"},
    docsif3cmtscmregstatustcsid{YType::uint32, "docsIf3CmtsCmRegStatusTcsId"},
    docsif3cmtscmregstatusqosversion{YType::enumeration, "docsIf3CmtsCmRegStatusQosVersion"},
    docsif3cmtscmregstatuslastregtime{YType::str, "docsIf3CmtsCmRegStatusLastRegTime"},
    docsif3cmtscmregstatusaddrresolutionreqs{YType::uint32, "docsIf3CmtsCmRegStatusAddrResolutionReqs"},
    docsif3cmtscmregstatusenergymgtenabled{YType::bits, "docsIf3CmtsCmRegStatusEnergyMgtEnabled"},
    docsif3cmtscmregstatusenergymgtoperstatus{YType::bits, "docsIf3CmtsCmRegStatusEnergyMgtOperStatus"}
{

    yang_name = "docsIf3CmtsCmRegStatusEntry"; yang_parent_name = "docsIf3CmtsCmRegStatusTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3CmtsCmRegStatusTable::DocsIf3CmtsCmRegStatusEntry::~DocsIf3CmtsCmRegStatusEntry()
{
}

bool DOCSIF3MIB::DocsIf3CmtsCmRegStatusTable::DocsIf3CmtsCmRegStatusEntry::has_data() const
{
    if (is_presence_container) return true;
    return docsif3cmtscmregstatusid.is_set
	|| docsif3cmtscmregstatusmacaddr.is_set
	|| docsif3cmtscmregstatusipv6addr.is_set
	|| docsif3cmtscmregstatusipv6linklocal.is_set
	|| docsif3cmtscmregstatusipv4addr.is_set
	|| docsif3cmtscmregstatusvalue.is_set
	|| docsif3cmtscmregstatusmdifindex.is_set
	|| docsif3cmtscmregstatusmdcmsgid.is_set
	|| docsif3cmtscmregstatusrcpid.is_set
	|| docsif3cmtscmregstatusrccstatusid.is_set
	|| docsif3cmtscmregstatusrcsid.is_set
	|| docsif3cmtscmregstatustcsid.is_set
	|| docsif3cmtscmregstatusqosversion.is_set
	|| docsif3cmtscmregstatuslastregtime.is_set
	|| docsif3cmtscmregstatusaddrresolutionreqs.is_set
	|| docsif3cmtscmregstatusenergymgtenabled.is_set
	|| docsif3cmtscmregstatusenergymgtoperstatus.is_set;
}

bool DOCSIF3MIB::DocsIf3CmtsCmRegStatusTable::DocsIf3CmtsCmRegStatusEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(docsif3cmtscmregstatusid.yfilter)
	|| ydk::is_set(docsif3cmtscmregstatusmacaddr.yfilter)
	|| ydk::is_set(docsif3cmtscmregstatusipv6addr.yfilter)
	|| ydk::is_set(docsif3cmtscmregstatusipv6linklocal.yfilter)
	|| ydk::is_set(docsif3cmtscmregstatusipv4addr.yfilter)
	|| ydk::is_set(docsif3cmtscmregstatusvalue.yfilter)
	|| ydk::is_set(docsif3cmtscmregstatusmdifindex.yfilter)
	|| ydk::is_set(docsif3cmtscmregstatusmdcmsgid.yfilter)
	|| ydk::is_set(docsif3cmtscmregstatusrcpid.yfilter)
	|| ydk::is_set(docsif3cmtscmregstatusrccstatusid.yfilter)
	|| ydk::is_set(docsif3cmtscmregstatusrcsid.yfilter)
	|| ydk::is_set(docsif3cmtscmregstatustcsid.yfilter)
	|| ydk::is_set(docsif3cmtscmregstatusqosversion.yfilter)
	|| ydk::is_set(docsif3cmtscmregstatuslastregtime.yfilter)
	|| ydk::is_set(docsif3cmtscmregstatusaddrresolutionreqs.yfilter)
	|| ydk::is_set(docsif3cmtscmregstatusenergymgtenabled.yfilter)
	|| ydk::is_set(docsif3cmtscmregstatusenergymgtoperstatus.yfilter);
}

std::string DOCSIF3MIB::DocsIf3CmtsCmRegStatusTable::DocsIf3CmtsCmRegStatusEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/docsIf3CmtsCmRegStatusTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3CmtsCmRegStatusTable::DocsIf3CmtsCmRegStatusEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3CmtsCmRegStatusEntry";
    ADD_KEY_TOKEN(docsif3cmtscmregstatusid, "docsIf3CmtsCmRegStatusId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3CmtsCmRegStatusTable::DocsIf3CmtsCmRegStatusEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (docsif3cmtscmregstatusid.is_set || is_set(docsif3cmtscmregstatusid.yfilter)) leaf_name_data.push_back(docsif3cmtscmregstatusid.get_name_leafdata());
    if (docsif3cmtscmregstatusmacaddr.is_set || is_set(docsif3cmtscmregstatusmacaddr.yfilter)) leaf_name_data.push_back(docsif3cmtscmregstatusmacaddr.get_name_leafdata());
    if (docsif3cmtscmregstatusipv6addr.is_set || is_set(docsif3cmtscmregstatusipv6addr.yfilter)) leaf_name_data.push_back(docsif3cmtscmregstatusipv6addr.get_name_leafdata());
    if (docsif3cmtscmregstatusipv6linklocal.is_set || is_set(docsif3cmtscmregstatusipv6linklocal.yfilter)) leaf_name_data.push_back(docsif3cmtscmregstatusipv6linklocal.get_name_leafdata());
    if (docsif3cmtscmregstatusipv4addr.is_set || is_set(docsif3cmtscmregstatusipv4addr.yfilter)) leaf_name_data.push_back(docsif3cmtscmregstatusipv4addr.get_name_leafdata());
    if (docsif3cmtscmregstatusvalue.is_set || is_set(docsif3cmtscmregstatusvalue.yfilter)) leaf_name_data.push_back(docsif3cmtscmregstatusvalue.get_name_leafdata());
    if (docsif3cmtscmregstatusmdifindex.is_set || is_set(docsif3cmtscmregstatusmdifindex.yfilter)) leaf_name_data.push_back(docsif3cmtscmregstatusmdifindex.get_name_leafdata());
    if (docsif3cmtscmregstatusmdcmsgid.is_set || is_set(docsif3cmtscmregstatusmdcmsgid.yfilter)) leaf_name_data.push_back(docsif3cmtscmregstatusmdcmsgid.get_name_leafdata());
    if (docsif3cmtscmregstatusrcpid.is_set || is_set(docsif3cmtscmregstatusrcpid.yfilter)) leaf_name_data.push_back(docsif3cmtscmregstatusrcpid.get_name_leafdata());
    if (docsif3cmtscmregstatusrccstatusid.is_set || is_set(docsif3cmtscmregstatusrccstatusid.yfilter)) leaf_name_data.push_back(docsif3cmtscmregstatusrccstatusid.get_name_leafdata());
    if (docsif3cmtscmregstatusrcsid.is_set || is_set(docsif3cmtscmregstatusrcsid.yfilter)) leaf_name_data.push_back(docsif3cmtscmregstatusrcsid.get_name_leafdata());
    if (docsif3cmtscmregstatustcsid.is_set || is_set(docsif3cmtscmregstatustcsid.yfilter)) leaf_name_data.push_back(docsif3cmtscmregstatustcsid.get_name_leafdata());
    if (docsif3cmtscmregstatusqosversion.is_set || is_set(docsif3cmtscmregstatusqosversion.yfilter)) leaf_name_data.push_back(docsif3cmtscmregstatusqosversion.get_name_leafdata());
    if (docsif3cmtscmregstatuslastregtime.is_set || is_set(docsif3cmtscmregstatuslastregtime.yfilter)) leaf_name_data.push_back(docsif3cmtscmregstatuslastregtime.get_name_leafdata());
    if (docsif3cmtscmregstatusaddrresolutionreqs.is_set || is_set(docsif3cmtscmregstatusaddrresolutionreqs.yfilter)) leaf_name_data.push_back(docsif3cmtscmregstatusaddrresolutionreqs.get_name_leafdata());
    if (docsif3cmtscmregstatusenergymgtenabled.is_set || is_set(docsif3cmtscmregstatusenergymgtenabled.yfilter)) leaf_name_data.push_back(docsif3cmtscmregstatusenergymgtenabled.get_name_leafdata());
    if (docsif3cmtscmregstatusenergymgtoperstatus.is_set || is_set(docsif3cmtscmregstatusenergymgtoperstatus.yfilter)) leaf_name_data.push_back(docsif3cmtscmregstatusenergymgtoperstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3CmtsCmRegStatusTable::DocsIf3CmtsCmRegStatusEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3CmtsCmRegStatusTable::DocsIf3CmtsCmRegStatusEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSIF3MIB::DocsIf3CmtsCmRegStatusTable::DocsIf3CmtsCmRegStatusEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "docsIf3CmtsCmRegStatusId")
    {
        docsif3cmtscmregstatusid = value;
        docsif3cmtscmregstatusid.value_namespace = name_space;
        docsif3cmtscmregstatusid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmtsCmRegStatusMacAddr")
    {
        docsif3cmtscmregstatusmacaddr = value;
        docsif3cmtscmregstatusmacaddr.value_namespace = name_space;
        docsif3cmtscmregstatusmacaddr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmtsCmRegStatusIPv6Addr")
    {
        docsif3cmtscmregstatusipv6addr = value;
        docsif3cmtscmregstatusipv6addr.value_namespace = name_space;
        docsif3cmtscmregstatusipv6addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmtsCmRegStatusIPv6LinkLocal")
    {
        docsif3cmtscmregstatusipv6linklocal = value;
        docsif3cmtscmregstatusipv6linklocal.value_namespace = name_space;
        docsif3cmtscmregstatusipv6linklocal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmtsCmRegStatusIPv4Addr")
    {
        docsif3cmtscmregstatusipv4addr = value;
        docsif3cmtscmregstatusipv4addr.value_namespace = name_space;
        docsif3cmtscmregstatusipv4addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmtsCmRegStatusValue")
    {
        docsif3cmtscmregstatusvalue = value;
        docsif3cmtscmregstatusvalue.value_namespace = name_space;
        docsif3cmtscmregstatusvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmtsCmRegStatusMdIfIndex")
    {
        docsif3cmtscmregstatusmdifindex = value;
        docsif3cmtscmregstatusmdifindex.value_namespace = name_space;
        docsif3cmtscmregstatusmdifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmtsCmRegStatusMdCmSgId")
    {
        docsif3cmtscmregstatusmdcmsgid = value;
        docsif3cmtscmregstatusmdcmsgid.value_namespace = name_space;
        docsif3cmtscmregstatusmdcmsgid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmtsCmRegStatusRcpId")
    {
        docsif3cmtscmregstatusrcpid = value;
        docsif3cmtscmregstatusrcpid.value_namespace = name_space;
        docsif3cmtscmregstatusrcpid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmtsCmRegStatusRccStatusId")
    {
        docsif3cmtscmregstatusrccstatusid = value;
        docsif3cmtscmregstatusrccstatusid.value_namespace = name_space;
        docsif3cmtscmregstatusrccstatusid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmtsCmRegStatusRcsId")
    {
        docsif3cmtscmregstatusrcsid = value;
        docsif3cmtscmregstatusrcsid.value_namespace = name_space;
        docsif3cmtscmregstatusrcsid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmtsCmRegStatusTcsId")
    {
        docsif3cmtscmregstatustcsid = value;
        docsif3cmtscmregstatustcsid.value_namespace = name_space;
        docsif3cmtscmregstatustcsid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmtsCmRegStatusQosVersion")
    {
        docsif3cmtscmregstatusqosversion = value;
        docsif3cmtscmregstatusqosversion.value_namespace = name_space;
        docsif3cmtscmregstatusqosversion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmtsCmRegStatusLastRegTime")
    {
        docsif3cmtscmregstatuslastregtime = value;
        docsif3cmtscmregstatuslastregtime.value_namespace = name_space;
        docsif3cmtscmregstatuslastregtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmtsCmRegStatusAddrResolutionReqs")
    {
        docsif3cmtscmregstatusaddrresolutionreqs = value;
        docsif3cmtscmregstatusaddrresolutionreqs.value_namespace = name_space;
        docsif3cmtscmregstatusaddrresolutionreqs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmtsCmRegStatusEnergyMgtEnabled")
    {
        docsif3cmtscmregstatusenergymgtenabled[value] = true;
    }
    if(value_path == "docsIf3CmtsCmRegStatusEnergyMgtOperStatus")
    {
        docsif3cmtscmregstatusenergymgtoperstatus[value] = true;
    }
}

void DOCSIF3MIB::DocsIf3CmtsCmRegStatusTable::DocsIf3CmtsCmRegStatusEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "docsIf3CmtsCmRegStatusId")
    {
        docsif3cmtscmregstatusid.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmtsCmRegStatusMacAddr")
    {
        docsif3cmtscmregstatusmacaddr.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmtsCmRegStatusIPv6Addr")
    {
        docsif3cmtscmregstatusipv6addr.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmtsCmRegStatusIPv6LinkLocal")
    {
        docsif3cmtscmregstatusipv6linklocal.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmtsCmRegStatusIPv4Addr")
    {
        docsif3cmtscmregstatusipv4addr.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmtsCmRegStatusValue")
    {
        docsif3cmtscmregstatusvalue.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmtsCmRegStatusMdIfIndex")
    {
        docsif3cmtscmregstatusmdifindex.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmtsCmRegStatusMdCmSgId")
    {
        docsif3cmtscmregstatusmdcmsgid.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmtsCmRegStatusRcpId")
    {
        docsif3cmtscmregstatusrcpid.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmtsCmRegStatusRccStatusId")
    {
        docsif3cmtscmregstatusrccstatusid.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmtsCmRegStatusRcsId")
    {
        docsif3cmtscmregstatusrcsid.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmtsCmRegStatusTcsId")
    {
        docsif3cmtscmregstatustcsid.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmtsCmRegStatusQosVersion")
    {
        docsif3cmtscmregstatusqosversion.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmtsCmRegStatusLastRegTime")
    {
        docsif3cmtscmregstatuslastregtime.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmtsCmRegStatusAddrResolutionReqs")
    {
        docsif3cmtscmregstatusaddrresolutionreqs.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmtsCmRegStatusEnergyMgtEnabled")
    {
        docsif3cmtscmregstatusenergymgtenabled.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmtsCmRegStatusEnergyMgtOperStatus")
    {
        docsif3cmtscmregstatusenergymgtoperstatus.yfilter = yfilter;
    }
}

bool DOCSIF3MIB::DocsIf3CmtsCmRegStatusTable::DocsIf3CmtsCmRegStatusEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIf3CmtsCmRegStatusId" || name == "docsIf3CmtsCmRegStatusMacAddr" || name == "docsIf3CmtsCmRegStatusIPv6Addr" || name == "docsIf3CmtsCmRegStatusIPv6LinkLocal" || name == "docsIf3CmtsCmRegStatusIPv4Addr" || name == "docsIf3CmtsCmRegStatusValue" || name == "docsIf3CmtsCmRegStatusMdIfIndex" || name == "docsIf3CmtsCmRegStatusMdCmSgId" || name == "docsIf3CmtsCmRegStatusRcpId" || name == "docsIf3CmtsCmRegStatusRccStatusId" || name == "docsIf3CmtsCmRegStatusRcsId" || name == "docsIf3CmtsCmRegStatusTcsId" || name == "docsIf3CmtsCmRegStatusQosVersion" || name == "docsIf3CmtsCmRegStatusLastRegTime" || name == "docsIf3CmtsCmRegStatusAddrResolutionReqs" || name == "docsIf3CmtsCmRegStatusEnergyMgtEnabled" || name == "docsIf3CmtsCmRegStatusEnergyMgtOperStatus")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3CmtsCmUsStatusTable::DocsIf3CmtsCmUsStatusTable()
    :
    docsif3cmtscmusstatusentry(this, {"docsif3cmtscmregstatusid", "docsif3cmtscmusstatuschifindex"})
{

    yang_name = "docsIf3CmtsCmUsStatusTable"; yang_parent_name = "DOCS-IF3-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3CmtsCmUsStatusTable::~DocsIf3CmtsCmUsStatusTable()
{
}

bool DOCSIF3MIB::DocsIf3CmtsCmUsStatusTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsif3cmtscmusstatusentry.len(); index++)
    {
        if(docsif3cmtscmusstatusentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIF3MIB::DocsIf3CmtsCmUsStatusTable::has_operation() const
{
    for (std::size_t index=0; index<docsif3cmtscmusstatusentry.len(); index++)
    {
        if(docsif3cmtscmusstatusentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIF3MIB::DocsIf3CmtsCmUsStatusTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3CmtsCmUsStatusTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3CmtsCmUsStatusTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3CmtsCmUsStatusTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3CmtsCmUsStatusTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIf3CmtsCmUsStatusEntry")
    {
        auto c = std::make_shared<DOCSIF3MIB::DocsIf3CmtsCmUsStatusTable::DocsIf3CmtsCmUsStatusEntry>();
        c->parent = this;
        docsif3cmtscmusstatusentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3CmtsCmUsStatusTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsif3cmtscmusstatusentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSIF3MIB::DocsIf3CmtsCmUsStatusTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIF3MIB::DocsIf3CmtsCmUsStatusTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIF3MIB::DocsIf3CmtsCmUsStatusTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIf3CmtsCmUsStatusEntry")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3CmtsCmUsStatusTable::DocsIf3CmtsCmUsStatusEntry::DocsIf3CmtsCmUsStatusEntry()
    :
    docsif3cmtscmregstatusid{YType::str, "docsIf3CmtsCmRegStatusId"},
    docsif3cmtscmusstatuschifindex{YType::int32, "docsIf3CmtsCmUsStatusChIfIndex"},
    docsif3cmtscmusstatusmodulationtype{YType::enumeration, "docsIf3CmtsCmUsStatusModulationType"},
    docsif3cmtscmusstatusrxpower{YType::int32, "docsIf3CmtsCmUsStatusRxPower"},
    docsif3cmtscmusstatussignalnoise{YType::int32, "docsIf3CmtsCmUsStatusSignalNoise"},
    docsif3cmtscmusstatusmicroreflections{YType::uint32, "docsIf3CmtsCmUsStatusMicroreflections"},
    docsif3cmtscmusstatuseqdata{YType::str, "docsIf3CmtsCmUsStatusEqData"},
    docsif3cmtscmusstatusunerroreds{YType::uint32, "docsIf3CmtsCmUsStatusUnerroreds"},
    docsif3cmtscmusstatuscorrecteds{YType::uint32, "docsIf3CmtsCmUsStatusCorrecteds"},
    docsif3cmtscmusstatusuncorrectables{YType::uint32, "docsIf3CmtsCmUsStatusUncorrectables"},
    docsif3cmtscmusstatushighresolutiontimingoffset{YType::int32, "docsIf3CmtsCmUsStatusHighResolutionTimingOffset"},
    docsif3cmtscmusstatusismuted{YType::boolean, "docsIf3CmtsCmUsStatusIsMuted"},
    docsif3cmtscmusstatusrangingstatus{YType::enumeration, "docsIf3CmtsCmUsStatusRangingStatus"}
{

    yang_name = "docsIf3CmtsCmUsStatusEntry"; yang_parent_name = "docsIf3CmtsCmUsStatusTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3CmtsCmUsStatusTable::DocsIf3CmtsCmUsStatusEntry::~DocsIf3CmtsCmUsStatusEntry()
{
}

bool DOCSIF3MIB::DocsIf3CmtsCmUsStatusTable::DocsIf3CmtsCmUsStatusEntry::has_data() const
{
    if (is_presence_container) return true;
    return docsif3cmtscmregstatusid.is_set
	|| docsif3cmtscmusstatuschifindex.is_set
	|| docsif3cmtscmusstatusmodulationtype.is_set
	|| docsif3cmtscmusstatusrxpower.is_set
	|| docsif3cmtscmusstatussignalnoise.is_set
	|| docsif3cmtscmusstatusmicroreflections.is_set
	|| docsif3cmtscmusstatuseqdata.is_set
	|| docsif3cmtscmusstatusunerroreds.is_set
	|| docsif3cmtscmusstatuscorrecteds.is_set
	|| docsif3cmtscmusstatusuncorrectables.is_set
	|| docsif3cmtscmusstatushighresolutiontimingoffset.is_set
	|| docsif3cmtscmusstatusismuted.is_set
	|| docsif3cmtscmusstatusrangingstatus.is_set;
}

bool DOCSIF3MIB::DocsIf3CmtsCmUsStatusTable::DocsIf3CmtsCmUsStatusEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(docsif3cmtscmregstatusid.yfilter)
	|| ydk::is_set(docsif3cmtscmusstatuschifindex.yfilter)
	|| ydk::is_set(docsif3cmtscmusstatusmodulationtype.yfilter)
	|| ydk::is_set(docsif3cmtscmusstatusrxpower.yfilter)
	|| ydk::is_set(docsif3cmtscmusstatussignalnoise.yfilter)
	|| ydk::is_set(docsif3cmtscmusstatusmicroreflections.yfilter)
	|| ydk::is_set(docsif3cmtscmusstatuseqdata.yfilter)
	|| ydk::is_set(docsif3cmtscmusstatusunerroreds.yfilter)
	|| ydk::is_set(docsif3cmtscmusstatuscorrecteds.yfilter)
	|| ydk::is_set(docsif3cmtscmusstatusuncorrectables.yfilter)
	|| ydk::is_set(docsif3cmtscmusstatushighresolutiontimingoffset.yfilter)
	|| ydk::is_set(docsif3cmtscmusstatusismuted.yfilter)
	|| ydk::is_set(docsif3cmtscmusstatusrangingstatus.yfilter);
}

std::string DOCSIF3MIB::DocsIf3CmtsCmUsStatusTable::DocsIf3CmtsCmUsStatusEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/docsIf3CmtsCmUsStatusTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3CmtsCmUsStatusTable::DocsIf3CmtsCmUsStatusEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3CmtsCmUsStatusEntry";
    ADD_KEY_TOKEN(docsif3cmtscmregstatusid, "docsIf3CmtsCmRegStatusId");
    ADD_KEY_TOKEN(docsif3cmtscmusstatuschifindex, "docsIf3CmtsCmUsStatusChIfIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3CmtsCmUsStatusTable::DocsIf3CmtsCmUsStatusEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (docsif3cmtscmregstatusid.is_set || is_set(docsif3cmtscmregstatusid.yfilter)) leaf_name_data.push_back(docsif3cmtscmregstatusid.get_name_leafdata());
    if (docsif3cmtscmusstatuschifindex.is_set || is_set(docsif3cmtscmusstatuschifindex.yfilter)) leaf_name_data.push_back(docsif3cmtscmusstatuschifindex.get_name_leafdata());
    if (docsif3cmtscmusstatusmodulationtype.is_set || is_set(docsif3cmtscmusstatusmodulationtype.yfilter)) leaf_name_data.push_back(docsif3cmtscmusstatusmodulationtype.get_name_leafdata());
    if (docsif3cmtscmusstatusrxpower.is_set || is_set(docsif3cmtscmusstatusrxpower.yfilter)) leaf_name_data.push_back(docsif3cmtscmusstatusrxpower.get_name_leafdata());
    if (docsif3cmtscmusstatussignalnoise.is_set || is_set(docsif3cmtscmusstatussignalnoise.yfilter)) leaf_name_data.push_back(docsif3cmtscmusstatussignalnoise.get_name_leafdata());
    if (docsif3cmtscmusstatusmicroreflections.is_set || is_set(docsif3cmtscmusstatusmicroreflections.yfilter)) leaf_name_data.push_back(docsif3cmtscmusstatusmicroreflections.get_name_leafdata());
    if (docsif3cmtscmusstatuseqdata.is_set || is_set(docsif3cmtscmusstatuseqdata.yfilter)) leaf_name_data.push_back(docsif3cmtscmusstatuseqdata.get_name_leafdata());
    if (docsif3cmtscmusstatusunerroreds.is_set || is_set(docsif3cmtscmusstatusunerroreds.yfilter)) leaf_name_data.push_back(docsif3cmtscmusstatusunerroreds.get_name_leafdata());
    if (docsif3cmtscmusstatuscorrecteds.is_set || is_set(docsif3cmtscmusstatuscorrecteds.yfilter)) leaf_name_data.push_back(docsif3cmtscmusstatuscorrecteds.get_name_leafdata());
    if (docsif3cmtscmusstatusuncorrectables.is_set || is_set(docsif3cmtscmusstatusuncorrectables.yfilter)) leaf_name_data.push_back(docsif3cmtscmusstatusuncorrectables.get_name_leafdata());
    if (docsif3cmtscmusstatushighresolutiontimingoffset.is_set || is_set(docsif3cmtscmusstatushighresolutiontimingoffset.yfilter)) leaf_name_data.push_back(docsif3cmtscmusstatushighresolutiontimingoffset.get_name_leafdata());
    if (docsif3cmtscmusstatusismuted.is_set || is_set(docsif3cmtscmusstatusismuted.yfilter)) leaf_name_data.push_back(docsif3cmtscmusstatusismuted.get_name_leafdata());
    if (docsif3cmtscmusstatusrangingstatus.is_set || is_set(docsif3cmtscmusstatusrangingstatus.yfilter)) leaf_name_data.push_back(docsif3cmtscmusstatusrangingstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3CmtsCmUsStatusTable::DocsIf3CmtsCmUsStatusEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3CmtsCmUsStatusTable::DocsIf3CmtsCmUsStatusEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSIF3MIB::DocsIf3CmtsCmUsStatusTable::DocsIf3CmtsCmUsStatusEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "docsIf3CmtsCmRegStatusId")
    {
        docsif3cmtscmregstatusid = value;
        docsif3cmtscmregstatusid.value_namespace = name_space;
        docsif3cmtscmregstatusid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmtsCmUsStatusChIfIndex")
    {
        docsif3cmtscmusstatuschifindex = value;
        docsif3cmtscmusstatuschifindex.value_namespace = name_space;
        docsif3cmtscmusstatuschifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmtsCmUsStatusModulationType")
    {
        docsif3cmtscmusstatusmodulationtype = value;
        docsif3cmtscmusstatusmodulationtype.value_namespace = name_space;
        docsif3cmtscmusstatusmodulationtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmtsCmUsStatusRxPower")
    {
        docsif3cmtscmusstatusrxpower = value;
        docsif3cmtscmusstatusrxpower.value_namespace = name_space;
        docsif3cmtscmusstatusrxpower.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmtsCmUsStatusSignalNoise")
    {
        docsif3cmtscmusstatussignalnoise = value;
        docsif3cmtscmusstatussignalnoise.value_namespace = name_space;
        docsif3cmtscmusstatussignalnoise.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmtsCmUsStatusMicroreflections")
    {
        docsif3cmtscmusstatusmicroreflections = value;
        docsif3cmtscmusstatusmicroreflections.value_namespace = name_space;
        docsif3cmtscmusstatusmicroreflections.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmtsCmUsStatusEqData")
    {
        docsif3cmtscmusstatuseqdata = value;
        docsif3cmtscmusstatuseqdata.value_namespace = name_space;
        docsif3cmtscmusstatuseqdata.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmtsCmUsStatusUnerroreds")
    {
        docsif3cmtscmusstatusunerroreds = value;
        docsif3cmtscmusstatusunerroreds.value_namespace = name_space;
        docsif3cmtscmusstatusunerroreds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmtsCmUsStatusCorrecteds")
    {
        docsif3cmtscmusstatuscorrecteds = value;
        docsif3cmtscmusstatuscorrecteds.value_namespace = name_space;
        docsif3cmtscmusstatuscorrecteds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmtsCmUsStatusUncorrectables")
    {
        docsif3cmtscmusstatusuncorrectables = value;
        docsif3cmtscmusstatusuncorrectables.value_namespace = name_space;
        docsif3cmtscmusstatusuncorrectables.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmtsCmUsStatusHighResolutionTimingOffset")
    {
        docsif3cmtscmusstatushighresolutiontimingoffset = value;
        docsif3cmtscmusstatushighresolutiontimingoffset.value_namespace = name_space;
        docsif3cmtscmusstatushighresolutiontimingoffset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmtsCmUsStatusIsMuted")
    {
        docsif3cmtscmusstatusismuted = value;
        docsif3cmtscmusstatusismuted.value_namespace = name_space;
        docsif3cmtscmusstatusismuted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmtsCmUsStatusRangingStatus")
    {
        docsif3cmtscmusstatusrangingstatus = value;
        docsif3cmtscmusstatusrangingstatus.value_namespace = name_space;
        docsif3cmtscmusstatusrangingstatus.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIF3MIB::DocsIf3CmtsCmUsStatusTable::DocsIf3CmtsCmUsStatusEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "docsIf3CmtsCmRegStatusId")
    {
        docsif3cmtscmregstatusid.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmtsCmUsStatusChIfIndex")
    {
        docsif3cmtscmusstatuschifindex.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmtsCmUsStatusModulationType")
    {
        docsif3cmtscmusstatusmodulationtype.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmtsCmUsStatusRxPower")
    {
        docsif3cmtscmusstatusrxpower.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmtsCmUsStatusSignalNoise")
    {
        docsif3cmtscmusstatussignalnoise.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmtsCmUsStatusMicroreflections")
    {
        docsif3cmtscmusstatusmicroreflections.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmtsCmUsStatusEqData")
    {
        docsif3cmtscmusstatuseqdata.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmtsCmUsStatusUnerroreds")
    {
        docsif3cmtscmusstatusunerroreds.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmtsCmUsStatusCorrecteds")
    {
        docsif3cmtscmusstatuscorrecteds.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmtsCmUsStatusUncorrectables")
    {
        docsif3cmtscmusstatusuncorrectables.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmtsCmUsStatusHighResolutionTimingOffset")
    {
        docsif3cmtscmusstatushighresolutiontimingoffset.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmtsCmUsStatusIsMuted")
    {
        docsif3cmtscmusstatusismuted.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmtsCmUsStatusRangingStatus")
    {
        docsif3cmtscmusstatusrangingstatus.yfilter = yfilter;
    }
}

bool DOCSIF3MIB::DocsIf3CmtsCmUsStatusTable::DocsIf3CmtsCmUsStatusEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIf3CmtsCmRegStatusId" || name == "docsIf3CmtsCmUsStatusChIfIndex" || name == "docsIf3CmtsCmUsStatusModulationType" || name == "docsIf3CmtsCmUsStatusRxPower" || name == "docsIf3CmtsCmUsStatusSignalNoise" || name == "docsIf3CmtsCmUsStatusMicroreflections" || name == "docsIf3CmtsCmUsStatusEqData" || name == "docsIf3CmtsCmUsStatusUnerroreds" || name == "docsIf3CmtsCmUsStatusCorrecteds" || name == "docsIf3CmtsCmUsStatusUncorrectables" || name == "docsIf3CmtsCmUsStatusHighResolutionTimingOffset" || name == "docsIf3CmtsCmUsStatusIsMuted" || name == "docsIf3CmtsCmUsStatusRangingStatus")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3MdChCfgTable::DocsIf3MdChCfgTable()
    :
    docsif3mdchcfgentry(this, {"ifindex", "docsif3mdchcfgchifindex"})
{

    yang_name = "docsIf3MdChCfgTable"; yang_parent_name = "DOCS-IF3-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3MdChCfgTable::~DocsIf3MdChCfgTable()
{
}

bool DOCSIF3MIB::DocsIf3MdChCfgTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsif3mdchcfgentry.len(); index++)
    {
        if(docsif3mdchcfgentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIF3MIB::DocsIf3MdChCfgTable::has_operation() const
{
    for (std::size_t index=0; index<docsif3mdchcfgentry.len(); index++)
    {
        if(docsif3mdchcfgentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIF3MIB::DocsIf3MdChCfgTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3MdChCfgTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3MdChCfgTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3MdChCfgTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3MdChCfgTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIf3MdChCfgEntry")
    {
        auto c = std::make_shared<DOCSIF3MIB::DocsIf3MdChCfgTable::DocsIf3MdChCfgEntry>();
        c->parent = this;
        docsif3mdchcfgentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3MdChCfgTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsif3mdchcfgentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSIF3MIB::DocsIf3MdChCfgTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIF3MIB::DocsIf3MdChCfgTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIF3MIB::DocsIf3MdChCfgTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIf3MdChCfgEntry")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3MdChCfgTable::DocsIf3MdChCfgEntry::DocsIf3MdChCfgEntry()
    :
    ifindex{YType::str, "ifIndex"},
    docsif3mdchcfgchifindex{YType::int32, "docsIf3MdChCfgChIfIndex"},
    docsif3mdchcfgispricapableds{YType::boolean, "docsIf3MdChCfgIsPriCapableDs"},
    docsif3mdchcfgchid{YType::uint32, "docsIf3MdChCfgChId"},
    docsif3mdchcfgsfprovattrmask{YType::bits, "docsIf3MdChCfgSfProvAttrMask"},
    docsif3mdchcfgrowstatus{YType::enumeration, "docsIf3MdChCfgRowStatus"}
{

    yang_name = "docsIf3MdChCfgEntry"; yang_parent_name = "docsIf3MdChCfgTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3MdChCfgTable::DocsIf3MdChCfgEntry::~DocsIf3MdChCfgEntry()
{
}

bool DOCSIF3MIB::DocsIf3MdChCfgTable::DocsIf3MdChCfgEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| docsif3mdchcfgchifindex.is_set
	|| docsif3mdchcfgispricapableds.is_set
	|| docsif3mdchcfgchid.is_set
	|| docsif3mdchcfgsfprovattrmask.is_set
	|| docsif3mdchcfgrowstatus.is_set;
}

bool DOCSIF3MIB::DocsIf3MdChCfgTable::DocsIf3MdChCfgEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(docsif3mdchcfgchifindex.yfilter)
	|| ydk::is_set(docsif3mdchcfgispricapableds.yfilter)
	|| ydk::is_set(docsif3mdchcfgchid.yfilter)
	|| ydk::is_set(docsif3mdchcfgsfprovattrmask.yfilter)
	|| ydk::is_set(docsif3mdchcfgrowstatus.yfilter);
}

std::string DOCSIF3MIB::DocsIf3MdChCfgTable::DocsIf3MdChCfgEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/docsIf3MdChCfgTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3MdChCfgTable::DocsIf3MdChCfgEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3MdChCfgEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(docsif3mdchcfgchifindex, "docsIf3MdChCfgChIfIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3MdChCfgTable::DocsIf3MdChCfgEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (docsif3mdchcfgchifindex.is_set || is_set(docsif3mdchcfgchifindex.yfilter)) leaf_name_data.push_back(docsif3mdchcfgchifindex.get_name_leafdata());
    if (docsif3mdchcfgispricapableds.is_set || is_set(docsif3mdchcfgispricapableds.yfilter)) leaf_name_data.push_back(docsif3mdchcfgispricapableds.get_name_leafdata());
    if (docsif3mdchcfgchid.is_set || is_set(docsif3mdchcfgchid.yfilter)) leaf_name_data.push_back(docsif3mdchcfgchid.get_name_leafdata());
    if (docsif3mdchcfgsfprovattrmask.is_set || is_set(docsif3mdchcfgsfprovattrmask.yfilter)) leaf_name_data.push_back(docsif3mdchcfgsfprovattrmask.get_name_leafdata());
    if (docsif3mdchcfgrowstatus.is_set || is_set(docsif3mdchcfgrowstatus.yfilter)) leaf_name_data.push_back(docsif3mdchcfgrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3MdChCfgTable::DocsIf3MdChCfgEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3MdChCfgTable::DocsIf3MdChCfgEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSIF3MIB::DocsIf3MdChCfgTable::DocsIf3MdChCfgEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3MdChCfgChIfIndex")
    {
        docsif3mdchcfgchifindex = value;
        docsif3mdchcfgchifindex.value_namespace = name_space;
        docsif3mdchcfgchifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3MdChCfgIsPriCapableDs")
    {
        docsif3mdchcfgispricapableds = value;
        docsif3mdchcfgispricapableds.value_namespace = name_space;
        docsif3mdchcfgispricapableds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3MdChCfgChId")
    {
        docsif3mdchcfgchid = value;
        docsif3mdchcfgchid.value_namespace = name_space;
        docsif3mdchcfgchid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3MdChCfgSfProvAttrMask")
    {
        docsif3mdchcfgsfprovattrmask[value] = true;
    }
    if(value_path == "docsIf3MdChCfgRowStatus")
    {
        docsif3mdchcfgrowstatus = value;
        docsif3mdchcfgrowstatus.value_namespace = name_space;
        docsif3mdchcfgrowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIF3MIB::DocsIf3MdChCfgTable::DocsIf3MdChCfgEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "docsIf3MdChCfgChIfIndex")
    {
        docsif3mdchcfgchifindex.yfilter = yfilter;
    }
    if(value_path == "docsIf3MdChCfgIsPriCapableDs")
    {
        docsif3mdchcfgispricapableds.yfilter = yfilter;
    }
    if(value_path == "docsIf3MdChCfgChId")
    {
        docsif3mdchcfgchid.yfilter = yfilter;
    }
    if(value_path == "docsIf3MdChCfgSfProvAttrMask")
    {
        docsif3mdchcfgsfprovattrmask.yfilter = yfilter;
    }
    if(value_path == "docsIf3MdChCfgRowStatus")
    {
        docsif3mdchcfgrowstatus.yfilter = yfilter;
    }
}

bool DOCSIF3MIB::DocsIf3MdChCfgTable::DocsIf3MdChCfgEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "docsIf3MdChCfgChIfIndex" || name == "docsIf3MdChCfgIsPriCapableDs" || name == "docsIf3MdChCfgChId" || name == "docsIf3MdChCfgSfProvAttrMask" || name == "docsIf3MdChCfgRowStatus")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3RccCfgTable::DocsIf3RccCfgTable()
    :
    docsif3rcccfgentry(this, {"ifindex", "docsif3rcccfgrcpid", "docsif3rcccfgrcccfgid"})
{

    yang_name = "docsIf3RccCfgTable"; yang_parent_name = "DOCS-IF3-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3RccCfgTable::~DocsIf3RccCfgTable()
{
}

bool DOCSIF3MIB::DocsIf3RccCfgTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsif3rcccfgentry.len(); index++)
    {
        if(docsif3rcccfgentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIF3MIB::DocsIf3RccCfgTable::has_operation() const
{
    for (std::size_t index=0; index<docsif3rcccfgentry.len(); index++)
    {
        if(docsif3rcccfgentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIF3MIB::DocsIf3RccCfgTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3RccCfgTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3RccCfgTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3RccCfgTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3RccCfgTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIf3RccCfgEntry")
    {
        auto c = std::make_shared<DOCSIF3MIB::DocsIf3RccCfgTable::DocsIf3RccCfgEntry>();
        c->parent = this;
        docsif3rcccfgentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3RccCfgTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsif3rcccfgentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSIF3MIB::DocsIf3RccCfgTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIF3MIB::DocsIf3RccCfgTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIF3MIB::DocsIf3RccCfgTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIf3RccCfgEntry")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3RccCfgTable::DocsIf3RccCfgEntry::DocsIf3RccCfgEntry()
    :
    ifindex{YType::str, "ifIndex"},
    docsif3rcccfgrcpid{YType::str, "docsIf3RccCfgRcpId"},
    docsif3rcccfgrcccfgid{YType::uint32, "docsIf3RccCfgRccCfgId"},
    docsif3rcccfgvendorspecific{YType::str, "docsIf3RccCfgVendorSpecific"},
    docsif3rcccfgdescription{YType::str, "docsIf3RccCfgDescription"},
    docsif3rcccfgrowstatus{YType::enumeration, "docsIf3RccCfgRowStatus"}
{

    yang_name = "docsIf3RccCfgEntry"; yang_parent_name = "docsIf3RccCfgTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3RccCfgTable::DocsIf3RccCfgEntry::~DocsIf3RccCfgEntry()
{
}

bool DOCSIF3MIB::DocsIf3RccCfgTable::DocsIf3RccCfgEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| docsif3rcccfgrcpid.is_set
	|| docsif3rcccfgrcccfgid.is_set
	|| docsif3rcccfgvendorspecific.is_set
	|| docsif3rcccfgdescription.is_set
	|| docsif3rcccfgrowstatus.is_set;
}

bool DOCSIF3MIB::DocsIf3RccCfgTable::DocsIf3RccCfgEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(docsif3rcccfgrcpid.yfilter)
	|| ydk::is_set(docsif3rcccfgrcccfgid.yfilter)
	|| ydk::is_set(docsif3rcccfgvendorspecific.yfilter)
	|| ydk::is_set(docsif3rcccfgdescription.yfilter)
	|| ydk::is_set(docsif3rcccfgrowstatus.yfilter);
}

std::string DOCSIF3MIB::DocsIf3RccCfgTable::DocsIf3RccCfgEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/docsIf3RccCfgTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3RccCfgTable::DocsIf3RccCfgEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3RccCfgEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(docsif3rcccfgrcpid, "docsIf3RccCfgRcpId");
    ADD_KEY_TOKEN(docsif3rcccfgrcccfgid, "docsIf3RccCfgRccCfgId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3RccCfgTable::DocsIf3RccCfgEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (docsif3rcccfgrcpid.is_set || is_set(docsif3rcccfgrcpid.yfilter)) leaf_name_data.push_back(docsif3rcccfgrcpid.get_name_leafdata());
    if (docsif3rcccfgrcccfgid.is_set || is_set(docsif3rcccfgrcccfgid.yfilter)) leaf_name_data.push_back(docsif3rcccfgrcccfgid.get_name_leafdata());
    if (docsif3rcccfgvendorspecific.is_set || is_set(docsif3rcccfgvendorspecific.yfilter)) leaf_name_data.push_back(docsif3rcccfgvendorspecific.get_name_leafdata());
    if (docsif3rcccfgdescription.is_set || is_set(docsif3rcccfgdescription.yfilter)) leaf_name_data.push_back(docsif3rcccfgdescription.get_name_leafdata());
    if (docsif3rcccfgrowstatus.is_set || is_set(docsif3rcccfgrowstatus.yfilter)) leaf_name_data.push_back(docsif3rcccfgrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3RccCfgTable::DocsIf3RccCfgEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3RccCfgTable::DocsIf3RccCfgEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSIF3MIB::DocsIf3RccCfgTable::DocsIf3RccCfgEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3RccCfgRcpId")
    {
        docsif3rcccfgrcpid = value;
        docsif3rcccfgrcpid.value_namespace = name_space;
        docsif3rcccfgrcpid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3RccCfgRccCfgId")
    {
        docsif3rcccfgrcccfgid = value;
        docsif3rcccfgrcccfgid.value_namespace = name_space;
        docsif3rcccfgrcccfgid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3RccCfgVendorSpecific")
    {
        docsif3rcccfgvendorspecific = value;
        docsif3rcccfgvendorspecific.value_namespace = name_space;
        docsif3rcccfgvendorspecific.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3RccCfgDescription")
    {
        docsif3rcccfgdescription = value;
        docsif3rcccfgdescription.value_namespace = name_space;
        docsif3rcccfgdescription.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3RccCfgRowStatus")
    {
        docsif3rcccfgrowstatus = value;
        docsif3rcccfgrowstatus.value_namespace = name_space;
        docsif3rcccfgrowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIF3MIB::DocsIf3RccCfgTable::DocsIf3RccCfgEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "docsIf3RccCfgRcpId")
    {
        docsif3rcccfgrcpid.yfilter = yfilter;
    }
    if(value_path == "docsIf3RccCfgRccCfgId")
    {
        docsif3rcccfgrcccfgid.yfilter = yfilter;
    }
    if(value_path == "docsIf3RccCfgVendorSpecific")
    {
        docsif3rcccfgvendorspecific.yfilter = yfilter;
    }
    if(value_path == "docsIf3RccCfgDescription")
    {
        docsif3rcccfgdescription.yfilter = yfilter;
    }
    if(value_path == "docsIf3RccCfgRowStatus")
    {
        docsif3rcccfgrowstatus.yfilter = yfilter;
    }
}

bool DOCSIF3MIB::DocsIf3RccCfgTable::DocsIf3RccCfgEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "docsIf3RccCfgRcpId" || name == "docsIf3RccCfgRccCfgId" || name == "docsIf3RccCfgVendorSpecific" || name == "docsIf3RccCfgDescription" || name == "docsIf3RccCfgRowStatus")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3RccStatusTable::DocsIf3RccStatusTable()
    :
    docsif3rccstatusentry(this, {"ifindex", "docsif3rccstatusrcpid", "docsif3rccstatusrccstatusid"})
{

    yang_name = "docsIf3RccStatusTable"; yang_parent_name = "DOCS-IF3-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3RccStatusTable::~DocsIf3RccStatusTable()
{
}

bool DOCSIF3MIB::DocsIf3RccStatusTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsif3rccstatusentry.len(); index++)
    {
        if(docsif3rccstatusentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIF3MIB::DocsIf3RccStatusTable::has_operation() const
{
    for (std::size_t index=0; index<docsif3rccstatusentry.len(); index++)
    {
        if(docsif3rccstatusentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIF3MIB::DocsIf3RccStatusTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3RccStatusTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3RccStatusTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3RccStatusTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3RccStatusTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIf3RccStatusEntry")
    {
        auto c = std::make_shared<DOCSIF3MIB::DocsIf3RccStatusTable::DocsIf3RccStatusEntry>();
        c->parent = this;
        docsif3rccstatusentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3RccStatusTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsif3rccstatusentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSIF3MIB::DocsIf3RccStatusTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIF3MIB::DocsIf3RccStatusTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIF3MIB::DocsIf3RccStatusTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIf3RccStatusEntry")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3RccStatusTable::DocsIf3RccStatusEntry::DocsIf3RccStatusEntry()
    :
    ifindex{YType::str, "ifIndex"},
    docsif3rccstatusrcpid{YType::str, "docsIf3RccStatusRcpId"},
    docsif3rccstatusrccstatusid{YType::uint32, "docsIf3RccStatusRccStatusId"},
    docsif3rccstatusrcccfgid{YType::uint32, "docsIf3RccStatusRccCfgId"},
    docsif3rccstatusvaliditycode{YType::enumeration, "docsIf3RccStatusValidityCode"},
    docsif3rccstatusvaliditycodetext{YType::str, "docsIf3RccStatusValidityCodeText"}
{

    yang_name = "docsIf3RccStatusEntry"; yang_parent_name = "docsIf3RccStatusTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3RccStatusTable::DocsIf3RccStatusEntry::~DocsIf3RccStatusEntry()
{
}

bool DOCSIF3MIB::DocsIf3RccStatusTable::DocsIf3RccStatusEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| docsif3rccstatusrcpid.is_set
	|| docsif3rccstatusrccstatusid.is_set
	|| docsif3rccstatusrcccfgid.is_set
	|| docsif3rccstatusvaliditycode.is_set
	|| docsif3rccstatusvaliditycodetext.is_set;
}

bool DOCSIF3MIB::DocsIf3RccStatusTable::DocsIf3RccStatusEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(docsif3rccstatusrcpid.yfilter)
	|| ydk::is_set(docsif3rccstatusrccstatusid.yfilter)
	|| ydk::is_set(docsif3rccstatusrcccfgid.yfilter)
	|| ydk::is_set(docsif3rccstatusvaliditycode.yfilter)
	|| ydk::is_set(docsif3rccstatusvaliditycodetext.yfilter);
}

std::string DOCSIF3MIB::DocsIf3RccStatusTable::DocsIf3RccStatusEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/docsIf3RccStatusTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3RccStatusTable::DocsIf3RccStatusEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3RccStatusEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(docsif3rccstatusrcpid, "docsIf3RccStatusRcpId");
    ADD_KEY_TOKEN(docsif3rccstatusrccstatusid, "docsIf3RccStatusRccStatusId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3RccStatusTable::DocsIf3RccStatusEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (docsif3rccstatusrcpid.is_set || is_set(docsif3rccstatusrcpid.yfilter)) leaf_name_data.push_back(docsif3rccstatusrcpid.get_name_leafdata());
    if (docsif3rccstatusrccstatusid.is_set || is_set(docsif3rccstatusrccstatusid.yfilter)) leaf_name_data.push_back(docsif3rccstatusrccstatusid.get_name_leafdata());
    if (docsif3rccstatusrcccfgid.is_set || is_set(docsif3rccstatusrcccfgid.yfilter)) leaf_name_data.push_back(docsif3rccstatusrcccfgid.get_name_leafdata());
    if (docsif3rccstatusvaliditycode.is_set || is_set(docsif3rccstatusvaliditycode.yfilter)) leaf_name_data.push_back(docsif3rccstatusvaliditycode.get_name_leafdata());
    if (docsif3rccstatusvaliditycodetext.is_set || is_set(docsif3rccstatusvaliditycodetext.yfilter)) leaf_name_data.push_back(docsif3rccstatusvaliditycodetext.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3RccStatusTable::DocsIf3RccStatusEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3RccStatusTable::DocsIf3RccStatusEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSIF3MIB::DocsIf3RccStatusTable::DocsIf3RccStatusEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3RccStatusRcpId")
    {
        docsif3rccstatusrcpid = value;
        docsif3rccstatusrcpid.value_namespace = name_space;
        docsif3rccstatusrcpid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3RccStatusRccStatusId")
    {
        docsif3rccstatusrccstatusid = value;
        docsif3rccstatusrccstatusid.value_namespace = name_space;
        docsif3rccstatusrccstatusid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3RccStatusRccCfgId")
    {
        docsif3rccstatusrcccfgid = value;
        docsif3rccstatusrcccfgid.value_namespace = name_space;
        docsif3rccstatusrcccfgid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3RccStatusValidityCode")
    {
        docsif3rccstatusvaliditycode = value;
        docsif3rccstatusvaliditycode.value_namespace = name_space;
        docsif3rccstatusvaliditycode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3RccStatusValidityCodeText")
    {
        docsif3rccstatusvaliditycodetext = value;
        docsif3rccstatusvaliditycodetext.value_namespace = name_space;
        docsif3rccstatusvaliditycodetext.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIF3MIB::DocsIf3RccStatusTable::DocsIf3RccStatusEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "docsIf3RccStatusRcpId")
    {
        docsif3rccstatusrcpid.yfilter = yfilter;
    }
    if(value_path == "docsIf3RccStatusRccStatusId")
    {
        docsif3rccstatusrccstatusid.yfilter = yfilter;
    }
    if(value_path == "docsIf3RccStatusRccCfgId")
    {
        docsif3rccstatusrcccfgid.yfilter = yfilter;
    }
    if(value_path == "docsIf3RccStatusValidityCode")
    {
        docsif3rccstatusvaliditycode.yfilter = yfilter;
    }
    if(value_path == "docsIf3RccStatusValidityCodeText")
    {
        docsif3rccstatusvaliditycodetext.yfilter = yfilter;
    }
}

bool DOCSIF3MIB::DocsIf3RccStatusTable::DocsIf3RccStatusEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "docsIf3RccStatusRcpId" || name == "docsIf3RccStatusRccStatusId" || name == "docsIf3RccStatusRccCfgId" || name == "docsIf3RccStatusValidityCode" || name == "docsIf3RccStatusValidityCodeText")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3RxChCfgTable::DocsIf3RxChCfgTable()
    :
    docsif3rxchcfgentry(this, {"ifindex", "docsif3rcccfgrcpid", "docsif3rcccfgrcccfgid", "docsif3rxchcfgrcid"})
{

    yang_name = "docsIf3RxChCfgTable"; yang_parent_name = "DOCS-IF3-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3RxChCfgTable::~DocsIf3RxChCfgTable()
{
}

bool DOCSIF3MIB::DocsIf3RxChCfgTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsif3rxchcfgentry.len(); index++)
    {
        if(docsif3rxchcfgentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIF3MIB::DocsIf3RxChCfgTable::has_operation() const
{
    for (std::size_t index=0; index<docsif3rxchcfgentry.len(); index++)
    {
        if(docsif3rxchcfgentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIF3MIB::DocsIf3RxChCfgTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3RxChCfgTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3RxChCfgTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3RxChCfgTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3RxChCfgTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIf3RxChCfgEntry")
    {
        auto c = std::make_shared<DOCSIF3MIB::DocsIf3RxChCfgTable::DocsIf3RxChCfgEntry>();
        c->parent = this;
        docsif3rxchcfgentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3RxChCfgTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsif3rxchcfgentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSIF3MIB::DocsIf3RxChCfgTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIF3MIB::DocsIf3RxChCfgTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIF3MIB::DocsIf3RxChCfgTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIf3RxChCfgEntry")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3RxChCfgTable::DocsIf3RxChCfgEntry::DocsIf3RxChCfgEntry()
    :
    ifindex{YType::str, "ifIndex"},
    docsif3rcccfgrcpid{YType::str, "docsIf3RccCfgRcpId"},
    docsif3rcccfgrcccfgid{YType::str, "docsIf3RccCfgRccCfgId"},
    docsif3rxchcfgrcid{YType::uint32, "docsIf3RxChCfgRcId"},
    docsif3rxchcfgchifindex{YType::int32, "docsIf3RxChCfgChIfIndex"},
    docsif3rxchcfgprimarydsindicator{YType::boolean, "docsIf3RxChCfgPrimaryDsIndicator"},
    docsif3rxchcfgrcrmconnectivityid{YType::uint32, "docsIf3RxChCfgRcRmConnectivityId"},
    docsif3rxchcfgrowstatus{YType::enumeration, "docsIf3RxChCfgRowStatus"}
{

    yang_name = "docsIf3RxChCfgEntry"; yang_parent_name = "docsIf3RxChCfgTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3RxChCfgTable::DocsIf3RxChCfgEntry::~DocsIf3RxChCfgEntry()
{
}

bool DOCSIF3MIB::DocsIf3RxChCfgTable::DocsIf3RxChCfgEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| docsif3rcccfgrcpid.is_set
	|| docsif3rcccfgrcccfgid.is_set
	|| docsif3rxchcfgrcid.is_set
	|| docsif3rxchcfgchifindex.is_set
	|| docsif3rxchcfgprimarydsindicator.is_set
	|| docsif3rxchcfgrcrmconnectivityid.is_set
	|| docsif3rxchcfgrowstatus.is_set;
}

bool DOCSIF3MIB::DocsIf3RxChCfgTable::DocsIf3RxChCfgEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(docsif3rcccfgrcpid.yfilter)
	|| ydk::is_set(docsif3rcccfgrcccfgid.yfilter)
	|| ydk::is_set(docsif3rxchcfgrcid.yfilter)
	|| ydk::is_set(docsif3rxchcfgchifindex.yfilter)
	|| ydk::is_set(docsif3rxchcfgprimarydsindicator.yfilter)
	|| ydk::is_set(docsif3rxchcfgrcrmconnectivityid.yfilter)
	|| ydk::is_set(docsif3rxchcfgrowstatus.yfilter);
}

std::string DOCSIF3MIB::DocsIf3RxChCfgTable::DocsIf3RxChCfgEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/docsIf3RxChCfgTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3RxChCfgTable::DocsIf3RxChCfgEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3RxChCfgEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(docsif3rcccfgrcpid, "docsIf3RccCfgRcpId");
    ADD_KEY_TOKEN(docsif3rcccfgrcccfgid, "docsIf3RccCfgRccCfgId");
    ADD_KEY_TOKEN(docsif3rxchcfgrcid, "docsIf3RxChCfgRcId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3RxChCfgTable::DocsIf3RxChCfgEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (docsif3rcccfgrcpid.is_set || is_set(docsif3rcccfgrcpid.yfilter)) leaf_name_data.push_back(docsif3rcccfgrcpid.get_name_leafdata());
    if (docsif3rcccfgrcccfgid.is_set || is_set(docsif3rcccfgrcccfgid.yfilter)) leaf_name_data.push_back(docsif3rcccfgrcccfgid.get_name_leafdata());
    if (docsif3rxchcfgrcid.is_set || is_set(docsif3rxchcfgrcid.yfilter)) leaf_name_data.push_back(docsif3rxchcfgrcid.get_name_leafdata());
    if (docsif3rxchcfgchifindex.is_set || is_set(docsif3rxchcfgchifindex.yfilter)) leaf_name_data.push_back(docsif3rxchcfgchifindex.get_name_leafdata());
    if (docsif3rxchcfgprimarydsindicator.is_set || is_set(docsif3rxchcfgprimarydsindicator.yfilter)) leaf_name_data.push_back(docsif3rxchcfgprimarydsindicator.get_name_leafdata());
    if (docsif3rxchcfgrcrmconnectivityid.is_set || is_set(docsif3rxchcfgrcrmconnectivityid.yfilter)) leaf_name_data.push_back(docsif3rxchcfgrcrmconnectivityid.get_name_leafdata());
    if (docsif3rxchcfgrowstatus.is_set || is_set(docsif3rxchcfgrowstatus.yfilter)) leaf_name_data.push_back(docsif3rxchcfgrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3RxChCfgTable::DocsIf3RxChCfgEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3RxChCfgTable::DocsIf3RxChCfgEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSIF3MIB::DocsIf3RxChCfgTable::DocsIf3RxChCfgEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3RccCfgRcpId")
    {
        docsif3rcccfgrcpid = value;
        docsif3rcccfgrcpid.value_namespace = name_space;
        docsif3rcccfgrcpid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3RccCfgRccCfgId")
    {
        docsif3rcccfgrcccfgid = value;
        docsif3rcccfgrcccfgid.value_namespace = name_space;
        docsif3rcccfgrcccfgid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3RxChCfgRcId")
    {
        docsif3rxchcfgrcid = value;
        docsif3rxchcfgrcid.value_namespace = name_space;
        docsif3rxchcfgrcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3RxChCfgChIfIndex")
    {
        docsif3rxchcfgchifindex = value;
        docsif3rxchcfgchifindex.value_namespace = name_space;
        docsif3rxchcfgchifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3RxChCfgPrimaryDsIndicator")
    {
        docsif3rxchcfgprimarydsindicator = value;
        docsif3rxchcfgprimarydsindicator.value_namespace = name_space;
        docsif3rxchcfgprimarydsindicator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3RxChCfgRcRmConnectivityId")
    {
        docsif3rxchcfgrcrmconnectivityid = value;
        docsif3rxchcfgrcrmconnectivityid.value_namespace = name_space;
        docsif3rxchcfgrcrmconnectivityid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3RxChCfgRowStatus")
    {
        docsif3rxchcfgrowstatus = value;
        docsif3rxchcfgrowstatus.value_namespace = name_space;
        docsif3rxchcfgrowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIF3MIB::DocsIf3RxChCfgTable::DocsIf3RxChCfgEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "docsIf3RccCfgRcpId")
    {
        docsif3rcccfgrcpid.yfilter = yfilter;
    }
    if(value_path == "docsIf3RccCfgRccCfgId")
    {
        docsif3rcccfgrcccfgid.yfilter = yfilter;
    }
    if(value_path == "docsIf3RxChCfgRcId")
    {
        docsif3rxchcfgrcid.yfilter = yfilter;
    }
    if(value_path == "docsIf3RxChCfgChIfIndex")
    {
        docsif3rxchcfgchifindex.yfilter = yfilter;
    }
    if(value_path == "docsIf3RxChCfgPrimaryDsIndicator")
    {
        docsif3rxchcfgprimarydsindicator.yfilter = yfilter;
    }
    if(value_path == "docsIf3RxChCfgRcRmConnectivityId")
    {
        docsif3rxchcfgrcrmconnectivityid.yfilter = yfilter;
    }
    if(value_path == "docsIf3RxChCfgRowStatus")
    {
        docsif3rxchcfgrowstatus.yfilter = yfilter;
    }
}

bool DOCSIF3MIB::DocsIf3RxChCfgTable::DocsIf3RxChCfgEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "docsIf3RccCfgRcpId" || name == "docsIf3RccCfgRccCfgId" || name == "docsIf3RxChCfgRcId" || name == "docsIf3RxChCfgChIfIndex" || name == "docsIf3RxChCfgPrimaryDsIndicator" || name == "docsIf3RxChCfgRcRmConnectivityId" || name == "docsIf3RxChCfgRowStatus")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3RxChStatusTable::DocsIf3RxChStatusTable()
    :
    docsif3rxchstatusentry(this, {"ifindex", "docsif3rccstatusrcpid", "docsif3rccstatusrccstatusid", "docsif3rxchstatusrcid"})
{

    yang_name = "docsIf3RxChStatusTable"; yang_parent_name = "DOCS-IF3-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3RxChStatusTable::~DocsIf3RxChStatusTable()
{
}

bool DOCSIF3MIB::DocsIf3RxChStatusTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsif3rxchstatusentry.len(); index++)
    {
        if(docsif3rxchstatusentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIF3MIB::DocsIf3RxChStatusTable::has_operation() const
{
    for (std::size_t index=0; index<docsif3rxchstatusentry.len(); index++)
    {
        if(docsif3rxchstatusentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIF3MIB::DocsIf3RxChStatusTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3RxChStatusTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3RxChStatusTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3RxChStatusTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3RxChStatusTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIf3RxChStatusEntry")
    {
        auto c = std::make_shared<DOCSIF3MIB::DocsIf3RxChStatusTable::DocsIf3RxChStatusEntry>();
        c->parent = this;
        docsif3rxchstatusentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3RxChStatusTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsif3rxchstatusentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSIF3MIB::DocsIf3RxChStatusTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIF3MIB::DocsIf3RxChStatusTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIF3MIB::DocsIf3RxChStatusTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIf3RxChStatusEntry")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3RxChStatusTable::DocsIf3RxChStatusEntry::DocsIf3RxChStatusEntry()
    :
    ifindex{YType::str, "ifIndex"},
    docsif3rccstatusrcpid{YType::str, "docsIf3RccStatusRcpId"},
    docsif3rccstatusrccstatusid{YType::str, "docsIf3RccStatusRccStatusId"},
    docsif3rxchstatusrcid{YType::uint32, "docsIf3RxChStatusRcId"},
    docsif3rxchstatuschifindex{YType::int32, "docsIf3RxChStatusChIfIndex"},
    docsif3rxchstatusprimarydsindicator{YType::boolean, "docsIf3RxChStatusPrimaryDsIndicator"},
    docsif3rxchstatusrcrmconnectivityid{YType::uint32, "docsIf3RxChStatusRcRmConnectivityId"}
{

    yang_name = "docsIf3RxChStatusEntry"; yang_parent_name = "docsIf3RxChStatusTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3RxChStatusTable::DocsIf3RxChStatusEntry::~DocsIf3RxChStatusEntry()
{
}

bool DOCSIF3MIB::DocsIf3RxChStatusTable::DocsIf3RxChStatusEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| docsif3rccstatusrcpid.is_set
	|| docsif3rccstatusrccstatusid.is_set
	|| docsif3rxchstatusrcid.is_set
	|| docsif3rxchstatuschifindex.is_set
	|| docsif3rxchstatusprimarydsindicator.is_set
	|| docsif3rxchstatusrcrmconnectivityid.is_set;
}

bool DOCSIF3MIB::DocsIf3RxChStatusTable::DocsIf3RxChStatusEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(docsif3rccstatusrcpid.yfilter)
	|| ydk::is_set(docsif3rccstatusrccstatusid.yfilter)
	|| ydk::is_set(docsif3rxchstatusrcid.yfilter)
	|| ydk::is_set(docsif3rxchstatuschifindex.yfilter)
	|| ydk::is_set(docsif3rxchstatusprimarydsindicator.yfilter)
	|| ydk::is_set(docsif3rxchstatusrcrmconnectivityid.yfilter);
}

std::string DOCSIF3MIB::DocsIf3RxChStatusTable::DocsIf3RxChStatusEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/docsIf3RxChStatusTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3RxChStatusTable::DocsIf3RxChStatusEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3RxChStatusEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(docsif3rccstatusrcpid, "docsIf3RccStatusRcpId");
    ADD_KEY_TOKEN(docsif3rccstatusrccstatusid, "docsIf3RccStatusRccStatusId");
    ADD_KEY_TOKEN(docsif3rxchstatusrcid, "docsIf3RxChStatusRcId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3RxChStatusTable::DocsIf3RxChStatusEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (docsif3rccstatusrcpid.is_set || is_set(docsif3rccstatusrcpid.yfilter)) leaf_name_data.push_back(docsif3rccstatusrcpid.get_name_leafdata());
    if (docsif3rccstatusrccstatusid.is_set || is_set(docsif3rccstatusrccstatusid.yfilter)) leaf_name_data.push_back(docsif3rccstatusrccstatusid.get_name_leafdata());
    if (docsif3rxchstatusrcid.is_set || is_set(docsif3rxchstatusrcid.yfilter)) leaf_name_data.push_back(docsif3rxchstatusrcid.get_name_leafdata());
    if (docsif3rxchstatuschifindex.is_set || is_set(docsif3rxchstatuschifindex.yfilter)) leaf_name_data.push_back(docsif3rxchstatuschifindex.get_name_leafdata());
    if (docsif3rxchstatusprimarydsindicator.is_set || is_set(docsif3rxchstatusprimarydsindicator.yfilter)) leaf_name_data.push_back(docsif3rxchstatusprimarydsindicator.get_name_leafdata());
    if (docsif3rxchstatusrcrmconnectivityid.is_set || is_set(docsif3rxchstatusrcrmconnectivityid.yfilter)) leaf_name_data.push_back(docsif3rxchstatusrcrmconnectivityid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3RxChStatusTable::DocsIf3RxChStatusEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3RxChStatusTable::DocsIf3RxChStatusEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSIF3MIB::DocsIf3RxChStatusTable::DocsIf3RxChStatusEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3RccStatusRcpId")
    {
        docsif3rccstatusrcpid = value;
        docsif3rccstatusrcpid.value_namespace = name_space;
        docsif3rccstatusrcpid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3RccStatusRccStatusId")
    {
        docsif3rccstatusrccstatusid = value;
        docsif3rccstatusrccstatusid.value_namespace = name_space;
        docsif3rccstatusrccstatusid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3RxChStatusRcId")
    {
        docsif3rxchstatusrcid = value;
        docsif3rxchstatusrcid.value_namespace = name_space;
        docsif3rxchstatusrcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3RxChStatusChIfIndex")
    {
        docsif3rxchstatuschifindex = value;
        docsif3rxchstatuschifindex.value_namespace = name_space;
        docsif3rxchstatuschifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3RxChStatusPrimaryDsIndicator")
    {
        docsif3rxchstatusprimarydsindicator = value;
        docsif3rxchstatusprimarydsindicator.value_namespace = name_space;
        docsif3rxchstatusprimarydsindicator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3RxChStatusRcRmConnectivityId")
    {
        docsif3rxchstatusrcrmconnectivityid = value;
        docsif3rxchstatusrcrmconnectivityid.value_namespace = name_space;
        docsif3rxchstatusrcrmconnectivityid.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIF3MIB::DocsIf3RxChStatusTable::DocsIf3RxChStatusEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "docsIf3RccStatusRcpId")
    {
        docsif3rccstatusrcpid.yfilter = yfilter;
    }
    if(value_path == "docsIf3RccStatusRccStatusId")
    {
        docsif3rccstatusrccstatusid.yfilter = yfilter;
    }
    if(value_path == "docsIf3RxChStatusRcId")
    {
        docsif3rxchstatusrcid.yfilter = yfilter;
    }
    if(value_path == "docsIf3RxChStatusChIfIndex")
    {
        docsif3rxchstatuschifindex.yfilter = yfilter;
    }
    if(value_path == "docsIf3RxChStatusPrimaryDsIndicator")
    {
        docsif3rxchstatusprimarydsindicator.yfilter = yfilter;
    }
    if(value_path == "docsIf3RxChStatusRcRmConnectivityId")
    {
        docsif3rxchstatusrcrmconnectivityid.yfilter = yfilter;
    }
}

bool DOCSIF3MIB::DocsIf3RxChStatusTable::DocsIf3RxChStatusEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "docsIf3RccStatusRcpId" || name == "docsIf3RccStatusRccStatusId" || name == "docsIf3RxChStatusRcId" || name == "docsIf3RxChStatusChIfIndex" || name == "docsIf3RxChStatusPrimaryDsIndicator" || name == "docsIf3RxChStatusRcRmConnectivityId")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3RxModuleCfgTable::DocsIf3RxModuleCfgTable()
    :
    docsif3rxmodulecfgentry(this, {"ifindex", "docsif3rcccfgrcpid", "docsif3rcccfgrcccfgid", "docsif3rxmodulecfgrmid"})
{

    yang_name = "docsIf3RxModuleCfgTable"; yang_parent_name = "DOCS-IF3-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3RxModuleCfgTable::~DocsIf3RxModuleCfgTable()
{
}

bool DOCSIF3MIB::DocsIf3RxModuleCfgTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsif3rxmodulecfgentry.len(); index++)
    {
        if(docsif3rxmodulecfgentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIF3MIB::DocsIf3RxModuleCfgTable::has_operation() const
{
    for (std::size_t index=0; index<docsif3rxmodulecfgentry.len(); index++)
    {
        if(docsif3rxmodulecfgentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIF3MIB::DocsIf3RxModuleCfgTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3RxModuleCfgTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3RxModuleCfgTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3RxModuleCfgTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3RxModuleCfgTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIf3RxModuleCfgEntry")
    {
        auto c = std::make_shared<DOCSIF3MIB::DocsIf3RxModuleCfgTable::DocsIf3RxModuleCfgEntry>();
        c->parent = this;
        docsif3rxmodulecfgentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3RxModuleCfgTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsif3rxmodulecfgentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSIF3MIB::DocsIf3RxModuleCfgTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIF3MIB::DocsIf3RxModuleCfgTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIF3MIB::DocsIf3RxModuleCfgTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIf3RxModuleCfgEntry")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3RxModuleCfgTable::DocsIf3RxModuleCfgEntry::DocsIf3RxModuleCfgEntry()
    :
    ifindex{YType::str, "ifIndex"},
    docsif3rcccfgrcpid{YType::str, "docsIf3RccCfgRcpId"},
    docsif3rcccfgrcccfgid{YType::str, "docsIf3RccCfgRccCfgId"},
    docsif3rxmodulecfgrmid{YType::uint32, "docsIf3RxModuleCfgRmId"},
    docsif3rxmodulecfgrmrmconnectivityid{YType::uint32, "docsIf3RxModuleCfgRmRmConnectivityId"},
    docsif3rxmodulecfgfirstcenterfrequency{YType::uint32, "docsIf3RxModuleCfgFirstCenterFrequency"},
    docsif3rxmodulecfgrowstatus{YType::enumeration, "docsIf3RxModuleCfgRowStatus"}
{

    yang_name = "docsIf3RxModuleCfgEntry"; yang_parent_name = "docsIf3RxModuleCfgTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3RxModuleCfgTable::DocsIf3RxModuleCfgEntry::~DocsIf3RxModuleCfgEntry()
{
}

bool DOCSIF3MIB::DocsIf3RxModuleCfgTable::DocsIf3RxModuleCfgEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| docsif3rcccfgrcpid.is_set
	|| docsif3rcccfgrcccfgid.is_set
	|| docsif3rxmodulecfgrmid.is_set
	|| docsif3rxmodulecfgrmrmconnectivityid.is_set
	|| docsif3rxmodulecfgfirstcenterfrequency.is_set
	|| docsif3rxmodulecfgrowstatus.is_set;
}

bool DOCSIF3MIB::DocsIf3RxModuleCfgTable::DocsIf3RxModuleCfgEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(docsif3rcccfgrcpid.yfilter)
	|| ydk::is_set(docsif3rcccfgrcccfgid.yfilter)
	|| ydk::is_set(docsif3rxmodulecfgrmid.yfilter)
	|| ydk::is_set(docsif3rxmodulecfgrmrmconnectivityid.yfilter)
	|| ydk::is_set(docsif3rxmodulecfgfirstcenterfrequency.yfilter)
	|| ydk::is_set(docsif3rxmodulecfgrowstatus.yfilter);
}

std::string DOCSIF3MIB::DocsIf3RxModuleCfgTable::DocsIf3RxModuleCfgEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/docsIf3RxModuleCfgTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3RxModuleCfgTable::DocsIf3RxModuleCfgEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3RxModuleCfgEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(docsif3rcccfgrcpid, "docsIf3RccCfgRcpId");
    ADD_KEY_TOKEN(docsif3rcccfgrcccfgid, "docsIf3RccCfgRccCfgId");
    ADD_KEY_TOKEN(docsif3rxmodulecfgrmid, "docsIf3RxModuleCfgRmId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3RxModuleCfgTable::DocsIf3RxModuleCfgEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (docsif3rcccfgrcpid.is_set || is_set(docsif3rcccfgrcpid.yfilter)) leaf_name_data.push_back(docsif3rcccfgrcpid.get_name_leafdata());
    if (docsif3rcccfgrcccfgid.is_set || is_set(docsif3rcccfgrcccfgid.yfilter)) leaf_name_data.push_back(docsif3rcccfgrcccfgid.get_name_leafdata());
    if (docsif3rxmodulecfgrmid.is_set || is_set(docsif3rxmodulecfgrmid.yfilter)) leaf_name_data.push_back(docsif3rxmodulecfgrmid.get_name_leafdata());
    if (docsif3rxmodulecfgrmrmconnectivityid.is_set || is_set(docsif3rxmodulecfgrmrmconnectivityid.yfilter)) leaf_name_data.push_back(docsif3rxmodulecfgrmrmconnectivityid.get_name_leafdata());
    if (docsif3rxmodulecfgfirstcenterfrequency.is_set || is_set(docsif3rxmodulecfgfirstcenterfrequency.yfilter)) leaf_name_data.push_back(docsif3rxmodulecfgfirstcenterfrequency.get_name_leafdata());
    if (docsif3rxmodulecfgrowstatus.is_set || is_set(docsif3rxmodulecfgrowstatus.yfilter)) leaf_name_data.push_back(docsif3rxmodulecfgrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3RxModuleCfgTable::DocsIf3RxModuleCfgEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3RxModuleCfgTable::DocsIf3RxModuleCfgEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSIF3MIB::DocsIf3RxModuleCfgTable::DocsIf3RxModuleCfgEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3RccCfgRcpId")
    {
        docsif3rcccfgrcpid = value;
        docsif3rcccfgrcpid.value_namespace = name_space;
        docsif3rcccfgrcpid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3RccCfgRccCfgId")
    {
        docsif3rcccfgrcccfgid = value;
        docsif3rcccfgrcccfgid.value_namespace = name_space;
        docsif3rcccfgrcccfgid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3RxModuleCfgRmId")
    {
        docsif3rxmodulecfgrmid = value;
        docsif3rxmodulecfgrmid.value_namespace = name_space;
        docsif3rxmodulecfgrmid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3RxModuleCfgRmRmConnectivityId")
    {
        docsif3rxmodulecfgrmrmconnectivityid = value;
        docsif3rxmodulecfgrmrmconnectivityid.value_namespace = name_space;
        docsif3rxmodulecfgrmrmconnectivityid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3RxModuleCfgFirstCenterFrequency")
    {
        docsif3rxmodulecfgfirstcenterfrequency = value;
        docsif3rxmodulecfgfirstcenterfrequency.value_namespace = name_space;
        docsif3rxmodulecfgfirstcenterfrequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3RxModuleCfgRowStatus")
    {
        docsif3rxmodulecfgrowstatus = value;
        docsif3rxmodulecfgrowstatus.value_namespace = name_space;
        docsif3rxmodulecfgrowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIF3MIB::DocsIf3RxModuleCfgTable::DocsIf3RxModuleCfgEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "docsIf3RccCfgRcpId")
    {
        docsif3rcccfgrcpid.yfilter = yfilter;
    }
    if(value_path == "docsIf3RccCfgRccCfgId")
    {
        docsif3rcccfgrcccfgid.yfilter = yfilter;
    }
    if(value_path == "docsIf3RxModuleCfgRmId")
    {
        docsif3rxmodulecfgrmid.yfilter = yfilter;
    }
    if(value_path == "docsIf3RxModuleCfgRmRmConnectivityId")
    {
        docsif3rxmodulecfgrmrmconnectivityid.yfilter = yfilter;
    }
    if(value_path == "docsIf3RxModuleCfgFirstCenterFrequency")
    {
        docsif3rxmodulecfgfirstcenterfrequency.yfilter = yfilter;
    }
    if(value_path == "docsIf3RxModuleCfgRowStatus")
    {
        docsif3rxmodulecfgrowstatus.yfilter = yfilter;
    }
}

bool DOCSIF3MIB::DocsIf3RxModuleCfgTable::DocsIf3RxModuleCfgEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "docsIf3RccCfgRcpId" || name == "docsIf3RccCfgRccCfgId" || name == "docsIf3RxModuleCfgRmId" || name == "docsIf3RxModuleCfgRmRmConnectivityId" || name == "docsIf3RxModuleCfgFirstCenterFrequency" || name == "docsIf3RxModuleCfgRowStatus")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3RxModuleStatusTable::DocsIf3RxModuleStatusTable()
    :
    docsif3rxmodulestatusentry(this, {"ifindex", "docsif3rccstatusrcpid", "docsif3rccstatusrccstatusid", "docsif3rxmodulestatusrmid"})
{

    yang_name = "docsIf3RxModuleStatusTable"; yang_parent_name = "DOCS-IF3-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3RxModuleStatusTable::~DocsIf3RxModuleStatusTable()
{
}

bool DOCSIF3MIB::DocsIf3RxModuleStatusTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsif3rxmodulestatusentry.len(); index++)
    {
        if(docsif3rxmodulestatusentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIF3MIB::DocsIf3RxModuleStatusTable::has_operation() const
{
    for (std::size_t index=0; index<docsif3rxmodulestatusentry.len(); index++)
    {
        if(docsif3rxmodulestatusentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIF3MIB::DocsIf3RxModuleStatusTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3RxModuleStatusTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3RxModuleStatusTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3RxModuleStatusTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3RxModuleStatusTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIf3RxModuleStatusEntry")
    {
        auto c = std::make_shared<DOCSIF3MIB::DocsIf3RxModuleStatusTable::DocsIf3RxModuleStatusEntry>();
        c->parent = this;
        docsif3rxmodulestatusentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3RxModuleStatusTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsif3rxmodulestatusentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSIF3MIB::DocsIf3RxModuleStatusTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIF3MIB::DocsIf3RxModuleStatusTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIF3MIB::DocsIf3RxModuleStatusTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIf3RxModuleStatusEntry")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3RxModuleStatusTable::DocsIf3RxModuleStatusEntry::DocsIf3RxModuleStatusEntry()
    :
    ifindex{YType::str, "ifIndex"},
    docsif3rccstatusrcpid{YType::str, "docsIf3RccStatusRcpId"},
    docsif3rccstatusrccstatusid{YType::str, "docsIf3RccStatusRccStatusId"},
    docsif3rxmodulestatusrmid{YType::uint32, "docsIf3RxModuleStatusRmId"},
    docsif3rxmodulestatusrmrmconnectivityid{YType::uint32, "docsIf3RxModuleStatusRmRmConnectivityId"},
    docsif3rxmodulestatusfirstcenterfrequency{YType::uint32, "docsIf3RxModuleStatusFirstCenterFrequency"}
{

    yang_name = "docsIf3RxModuleStatusEntry"; yang_parent_name = "docsIf3RxModuleStatusTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3RxModuleStatusTable::DocsIf3RxModuleStatusEntry::~DocsIf3RxModuleStatusEntry()
{
}

bool DOCSIF3MIB::DocsIf3RxModuleStatusTable::DocsIf3RxModuleStatusEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| docsif3rccstatusrcpid.is_set
	|| docsif3rccstatusrccstatusid.is_set
	|| docsif3rxmodulestatusrmid.is_set
	|| docsif3rxmodulestatusrmrmconnectivityid.is_set
	|| docsif3rxmodulestatusfirstcenterfrequency.is_set;
}

bool DOCSIF3MIB::DocsIf3RxModuleStatusTable::DocsIf3RxModuleStatusEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(docsif3rccstatusrcpid.yfilter)
	|| ydk::is_set(docsif3rccstatusrccstatusid.yfilter)
	|| ydk::is_set(docsif3rxmodulestatusrmid.yfilter)
	|| ydk::is_set(docsif3rxmodulestatusrmrmconnectivityid.yfilter)
	|| ydk::is_set(docsif3rxmodulestatusfirstcenterfrequency.yfilter);
}

std::string DOCSIF3MIB::DocsIf3RxModuleStatusTable::DocsIf3RxModuleStatusEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/docsIf3RxModuleStatusTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3RxModuleStatusTable::DocsIf3RxModuleStatusEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3RxModuleStatusEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(docsif3rccstatusrcpid, "docsIf3RccStatusRcpId");
    ADD_KEY_TOKEN(docsif3rccstatusrccstatusid, "docsIf3RccStatusRccStatusId");
    ADD_KEY_TOKEN(docsif3rxmodulestatusrmid, "docsIf3RxModuleStatusRmId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3RxModuleStatusTable::DocsIf3RxModuleStatusEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (docsif3rccstatusrcpid.is_set || is_set(docsif3rccstatusrcpid.yfilter)) leaf_name_data.push_back(docsif3rccstatusrcpid.get_name_leafdata());
    if (docsif3rccstatusrccstatusid.is_set || is_set(docsif3rccstatusrccstatusid.yfilter)) leaf_name_data.push_back(docsif3rccstatusrccstatusid.get_name_leafdata());
    if (docsif3rxmodulestatusrmid.is_set || is_set(docsif3rxmodulestatusrmid.yfilter)) leaf_name_data.push_back(docsif3rxmodulestatusrmid.get_name_leafdata());
    if (docsif3rxmodulestatusrmrmconnectivityid.is_set || is_set(docsif3rxmodulestatusrmrmconnectivityid.yfilter)) leaf_name_data.push_back(docsif3rxmodulestatusrmrmconnectivityid.get_name_leafdata());
    if (docsif3rxmodulestatusfirstcenterfrequency.is_set || is_set(docsif3rxmodulestatusfirstcenterfrequency.yfilter)) leaf_name_data.push_back(docsif3rxmodulestatusfirstcenterfrequency.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3RxModuleStatusTable::DocsIf3RxModuleStatusEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3RxModuleStatusTable::DocsIf3RxModuleStatusEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSIF3MIB::DocsIf3RxModuleStatusTable::DocsIf3RxModuleStatusEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3RccStatusRcpId")
    {
        docsif3rccstatusrcpid = value;
        docsif3rccstatusrcpid.value_namespace = name_space;
        docsif3rccstatusrcpid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3RccStatusRccStatusId")
    {
        docsif3rccstatusrccstatusid = value;
        docsif3rccstatusrccstatusid.value_namespace = name_space;
        docsif3rccstatusrccstatusid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3RxModuleStatusRmId")
    {
        docsif3rxmodulestatusrmid = value;
        docsif3rxmodulestatusrmid.value_namespace = name_space;
        docsif3rxmodulestatusrmid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3RxModuleStatusRmRmConnectivityId")
    {
        docsif3rxmodulestatusrmrmconnectivityid = value;
        docsif3rxmodulestatusrmrmconnectivityid.value_namespace = name_space;
        docsif3rxmodulestatusrmrmconnectivityid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3RxModuleStatusFirstCenterFrequency")
    {
        docsif3rxmodulestatusfirstcenterfrequency = value;
        docsif3rxmodulestatusfirstcenterfrequency.value_namespace = name_space;
        docsif3rxmodulestatusfirstcenterfrequency.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIF3MIB::DocsIf3RxModuleStatusTable::DocsIf3RxModuleStatusEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "docsIf3RccStatusRcpId")
    {
        docsif3rccstatusrcpid.yfilter = yfilter;
    }
    if(value_path == "docsIf3RccStatusRccStatusId")
    {
        docsif3rccstatusrccstatusid.yfilter = yfilter;
    }
    if(value_path == "docsIf3RxModuleStatusRmId")
    {
        docsif3rxmodulestatusrmid.yfilter = yfilter;
    }
    if(value_path == "docsIf3RxModuleStatusRmRmConnectivityId")
    {
        docsif3rxmodulestatusrmrmconnectivityid.yfilter = yfilter;
    }
    if(value_path == "docsIf3RxModuleStatusFirstCenterFrequency")
    {
        docsif3rxmodulestatusfirstcenterfrequency.yfilter = yfilter;
    }
}

bool DOCSIF3MIB::DocsIf3RxModuleStatusTable::DocsIf3RxModuleStatusEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "docsIf3RccStatusRcpId" || name == "docsIf3RccStatusRccStatusId" || name == "docsIf3RxModuleStatusRmId" || name == "docsIf3RxModuleStatusRmRmConnectivityId" || name == "docsIf3RxModuleStatusFirstCenterFrequency")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3MdNodeStatusTable::DocsIf3MdNodeStatusTable()
    :
    docsif3mdnodestatusentry(this, {"ifindex", "docsif3mdnodestatusnodename", "docsif3mdnodestatusmdcmsgid"})
{

    yang_name = "docsIf3MdNodeStatusTable"; yang_parent_name = "DOCS-IF3-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3MdNodeStatusTable::~DocsIf3MdNodeStatusTable()
{
}

bool DOCSIF3MIB::DocsIf3MdNodeStatusTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsif3mdnodestatusentry.len(); index++)
    {
        if(docsif3mdnodestatusentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIF3MIB::DocsIf3MdNodeStatusTable::has_operation() const
{
    for (std::size_t index=0; index<docsif3mdnodestatusentry.len(); index++)
    {
        if(docsif3mdnodestatusentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIF3MIB::DocsIf3MdNodeStatusTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3MdNodeStatusTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3MdNodeStatusTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3MdNodeStatusTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3MdNodeStatusTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIf3MdNodeStatusEntry")
    {
        auto c = std::make_shared<DOCSIF3MIB::DocsIf3MdNodeStatusTable::DocsIf3MdNodeStatusEntry>();
        c->parent = this;
        docsif3mdnodestatusentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3MdNodeStatusTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsif3mdnodestatusentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSIF3MIB::DocsIf3MdNodeStatusTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIF3MIB::DocsIf3MdNodeStatusTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIF3MIB::DocsIf3MdNodeStatusTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIf3MdNodeStatusEntry")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3MdNodeStatusTable::DocsIf3MdNodeStatusEntry::DocsIf3MdNodeStatusEntry()
    :
    ifindex{YType::str, "ifIndex"},
    docsif3mdnodestatusnodename{YType::str, "docsIf3MdNodeStatusNodeName"},
    docsif3mdnodestatusmdcmsgid{YType::uint32, "docsIf3MdNodeStatusMdCmSgId"},
    docsif3mdnodestatusmddssgid{YType::uint32, "docsIf3MdNodeStatusMdDsSgId"},
    docsif3mdnodestatusmdussgid{YType::uint32, "docsIf3MdNodeStatusMdUsSgId"}
{

    yang_name = "docsIf3MdNodeStatusEntry"; yang_parent_name = "docsIf3MdNodeStatusTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3MdNodeStatusTable::DocsIf3MdNodeStatusEntry::~DocsIf3MdNodeStatusEntry()
{
}

bool DOCSIF3MIB::DocsIf3MdNodeStatusTable::DocsIf3MdNodeStatusEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| docsif3mdnodestatusnodename.is_set
	|| docsif3mdnodestatusmdcmsgid.is_set
	|| docsif3mdnodestatusmddssgid.is_set
	|| docsif3mdnodestatusmdussgid.is_set;
}

bool DOCSIF3MIB::DocsIf3MdNodeStatusTable::DocsIf3MdNodeStatusEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(docsif3mdnodestatusnodename.yfilter)
	|| ydk::is_set(docsif3mdnodestatusmdcmsgid.yfilter)
	|| ydk::is_set(docsif3mdnodestatusmddssgid.yfilter)
	|| ydk::is_set(docsif3mdnodestatusmdussgid.yfilter);
}

std::string DOCSIF3MIB::DocsIf3MdNodeStatusTable::DocsIf3MdNodeStatusEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/docsIf3MdNodeStatusTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3MdNodeStatusTable::DocsIf3MdNodeStatusEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3MdNodeStatusEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(docsif3mdnodestatusnodename, "docsIf3MdNodeStatusNodeName");
    ADD_KEY_TOKEN(docsif3mdnodestatusmdcmsgid, "docsIf3MdNodeStatusMdCmSgId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3MdNodeStatusTable::DocsIf3MdNodeStatusEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (docsif3mdnodestatusnodename.is_set || is_set(docsif3mdnodestatusnodename.yfilter)) leaf_name_data.push_back(docsif3mdnodestatusnodename.get_name_leafdata());
    if (docsif3mdnodestatusmdcmsgid.is_set || is_set(docsif3mdnodestatusmdcmsgid.yfilter)) leaf_name_data.push_back(docsif3mdnodestatusmdcmsgid.get_name_leafdata());
    if (docsif3mdnodestatusmddssgid.is_set || is_set(docsif3mdnodestatusmddssgid.yfilter)) leaf_name_data.push_back(docsif3mdnodestatusmddssgid.get_name_leafdata());
    if (docsif3mdnodestatusmdussgid.is_set || is_set(docsif3mdnodestatusmdussgid.yfilter)) leaf_name_data.push_back(docsif3mdnodestatusmdussgid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3MdNodeStatusTable::DocsIf3MdNodeStatusEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3MdNodeStatusTable::DocsIf3MdNodeStatusEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSIF3MIB::DocsIf3MdNodeStatusTable::DocsIf3MdNodeStatusEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3MdNodeStatusNodeName")
    {
        docsif3mdnodestatusnodename = value;
        docsif3mdnodestatusnodename.value_namespace = name_space;
        docsif3mdnodestatusnodename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3MdNodeStatusMdCmSgId")
    {
        docsif3mdnodestatusmdcmsgid = value;
        docsif3mdnodestatusmdcmsgid.value_namespace = name_space;
        docsif3mdnodestatusmdcmsgid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3MdNodeStatusMdDsSgId")
    {
        docsif3mdnodestatusmddssgid = value;
        docsif3mdnodestatusmddssgid.value_namespace = name_space;
        docsif3mdnodestatusmddssgid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3MdNodeStatusMdUsSgId")
    {
        docsif3mdnodestatusmdussgid = value;
        docsif3mdnodestatusmdussgid.value_namespace = name_space;
        docsif3mdnodestatusmdussgid.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIF3MIB::DocsIf3MdNodeStatusTable::DocsIf3MdNodeStatusEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "docsIf3MdNodeStatusNodeName")
    {
        docsif3mdnodestatusnodename.yfilter = yfilter;
    }
    if(value_path == "docsIf3MdNodeStatusMdCmSgId")
    {
        docsif3mdnodestatusmdcmsgid.yfilter = yfilter;
    }
    if(value_path == "docsIf3MdNodeStatusMdDsSgId")
    {
        docsif3mdnodestatusmddssgid.yfilter = yfilter;
    }
    if(value_path == "docsIf3MdNodeStatusMdUsSgId")
    {
        docsif3mdnodestatusmdussgid.yfilter = yfilter;
    }
}

bool DOCSIF3MIB::DocsIf3MdNodeStatusTable::DocsIf3MdNodeStatusEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "docsIf3MdNodeStatusNodeName" || name == "docsIf3MdNodeStatusMdCmSgId" || name == "docsIf3MdNodeStatusMdDsSgId" || name == "docsIf3MdNodeStatusMdUsSgId")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3MdDsSgStatusTable::DocsIf3MdDsSgStatusTable()
    :
    docsif3mddssgstatusentry(this, {"ifindex", "docsif3mddssgstatusmddssgid"})
{

    yang_name = "docsIf3MdDsSgStatusTable"; yang_parent_name = "DOCS-IF3-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3MdDsSgStatusTable::~DocsIf3MdDsSgStatusTable()
{
}

bool DOCSIF3MIB::DocsIf3MdDsSgStatusTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsif3mddssgstatusentry.len(); index++)
    {
        if(docsif3mddssgstatusentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIF3MIB::DocsIf3MdDsSgStatusTable::has_operation() const
{
    for (std::size_t index=0; index<docsif3mddssgstatusentry.len(); index++)
    {
        if(docsif3mddssgstatusentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIF3MIB::DocsIf3MdDsSgStatusTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3MdDsSgStatusTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3MdDsSgStatusTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3MdDsSgStatusTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3MdDsSgStatusTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIf3MdDsSgStatusEntry")
    {
        auto c = std::make_shared<DOCSIF3MIB::DocsIf3MdDsSgStatusTable::DocsIf3MdDsSgStatusEntry>();
        c->parent = this;
        docsif3mddssgstatusentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3MdDsSgStatusTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsif3mddssgstatusentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSIF3MIB::DocsIf3MdDsSgStatusTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIF3MIB::DocsIf3MdDsSgStatusTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIF3MIB::DocsIf3MdDsSgStatusTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIf3MdDsSgStatusEntry")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3MdDsSgStatusTable::DocsIf3MdDsSgStatusEntry::DocsIf3MdDsSgStatusEntry()
    :
    ifindex{YType::str, "ifIndex"},
    docsif3mddssgstatusmddssgid{YType::uint32, "docsIf3MdDsSgStatusMdDsSgId"},
    docsif3mddssgstatuschsetid{YType::uint32, "docsIf3MdDsSgStatusChSetId"}
{

    yang_name = "docsIf3MdDsSgStatusEntry"; yang_parent_name = "docsIf3MdDsSgStatusTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3MdDsSgStatusTable::DocsIf3MdDsSgStatusEntry::~DocsIf3MdDsSgStatusEntry()
{
}

bool DOCSIF3MIB::DocsIf3MdDsSgStatusTable::DocsIf3MdDsSgStatusEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| docsif3mddssgstatusmddssgid.is_set
	|| docsif3mddssgstatuschsetid.is_set;
}

bool DOCSIF3MIB::DocsIf3MdDsSgStatusTable::DocsIf3MdDsSgStatusEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(docsif3mddssgstatusmddssgid.yfilter)
	|| ydk::is_set(docsif3mddssgstatuschsetid.yfilter);
}

std::string DOCSIF3MIB::DocsIf3MdDsSgStatusTable::DocsIf3MdDsSgStatusEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/docsIf3MdDsSgStatusTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3MdDsSgStatusTable::DocsIf3MdDsSgStatusEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3MdDsSgStatusEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(docsif3mddssgstatusmddssgid, "docsIf3MdDsSgStatusMdDsSgId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3MdDsSgStatusTable::DocsIf3MdDsSgStatusEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (docsif3mddssgstatusmddssgid.is_set || is_set(docsif3mddssgstatusmddssgid.yfilter)) leaf_name_data.push_back(docsif3mddssgstatusmddssgid.get_name_leafdata());
    if (docsif3mddssgstatuschsetid.is_set || is_set(docsif3mddssgstatuschsetid.yfilter)) leaf_name_data.push_back(docsif3mddssgstatuschsetid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3MdDsSgStatusTable::DocsIf3MdDsSgStatusEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3MdDsSgStatusTable::DocsIf3MdDsSgStatusEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSIF3MIB::DocsIf3MdDsSgStatusTable::DocsIf3MdDsSgStatusEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3MdDsSgStatusMdDsSgId")
    {
        docsif3mddssgstatusmddssgid = value;
        docsif3mddssgstatusmddssgid.value_namespace = name_space;
        docsif3mddssgstatusmddssgid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3MdDsSgStatusChSetId")
    {
        docsif3mddssgstatuschsetid = value;
        docsif3mddssgstatuschsetid.value_namespace = name_space;
        docsif3mddssgstatuschsetid.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIF3MIB::DocsIf3MdDsSgStatusTable::DocsIf3MdDsSgStatusEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "docsIf3MdDsSgStatusMdDsSgId")
    {
        docsif3mddssgstatusmddssgid.yfilter = yfilter;
    }
    if(value_path == "docsIf3MdDsSgStatusChSetId")
    {
        docsif3mddssgstatuschsetid.yfilter = yfilter;
    }
}

bool DOCSIF3MIB::DocsIf3MdDsSgStatusTable::DocsIf3MdDsSgStatusEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "docsIf3MdDsSgStatusMdDsSgId" || name == "docsIf3MdDsSgStatusChSetId")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3MdUsSgStatusTable::DocsIf3MdUsSgStatusTable()
    :
    docsif3mdussgstatusentry(this, {"ifindex", "docsif3mdussgstatusmdussgid"})
{

    yang_name = "docsIf3MdUsSgStatusTable"; yang_parent_name = "DOCS-IF3-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3MdUsSgStatusTable::~DocsIf3MdUsSgStatusTable()
{
}

bool DOCSIF3MIB::DocsIf3MdUsSgStatusTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsif3mdussgstatusentry.len(); index++)
    {
        if(docsif3mdussgstatusentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIF3MIB::DocsIf3MdUsSgStatusTable::has_operation() const
{
    for (std::size_t index=0; index<docsif3mdussgstatusentry.len(); index++)
    {
        if(docsif3mdussgstatusentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIF3MIB::DocsIf3MdUsSgStatusTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3MdUsSgStatusTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3MdUsSgStatusTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3MdUsSgStatusTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3MdUsSgStatusTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIf3MdUsSgStatusEntry")
    {
        auto c = std::make_shared<DOCSIF3MIB::DocsIf3MdUsSgStatusTable::DocsIf3MdUsSgStatusEntry>();
        c->parent = this;
        docsif3mdussgstatusentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3MdUsSgStatusTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsif3mdussgstatusentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSIF3MIB::DocsIf3MdUsSgStatusTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIF3MIB::DocsIf3MdUsSgStatusTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIF3MIB::DocsIf3MdUsSgStatusTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIf3MdUsSgStatusEntry")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3MdUsSgStatusTable::DocsIf3MdUsSgStatusEntry::DocsIf3MdUsSgStatusEntry()
    :
    ifindex{YType::str, "ifIndex"},
    docsif3mdussgstatusmdussgid{YType::uint32, "docsIf3MdUsSgStatusMdUsSgId"},
    docsif3mdussgstatuschsetid{YType::uint32, "docsIf3MdUsSgStatusChSetId"}
{

    yang_name = "docsIf3MdUsSgStatusEntry"; yang_parent_name = "docsIf3MdUsSgStatusTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3MdUsSgStatusTable::DocsIf3MdUsSgStatusEntry::~DocsIf3MdUsSgStatusEntry()
{
}

bool DOCSIF3MIB::DocsIf3MdUsSgStatusTable::DocsIf3MdUsSgStatusEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| docsif3mdussgstatusmdussgid.is_set
	|| docsif3mdussgstatuschsetid.is_set;
}

bool DOCSIF3MIB::DocsIf3MdUsSgStatusTable::DocsIf3MdUsSgStatusEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(docsif3mdussgstatusmdussgid.yfilter)
	|| ydk::is_set(docsif3mdussgstatuschsetid.yfilter);
}

std::string DOCSIF3MIB::DocsIf3MdUsSgStatusTable::DocsIf3MdUsSgStatusEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/docsIf3MdUsSgStatusTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3MdUsSgStatusTable::DocsIf3MdUsSgStatusEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3MdUsSgStatusEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(docsif3mdussgstatusmdussgid, "docsIf3MdUsSgStatusMdUsSgId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3MdUsSgStatusTable::DocsIf3MdUsSgStatusEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (docsif3mdussgstatusmdussgid.is_set || is_set(docsif3mdussgstatusmdussgid.yfilter)) leaf_name_data.push_back(docsif3mdussgstatusmdussgid.get_name_leafdata());
    if (docsif3mdussgstatuschsetid.is_set || is_set(docsif3mdussgstatuschsetid.yfilter)) leaf_name_data.push_back(docsif3mdussgstatuschsetid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3MdUsSgStatusTable::DocsIf3MdUsSgStatusEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3MdUsSgStatusTable::DocsIf3MdUsSgStatusEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSIF3MIB::DocsIf3MdUsSgStatusTable::DocsIf3MdUsSgStatusEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3MdUsSgStatusMdUsSgId")
    {
        docsif3mdussgstatusmdussgid = value;
        docsif3mdussgstatusmdussgid.value_namespace = name_space;
        docsif3mdussgstatusmdussgid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3MdUsSgStatusChSetId")
    {
        docsif3mdussgstatuschsetid = value;
        docsif3mdussgstatuschsetid.value_namespace = name_space;
        docsif3mdussgstatuschsetid.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIF3MIB::DocsIf3MdUsSgStatusTable::DocsIf3MdUsSgStatusEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "docsIf3MdUsSgStatusMdUsSgId")
    {
        docsif3mdussgstatusmdussgid.yfilter = yfilter;
    }
    if(value_path == "docsIf3MdUsSgStatusChSetId")
    {
        docsif3mdussgstatuschsetid.yfilter = yfilter;
    }
}

bool DOCSIF3MIB::DocsIf3MdUsSgStatusTable::DocsIf3MdUsSgStatusEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "docsIf3MdUsSgStatusMdUsSgId" || name == "docsIf3MdUsSgStatusChSetId")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3MdUsToDsChMappingTable::DocsIf3MdUsToDsChMappingTable()
    :
    docsif3mdustodschmappingentry(this, {"docsif3mdustodschmappingusifindex", "docsif3mdustodschmappingdsifindex", "docsif3mdustodschmappingmdifindex"})
{

    yang_name = "docsIf3MdUsToDsChMappingTable"; yang_parent_name = "DOCS-IF3-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3MdUsToDsChMappingTable::~DocsIf3MdUsToDsChMappingTable()
{
}

bool DOCSIF3MIB::DocsIf3MdUsToDsChMappingTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsif3mdustodschmappingentry.len(); index++)
    {
        if(docsif3mdustodschmappingentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIF3MIB::DocsIf3MdUsToDsChMappingTable::has_operation() const
{
    for (std::size_t index=0; index<docsif3mdustodschmappingentry.len(); index++)
    {
        if(docsif3mdustodschmappingentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIF3MIB::DocsIf3MdUsToDsChMappingTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3MdUsToDsChMappingTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3MdUsToDsChMappingTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3MdUsToDsChMappingTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3MdUsToDsChMappingTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIf3MdUsToDsChMappingEntry")
    {
        auto c = std::make_shared<DOCSIF3MIB::DocsIf3MdUsToDsChMappingTable::DocsIf3MdUsToDsChMappingEntry>();
        c->parent = this;
        docsif3mdustodschmappingentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3MdUsToDsChMappingTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsif3mdustodschmappingentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSIF3MIB::DocsIf3MdUsToDsChMappingTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIF3MIB::DocsIf3MdUsToDsChMappingTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIF3MIB::DocsIf3MdUsToDsChMappingTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIf3MdUsToDsChMappingEntry")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3MdUsToDsChMappingTable::DocsIf3MdUsToDsChMappingEntry::DocsIf3MdUsToDsChMappingEntry()
    :
    docsif3mdustodschmappingusifindex{YType::int32, "docsIf3MdUsToDsChMappingUsIfIndex"},
    docsif3mdustodschmappingdsifindex{YType::int32, "docsIf3MdUsToDsChMappingDsIfIndex"},
    docsif3mdustodschmappingmdifindex{YType::int32, "docsIf3MdUsToDsChMappingMdIfIndex"}
{

    yang_name = "docsIf3MdUsToDsChMappingEntry"; yang_parent_name = "docsIf3MdUsToDsChMappingTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3MdUsToDsChMappingTable::DocsIf3MdUsToDsChMappingEntry::~DocsIf3MdUsToDsChMappingEntry()
{
}

bool DOCSIF3MIB::DocsIf3MdUsToDsChMappingTable::DocsIf3MdUsToDsChMappingEntry::has_data() const
{
    if (is_presence_container) return true;
    return docsif3mdustodschmappingusifindex.is_set
	|| docsif3mdustodschmappingdsifindex.is_set
	|| docsif3mdustodschmappingmdifindex.is_set;
}

bool DOCSIF3MIB::DocsIf3MdUsToDsChMappingTable::DocsIf3MdUsToDsChMappingEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(docsif3mdustodschmappingusifindex.yfilter)
	|| ydk::is_set(docsif3mdustodschmappingdsifindex.yfilter)
	|| ydk::is_set(docsif3mdustodschmappingmdifindex.yfilter);
}

std::string DOCSIF3MIB::DocsIf3MdUsToDsChMappingTable::DocsIf3MdUsToDsChMappingEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/docsIf3MdUsToDsChMappingTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3MdUsToDsChMappingTable::DocsIf3MdUsToDsChMappingEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3MdUsToDsChMappingEntry";
    ADD_KEY_TOKEN(docsif3mdustodschmappingusifindex, "docsIf3MdUsToDsChMappingUsIfIndex");
    ADD_KEY_TOKEN(docsif3mdustodschmappingdsifindex, "docsIf3MdUsToDsChMappingDsIfIndex");
    ADD_KEY_TOKEN(docsif3mdustodschmappingmdifindex, "docsIf3MdUsToDsChMappingMdIfIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3MdUsToDsChMappingTable::DocsIf3MdUsToDsChMappingEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (docsif3mdustodschmappingusifindex.is_set || is_set(docsif3mdustodschmappingusifindex.yfilter)) leaf_name_data.push_back(docsif3mdustodschmappingusifindex.get_name_leafdata());
    if (docsif3mdustodschmappingdsifindex.is_set || is_set(docsif3mdustodschmappingdsifindex.yfilter)) leaf_name_data.push_back(docsif3mdustodschmappingdsifindex.get_name_leafdata());
    if (docsif3mdustodschmappingmdifindex.is_set || is_set(docsif3mdustodschmappingmdifindex.yfilter)) leaf_name_data.push_back(docsif3mdustodschmappingmdifindex.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3MdUsToDsChMappingTable::DocsIf3MdUsToDsChMappingEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3MdUsToDsChMappingTable::DocsIf3MdUsToDsChMappingEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSIF3MIB::DocsIf3MdUsToDsChMappingTable::DocsIf3MdUsToDsChMappingEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "docsIf3MdUsToDsChMappingUsIfIndex")
    {
        docsif3mdustodschmappingusifindex = value;
        docsif3mdustodschmappingusifindex.value_namespace = name_space;
        docsif3mdustodschmappingusifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3MdUsToDsChMappingDsIfIndex")
    {
        docsif3mdustodschmappingdsifindex = value;
        docsif3mdustodschmappingdsifindex.value_namespace = name_space;
        docsif3mdustodschmappingdsifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3MdUsToDsChMappingMdIfIndex")
    {
        docsif3mdustodschmappingmdifindex = value;
        docsif3mdustodschmappingmdifindex.value_namespace = name_space;
        docsif3mdustodschmappingmdifindex.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIF3MIB::DocsIf3MdUsToDsChMappingTable::DocsIf3MdUsToDsChMappingEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "docsIf3MdUsToDsChMappingUsIfIndex")
    {
        docsif3mdustodschmappingusifindex.yfilter = yfilter;
    }
    if(value_path == "docsIf3MdUsToDsChMappingDsIfIndex")
    {
        docsif3mdustodschmappingdsifindex.yfilter = yfilter;
    }
    if(value_path == "docsIf3MdUsToDsChMappingMdIfIndex")
    {
        docsif3mdustodschmappingmdifindex.yfilter = yfilter;
    }
}

bool DOCSIF3MIB::DocsIf3MdUsToDsChMappingTable::DocsIf3MdUsToDsChMappingEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIf3MdUsToDsChMappingUsIfIndex" || name == "docsIf3MdUsToDsChMappingDsIfIndex" || name == "docsIf3MdUsToDsChMappingMdIfIndex")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3MdCfgTable::DocsIf3MdCfgTable()
    :
    docsif3mdcfgentry(this, {"ifindex"})
{

    yang_name = "docsIf3MdCfgTable"; yang_parent_name = "DOCS-IF3-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3MdCfgTable::~DocsIf3MdCfgTable()
{
}

bool DOCSIF3MIB::DocsIf3MdCfgTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsif3mdcfgentry.len(); index++)
    {
        if(docsif3mdcfgentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIF3MIB::DocsIf3MdCfgTable::has_operation() const
{
    for (std::size_t index=0; index<docsif3mdcfgentry.len(); index++)
    {
        if(docsif3mdcfgentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIF3MIB::DocsIf3MdCfgTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3MdCfgTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3MdCfgTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3MdCfgTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3MdCfgTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIf3MdCfgEntry")
    {
        auto c = std::make_shared<DOCSIF3MIB::DocsIf3MdCfgTable::DocsIf3MdCfgEntry>();
        c->parent = this;
        docsif3mdcfgentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3MdCfgTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsif3mdcfgentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSIF3MIB::DocsIf3MdCfgTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIF3MIB::DocsIf3MdCfgTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIF3MIB::DocsIf3MdCfgTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIf3MdCfgEntry")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3MdCfgTable::DocsIf3MdCfgEntry::DocsIf3MdCfgEntry()
    :
    ifindex{YType::str, "ifIndex"},
    docsif3mdcfgmddinterval{YType::uint32, "docsIf3MdCfgMddInterval"},
    docsif3mdcfgipprovmode{YType::enumeration, "docsIf3MdCfgIpProvMode"},
    docsif3mdcfgcmstatusevctlenabled{YType::boolean, "docsIf3MdCfgCmStatusEvCtlEnabled"},
    docsif3mdcfgusfreqrange{YType::enumeration, "docsIf3MdCfgUsFreqRange"},
    docsif3mdcfgmcastdsidfwdenabled{YType::boolean, "docsIf3MdCfgMcastDsidFwdEnabled"},
    docsif3mdcfgmultrxchmodeenabled{YType::boolean, "docsIf3MdCfgMultRxChModeEnabled"},
    docsif3mdcfgmulttxchmodeenabled{YType::boolean, "docsIf3MdCfgMultTxChModeEnabled"},
    docsif3mdcfgearlyauthencrctrl{YType::enumeration, "docsIf3MdCfgEarlyAuthEncrCtrl"},
    docsif3mdcfgtftpproxyenabled{YType::boolean, "docsIf3MdCfgTftpProxyEnabled"},
    docsif3mdcfgsrcaddrverifenabled{YType::boolean, "docsIf3MdCfgSrcAddrVerifEnabled"},
    docsif3mdcfgdownchannelannex{YType::enumeration, "docsIf3MdCfgDownChannelAnnex"},
    docsif3mdcfgcmudcenabled{YType::boolean, "docsIf3MdCfgCmUdcEnabled"},
    docsif3mdcfgsendudcrulesenabled{YType::boolean, "docsIf3MdCfgSendUdcRulesEnabled"},
    docsif3mdcfgservicetypeidlist{YType::str, "docsIf3MdCfgServiceTypeIdList"},
    docsif3mdcfgbpi2enforcectrl{YType::enumeration, "docsIf3MdCfgBpi2EnforceCtrl"},
    docsif3mdcfgenergymgt1x1enabled{YType::int32, "docsIf3MdCfgEnergyMgt1x1Enabled"}
{

    yang_name = "docsIf3MdCfgEntry"; yang_parent_name = "docsIf3MdCfgTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3MdCfgTable::DocsIf3MdCfgEntry::~DocsIf3MdCfgEntry()
{
}

bool DOCSIF3MIB::DocsIf3MdCfgTable::DocsIf3MdCfgEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| docsif3mdcfgmddinterval.is_set
	|| docsif3mdcfgipprovmode.is_set
	|| docsif3mdcfgcmstatusevctlenabled.is_set
	|| docsif3mdcfgusfreqrange.is_set
	|| docsif3mdcfgmcastdsidfwdenabled.is_set
	|| docsif3mdcfgmultrxchmodeenabled.is_set
	|| docsif3mdcfgmulttxchmodeenabled.is_set
	|| docsif3mdcfgearlyauthencrctrl.is_set
	|| docsif3mdcfgtftpproxyenabled.is_set
	|| docsif3mdcfgsrcaddrverifenabled.is_set
	|| docsif3mdcfgdownchannelannex.is_set
	|| docsif3mdcfgcmudcenabled.is_set
	|| docsif3mdcfgsendudcrulesenabled.is_set
	|| docsif3mdcfgservicetypeidlist.is_set
	|| docsif3mdcfgbpi2enforcectrl.is_set
	|| docsif3mdcfgenergymgt1x1enabled.is_set;
}

bool DOCSIF3MIB::DocsIf3MdCfgTable::DocsIf3MdCfgEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(docsif3mdcfgmddinterval.yfilter)
	|| ydk::is_set(docsif3mdcfgipprovmode.yfilter)
	|| ydk::is_set(docsif3mdcfgcmstatusevctlenabled.yfilter)
	|| ydk::is_set(docsif3mdcfgusfreqrange.yfilter)
	|| ydk::is_set(docsif3mdcfgmcastdsidfwdenabled.yfilter)
	|| ydk::is_set(docsif3mdcfgmultrxchmodeenabled.yfilter)
	|| ydk::is_set(docsif3mdcfgmulttxchmodeenabled.yfilter)
	|| ydk::is_set(docsif3mdcfgearlyauthencrctrl.yfilter)
	|| ydk::is_set(docsif3mdcfgtftpproxyenabled.yfilter)
	|| ydk::is_set(docsif3mdcfgsrcaddrverifenabled.yfilter)
	|| ydk::is_set(docsif3mdcfgdownchannelannex.yfilter)
	|| ydk::is_set(docsif3mdcfgcmudcenabled.yfilter)
	|| ydk::is_set(docsif3mdcfgsendudcrulesenabled.yfilter)
	|| ydk::is_set(docsif3mdcfgservicetypeidlist.yfilter)
	|| ydk::is_set(docsif3mdcfgbpi2enforcectrl.yfilter)
	|| ydk::is_set(docsif3mdcfgenergymgt1x1enabled.yfilter);
}

std::string DOCSIF3MIB::DocsIf3MdCfgTable::DocsIf3MdCfgEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/docsIf3MdCfgTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3MdCfgTable::DocsIf3MdCfgEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3MdCfgEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3MdCfgTable::DocsIf3MdCfgEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (docsif3mdcfgmddinterval.is_set || is_set(docsif3mdcfgmddinterval.yfilter)) leaf_name_data.push_back(docsif3mdcfgmddinterval.get_name_leafdata());
    if (docsif3mdcfgipprovmode.is_set || is_set(docsif3mdcfgipprovmode.yfilter)) leaf_name_data.push_back(docsif3mdcfgipprovmode.get_name_leafdata());
    if (docsif3mdcfgcmstatusevctlenabled.is_set || is_set(docsif3mdcfgcmstatusevctlenabled.yfilter)) leaf_name_data.push_back(docsif3mdcfgcmstatusevctlenabled.get_name_leafdata());
    if (docsif3mdcfgusfreqrange.is_set || is_set(docsif3mdcfgusfreqrange.yfilter)) leaf_name_data.push_back(docsif3mdcfgusfreqrange.get_name_leafdata());
    if (docsif3mdcfgmcastdsidfwdenabled.is_set || is_set(docsif3mdcfgmcastdsidfwdenabled.yfilter)) leaf_name_data.push_back(docsif3mdcfgmcastdsidfwdenabled.get_name_leafdata());
    if (docsif3mdcfgmultrxchmodeenabled.is_set || is_set(docsif3mdcfgmultrxchmodeenabled.yfilter)) leaf_name_data.push_back(docsif3mdcfgmultrxchmodeenabled.get_name_leafdata());
    if (docsif3mdcfgmulttxchmodeenabled.is_set || is_set(docsif3mdcfgmulttxchmodeenabled.yfilter)) leaf_name_data.push_back(docsif3mdcfgmulttxchmodeenabled.get_name_leafdata());
    if (docsif3mdcfgearlyauthencrctrl.is_set || is_set(docsif3mdcfgearlyauthencrctrl.yfilter)) leaf_name_data.push_back(docsif3mdcfgearlyauthencrctrl.get_name_leafdata());
    if (docsif3mdcfgtftpproxyenabled.is_set || is_set(docsif3mdcfgtftpproxyenabled.yfilter)) leaf_name_data.push_back(docsif3mdcfgtftpproxyenabled.get_name_leafdata());
    if (docsif3mdcfgsrcaddrverifenabled.is_set || is_set(docsif3mdcfgsrcaddrverifenabled.yfilter)) leaf_name_data.push_back(docsif3mdcfgsrcaddrverifenabled.get_name_leafdata());
    if (docsif3mdcfgdownchannelannex.is_set || is_set(docsif3mdcfgdownchannelannex.yfilter)) leaf_name_data.push_back(docsif3mdcfgdownchannelannex.get_name_leafdata());
    if (docsif3mdcfgcmudcenabled.is_set || is_set(docsif3mdcfgcmudcenabled.yfilter)) leaf_name_data.push_back(docsif3mdcfgcmudcenabled.get_name_leafdata());
    if (docsif3mdcfgsendudcrulesenabled.is_set || is_set(docsif3mdcfgsendudcrulesenabled.yfilter)) leaf_name_data.push_back(docsif3mdcfgsendudcrulesenabled.get_name_leafdata());
    if (docsif3mdcfgservicetypeidlist.is_set || is_set(docsif3mdcfgservicetypeidlist.yfilter)) leaf_name_data.push_back(docsif3mdcfgservicetypeidlist.get_name_leafdata());
    if (docsif3mdcfgbpi2enforcectrl.is_set || is_set(docsif3mdcfgbpi2enforcectrl.yfilter)) leaf_name_data.push_back(docsif3mdcfgbpi2enforcectrl.get_name_leafdata());
    if (docsif3mdcfgenergymgt1x1enabled.is_set || is_set(docsif3mdcfgenergymgt1x1enabled.yfilter)) leaf_name_data.push_back(docsif3mdcfgenergymgt1x1enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3MdCfgTable::DocsIf3MdCfgEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3MdCfgTable::DocsIf3MdCfgEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSIF3MIB::DocsIf3MdCfgTable::DocsIf3MdCfgEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3MdCfgMddInterval")
    {
        docsif3mdcfgmddinterval = value;
        docsif3mdcfgmddinterval.value_namespace = name_space;
        docsif3mdcfgmddinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3MdCfgIpProvMode")
    {
        docsif3mdcfgipprovmode = value;
        docsif3mdcfgipprovmode.value_namespace = name_space;
        docsif3mdcfgipprovmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3MdCfgCmStatusEvCtlEnabled")
    {
        docsif3mdcfgcmstatusevctlenabled = value;
        docsif3mdcfgcmstatusevctlenabled.value_namespace = name_space;
        docsif3mdcfgcmstatusevctlenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3MdCfgUsFreqRange")
    {
        docsif3mdcfgusfreqrange = value;
        docsif3mdcfgusfreqrange.value_namespace = name_space;
        docsif3mdcfgusfreqrange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3MdCfgMcastDsidFwdEnabled")
    {
        docsif3mdcfgmcastdsidfwdenabled = value;
        docsif3mdcfgmcastdsidfwdenabled.value_namespace = name_space;
        docsif3mdcfgmcastdsidfwdenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3MdCfgMultRxChModeEnabled")
    {
        docsif3mdcfgmultrxchmodeenabled = value;
        docsif3mdcfgmultrxchmodeenabled.value_namespace = name_space;
        docsif3mdcfgmultrxchmodeenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3MdCfgMultTxChModeEnabled")
    {
        docsif3mdcfgmulttxchmodeenabled = value;
        docsif3mdcfgmulttxchmodeenabled.value_namespace = name_space;
        docsif3mdcfgmulttxchmodeenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3MdCfgEarlyAuthEncrCtrl")
    {
        docsif3mdcfgearlyauthencrctrl = value;
        docsif3mdcfgearlyauthencrctrl.value_namespace = name_space;
        docsif3mdcfgearlyauthencrctrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3MdCfgTftpProxyEnabled")
    {
        docsif3mdcfgtftpproxyenabled = value;
        docsif3mdcfgtftpproxyenabled.value_namespace = name_space;
        docsif3mdcfgtftpproxyenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3MdCfgSrcAddrVerifEnabled")
    {
        docsif3mdcfgsrcaddrverifenabled = value;
        docsif3mdcfgsrcaddrverifenabled.value_namespace = name_space;
        docsif3mdcfgsrcaddrverifenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3MdCfgDownChannelAnnex")
    {
        docsif3mdcfgdownchannelannex = value;
        docsif3mdcfgdownchannelannex.value_namespace = name_space;
        docsif3mdcfgdownchannelannex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3MdCfgCmUdcEnabled")
    {
        docsif3mdcfgcmudcenabled = value;
        docsif3mdcfgcmudcenabled.value_namespace = name_space;
        docsif3mdcfgcmudcenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3MdCfgSendUdcRulesEnabled")
    {
        docsif3mdcfgsendudcrulesenabled = value;
        docsif3mdcfgsendudcrulesenabled.value_namespace = name_space;
        docsif3mdcfgsendudcrulesenabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3MdCfgServiceTypeIdList")
    {
        docsif3mdcfgservicetypeidlist = value;
        docsif3mdcfgservicetypeidlist.value_namespace = name_space;
        docsif3mdcfgservicetypeidlist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3MdCfgBpi2EnforceCtrl")
    {
        docsif3mdcfgbpi2enforcectrl = value;
        docsif3mdcfgbpi2enforcectrl.value_namespace = name_space;
        docsif3mdcfgbpi2enforcectrl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3MdCfgEnergyMgt1x1Enabled")
    {
        docsif3mdcfgenergymgt1x1enabled = value;
        docsif3mdcfgenergymgt1x1enabled.value_namespace = name_space;
        docsif3mdcfgenergymgt1x1enabled.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIF3MIB::DocsIf3MdCfgTable::DocsIf3MdCfgEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "docsIf3MdCfgMddInterval")
    {
        docsif3mdcfgmddinterval.yfilter = yfilter;
    }
    if(value_path == "docsIf3MdCfgIpProvMode")
    {
        docsif3mdcfgipprovmode.yfilter = yfilter;
    }
    if(value_path == "docsIf3MdCfgCmStatusEvCtlEnabled")
    {
        docsif3mdcfgcmstatusevctlenabled.yfilter = yfilter;
    }
    if(value_path == "docsIf3MdCfgUsFreqRange")
    {
        docsif3mdcfgusfreqrange.yfilter = yfilter;
    }
    if(value_path == "docsIf3MdCfgMcastDsidFwdEnabled")
    {
        docsif3mdcfgmcastdsidfwdenabled.yfilter = yfilter;
    }
    if(value_path == "docsIf3MdCfgMultRxChModeEnabled")
    {
        docsif3mdcfgmultrxchmodeenabled.yfilter = yfilter;
    }
    if(value_path == "docsIf3MdCfgMultTxChModeEnabled")
    {
        docsif3mdcfgmulttxchmodeenabled.yfilter = yfilter;
    }
    if(value_path == "docsIf3MdCfgEarlyAuthEncrCtrl")
    {
        docsif3mdcfgearlyauthencrctrl.yfilter = yfilter;
    }
    if(value_path == "docsIf3MdCfgTftpProxyEnabled")
    {
        docsif3mdcfgtftpproxyenabled.yfilter = yfilter;
    }
    if(value_path == "docsIf3MdCfgSrcAddrVerifEnabled")
    {
        docsif3mdcfgsrcaddrverifenabled.yfilter = yfilter;
    }
    if(value_path == "docsIf3MdCfgDownChannelAnnex")
    {
        docsif3mdcfgdownchannelannex.yfilter = yfilter;
    }
    if(value_path == "docsIf3MdCfgCmUdcEnabled")
    {
        docsif3mdcfgcmudcenabled.yfilter = yfilter;
    }
    if(value_path == "docsIf3MdCfgSendUdcRulesEnabled")
    {
        docsif3mdcfgsendudcrulesenabled.yfilter = yfilter;
    }
    if(value_path == "docsIf3MdCfgServiceTypeIdList")
    {
        docsif3mdcfgservicetypeidlist.yfilter = yfilter;
    }
    if(value_path == "docsIf3MdCfgBpi2EnforceCtrl")
    {
        docsif3mdcfgbpi2enforcectrl.yfilter = yfilter;
    }
    if(value_path == "docsIf3MdCfgEnergyMgt1x1Enabled")
    {
        docsif3mdcfgenergymgt1x1enabled.yfilter = yfilter;
    }
}

bool DOCSIF3MIB::DocsIf3MdCfgTable::DocsIf3MdCfgEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "docsIf3MdCfgMddInterval" || name == "docsIf3MdCfgIpProvMode" || name == "docsIf3MdCfgCmStatusEvCtlEnabled" || name == "docsIf3MdCfgUsFreqRange" || name == "docsIf3MdCfgMcastDsidFwdEnabled" || name == "docsIf3MdCfgMultRxChModeEnabled" || name == "docsIf3MdCfgMultTxChModeEnabled" || name == "docsIf3MdCfgEarlyAuthEncrCtrl" || name == "docsIf3MdCfgTftpProxyEnabled" || name == "docsIf3MdCfgSrcAddrVerifEnabled" || name == "docsIf3MdCfgDownChannelAnnex" || name == "docsIf3MdCfgCmUdcEnabled" || name == "docsIf3MdCfgSendUdcRulesEnabled" || name == "docsIf3MdCfgServiceTypeIdList" || name == "docsIf3MdCfgBpi2EnforceCtrl" || name == "docsIf3MdCfgEnergyMgt1x1Enabled")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3BondingGrpCfgTable::DocsIf3BondingGrpCfgTable()
    :
    docsif3bondinggrpcfgentry(this, {"ifindex", "docsif3bondinggrpcfgdir", "docsif3bondinggrpcfgcfgid"})
{

    yang_name = "docsIf3BondingGrpCfgTable"; yang_parent_name = "DOCS-IF3-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3BondingGrpCfgTable::~DocsIf3BondingGrpCfgTable()
{
}

bool DOCSIF3MIB::DocsIf3BondingGrpCfgTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsif3bondinggrpcfgentry.len(); index++)
    {
        if(docsif3bondinggrpcfgentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIF3MIB::DocsIf3BondingGrpCfgTable::has_operation() const
{
    for (std::size_t index=0; index<docsif3bondinggrpcfgentry.len(); index++)
    {
        if(docsif3bondinggrpcfgentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIF3MIB::DocsIf3BondingGrpCfgTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3BondingGrpCfgTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3BondingGrpCfgTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3BondingGrpCfgTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3BondingGrpCfgTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIf3BondingGrpCfgEntry")
    {
        auto c = std::make_shared<DOCSIF3MIB::DocsIf3BondingGrpCfgTable::DocsIf3BondingGrpCfgEntry>();
        c->parent = this;
        docsif3bondinggrpcfgentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3BondingGrpCfgTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsif3bondinggrpcfgentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSIF3MIB::DocsIf3BondingGrpCfgTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIF3MIB::DocsIf3BondingGrpCfgTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIF3MIB::DocsIf3BondingGrpCfgTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIf3BondingGrpCfgEntry")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3BondingGrpCfgTable::DocsIf3BondingGrpCfgEntry::DocsIf3BondingGrpCfgEntry()
    :
    ifindex{YType::str, "ifIndex"},
    docsif3bondinggrpcfgdir{YType::enumeration, "docsIf3BondingGrpCfgDir"},
    docsif3bondinggrpcfgcfgid{YType::uint32, "docsIf3BondingGrpCfgCfgId"},
    docsif3bondinggrpcfgchlist{YType::str, "docsIf3BondingGrpCfgChList"},
    docsif3bondinggrpcfgsfprovattrmask{YType::str, "docsIf3BondingGrpCfgSfProvAttrMask"},
    docsif3bondinggrpcfgdsidreseqwaittime{YType::uint32, "docsIf3BondingGrpCfgDsidReseqWaitTime"},
    docsif3bondinggrpcfgdsidreseqwarnthrshld{YType::uint32, "docsIf3BondingGrpCfgDsidReseqWarnThrshld"},
    docsif3bondinggrpcfgrowstatus{YType::enumeration, "docsIf3BondingGrpCfgRowStatus"}
{

    yang_name = "docsIf3BondingGrpCfgEntry"; yang_parent_name = "docsIf3BondingGrpCfgTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3BondingGrpCfgTable::DocsIf3BondingGrpCfgEntry::~DocsIf3BondingGrpCfgEntry()
{
}

bool DOCSIF3MIB::DocsIf3BondingGrpCfgTable::DocsIf3BondingGrpCfgEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| docsif3bondinggrpcfgdir.is_set
	|| docsif3bondinggrpcfgcfgid.is_set
	|| docsif3bondinggrpcfgchlist.is_set
	|| docsif3bondinggrpcfgsfprovattrmask.is_set
	|| docsif3bondinggrpcfgdsidreseqwaittime.is_set
	|| docsif3bondinggrpcfgdsidreseqwarnthrshld.is_set
	|| docsif3bondinggrpcfgrowstatus.is_set;
}

bool DOCSIF3MIB::DocsIf3BondingGrpCfgTable::DocsIf3BondingGrpCfgEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(docsif3bondinggrpcfgdir.yfilter)
	|| ydk::is_set(docsif3bondinggrpcfgcfgid.yfilter)
	|| ydk::is_set(docsif3bondinggrpcfgchlist.yfilter)
	|| ydk::is_set(docsif3bondinggrpcfgsfprovattrmask.yfilter)
	|| ydk::is_set(docsif3bondinggrpcfgdsidreseqwaittime.yfilter)
	|| ydk::is_set(docsif3bondinggrpcfgdsidreseqwarnthrshld.yfilter)
	|| ydk::is_set(docsif3bondinggrpcfgrowstatus.yfilter);
}

std::string DOCSIF3MIB::DocsIf3BondingGrpCfgTable::DocsIf3BondingGrpCfgEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/docsIf3BondingGrpCfgTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3BondingGrpCfgTable::DocsIf3BondingGrpCfgEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3BondingGrpCfgEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(docsif3bondinggrpcfgdir, "docsIf3BondingGrpCfgDir");
    ADD_KEY_TOKEN(docsif3bondinggrpcfgcfgid, "docsIf3BondingGrpCfgCfgId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3BondingGrpCfgTable::DocsIf3BondingGrpCfgEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (docsif3bondinggrpcfgdir.is_set || is_set(docsif3bondinggrpcfgdir.yfilter)) leaf_name_data.push_back(docsif3bondinggrpcfgdir.get_name_leafdata());
    if (docsif3bondinggrpcfgcfgid.is_set || is_set(docsif3bondinggrpcfgcfgid.yfilter)) leaf_name_data.push_back(docsif3bondinggrpcfgcfgid.get_name_leafdata());
    if (docsif3bondinggrpcfgchlist.is_set || is_set(docsif3bondinggrpcfgchlist.yfilter)) leaf_name_data.push_back(docsif3bondinggrpcfgchlist.get_name_leafdata());
    if (docsif3bondinggrpcfgsfprovattrmask.is_set || is_set(docsif3bondinggrpcfgsfprovattrmask.yfilter)) leaf_name_data.push_back(docsif3bondinggrpcfgsfprovattrmask.get_name_leafdata());
    if (docsif3bondinggrpcfgdsidreseqwaittime.is_set || is_set(docsif3bondinggrpcfgdsidreseqwaittime.yfilter)) leaf_name_data.push_back(docsif3bondinggrpcfgdsidreseqwaittime.get_name_leafdata());
    if (docsif3bondinggrpcfgdsidreseqwarnthrshld.is_set || is_set(docsif3bondinggrpcfgdsidreseqwarnthrshld.yfilter)) leaf_name_data.push_back(docsif3bondinggrpcfgdsidreseqwarnthrshld.get_name_leafdata());
    if (docsif3bondinggrpcfgrowstatus.is_set || is_set(docsif3bondinggrpcfgrowstatus.yfilter)) leaf_name_data.push_back(docsif3bondinggrpcfgrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3BondingGrpCfgTable::DocsIf3BondingGrpCfgEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3BondingGrpCfgTable::DocsIf3BondingGrpCfgEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSIF3MIB::DocsIf3BondingGrpCfgTable::DocsIf3BondingGrpCfgEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3BondingGrpCfgDir")
    {
        docsif3bondinggrpcfgdir = value;
        docsif3bondinggrpcfgdir.value_namespace = name_space;
        docsif3bondinggrpcfgdir.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3BondingGrpCfgCfgId")
    {
        docsif3bondinggrpcfgcfgid = value;
        docsif3bondinggrpcfgcfgid.value_namespace = name_space;
        docsif3bondinggrpcfgcfgid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3BondingGrpCfgChList")
    {
        docsif3bondinggrpcfgchlist = value;
        docsif3bondinggrpcfgchlist.value_namespace = name_space;
        docsif3bondinggrpcfgchlist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3BondingGrpCfgSfProvAttrMask")
    {
        docsif3bondinggrpcfgsfprovattrmask = value;
        docsif3bondinggrpcfgsfprovattrmask.value_namespace = name_space;
        docsif3bondinggrpcfgsfprovattrmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3BondingGrpCfgDsidReseqWaitTime")
    {
        docsif3bondinggrpcfgdsidreseqwaittime = value;
        docsif3bondinggrpcfgdsidreseqwaittime.value_namespace = name_space;
        docsif3bondinggrpcfgdsidreseqwaittime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3BondingGrpCfgDsidReseqWarnThrshld")
    {
        docsif3bondinggrpcfgdsidreseqwarnthrshld = value;
        docsif3bondinggrpcfgdsidreseqwarnthrshld.value_namespace = name_space;
        docsif3bondinggrpcfgdsidreseqwarnthrshld.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3BondingGrpCfgRowStatus")
    {
        docsif3bondinggrpcfgrowstatus = value;
        docsif3bondinggrpcfgrowstatus.value_namespace = name_space;
        docsif3bondinggrpcfgrowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIF3MIB::DocsIf3BondingGrpCfgTable::DocsIf3BondingGrpCfgEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "docsIf3BondingGrpCfgDir")
    {
        docsif3bondinggrpcfgdir.yfilter = yfilter;
    }
    if(value_path == "docsIf3BondingGrpCfgCfgId")
    {
        docsif3bondinggrpcfgcfgid.yfilter = yfilter;
    }
    if(value_path == "docsIf3BondingGrpCfgChList")
    {
        docsif3bondinggrpcfgchlist.yfilter = yfilter;
    }
    if(value_path == "docsIf3BondingGrpCfgSfProvAttrMask")
    {
        docsif3bondinggrpcfgsfprovattrmask.yfilter = yfilter;
    }
    if(value_path == "docsIf3BondingGrpCfgDsidReseqWaitTime")
    {
        docsif3bondinggrpcfgdsidreseqwaittime.yfilter = yfilter;
    }
    if(value_path == "docsIf3BondingGrpCfgDsidReseqWarnThrshld")
    {
        docsif3bondinggrpcfgdsidreseqwarnthrshld.yfilter = yfilter;
    }
    if(value_path == "docsIf3BondingGrpCfgRowStatus")
    {
        docsif3bondinggrpcfgrowstatus.yfilter = yfilter;
    }
}

bool DOCSIF3MIB::DocsIf3BondingGrpCfgTable::DocsIf3BondingGrpCfgEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "docsIf3BondingGrpCfgDir" || name == "docsIf3BondingGrpCfgCfgId" || name == "docsIf3BondingGrpCfgChList" || name == "docsIf3BondingGrpCfgSfProvAttrMask" || name == "docsIf3BondingGrpCfgDsidReseqWaitTime" || name == "docsIf3BondingGrpCfgDsidReseqWarnThrshld" || name == "docsIf3BondingGrpCfgRowStatus")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3DsBondingGrpStatusTable::DocsIf3DsBondingGrpStatusTable()
    :
    docsif3dsbondinggrpstatusentry(this, {"ifindex", "docsif3dsbondinggrpstatuschsetid"})
{

    yang_name = "docsIf3DsBondingGrpStatusTable"; yang_parent_name = "DOCS-IF3-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3DsBondingGrpStatusTable::~DocsIf3DsBondingGrpStatusTable()
{
}

bool DOCSIF3MIB::DocsIf3DsBondingGrpStatusTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsif3dsbondinggrpstatusentry.len(); index++)
    {
        if(docsif3dsbondinggrpstatusentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIF3MIB::DocsIf3DsBondingGrpStatusTable::has_operation() const
{
    for (std::size_t index=0; index<docsif3dsbondinggrpstatusentry.len(); index++)
    {
        if(docsif3dsbondinggrpstatusentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIF3MIB::DocsIf3DsBondingGrpStatusTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3DsBondingGrpStatusTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3DsBondingGrpStatusTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3DsBondingGrpStatusTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3DsBondingGrpStatusTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIf3DsBondingGrpStatusEntry")
    {
        auto c = std::make_shared<DOCSIF3MIB::DocsIf3DsBondingGrpStatusTable::DocsIf3DsBondingGrpStatusEntry>();
        c->parent = this;
        docsif3dsbondinggrpstatusentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3DsBondingGrpStatusTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsif3dsbondinggrpstatusentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSIF3MIB::DocsIf3DsBondingGrpStatusTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIF3MIB::DocsIf3DsBondingGrpStatusTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIF3MIB::DocsIf3DsBondingGrpStatusTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIf3DsBondingGrpStatusEntry")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3DsBondingGrpStatusTable::DocsIf3DsBondingGrpStatusEntry::DocsIf3DsBondingGrpStatusEntry()
    :
    ifindex{YType::str, "ifIndex"},
    docsif3dsbondinggrpstatuschsetid{YType::uint32, "docsIf3DsBondingGrpStatusChSetId"},
    docsif3dsbondinggrpstatusmddssgid{YType::uint32, "docsIf3DsBondingGrpStatusMdDsSgId"},
    docsif3dsbondinggrpstatuscfgid{YType::uint32, "docsIf3DsBondingGrpStatusCfgId"}
{

    yang_name = "docsIf3DsBondingGrpStatusEntry"; yang_parent_name = "docsIf3DsBondingGrpStatusTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3DsBondingGrpStatusTable::DocsIf3DsBondingGrpStatusEntry::~DocsIf3DsBondingGrpStatusEntry()
{
}

bool DOCSIF3MIB::DocsIf3DsBondingGrpStatusTable::DocsIf3DsBondingGrpStatusEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| docsif3dsbondinggrpstatuschsetid.is_set
	|| docsif3dsbondinggrpstatusmddssgid.is_set
	|| docsif3dsbondinggrpstatuscfgid.is_set;
}

bool DOCSIF3MIB::DocsIf3DsBondingGrpStatusTable::DocsIf3DsBondingGrpStatusEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(docsif3dsbondinggrpstatuschsetid.yfilter)
	|| ydk::is_set(docsif3dsbondinggrpstatusmddssgid.yfilter)
	|| ydk::is_set(docsif3dsbondinggrpstatuscfgid.yfilter);
}

std::string DOCSIF3MIB::DocsIf3DsBondingGrpStatusTable::DocsIf3DsBondingGrpStatusEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/docsIf3DsBondingGrpStatusTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3DsBondingGrpStatusTable::DocsIf3DsBondingGrpStatusEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3DsBondingGrpStatusEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(docsif3dsbondinggrpstatuschsetid, "docsIf3DsBondingGrpStatusChSetId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3DsBondingGrpStatusTable::DocsIf3DsBondingGrpStatusEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (docsif3dsbondinggrpstatuschsetid.is_set || is_set(docsif3dsbondinggrpstatuschsetid.yfilter)) leaf_name_data.push_back(docsif3dsbondinggrpstatuschsetid.get_name_leafdata());
    if (docsif3dsbondinggrpstatusmddssgid.is_set || is_set(docsif3dsbondinggrpstatusmddssgid.yfilter)) leaf_name_data.push_back(docsif3dsbondinggrpstatusmddssgid.get_name_leafdata());
    if (docsif3dsbondinggrpstatuscfgid.is_set || is_set(docsif3dsbondinggrpstatuscfgid.yfilter)) leaf_name_data.push_back(docsif3dsbondinggrpstatuscfgid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3DsBondingGrpStatusTable::DocsIf3DsBondingGrpStatusEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3DsBondingGrpStatusTable::DocsIf3DsBondingGrpStatusEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSIF3MIB::DocsIf3DsBondingGrpStatusTable::DocsIf3DsBondingGrpStatusEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3DsBondingGrpStatusChSetId")
    {
        docsif3dsbondinggrpstatuschsetid = value;
        docsif3dsbondinggrpstatuschsetid.value_namespace = name_space;
        docsif3dsbondinggrpstatuschsetid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3DsBondingGrpStatusMdDsSgId")
    {
        docsif3dsbondinggrpstatusmddssgid = value;
        docsif3dsbondinggrpstatusmddssgid.value_namespace = name_space;
        docsif3dsbondinggrpstatusmddssgid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3DsBondingGrpStatusCfgId")
    {
        docsif3dsbondinggrpstatuscfgid = value;
        docsif3dsbondinggrpstatuscfgid.value_namespace = name_space;
        docsif3dsbondinggrpstatuscfgid.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIF3MIB::DocsIf3DsBondingGrpStatusTable::DocsIf3DsBondingGrpStatusEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "docsIf3DsBondingGrpStatusChSetId")
    {
        docsif3dsbondinggrpstatuschsetid.yfilter = yfilter;
    }
    if(value_path == "docsIf3DsBondingGrpStatusMdDsSgId")
    {
        docsif3dsbondinggrpstatusmddssgid.yfilter = yfilter;
    }
    if(value_path == "docsIf3DsBondingGrpStatusCfgId")
    {
        docsif3dsbondinggrpstatuscfgid.yfilter = yfilter;
    }
}

bool DOCSIF3MIB::DocsIf3DsBondingGrpStatusTable::DocsIf3DsBondingGrpStatusEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "docsIf3DsBondingGrpStatusChSetId" || name == "docsIf3DsBondingGrpStatusMdDsSgId" || name == "docsIf3DsBondingGrpStatusCfgId")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3UsBondingGrpStatusTable::DocsIf3UsBondingGrpStatusTable()
    :
    docsif3usbondinggrpstatusentry(this, {"ifindex", "docsif3usbondinggrpstatuschsetid"})
{

    yang_name = "docsIf3UsBondingGrpStatusTable"; yang_parent_name = "DOCS-IF3-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3UsBondingGrpStatusTable::~DocsIf3UsBondingGrpStatusTable()
{
}

bool DOCSIF3MIB::DocsIf3UsBondingGrpStatusTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsif3usbondinggrpstatusentry.len(); index++)
    {
        if(docsif3usbondinggrpstatusentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIF3MIB::DocsIf3UsBondingGrpStatusTable::has_operation() const
{
    for (std::size_t index=0; index<docsif3usbondinggrpstatusentry.len(); index++)
    {
        if(docsif3usbondinggrpstatusentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIF3MIB::DocsIf3UsBondingGrpStatusTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3UsBondingGrpStatusTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3UsBondingGrpStatusTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3UsBondingGrpStatusTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3UsBondingGrpStatusTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIf3UsBondingGrpStatusEntry")
    {
        auto c = std::make_shared<DOCSIF3MIB::DocsIf3UsBondingGrpStatusTable::DocsIf3UsBondingGrpStatusEntry>();
        c->parent = this;
        docsif3usbondinggrpstatusentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3UsBondingGrpStatusTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsif3usbondinggrpstatusentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSIF3MIB::DocsIf3UsBondingGrpStatusTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIF3MIB::DocsIf3UsBondingGrpStatusTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIF3MIB::DocsIf3UsBondingGrpStatusTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIf3UsBondingGrpStatusEntry")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3UsBondingGrpStatusTable::DocsIf3UsBondingGrpStatusEntry::DocsIf3UsBondingGrpStatusEntry()
    :
    ifindex{YType::str, "ifIndex"},
    docsif3usbondinggrpstatuschsetid{YType::uint32, "docsIf3UsBondingGrpStatusChSetId"},
    docsif3usbondinggrpstatusmdussgid{YType::uint32, "docsIf3UsBondingGrpStatusMdUsSgId"},
    docsif3usbondinggrpstatuscfgid{YType::uint32, "docsIf3UsBondingGrpStatusCfgId"}
{

    yang_name = "docsIf3UsBondingGrpStatusEntry"; yang_parent_name = "docsIf3UsBondingGrpStatusTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3UsBondingGrpStatusTable::DocsIf3UsBondingGrpStatusEntry::~DocsIf3UsBondingGrpStatusEntry()
{
}

bool DOCSIF3MIB::DocsIf3UsBondingGrpStatusTable::DocsIf3UsBondingGrpStatusEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| docsif3usbondinggrpstatuschsetid.is_set
	|| docsif3usbondinggrpstatusmdussgid.is_set
	|| docsif3usbondinggrpstatuscfgid.is_set;
}

bool DOCSIF3MIB::DocsIf3UsBondingGrpStatusTable::DocsIf3UsBondingGrpStatusEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(docsif3usbondinggrpstatuschsetid.yfilter)
	|| ydk::is_set(docsif3usbondinggrpstatusmdussgid.yfilter)
	|| ydk::is_set(docsif3usbondinggrpstatuscfgid.yfilter);
}

std::string DOCSIF3MIB::DocsIf3UsBondingGrpStatusTable::DocsIf3UsBondingGrpStatusEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/docsIf3UsBondingGrpStatusTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3UsBondingGrpStatusTable::DocsIf3UsBondingGrpStatusEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3UsBondingGrpStatusEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(docsif3usbondinggrpstatuschsetid, "docsIf3UsBondingGrpStatusChSetId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3UsBondingGrpStatusTable::DocsIf3UsBondingGrpStatusEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (docsif3usbondinggrpstatuschsetid.is_set || is_set(docsif3usbondinggrpstatuschsetid.yfilter)) leaf_name_data.push_back(docsif3usbondinggrpstatuschsetid.get_name_leafdata());
    if (docsif3usbondinggrpstatusmdussgid.is_set || is_set(docsif3usbondinggrpstatusmdussgid.yfilter)) leaf_name_data.push_back(docsif3usbondinggrpstatusmdussgid.get_name_leafdata());
    if (docsif3usbondinggrpstatuscfgid.is_set || is_set(docsif3usbondinggrpstatuscfgid.yfilter)) leaf_name_data.push_back(docsif3usbondinggrpstatuscfgid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3UsBondingGrpStatusTable::DocsIf3UsBondingGrpStatusEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3UsBondingGrpStatusTable::DocsIf3UsBondingGrpStatusEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSIF3MIB::DocsIf3UsBondingGrpStatusTable::DocsIf3UsBondingGrpStatusEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3UsBondingGrpStatusChSetId")
    {
        docsif3usbondinggrpstatuschsetid = value;
        docsif3usbondinggrpstatuschsetid.value_namespace = name_space;
        docsif3usbondinggrpstatuschsetid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3UsBondingGrpStatusMdUsSgId")
    {
        docsif3usbondinggrpstatusmdussgid = value;
        docsif3usbondinggrpstatusmdussgid.value_namespace = name_space;
        docsif3usbondinggrpstatusmdussgid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3UsBondingGrpStatusCfgId")
    {
        docsif3usbondinggrpstatuscfgid = value;
        docsif3usbondinggrpstatuscfgid.value_namespace = name_space;
        docsif3usbondinggrpstatuscfgid.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIF3MIB::DocsIf3UsBondingGrpStatusTable::DocsIf3UsBondingGrpStatusEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "docsIf3UsBondingGrpStatusChSetId")
    {
        docsif3usbondinggrpstatuschsetid.yfilter = yfilter;
    }
    if(value_path == "docsIf3UsBondingGrpStatusMdUsSgId")
    {
        docsif3usbondinggrpstatusmdussgid.yfilter = yfilter;
    }
    if(value_path == "docsIf3UsBondingGrpStatusCfgId")
    {
        docsif3usbondinggrpstatuscfgid.yfilter = yfilter;
    }
}

bool DOCSIF3MIB::DocsIf3UsBondingGrpStatusTable::DocsIf3UsBondingGrpStatusEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "docsIf3UsBondingGrpStatusChSetId" || name == "docsIf3UsBondingGrpStatusMdUsSgId" || name == "docsIf3UsBondingGrpStatusCfgId")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3UsChExtTable::DocsIf3UsChExtTable()
    :
    docsif3uschextentry(this, {"ifindex"})
{

    yang_name = "docsIf3UsChExtTable"; yang_parent_name = "DOCS-IF3-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3UsChExtTable::~DocsIf3UsChExtTable()
{
}

bool DOCSIF3MIB::DocsIf3UsChExtTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsif3uschextentry.len(); index++)
    {
        if(docsif3uschextentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIF3MIB::DocsIf3UsChExtTable::has_operation() const
{
    for (std::size_t index=0; index<docsif3uschextentry.len(); index++)
    {
        if(docsif3uschextentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIF3MIB::DocsIf3UsChExtTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3UsChExtTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3UsChExtTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3UsChExtTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3UsChExtTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIf3UsChExtEntry")
    {
        auto c = std::make_shared<DOCSIF3MIB::DocsIf3UsChExtTable::DocsIf3UsChExtEntry>();
        c->parent = this;
        docsif3uschextentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3UsChExtTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsif3uschextentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSIF3MIB::DocsIf3UsChExtTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIF3MIB::DocsIf3UsChExtTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIF3MIB::DocsIf3UsChExtTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIf3UsChExtEntry")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3UsChExtTable::DocsIf3UsChExtEntry::DocsIf3UsChExtEntry()
    :
    ifindex{YType::str, "ifIndex"},
    docsif3uschextsaccodehoppingselectionmode{YType::enumeration, "docsIf3UsChExtSacCodeHoppingSelectionMode"},
    docsif3uschextscdmaselectionstringactivecodes{YType::str, "docsIf3UsChExtScdmaSelectionStringActiveCodes"}
{

    yang_name = "docsIf3UsChExtEntry"; yang_parent_name = "docsIf3UsChExtTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3UsChExtTable::DocsIf3UsChExtEntry::~DocsIf3UsChExtEntry()
{
}

bool DOCSIF3MIB::DocsIf3UsChExtTable::DocsIf3UsChExtEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| docsif3uschextsaccodehoppingselectionmode.is_set
	|| docsif3uschextscdmaselectionstringactivecodes.is_set;
}

bool DOCSIF3MIB::DocsIf3UsChExtTable::DocsIf3UsChExtEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(docsif3uschextsaccodehoppingselectionmode.yfilter)
	|| ydk::is_set(docsif3uschextscdmaselectionstringactivecodes.yfilter);
}

std::string DOCSIF3MIB::DocsIf3UsChExtTable::DocsIf3UsChExtEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/docsIf3UsChExtTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3UsChExtTable::DocsIf3UsChExtEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3UsChExtEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3UsChExtTable::DocsIf3UsChExtEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (docsif3uschextsaccodehoppingselectionmode.is_set || is_set(docsif3uschextsaccodehoppingselectionmode.yfilter)) leaf_name_data.push_back(docsif3uschextsaccodehoppingselectionmode.get_name_leafdata());
    if (docsif3uschextscdmaselectionstringactivecodes.is_set || is_set(docsif3uschextscdmaselectionstringactivecodes.yfilter)) leaf_name_data.push_back(docsif3uschextscdmaselectionstringactivecodes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3UsChExtTable::DocsIf3UsChExtEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3UsChExtTable::DocsIf3UsChExtEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSIF3MIB::DocsIf3UsChExtTable::DocsIf3UsChExtEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3UsChExtSacCodeHoppingSelectionMode")
    {
        docsif3uschextsaccodehoppingselectionmode = value;
        docsif3uschextsaccodehoppingselectionmode.value_namespace = name_space;
        docsif3uschextsaccodehoppingselectionmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3UsChExtScdmaSelectionStringActiveCodes")
    {
        docsif3uschextscdmaselectionstringactivecodes = value;
        docsif3uschextscdmaselectionstringactivecodes.value_namespace = name_space;
        docsif3uschextscdmaselectionstringactivecodes.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIF3MIB::DocsIf3UsChExtTable::DocsIf3UsChExtEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "docsIf3UsChExtSacCodeHoppingSelectionMode")
    {
        docsif3uschextsaccodehoppingselectionmode.yfilter = yfilter;
    }
    if(value_path == "docsIf3UsChExtScdmaSelectionStringActiveCodes")
    {
        docsif3uschextscdmaselectionstringactivecodes.yfilter = yfilter;
    }
}

bool DOCSIF3MIB::DocsIf3UsChExtTable::DocsIf3UsChExtEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "docsIf3UsChExtSacCodeHoppingSelectionMode" || name == "docsIf3UsChExtScdmaSelectionStringActiveCodes")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3UsChSetTable::DocsIf3UsChSetTable()
    :
    docsif3uschsetentry(this, {"ifindex", "docsif3uschsetid"})
{

    yang_name = "docsIf3UsChSetTable"; yang_parent_name = "DOCS-IF3-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3UsChSetTable::~DocsIf3UsChSetTable()
{
}

bool DOCSIF3MIB::DocsIf3UsChSetTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsif3uschsetentry.len(); index++)
    {
        if(docsif3uschsetentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIF3MIB::DocsIf3UsChSetTable::has_operation() const
{
    for (std::size_t index=0; index<docsif3uschsetentry.len(); index++)
    {
        if(docsif3uschsetentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIF3MIB::DocsIf3UsChSetTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3UsChSetTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3UsChSetTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3UsChSetTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3UsChSetTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIf3UsChSetEntry")
    {
        auto c = std::make_shared<DOCSIF3MIB::DocsIf3UsChSetTable::DocsIf3UsChSetEntry>();
        c->parent = this;
        docsif3uschsetentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3UsChSetTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsif3uschsetentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSIF3MIB::DocsIf3UsChSetTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIF3MIB::DocsIf3UsChSetTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIF3MIB::DocsIf3UsChSetTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIf3UsChSetEntry")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3UsChSetTable::DocsIf3UsChSetEntry::DocsIf3UsChSetEntry()
    :
    ifindex{YType::str, "ifIndex"},
    docsif3uschsetid{YType::uint32, "docsIf3UsChSetId"},
    docsif3uschsetchlist{YType::str, "docsIf3UsChSetChList"}
{

    yang_name = "docsIf3UsChSetEntry"; yang_parent_name = "docsIf3UsChSetTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3UsChSetTable::DocsIf3UsChSetEntry::~DocsIf3UsChSetEntry()
{
}

bool DOCSIF3MIB::DocsIf3UsChSetTable::DocsIf3UsChSetEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| docsif3uschsetid.is_set
	|| docsif3uschsetchlist.is_set;
}

bool DOCSIF3MIB::DocsIf3UsChSetTable::DocsIf3UsChSetEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(docsif3uschsetid.yfilter)
	|| ydk::is_set(docsif3uschsetchlist.yfilter);
}

std::string DOCSIF3MIB::DocsIf3UsChSetTable::DocsIf3UsChSetEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/docsIf3UsChSetTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3UsChSetTable::DocsIf3UsChSetEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3UsChSetEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(docsif3uschsetid, "docsIf3UsChSetId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3UsChSetTable::DocsIf3UsChSetEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (docsif3uschsetid.is_set || is_set(docsif3uschsetid.yfilter)) leaf_name_data.push_back(docsif3uschsetid.get_name_leafdata());
    if (docsif3uschsetchlist.is_set || is_set(docsif3uschsetchlist.yfilter)) leaf_name_data.push_back(docsif3uschsetchlist.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3UsChSetTable::DocsIf3UsChSetEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3UsChSetTable::DocsIf3UsChSetEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSIF3MIB::DocsIf3UsChSetTable::DocsIf3UsChSetEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3UsChSetId")
    {
        docsif3uschsetid = value;
        docsif3uschsetid.value_namespace = name_space;
        docsif3uschsetid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3UsChSetChList")
    {
        docsif3uschsetchlist = value;
        docsif3uschsetchlist.value_namespace = name_space;
        docsif3uschsetchlist.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIF3MIB::DocsIf3UsChSetTable::DocsIf3UsChSetEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "docsIf3UsChSetId")
    {
        docsif3uschsetid.yfilter = yfilter;
    }
    if(value_path == "docsIf3UsChSetChList")
    {
        docsif3uschsetchlist.yfilter = yfilter;
    }
}

bool DOCSIF3MIB::DocsIf3UsChSetTable::DocsIf3UsChSetEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "docsIf3UsChSetId" || name == "docsIf3UsChSetChList")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3DsChSetTable::DocsIf3DsChSetTable()
    :
    docsif3dschsetentry(this, {"ifindex", "docsif3dschsetid"})
{

    yang_name = "docsIf3DsChSetTable"; yang_parent_name = "DOCS-IF3-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3DsChSetTable::~DocsIf3DsChSetTable()
{
}

bool DOCSIF3MIB::DocsIf3DsChSetTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsif3dschsetentry.len(); index++)
    {
        if(docsif3dschsetentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIF3MIB::DocsIf3DsChSetTable::has_operation() const
{
    for (std::size_t index=0; index<docsif3dschsetentry.len(); index++)
    {
        if(docsif3dschsetentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIF3MIB::DocsIf3DsChSetTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3DsChSetTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3DsChSetTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3DsChSetTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3DsChSetTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIf3DsChSetEntry")
    {
        auto c = std::make_shared<DOCSIF3MIB::DocsIf3DsChSetTable::DocsIf3DsChSetEntry>();
        c->parent = this;
        docsif3dschsetentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3DsChSetTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsif3dschsetentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSIF3MIB::DocsIf3DsChSetTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIF3MIB::DocsIf3DsChSetTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIF3MIB::DocsIf3DsChSetTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIf3DsChSetEntry")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3DsChSetTable::DocsIf3DsChSetEntry::DocsIf3DsChSetEntry()
    :
    ifindex{YType::str, "ifIndex"},
    docsif3dschsetid{YType::uint32, "docsIf3DsChSetId"},
    docsif3dschsetchlist{YType::str, "docsIf3DsChSetChList"}
{

    yang_name = "docsIf3DsChSetEntry"; yang_parent_name = "docsIf3DsChSetTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3DsChSetTable::DocsIf3DsChSetEntry::~DocsIf3DsChSetEntry()
{
}

bool DOCSIF3MIB::DocsIf3DsChSetTable::DocsIf3DsChSetEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| docsif3dschsetid.is_set
	|| docsif3dschsetchlist.is_set;
}

bool DOCSIF3MIB::DocsIf3DsChSetTable::DocsIf3DsChSetEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(docsif3dschsetid.yfilter)
	|| ydk::is_set(docsif3dschsetchlist.yfilter);
}

std::string DOCSIF3MIB::DocsIf3DsChSetTable::DocsIf3DsChSetEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/docsIf3DsChSetTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3DsChSetTable::DocsIf3DsChSetEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3DsChSetEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(docsif3dschsetid, "docsIf3DsChSetId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3DsChSetTable::DocsIf3DsChSetEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (docsif3dschsetid.is_set || is_set(docsif3dschsetid.yfilter)) leaf_name_data.push_back(docsif3dschsetid.get_name_leafdata());
    if (docsif3dschsetchlist.is_set || is_set(docsif3dschsetchlist.yfilter)) leaf_name_data.push_back(docsif3dschsetchlist.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3DsChSetTable::DocsIf3DsChSetEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3DsChSetTable::DocsIf3DsChSetEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSIF3MIB::DocsIf3DsChSetTable::DocsIf3DsChSetEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3DsChSetId")
    {
        docsif3dschsetid = value;
        docsif3dschsetid.value_namespace = name_space;
        docsif3dschsetid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3DsChSetChList")
    {
        docsif3dschsetchlist = value;
        docsif3dschsetchlist.value_namespace = name_space;
        docsif3dschsetchlist.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIF3MIB::DocsIf3DsChSetTable::DocsIf3DsChSetEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "docsIf3DsChSetId")
    {
        docsif3dschsetid.yfilter = yfilter;
    }
    if(value_path == "docsIf3DsChSetChList")
    {
        docsif3dschsetchlist.yfilter = yfilter;
    }
}

bool DOCSIF3MIB::DocsIf3DsChSetTable::DocsIf3DsChSetEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "docsIf3DsChSetId" || name == "docsIf3DsChSetChList")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3SignalQualityExtTable::DocsIf3SignalQualityExtTable()
    :
    docsif3signalqualityextentry(this, {"ifindex"})
{

    yang_name = "docsIf3SignalQualityExtTable"; yang_parent_name = "DOCS-IF3-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3SignalQualityExtTable::~DocsIf3SignalQualityExtTable()
{
}

bool DOCSIF3MIB::DocsIf3SignalQualityExtTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsif3signalqualityextentry.len(); index++)
    {
        if(docsif3signalqualityextentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIF3MIB::DocsIf3SignalQualityExtTable::has_operation() const
{
    for (std::size_t index=0; index<docsif3signalqualityextentry.len(); index++)
    {
        if(docsif3signalqualityextentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIF3MIB::DocsIf3SignalQualityExtTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3SignalQualityExtTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3SignalQualityExtTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3SignalQualityExtTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3SignalQualityExtTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIf3SignalQualityExtEntry")
    {
        auto c = std::make_shared<DOCSIF3MIB::DocsIf3SignalQualityExtTable::DocsIf3SignalQualityExtEntry>();
        c->parent = this;
        docsif3signalqualityextentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3SignalQualityExtTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsif3signalqualityextentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSIF3MIB::DocsIf3SignalQualityExtTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIF3MIB::DocsIf3SignalQualityExtTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIF3MIB::DocsIf3SignalQualityExtTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIf3SignalQualityExtEntry")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3SignalQualityExtTable::DocsIf3SignalQualityExtEntry::DocsIf3SignalQualityExtEntry()
    :
    ifindex{YType::str, "ifIndex"},
    docsif3signalqualityextrxmer{YType::int32, "docsIf3SignalQualityExtRxMER"},
    docsif3signalqualityextrxmersamples{YType::uint32, "docsIf3SignalQualityExtRxMerSamples"}
{

    yang_name = "docsIf3SignalQualityExtEntry"; yang_parent_name = "docsIf3SignalQualityExtTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3SignalQualityExtTable::DocsIf3SignalQualityExtEntry::~DocsIf3SignalQualityExtEntry()
{
}

bool DOCSIF3MIB::DocsIf3SignalQualityExtTable::DocsIf3SignalQualityExtEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| docsif3signalqualityextrxmer.is_set
	|| docsif3signalqualityextrxmersamples.is_set;
}

bool DOCSIF3MIB::DocsIf3SignalQualityExtTable::DocsIf3SignalQualityExtEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(docsif3signalqualityextrxmer.yfilter)
	|| ydk::is_set(docsif3signalqualityextrxmersamples.yfilter);
}

std::string DOCSIF3MIB::DocsIf3SignalQualityExtTable::DocsIf3SignalQualityExtEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/docsIf3SignalQualityExtTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3SignalQualityExtTable::DocsIf3SignalQualityExtEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3SignalQualityExtEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3SignalQualityExtTable::DocsIf3SignalQualityExtEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (docsif3signalqualityextrxmer.is_set || is_set(docsif3signalqualityextrxmer.yfilter)) leaf_name_data.push_back(docsif3signalqualityextrxmer.get_name_leafdata());
    if (docsif3signalqualityextrxmersamples.is_set || is_set(docsif3signalqualityextrxmersamples.yfilter)) leaf_name_data.push_back(docsif3signalqualityextrxmersamples.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3SignalQualityExtTable::DocsIf3SignalQualityExtEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3SignalQualityExtTable::DocsIf3SignalQualityExtEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSIF3MIB::DocsIf3SignalQualityExtTable::DocsIf3SignalQualityExtEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3SignalQualityExtRxMER")
    {
        docsif3signalqualityextrxmer = value;
        docsif3signalqualityextrxmer.value_namespace = name_space;
        docsif3signalqualityextrxmer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3SignalQualityExtRxMerSamples")
    {
        docsif3signalqualityextrxmersamples = value;
        docsif3signalqualityextrxmersamples.value_namespace = name_space;
        docsif3signalqualityextrxmersamples.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIF3MIB::DocsIf3SignalQualityExtTable::DocsIf3SignalQualityExtEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "docsIf3SignalQualityExtRxMER")
    {
        docsif3signalqualityextrxmer.yfilter = yfilter;
    }
    if(value_path == "docsIf3SignalQualityExtRxMerSamples")
    {
        docsif3signalqualityextrxmersamples.yfilter = yfilter;
    }
}

bool DOCSIF3MIB::DocsIf3SignalQualityExtTable::DocsIf3SignalQualityExtEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "docsIf3SignalQualityExtRxMER" || name == "docsIf3SignalQualityExtRxMerSamples")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3CmtsSignalQualityExtTable::DocsIf3CmtsSignalQualityExtTable()
    :
    docsif3cmtssignalqualityextentry(this, {"ifindex"})
{

    yang_name = "docsIf3CmtsSignalQualityExtTable"; yang_parent_name = "DOCS-IF3-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3CmtsSignalQualityExtTable::~DocsIf3CmtsSignalQualityExtTable()
{
}

bool DOCSIF3MIB::DocsIf3CmtsSignalQualityExtTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsif3cmtssignalqualityextentry.len(); index++)
    {
        if(docsif3cmtssignalqualityextentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIF3MIB::DocsIf3CmtsSignalQualityExtTable::has_operation() const
{
    for (std::size_t index=0; index<docsif3cmtssignalqualityextentry.len(); index++)
    {
        if(docsif3cmtssignalqualityextentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIF3MIB::DocsIf3CmtsSignalQualityExtTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3CmtsSignalQualityExtTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3CmtsSignalQualityExtTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3CmtsSignalQualityExtTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3CmtsSignalQualityExtTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIf3CmtsSignalQualityExtEntry")
    {
        auto c = std::make_shared<DOCSIF3MIB::DocsIf3CmtsSignalQualityExtTable::DocsIf3CmtsSignalQualityExtEntry>();
        c->parent = this;
        docsif3cmtssignalqualityextentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3CmtsSignalQualityExtTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsif3cmtssignalqualityextentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSIF3MIB::DocsIf3CmtsSignalQualityExtTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIF3MIB::DocsIf3CmtsSignalQualityExtTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIF3MIB::DocsIf3CmtsSignalQualityExtTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIf3CmtsSignalQualityExtEntry")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3CmtsSignalQualityExtTable::DocsIf3CmtsSignalQualityExtEntry::DocsIf3CmtsSignalQualityExtEntry()
    :
    ifindex{YType::str, "ifIndex"},
    docsif3cmtssignalqualityextcnir{YType::int32, "docsIf3CmtsSignalQualityExtCNIR"},
    docsif3cmtssignalqualityextexpectedrxsignalpower{YType::int32, "docsIf3CmtsSignalQualityExtExpectedRxSignalPower"}
{

    yang_name = "docsIf3CmtsSignalQualityExtEntry"; yang_parent_name = "docsIf3CmtsSignalQualityExtTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3CmtsSignalQualityExtTable::DocsIf3CmtsSignalQualityExtEntry::~DocsIf3CmtsSignalQualityExtEntry()
{
}

bool DOCSIF3MIB::DocsIf3CmtsSignalQualityExtTable::DocsIf3CmtsSignalQualityExtEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| docsif3cmtssignalqualityextcnir.is_set
	|| docsif3cmtssignalqualityextexpectedrxsignalpower.is_set;
}

bool DOCSIF3MIB::DocsIf3CmtsSignalQualityExtTable::DocsIf3CmtsSignalQualityExtEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(docsif3cmtssignalqualityextcnir.yfilter)
	|| ydk::is_set(docsif3cmtssignalqualityextexpectedrxsignalpower.yfilter);
}

std::string DOCSIF3MIB::DocsIf3CmtsSignalQualityExtTable::DocsIf3CmtsSignalQualityExtEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/docsIf3CmtsSignalQualityExtTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3CmtsSignalQualityExtTable::DocsIf3CmtsSignalQualityExtEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3CmtsSignalQualityExtEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3CmtsSignalQualityExtTable::DocsIf3CmtsSignalQualityExtEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (docsif3cmtssignalqualityextcnir.is_set || is_set(docsif3cmtssignalqualityextcnir.yfilter)) leaf_name_data.push_back(docsif3cmtssignalqualityextcnir.get_name_leafdata());
    if (docsif3cmtssignalqualityextexpectedrxsignalpower.is_set || is_set(docsif3cmtssignalqualityextexpectedrxsignalpower.yfilter)) leaf_name_data.push_back(docsif3cmtssignalqualityextexpectedrxsignalpower.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3CmtsSignalQualityExtTable::DocsIf3CmtsSignalQualityExtEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3CmtsSignalQualityExtTable::DocsIf3CmtsSignalQualityExtEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSIF3MIB::DocsIf3CmtsSignalQualityExtTable::DocsIf3CmtsSignalQualityExtEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmtsSignalQualityExtCNIR")
    {
        docsif3cmtssignalqualityextcnir = value;
        docsif3cmtssignalqualityextcnir.value_namespace = name_space;
        docsif3cmtssignalqualityextcnir.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmtsSignalQualityExtExpectedRxSignalPower")
    {
        docsif3cmtssignalqualityextexpectedrxsignalpower = value;
        docsif3cmtssignalqualityextexpectedrxsignalpower.value_namespace = name_space;
        docsif3cmtssignalqualityextexpectedrxsignalpower.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIF3MIB::DocsIf3CmtsSignalQualityExtTable::DocsIf3CmtsSignalQualityExtEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmtsSignalQualityExtCNIR")
    {
        docsif3cmtssignalqualityextcnir.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmtsSignalQualityExtExpectedRxSignalPower")
    {
        docsif3cmtssignalqualityextexpectedrxsignalpower.yfilter = yfilter;
    }
}

bool DOCSIF3MIB::DocsIf3CmtsSignalQualityExtTable::DocsIf3CmtsSignalQualityExtEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "docsIf3CmtsSignalQualityExtCNIR" || name == "docsIf3CmtsSignalQualityExtExpectedRxSignalPower")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3CmtsSpectrumAnalysisMeasTable::DocsIf3CmtsSpectrumAnalysisMeasTable()
    :
    docsif3cmtsspectrumanalysismeasentry(this, {"ifindex"})
{

    yang_name = "docsIf3CmtsSpectrumAnalysisMeasTable"; yang_parent_name = "DOCS-IF3-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3CmtsSpectrumAnalysisMeasTable::~DocsIf3CmtsSpectrumAnalysisMeasTable()
{
}

bool DOCSIF3MIB::DocsIf3CmtsSpectrumAnalysisMeasTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsif3cmtsspectrumanalysismeasentry.len(); index++)
    {
        if(docsif3cmtsspectrumanalysismeasentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIF3MIB::DocsIf3CmtsSpectrumAnalysisMeasTable::has_operation() const
{
    for (std::size_t index=0; index<docsif3cmtsspectrumanalysismeasentry.len(); index++)
    {
        if(docsif3cmtsspectrumanalysismeasentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIF3MIB::DocsIf3CmtsSpectrumAnalysisMeasTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3CmtsSpectrumAnalysisMeasTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3CmtsSpectrumAnalysisMeasTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3CmtsSpectrumAnalysisMeasTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3CmtsSpectrumAnalysisMeasTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIf3CmtsSpectrumAnalysisMeasEntry")
    {
        auto c = std::make_shared<DOCSIF3MIB::DocsIf3CmtsSpectrumAnalysisMeasTable::DocsIf3CmtsSpectrumAnalysisMeasEntry>();
        c->parent = this;
        docsif3cmtsspectrumanalysismeasentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3CmtsSpectrumAnalysisMeasTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsif3cmtsspectrumanalysismeasentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSIF3MIB::DocsIf3CmtsSpectrumAnalysisMeasTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIF3MIB::DocsIf3CmtsSpectrumAnalysisMeasTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIF3MIB::DocsIf3CmtsSpectrumAnalysisMeasTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIf3CmtsSpectrumAnalysisMeasEntry")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3CmtsSpectrumAnalysisMeasTable::DocsIf3CmtsSpectrumAnalysisMeasEntry::DocsIf3CmtsSpectrumAnalysisMeasEntry()
    :
    ifindex{YType::str, "ifIndex"},
    docsif3cmtsspectrumanalysismeasamplitudedata{YType::str, "docsIf3CmtsSpectrumAnalysisMeasAmplitudeData"},
    docsif3cmtsspectrumanalysismeastimeinterval{YType::uint32, "docsIf3CmtsSpectrumAnalysisMeasTimeInterval"},
    docsif3cmtsspectrumanalysismeasrowstatus{YType::enumeration, "docsIf3CmtsSpectrumAnalysisMeasRowStatus"}
{

    yang_name = "docsIf3CmtsSpectrumAnalysisMeasEntry"; yang_parent_name = "docsIf3CmtsSpectrumAnalysisMeasTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3CmtsSpectrumAnalysisMeasTable::DocsIf3CmtsSpectrumAnalysisMeasEntry::~DocsIf3CmtsSpectrumAnalysisMeasEntry()
{
}

bool DOCSIF3MIB::DocsIf3CmtsSpectrumAnalysisMeasTable::DocsIf3CmtsSpectrumAnalysisMeasEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| docsif3cmtsspectrumanalysismeasamplitudedata.is_set
	|| docsif3cmtsspectrumanalysismeastimeinterval.is_set
	|| docsif3cmtsspectrumanalysismeasrowstatus.is_set;
}

bool DOCSIF3MIB::DocsIf3CmtsSpectrumAnalysisMeasTable::DocsIf3CmtsSpectrumAnalysisMeasEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(docsif3cmtsspectrumanalysismeasamplitudedata.yfilter)
	|| ydk::is_set(docsif3cmtsspectrumanalysismeastimeinterval.yfilter)
	|| ydk::is_set(docsif3cmtsspectrumanalysismeasrowstatus.yfilter);
}

std::string DOCSIF3MIB::DocsIf3CmtsSpectrumAnalysisMeasTable::DocsIf3CmtsSpectrumAnalysisMeasEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/docsIf3CmtsSpectrumAnalysisMeasTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3CmtsSpectrumAnalysisMeasTable::DocsIf3CmtsSpectrumAnalysisMeasEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3CmtsSpectrumAnalysisMeasEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3CmtsSpectrumAnalysisMeasTable::DocsIf3CmtsSpectrumAnalysisMeasEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (docsif3cmtsspectrumanalysismeasamplitudedata.is_set || is_set(docsif3cmtsspectrumanalysismeasamplitudedata.yfilter)) leaf_name_data.push_back(docsif3cmtsspectrumanalysismeasamplitudedata.get_name_leafdata());
    if (docsif3cmtsspectrumanalysismeastimeinterval.is_set || is_set(docsif3cmtsspectrumanalysismeastimeinterval.yfilter)) leaf_name_data.push_back(docsif3cmtsspectrumanalysismeastimeinterval.get_name_leafdata());
    if (docsif3cmtsspectrumanalysismeasrowstatus.is_set || is_set(docsif3cmtsspectrumanalysismeasrowstatus.yfilter)) leaf_name_data.push_back(docsif3cmtsspectrumanalysismeasrowstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3CmtsSpectrumAnalysisMeasTable::DocsIf3CmtsSpectrumAnalysisMeasEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3CmtsSpectrumAnalysisMeasTable::DocsIf3CmtsSpectrumAnalysisMeasEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSIF3MIB::DocsIf3CmtsSpectrumAnalysisMeasTable::DocsIf3CmtsSpectrumAnalysisMeasEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmtsSpectrumAnalysisMeasAmplitudeData")
    {
        docsif3cmtsspectrumanalysismeasamplitudedata = value;
        docsif3cmtsspectrumanalysismeasamplitudedata.value_namespace = name_space;
        docsif3cmtsspectrumanalysismeasamplitudedata.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmtsSpectrumAnalysisMeasTimeInterval")
    {
        docsif3cmtsspectrumanalysismeastimeinterval = value;
        docsif3cmtsspectrumanalysismeastimeinterval.value_namespace = name_space;
        docsif3cmtsspectrumanalysismeastimeinterval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmtsSpectrumAnalysisMeasRowStatus")
    {
        docsif3cmtsspectrumanalysismeasrowstatus = value;
        docsif3cmtsspectrumanalysismeasrowstatus.value_namespace = name_space;
        docsif3cmtsspectrumanalysismeasrowstatus.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIF3MIB::DocsIf3CmtsSpectrumAnalysisMeasTable::DocsIf3CmtsSpectrumAnalysisMeasEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmtsSpectrumAnalysisMeasAmplitudeData")
    {
        docsif3cmtsspectrumanalysismeasamplitudedata.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmtsSpectrumAnalysisMeasTimeInterval")
    {
        docsif3cmtsspectrumanalysismeastimeinterval.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmtsSpectrumAnalysisMeasRowStatus")
    {
        docsif3cmtsspectrumanalysismeasrowstatus.yfilter = yfilter;
    }
}

bool DOCSIF3MIB::DocsIf3CmtsSpectrumAnalysisMeasTable::DocsIf3CmtsSpectrumAnalysisMeasEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "docsIf3CmtsSpectrumAnalysisMeasAmplitudeData" || name == "docsIf3CmtsSpectrumAnalysisMeasTimeInterval" || name == "docsIf3CmtsSpectrumAnalysisMeasRowStatus")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3CmDpvStatsTable::DocsIf3CmDpvStatsTable()
    :
    docsif3cmdpvstatsentry(this, {"ifindex", "docsif3cmdpvstatsgrpid"})
{

    yang_name = "docsIf3CmDpvStatsTable"; yang_parent_name = "DOCS-IF3-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3CmDpvStatsTable::~DocsIf3CmDpvStatsTable()
{
}

bool DOCSIF3MIB::DocsIf3CmDpvStatsTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsif3cmdpvstatsentry.len(); index++)
    {
        if(docsif3cmdpvstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIF3MIB::DocsIf3CmDpvStatsTable::has_operation() const
{
    for (std::size_t index=0; index<docsif3cmdpvstatsentry.len(); index++)
    {
        if(docsif3cmdpvstatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIF3MIB::DocsIf3CmDpvStatsTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3CmDpvStatsTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3CmDpvStatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3CmDpvStatsTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3CmDpvStatsTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIf3CmDpvStatsEntry")
    {
        auto c = std::make_shared<DOCSIF3MIB::DocsIf3CmDpvStatsTable::DocsIf3CmDpvStatsEntry>();
        c->parent = this;
        docsif3cmdpvstatsentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3CmDpvStatsTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsif3cmdpvstatsentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSIF3MIB::DocsIf3CmDpvStatsTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIF3MIB::DocsIf3CmDpvStatsTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIF3MIB::DocsIf3CmDpvStatsTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIf3CmDpvStatsEntry")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3CmDpvStatsTable::DocsIf3CmDpvStatsEntry::DocsIf3CmDpvStatsEntry()
    :
    ifindex{YType::str, "ifIndex"},
    docsif3cmdpvstatsgrpid{YType::uint32, "docsIf3CmDpvStatsGrpId"},
    docsif3cmdpvstatslastmeaslatency{YType::uint32, "docsIf3CmDpvStatsLastMeasLatency"},
    docsif3cmdpvstatslastmeastime{YType::str, "docsIf3CmDpvStatsLastMeasTime"},
    docsif3cmdpvstatsminlatency{YType::uint32, "docsIf3CmDpvStatsMinLatency"},
    docsif3cmdpvstatsmaxlatency{YType::uint32, "docsIf3CmDpvStatsMaxLatency"},
    docsif3cmdpvstatsavglatency{YType::uint32, "docsIf3CmDpvStatsAvgLatency"},
    docsif3cmdpvstatsnummeas{YType::uint32, "docsIf3CmDpvStatsNumMeas"},
    docsif3cmdpvstatslastcleartime{YType::str, "docsIf3CmDpvStatsLastClearTime"}
{

    yang_name = "docsIf3CmDpvStatsEntry"; yang_parent_name = "docsIf3CmDpvStatsTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3CmDpvStatsTable::DocsIf3CmDpvStatsEntry::~DocsIf3CmDpvStatsEntry()
{
}

bool DOCSIF3MIB::DocsIf3CmDpvStatsTable::DocsIf3CmDpvStatsEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| docsif3cmdpvstatsgrpid.is_set
	|| docsif3cmdpvstatslastmeaslatency.is_set
	|| docsif3cmdpvstatslastmeastime.is_set
	|| docsif3cmdpvstatsminlatency.is_set
	|| docsif3cmdpvstatsmaxlatency.is_set
	|| docsif3cmdpvstatsavglatency.is_set
	|| docsif3cmdpvstatsnummeas.is_set
	|| docsif3cmdpvstatslastcleartime.is_set;
}

bool DOCSIF3MIB::DocsIf3CmDpvStatsTable::DocsIf3CmDpvStatsEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(docsif3cmdpvstatsgrpid.yfilter)
	|| ydk::is_set(docsif3cmdpvstatslastmeaslatency.yfilter)
	|| ydk::is_set(docsif3cmdpvstatslastmeastime.yfilter)
	|| ydk::is_set(docsif3cmdpvstatsminlatency.yfilter)
	|| ydk::is_set(docsif3cmdpvstatsmaxlatency.yfilter)
	|| ydk::is_set(docsif3cmdpvstatsavglatency.yfilter)
	|| ydk::is_set(docsif3cmdpvstatsnummeas.yfilter)
	|| ydk::is_set(docsif3cmdpvstatslastcleartime.yfilter);
}

std::string DOCSIF3MIB::DocsIf3CmDpvStatsTable::DocsIf3CmDpvStatsEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/docsIf3CmDpvStatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3CmDpvStatsTable::DocsIf3CmDpvStatsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3CmDpvStatsEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    ADD_KEY_TOKEN(docsif3cmdpvstatsgrpid, "docsIf3CmDpvStatsGrpId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3CmDpvStatsTable::DocsIf3CmDpvStatsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (docsif3cmdpvstatsgrpid.is_set || is_set(docsif3cmdpvstatsgrpid.yfilter)) leaf_name_data.push_back(docsif3cmdpvstatsgrpid.get_name_leafdata());
    if (docsif3cmdpvstatslastmeaslatency.is_set || is_set(docsif3cmdpvstatslastmeaslatency.yfilter)) leaf_name_data.push_back(docsif3cmdpvstatslastmeaslatency.get_name_leafdata());
    if (docsif3cmdpvstatslastmeastime.is_set || is_set(docsif3cmdpvstatslastmeastime.yfilter)) leaf_name_data.push_back(docsif3cmdpvstatslastmeastime.get_name_leafdata());
    if (docsif3cmdpvstatsminlatency.is_set || is_set(docsif3cmdpvstatsminlatency.yfilter)) leaf_name_data.push_back(docsif3cmdpvstatsminlatency.get_name_leafdata());
    if (docsif3cmdpvstatsmaxlatency.is_set || is_set(docsif3cmdpvstatsmaxlatency.yfilter)) leaf_name_data.push_back(docsif3cmdpvstatsmaxlatency.get_name_leafdata());
    if (docsif3cmdpvstatsavglatency.is_set || is_set(docsif3cmdpvstatsavglatency.yfilter)) leaf_name_data.push_back(docsif3cmdpvstatsavglatency.get_name_leafdata());
    if (docsif3cmdpvstatsnummeas.is_set || is_set(docsif3cmdpvstatsnummeas.yfilter)) leaf_name_data.push_back(docsif3cmdpvstatsnummeas.get_name_leafdata());
    if (docsif3cmdpvstatslastcleartime.is_set || is_set(docsif3cmdpvstatslastcleartime.yfilter)) leaf_name_data.push_back(docsif3cmdpvstatslastcleartime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3CmDpvStatsTable::DocsIf3CmDpvStatsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3CmDpvStatsTable::DocsIf3CmDpvStatsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSIF3MIB::DocsIf3CmDpvStatsTable::DocsIf3CmDpvStatsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmDpvStatsGrpId")
    {
        docsif3cmdpvstatsgrpid = value;
        docsif3cmdpvstatsgrpid.value_namespace = name_space;
        docsif3cmdpvstatsgrpid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmDpvStatsLastMeasLatency")
    {
        docsif3cmdpvstatslastmeaslatency = value;
        docsif3cmdpvstatslastmeaslatency.value_namespace = name_space;
        docsif3cmdpvstatslastmeaslatency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmDpvStatsLastMeasTime")
    {
        docsif3cmdpvstatslastmeastime = value;
        docsif3cmdpvstatslastmeastime.value_namespace = name_space;
        docsif3cmdpvstatslastmeastime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmDpvStatsMinLatency")
    {
        docsif3cmdpvstatsminlatency = value;
        docsif3cmdpvstatsminlatency.value_namespace = name_space;
        docsif3cmdpvstatsminlatency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmDpvStatsMaxLatency")
    {
        docsif3cmdpvstatsmaxlatency = value;
        docsif3cmdpvstatsmaxlatency.value_namespace = name_space;
        docsif3cmdpvstatsmaxlatency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmDpvStatsAvgLatency")
    {
        docsif3cmdpvstatsavglatency = value;
        docsif3cmdpvstatsavglatency.value_namespace = name_space;
        docsif3cmdpvstatsavglatency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmDpvStatsNumMeas")
    {
        docsif3cmdpvstatsnummeas = value;
        docsif3cmdpvstatsnummeas.value_namespace = name_space;
        docsif3cmdpvstatsnummeas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmDpvStatsLastClearTime")
    {
        docsif3cmdpvstatslastcleartime = value;
        docsif3cmdpvstatslastcleartime.value_namespace = name_space;
        docsif3cmdpvstatslastcleartime.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIF3MIB::DocsIf3CmDpvStatsTable::DocsIf3CmDpvStatsEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmDpvStatsGrpId")
    {
        docsif3cmdpvstatsgrpid.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmDpvStatsLastMeasLatency")
    {
        docsif3cmdpvstatslastmeaslatency.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmDpvStatsLastMeasTime")
    {
        docsif3cmdpvstatslastmeastime.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmDpvStatsMinLatency")
    {
        docsif3cmdpvstatsminlatency.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmDpvStatsMaxLatency")
    {
        docsif3cmdpvstatsmaxlatency.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmDpvStatsAvgLatency")
    {
        docsif3cmdpvstatsavglatency.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmDpvStatsNumMeas")
    {
        docsif3cmdpvstatsnummeas.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmDpvStatsLastClearTime")
    {
        docsif3cmdpvstatslastcleartime.yfilter = yfilter;
    }
}

bool DOCSIF3MIB::DocsIf3CmDpvStatsTable::DocsIf3CmDpvStatsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "docsIf3CmDpvStatsGrpId" || name == "docsIf3CmDpvStatsLastMeasLatency" || name == "docsIf3CmDpvStatsLastMeasTime" || name == "docsIf3CmDpvStatsMinLatency" || name == "docsIf3CmDpvStatsMaxLatency" || name == "docsIf3CmDpvStatsAvgLatency" || name == "docsIf3CmDpvStatsNumMeas" || name == "docsIf3CmDpvStatsLastClearTime")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3CmEventCtrlTable::DocsIf3CmEventCtrlTable()
    :
    docsif3cmeventctrlentry(this, {"docsif3cmeventctrleventid"})
{

    yang_name = "docsIf3CmEventCtrlTable"; yang_parent_name = "DOCS-IF3-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3CmEventCtrlTable::~DocsIf3CmEventCtrlTable()
{
}

bool DOCSIF3MIB::DocsIf3CmEventCtrlTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsif3cmeventctrlentry.len(); index++)
    {
        if(docsif3cmeventctrlentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIF3MIB::DocsIf3CmEventCtrlTable::has_operation() const
{
    for (std::size_t index=0; index<docsif3cmeventctrlentry.len(); index++)
    {
        if(docsif3cmeventctrlentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIF3MIB::DocsIf3CmEventCtrlTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3CmEventCtrlTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3CmEventCtrlTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3CmEventCtrlTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3CmEventCtrlTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIf3CmEventCtrlEntry")
    {
        auto c = std::make_shared<DOCSIF3MIB::DocsIf3CmEventCtrlTable::DocsIf3CmEventCtrlEntry>();
        c->parent = this;
        docsif3cmeventctrlentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3CmEventCtrlTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsif3cmeventctrlentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSIF3MIB::DocsIf3CmEventCtrlTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIF3MIB::DocsIf3CmEventCtrlTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIF3MIB::DocsIf3CmEventCtrlTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIf3CmEventCtrlEntry")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3CmEventCtrlTable::DocsIf3CmEventCtrlEntry::DocsIf3CmEventCtrlEntry()
    :
    docsif3cmeventctrleventid{YType::uint32, "docsIf3CmEventCtrlEventId"},
    docsif3cmeventctrlstatus{YType::enumeration, "docsIf3CmEventCtrlStatus"}
{

    yang_name = "docsIf3CmEventCtrlEntry"; yang_parent_name = "docsIf3CmEventCtrlTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3CmEventCtrlTable::DocsIf3CmEventCtrlEntry::~DocsIf3CmEventCtrlEntry()
{
}

bool DOCSIF3MIB::DocsIf3CmEventCtrlTable::DocsIf3CmEventCtrlEntry::has_data() const
{
    if (is_presence_container) return true;
    return docsif3cmeventctrleventid.is_set
	|| docsif3cmeventctrlstatus.is_set;
}

bool DOCSIF3MIB::DocsIf3CmEventCtrlTable::DocsIf3CmEventCtrlEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(docsif3cmeventctrleventid.yfilter)
	|| ydk::is_set(docsif3cmeventctrlstatus.yfilter);
}

std::string DOCSIF3MIB::DocsIf3CmEventCtrlTable::DocsIf3CmEventCtrlEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/docsIf3CmEventCtrlTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3CmEventCtrlTable::DocsIf3CmEventCtrlEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3CmEventCtrlEntry";
    ADD_KEY_TOKEN(docsif3cmeventctrleventid, "docsIf3CmEventCtrlEventId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3CmEventCtrlTable::DocsIf3CmEventCtrlEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (docsif3cmeventctrleventid.is_set || is_set(docsif3cmeventctrleventid.yfilter)) leaf_name_data.push_back(docsif3cmeventctrleventid.get_name_leafdata());
    if (docsif3cmeventctrlstatus.is_set || is_set(docsif3cmeventctrlstatus.yfilter)) leaf_name_data.push_back(docsif3cmeventctrlstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3CmEventCtrlTable::DocsIf3CmEventCtrlEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3CmEventCtrlTable::DocsIf3CmEventCtrlEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSIF3MIB::DocsIf3CmEventCtrlTable::DocsIf3CmEventCtrlEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "docsIf3CmEventCtrlEventId")
    {
        docsif3cmeventctrleventid = value;
        docsif3cmeventctrleventid.value_namespace = name_space;
        docsif3cmeventctrleventid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmEventCtrlStatus")
    {
        docsif3cmeventctrlstatus = value;
        docsif3cmeventctrlstatus.value_namespace = name_space;
        docsif3cmeventctrlstatus.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIF3MIB::DocsIf3CmEventCtrlTable::DocsIf3CmEventCtrlEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "docsIf3CmEventCtrlEventId")
    {
        docsif3cmeventctrleventid.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmEventCtrlStatus")
    {
        docsif3cmeventctrlstatus.yfilter = yfilter;
    }
}

bool DOCSIF3MIB::DocsIf3CmEventCtrlTable::DocsIf3CmEventCtrlEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIf3CmEventCtrlEventId" || name == "docsIf3CmEventCtrlStatus")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3CmtsEventCtrlTable::DocsIf3CmtsEventCtrlTable()
    :
    docsif3cmtseventctrlentry(this, {"docsif3cmtseventctrleventid"})
{

    yang_name = "docsIf3CmtsEventCtrlTable"; yang_parent_name = "DOCS-IF3-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3CmtsEventCtrlTable::~DocsIf3CmtsEventCtrlTable()
{
}

bool DOCSIF3MIB::DocsIf3CmtsEventCtrlTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsif3cmtseventctrlentry.len(); index++)
    {
        if(docsif3cmtseventctrlentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIF3MIB::DocsIf3CmtsEventCtrlTable::has_operation() const
{
    for (std::size_t index=0; index<docsif3cmtseventctrlentry.len(); index++)
    {
        if(docsif3cmtseventctrlentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIF3MIB::DocsIf3CmtsEventCtrlTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3CmtsEventCtrlTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3CmtsEventCtrlTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3CmtsEventCtrlTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3CmtsEventCtrlTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIf3CmtsEventCtrlEntry")
    {
        auto c = std::make_shared<DOCSIF3MIB::DocsIf3CmtsEventCtrlTable::DocsIf3CmtsEventCtrlEntry>();
        c->parent = this;
        docsif3cmtseventctrlentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3CmtsEventCtrlTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsif3cmtseventctrlentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSIF3MIB::DocsIf3CmtsEventCtrlTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIF3MIB::DocsIf3CmtsEventCtrlTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIF3MIB::DocsIf3CmtsEventCtrlTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIf3CmtsEventCtrlEntry")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3CmtsEventCtrlTable::DocsIf3CmtsEventCtrlEntry::DocsIf3CmtsEventCtrlEntry()
    :
    docsif3cmtseventctrleventid{YType::uint32, "docsIf3CmtsEventCtrlEventId"},
    docsif3cmtseventctrlstatus{YType::enumeration, "docsIf3CmtsEventCtrlStatus"}
{

    yang_name = "docsIf3CmtsEventCtrlEntry"; yang_parent_name = "docsIf3CmtsEventCtrlTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3CmtsEventCtrlTable::DocsIf3CmtsEventCtrlEntry::~DocsIf3CmtsEventCtrlEntry()
{
}

bool DOCSIF3MIB::DocsIf3CmtsEventCtrlTable::DocsIf3CmtsEventCtrlEntry::has_data() const
{
    if (is_presence_container) return true;
    return docsif3cmtseventctrleventid.is_set
	|| docsif3cmtseventctrlstatus.is_set;
}

bool DOCSIF3MIB::DocsIf3CmtsEventCtrlTable::DocsIf3CmtsEventCtrlEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(docsif3cmtseventctrleventid.yfilter)
	|| ydk::is_set(docsif3cmtseventctrlstatus.yfilter);
}

std::string DOCSIF3MIB::DocsIf3CmtsEventCtrlTable::DocsIf3CmtsEventCtrlEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/docsIf3CmtsEventCtrlTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3CmtsEventCtrlTable::DocsIf3CmtsEventCtrlEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3CmtsEventCtrlEntry";
    ADD_KEY_TOKEN(docsif3cmtseventctrleventid, "docsIf3CmtsEventCtrlEventId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3CmtsEventCtrlTable::DocsIf3CmtsEventCtrlEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (docsif3cmtseventctrleventid.is_set || is_set(docsif3cmtseventctrleventid.yfilter)) leaf_name_data.push_back(docsif3cmtseventctrleventid.get_name_leafdata());
    if (docsif3cmtseventctrlstatus.is_set || is_set(docsif3cmtseventctrlstatus.yfilter)) leaf_name_data.push_back(docsif3cmtseventctrlstatus.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3CmtsEventCtrlTable::DocsIf3CmtsEventCtrlEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3CmtsEventCtrlTable::DocsIf3CmtsEventCtrlEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSIF3MIB::DocsIf3CmtsEventCtrlTable::DocsIf3CmtsEventCtrlEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "docsIf3CmtsEventCtrlEventId")
    {
        docsif3cmtseventctrleventid = value;
        docsif3cmtseventctrleventid.value_namespace = name_space;
        docsif3cmtseventctrleventid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmtsEventCtrlStatus")
    {
        docsif3cmtseventctrlstatus = value;
        docsif3cmtseventctrlstatus.value_namespace = name_space;
        docsif3cmtseventctrlstatus.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIF3MIB::DocsIf3CmtsEventCtrlTable::DocsIf3CmtsEventCtrlEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "docsIf3CmtsEventCtrlEventId")
    {
        docsif3cmtseventctrleventid.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmtsEventCtrlStatus")
    {
        docsif3cmtseventctrlstatus.yfilter = yfilter;
    }
}

bool DOCSIF3MIB::DocsIf3CmtsEventCtrlTable::DocsIf3CmtsEventCtrlEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIf3CmtsEventCtrlEventId" || name == "docsIf3CmtsEventCtrlStatus")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3CmMdCfgTable::DocsIf3CmMdCfgTable()
    :
    docsif3cmmdcfgentry(this, {"ifindex"})
{

    yang_name = "docsIf3CmMdCfgTable"; yang_parent_name = "DOCS-IF3-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3CmMdCfgTable::~DocsIf3CmMdCfgTable()
{
}

bool DOCSIF3MIB::DocsIf3CmMdCfgTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsif3cmmdcfgentry.len(); index++)
    {
        if(docsif3cmmdcfgentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIF3MIB::DocsIf3CmMdCfgTable::has_operation() const
{
    for (std::size_t index=0; index<docsif3cmmdcfgentry.len(); index++)
    {
        if(docsif3cmmdcfgentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIF3MIB::DocsIf3CmMdCfgTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3CmMdCfgTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3CmMdCfgTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3CmMdCfgTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3CmMdCfgTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIf3CmMdCfgEntry")
    {
        auto c = std::make_shared<DOCSIF3MIB::DocsIf3CmMdCfgTable::DocsIf3CmMdCfgEntry>();
        c->parent = this;
        docsif3cmmdcfgentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3CmMdCfgTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsif3cmmdcfgentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSIF3MIB::DocsIf3CmMdCfgTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIF3MIB::DocsIf3CmMdCfgTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIF3MIB::DocsIf3CmMdCfgTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIf3CmMdCfgEntry")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3CmMdCfgTable::DocsIf3CmMdCfgEntry::DocsIf3CmMdCfgEntry()
    :
    ifindex{YType::str, "ifIndex"},
    docsif3cmmdcfgipprovmode{YType::enumeration, "docsIf3CmMdCfgIpProvMode"},
    docsif3cmmdcfgipprovmoderesetonchange{YType::boolean, "docsIf3CmMdCfgIpProvModeResetOnChange"},
    docsif3cmmdcfgipprovmoderesetonchangeholdofftimer{YType::uint32, "docsIf3CmMdCfgIpProvModeResetOnChangeHoldOffTimer"},
    docsif3cmmdcfgipprovmodestoragetype{YType::enumeration, "docsIf3CmMdCfgIpProvModeStorageType"}
{

    yang_name = "docsIf3CmMdCfgEntry"; yang_parent_name = "docsIf3CmMdCfgTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3CmMdCfgTable::DocsIf3CmMdCfgEntry::~DocsIf3CmMdCfgEntry()
{
}

bool DOCSIF3MIB::DocsIf3CmMdCfgTable::DocsIf3CmMdCfgEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| docsif3cmmdcfgipprovmode.is_set
	|| docsif3cmmdcfgipprovmoderesetonchange.is_set
	|| docsif3cmmdcfgipprovmoderesetonchangeholdofftimer.is_set
	|| docsif3cmmdcfgipprovmodestoragetype.is_set;
}

bool DOCSIF3MIB::DocsIf3CmMdCfgTable::DocsIf3CmMdCfgEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(docsif3cmmdcfgipprovmode.yfilter)
	|| ydk::is_set(docsif3cmmdcfgipprovmoderesetonchange.yfilter)
	|| ydk::is_set(docsif3cmmdcfgipprovmoderesetonchangeholdofftimer.yfilter)
	|| ydk::is_set(docsif3cmmdcfgipprovmodestoragetype.yfilter);
}

std::string DOCSIF3MIB::DocsIf3CmMdCfgTable::DocsIf3CmMdCfgEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/docsIf3CmMdCfgTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3CmMdCfgTable::DocsIf3CmMdCfgEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3CmMdCfgEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3CmMdCfgTable::DocsIf3CmMdCfgEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (docsif3cmmdcfgipprovmode.is_set || is_set(docsif3cmmdcfgipprovmode.yfilter)) leaf_name_data.push_back(docsif3cmmdcfgipprovmode.get_name_leafdata());
    if (docsif3cmmdcfgipprovmoderesetonchange.is_set || is_set(docsif3cmmdcfgipprovmoderesetonchange.yfilter)) leaf_name_data.push_back(docsif3cmmdcfgipprovmoderesetonchange.get_name_leafdata());
    if (docsif3cmmdcfgipprovmoderesetonchangeholdofftimer.is_set || is_set(docsif3cmmdcfgipprovmoderesetonchangeholdofftimer.yfilter)) leaf_name_data.push_back(docsif3cmmdcfgipprovmoderesetonchangeholdofftimer.get_name_leafdata());
    if (docsif3cmmdcfgipprovmodestoragetype.is_set || is_set(docsif3cmmdcfgipprovmodestoragetype.yfilter)) leaf_name_data.push_back(docsif3cmmdcfgipprovmodestoragetype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3CmMdCfgTable::DocsIf3CmMdCfgEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3CmMdCfgTable::DocsIf3CmMdCfgEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSIF3MIB::DocsIf3CmMdCfgTable::DocsIf3CmMdCfgEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmMdCfgIpProvMode")
    {
        docsif3cmmdcfgipprovmode = value;
        docsif3cmmdcfgipprovmode.value_namespace = name_space;
        docsif3cmmdcfgipprovmode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmMdCfgIpProvModeResetOnChange")
    {
        docsif3cmmdcfgipprovmoderesetonchange = value;
        docsif3cmmdcfgipprovmoderesetonchange.value_namespace = name_space;
        docsif3cmmdcfgipprovmoderesetonchange.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmMdCfgIpProvModeResetOnChangeHoldOffTimer")
    {
        docsif3cmmdcfgipprovmoderesetonchangeholdofftimer = value;
        docsif3cmmdcfgipprovmoderesetonchangeholdofftimer.value_namespace = name_space;
        docsif3cmmdcfgipprovmoderesetonchangeholdofftimer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmMdCfgIpProvModeStorageType")
    {
        docsif3cmmdcfgipprovmodestoragetype = value;
        docsif3cmmdcfgipprovmodestoragetype.value_namespace = name_space;
        docsif3cmmdcfgipprovmodestoragetype.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIF3MIB::DocsIf3CmMdCfgTable::DocsIf3CmMdCfgEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmMdCfgIpProvMode")
    {
        docsif3cmmdcfgipprovmode.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmMdCfgIpProvModeResetOnChange")
    {
        docsif3cmmdcfgipprovmoderesetonchange.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmMdCfgIpProvModeResetOnChangeHoldOffTimer")
    {
        docsif3cmmdcfgipprovmoderesetonchangeholdofftimer.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmMdCfgIpProvModeStorageType")
    {
        docsif3cmmdcfgipprovmodestoragetype.yfilter = yfilter;
    }
}

bool DOCSIF3MIB::DocsIf3CmMdCfgTable::DocsIf3CmMdCfgEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "docsIf3CmMdCfgIpProvMode" || name == "docsIf3CmMdCfgIpProvModeResetOnChange" || name == "docsIf3CmMdCfgIpProvModeResetOnChangeHoldOffTimer" || name == "docsIf3CmMdCfgIpProvModeStorageType")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3CmEnergyMgt1x1CfgTable::DocsIf3CmEnergyMgt1x1CfgTable()
    :
    docsif3cmenergymgt1x1cfgentry(this, {"docsif3cmenergymgt1x1cfgdirection"})
{

    yang_name = "docsIf3CmEnergyMgt1x1CfgTable"; yang_parent_name = "DOCS-IF3-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3CmEnergyMgt1x1CfgTable::~DocsIf3CmEnergyMgt1x1CfgTable()
{
}

bool DOCSIF3MIB::DocsIf3CmEnergyMgt1x1CfgTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsif3cmenergymgt1x1cfgentry.len(); index++)
    {
        if(docsif3cmenergymgt1x1cfgentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIF3MIB::DocsIf3CmEnergyMgt1x1CfgTable::has_operation() const
{
    for (std::size_t index=0; index<docsif3cmenergymgt1x1cfgentry.len(); index++)
    {
        if(docsif3cmenergymgt1x1cfgentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIF3MIB::DocsIf3CmEnergyMgt1x1CfgTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3CmEnergyMgt1x1CfgTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3CmEnergyMgt1x1CfgTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3CmEnergyMgt1x1CfgTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3CmEnergyMgt1x1CfgTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIf3CmEnergyMgt1x1CfgEntry")
    {
        auto c = std::make_shared<DOCSIF3MIB::DocsIf3CmEnergyMgt1x1CfgTable::DocsIf3CmEnergyMgt1x1CfgEntry>();
        c->parent = this;
        docsif3cmenergymgt1x1cfgentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3CmEnergyMgt1x1CfgTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsif3cmenergymgt1x1cfgentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSIF3MIB::DocsIf3CmEnergyMgt1x1CfgTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIF3MIB::DocsIf3CmEnergyMgt1x1CfgTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIF3MIB::DocsIf3CmEnergyMgt1x1CfgTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIf3CmEnergyMgt1x1CfgEntry")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3CmEnergyMgt1x1CfgTable::DocsIf3CmEnergyMgt1x1CfgEntry::DocsIf3CmEnergyMgt1x1CfgEntry()
    :
    docsif3cmenergymgt1x1cfgdirection{YType::enumeration, "docsIf3CmEnergyMgt1x1CfgDirection"},
    docsif3cmenergymgt1x1cfgentrybitratethrshld{YType::uint32, "docsIf3CmEnergyMgt1x1CfgEntryBitrateThrshld"},
    docsif3cmenergymgt1x1cfgentrytimethrshld{YType::uint32, "docsIf3CmEnergyMgt1x1CfgEntryTimeThrshld"},
    docsif3cmenergymgt1x1cfgexitbitratethrshld{YType::uint32, "docsIf3CmEnergyMgt1x1CfgExitBitrateThrshld"},
    docsif3cmenergymgt1x1cfgexittimethrshld{YType::uint32, "docsIf3CmEnergyMgt1x1CfgExitTimeThrshld"}
{

    yang_name = "docsIf3CmEnergyMgt1x1CfgEntry"; yang_parent_name = "docsIf3CmEnergyMgt1x1CfgTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3CmEnergyMgt1x1CfgTable::DocsIf3CmEnergyMgt1x1CfgEntry::~DocsIf3CmEnergyMgt1x1CfgEntry()
{
}

bool DOCSIF3MIB::DocsIf3CmEnergyMgt1x1CfgTable::DocsIf3CmEnergyMgt1x1CfgEntry::has_data() const
{
    if (is_presence_container) return true;
    return docsif3cmenergymgt1x1cfgdirection.is_set
	|| docsif3cmenergymgt1x1cfgentrybitratethrshld.is_set
	|| docsif3cmenergymgt1x1cfgentrytimethrshld.is_set
	|| docsif3cmenergymgt1x1cfgexitbitratethrshld.is_set
	|| docsif3cmenergymgt1x1cfgexittimethrshld.is_set;
}

bool DOCSIF3MIB::DocsIf3CmEnergyMgt1x1CfgTable::DocsIf3CmEnergyMgt1x1CfgEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(docsif3cmenergymgt1x1cfgdirection.yfilter)
	|| ydk::is_set(docsif3cmenergymgt1x1cfgentrybitratethrshld.yfilter)
	|| ydk::is_set(docsif3cmenergymgt1x1cfgentrytimethrshld.yfilter)
	|| ydk::is_set(docsif3cmenergymgt1x1cfgexitbitratethrshld.yfilter)
	|| ydk::is_set(docsif3cmenergymgt1x1cfgexittimethrshld.yfilter);
}

std::string DOCSIF3MIB::DocsIf3CmEnergyMgt1x1CfgTable::DocsIf3CmEnergyMgt1x1CfgEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/docsIf3CmEnergyMgt1x1CfgTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3CmEnergyMgt1x1CfgTable::DocsIf3CmEnergyMgt1x1CfgEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3CmEnergyMgt1x1CfgEntry";
    ADD_KEY_TOKEN(docsif3cmenergymgt1x1cfgdirection, "docsIf3CmEnergyMgt1x1CfgDirection");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3CmEnergyMgt1x1CfgTable::DocsIf3CmEnergyMgt1x1CfgEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (docsif3cmenergymgt1x1cfgdirection.is_set || is_set(docsif3cmenergymgt1x1cfgdirection.yfilter)) leaf_name_data.push_back(docsif3cmenergymgt1x1cfgdirection.get_name_leafdata());
    if (docsif3cmenergymgt1x1cfgentrybitratethrshld.is_set || is_set(docsif3cmenergymgt1x1cfgentrybitratethrshld.yfilter)) leaf_name_data.push_back(docsif3cmenergymgt1x1cfgentrybitratethrshld.get_name_leafdata());
    if (docsif3cmenergymgt1x1cfgentrytimethrshld.is_set || is_set(docsif3cmenergymgt1x1cfgentrytimethrshld.yfilter)) leaf_name_data.push_back(docsif3cmenergymgt1x1cfgentrytimethrshld.get_name_leafdata());
    if (docsif3cmenergymgt1x1cfgexitbitratethrshld.is_set || is_set(docsif3cmenergymgt1x1cfgexitbitratethrshld.yfilter)) leaf_name_data.push_back(docsif3cmenergymgt1x1cfgexitbitratethrshld.get_name_leafdata());
    if (docsif3cmenergymgt1x1cfgexittimethrshld.is_set || is_set(docsif3cmenergymgt1x1cfgexittimethrshld.yfilter)) leaf_name_data.push_back(docsif3cmenergymgt1x1cfgexittimethrshld.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3CmEnergyMgt1x1CfgTable::DocsIf3CmEnergyMgt1x1CfgEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3CmEnergyMgt1x1CfgTable::DocsIf3CmEnergyMgt1x1CfgEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSIF3MIB::DocsIf3CmEnergyMgt1x1CfgTable::DocsIf3CmEnergyMgt1x1CfgEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "docsIf3CmEnergyMgt1x1CfgDirection")
    {
        docsif3cmenergymgt1x1cfgdirection = value;
        docsif3cmenergymgt1x1cfgdirection.value_namespace = name_space;
        docsif3cmenergymgt1x1cfgdirection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmEnergyMgt1x1CfgEntryBitrateThrshld")
    {
        docsif3cmenergymgt1x1cfgentrybitratethrshld = value;
        docsif3cmenergymgt1x1cfgentrybitratethrshld.value_namespace = name_space;
        docsif3cmenergymgt1x1cfgentrybitratethrshld.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmEnergyMgt1x1CfgEntryTimeThrshld")
    {
        docsif3cmenergymgt1x1cfgentrytimethrshld = value;
        docsif3cmenergymgt1x1cfgentrytimethrshld.value_namespace = name_space;
        docsif3cmenergymgt1x1cfgentrytimethrshld.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmEnergyMgt1x1CfgExitBitrateThrshld")
    {
        docsif3cmenergymgt1x1cfgexitbitratethrshld = value;
        docsif3cmenergymgt1x1cfgexitbitratethrshld.value_namespace = name_space;
        docsif3cmenergymgt1x1cfgexitbitratethrshld.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmEnergyMgt1x1CfgExitTimeThrshld")
    {
        docsif3cmenergymgt1x1cfgexittimethrshld = value;
        docsif3cmenergymgt1x1cfgexittimethrshld.value_namespace = name_space;
        docsif3cmenergymgt1x1cfgexittimethrshld.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIF3MIB::DocsIf3CmEnergyMgt1x1CfgTable::DocsIf3CmEnergyMgt1x1CfgEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "docsIf3CmEnergyMgt1x1CfgDirection")
    {
        docsif3cmenergymgt1x1cfgdirection.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmEnergyMgt1x1CfgEntryBitrateThrshld")
    {
        docsif3cmenergymgt1x1cfgentrybitratethrshld.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmEnergyMgt1x1CfgEntryTimeThrshld")
    {
        docsif3cmenergymgt1x1cfgentrytimethrshld.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmEnergyMgt1x1CfgExitBitrateThrshld")
    {
        docsif3cmenergymgt1x1cfgexitbitratethrshld.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmEnergyMgt1x1CfgExitTimeThrshld")
    {
        docsif3cmenergymgt1x1cfgexittimethrshld.yfilter = yfilter;
    }
}

bool DOCSIF3MIB::DocsIf3CmEnergyMgt1x1CfgTable::DocsIf3CmEnergyMgt1x1CfgEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIf3CmEnergyMgt1x1CfgDirection" || name == "docsIf3CmEnergyMgt1x1CfgEntryBitrateThrshld" || name == "docsIf3CmEnergyMgt1x1CfgEntryTimeThrshld" || name == "docsIf3CmEnergyMgt1x1CfgExitBitrateThrshld" || name == "docsIf3CmEnergyMgt1x1CfgExitTimeThrshld")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3CmSpectrumAnalysisMeasTable::DocsIf3CmSpectrumAnalysisMeasTable()
    :
    docsif3cmspectrumanalysismeasentry(this, {"docsif3cmspectrumanalysismeasfrequency"})
{

    yang_name = "docsIf3CmSpectrumAnalysisMeasTable"; yang_parent_name = "DOCS-IF3-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3CmSpectrumAnalysisMeasTable::~DocsIf3CmSpectrumAnalysisMeasTable()
{
}

bool DOCSIF3MIB::DocsIf3CmSpectrumAnalysisMeasTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsif3cmspectrumanalysismeasentry.len(); index++)
    {
        if(docsif3cmspectrumanalysismeasentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIF3MIB::DocsIf3CmSpectrumAnalysisMeasTable::has_operation() const
{
    for (std::size_t index=0; index<docsif3cmspectrumanalysismeasentry.len(); index++)
    {
        if(docsif3cmspectrumanalysismeasentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIF3MIB::DocsIf3CmSpectrumAnalysisMeasTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3CmSpectrumAnalysisMeasTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3CmSpectrumAnalysisMeasTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3CmSpectrumAnalysisMeasTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3CmSpectrumAnalysisMeasTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIf3CmSpectrumAnalysisMeasEntry")
    {
        auto c = std::make_shared<DOCSIF3MIB::DocsIf3CmSpectrumAnalysisMeasTable::DocsIf3CmSpectrumAnalysisMeasEntry>();
        c->parent = this;
        docsif3cmspectrumanalysismeasentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3CmSpectrumAnalysisMeasTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsif3cmspectrumanalysismeasentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSIF3MIB::DocsIf3CmSpectrumAnalysisMeasTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIF3MIB::DocsIf3CmSpectrumAnalysisMeasTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIF3MIB::DocsIf3CmSpectrumAnalysisMeasTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIf3CmSpectrumAnalysisMeasEntry")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3CmSpectrumAnalysisMeasTable::DocsIf3CmSpectrumAnalysisMeasEntry::DocsIf3CmSpectrumAnalysisMeasEntry()
    :
    docsif3cmspectrumanalysismeasfrequency{YType::int32, "docsIf3CmSpectrumAnalysisMeasFrequency"},
    docsif3cmspectrumanalysismeasamplitudedata{YType::str, "docsIf3CmSpectrumAnalysisMeasAmplitudeData"},
    docsif3cmspectrumanalysismeastotalsegmentpower{YType::int32, "docsIf3CmSpectrumAnalysisMeasTotalSegmentPower"}
{

    yang_name = "docsIf3CmSpectrumAnalysisMeasEntry"; yang_parent_name = "docsIf3CmSpectrumAnalysisMeasTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3CmSpectrumAnalysisMeasTable::DocsIf3CmSpectrumAnalysisMeasEntry::~DocsIf3CmSpectrumAnalysisMeasEntry()
{
}

bool DOCSIF3MIB::DocsIf3CmSpectrumAnalysisMeasTable::DocsIf3CmSpectrumAnalysisMeasEntry::has_data() const
{
    if (is_presence_container) return true;
    return docsif3cmspectrumanalysismeasfrequency.is_set
	|| docsif3cmspectrumanalysismeasamplitudedata.is_set
	|| docsif3cmspectrumanalysismeastotalsegmentpower.is_set;
}

bool DOCSIF3MIB::DocsIf3CmSpectrumAnalysisMeasTable::DocsIf3CmSpectrumAnalysisMeasEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(docsif3cmspectrumanalysismeasfrequency.yfilter)
	|| ydk::is_set(docsif3cmspectrumanalysismeasamplitudedata.yfilter)
	|| ydk::is_set(docsif3cmspectrumanalysismeastotalsegmentpower.yfilter);
}

std::string DOCSIF3MIB::DocsIf3CmSpectrumAnalysisMeasTable::DocsIf3CmSpectrumAnalysisMeasEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/docsIf3CmSpectrumAnalysisMeasTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3CmSpectrumAnalysisMeasTable::DocsIf3CmSpectrumAnalysisMeasEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3CmSpectrumAnalysisMeasEntry";
    ADD_KEY_TOKEN(docsif3cmspectrumanalysismeasfrequency, "docsIf3CmSpectrumAnalysisMeasFrequency");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3CmSpectrumAnalysisMeasTable::DocsIf3CmSpectrumAnalysisMeasEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (docsif3cmspectrumanalysismeasfrequency.is_set || is_set(docsif3cmspectrumanalysismeasfrequency.yfilter)) leaf_name_data.push_back(docsif3cmspectrumanalysismeasfrequency.get_name_leafdata());
    if (docsif3cmspectrumanalysismeasamplitudedata.is_set || is_set(docsif3cmspectrumanalysismeasamplitudedata.yfilter)) leaf_name_data.push_back(docsif3cmspectrumanalysismeasamplitudedata.get_name_leafdata());
    if (docsif3cmspectrumanalysismeastotalsegmentpower.is_set || is_set(docsif3cmspectrumanalysismeastotalsegmentpower.yfilter)) leaf_name_data.push_back(docsif3cmspectrumanalysismeastotalsegmentpower.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3CmSpectrumAnalysisMeasTable::DocsIf3CmSpectrumAnalysisMeasEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3CmSpectrumAnalysisMeasTable::DocsIf3CmSpectrumAnalysisMeasEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSIF3MIB::DocsIf3CmSpectrumAnalysisMeasTable::DocsIf3CmSpectrumAnalysisMeasEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "docsIf3CmSpectrumAnalysisMeasFrequency")
    {
        docsif3cmspectrumanalysismeasfrequency = value;
        docsif3cmspectrumanalysismeasfrequency.value_namespace = name_space;
        docsif3cmspectrumanalysismeasfrequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmSpectrumAnalysisMeasAmplitudeData")
    {
        docsif3cmspectrumanalysismeasamplitudedata = value;
        docsif3cmspectrumanalysismeasamplitudedata.value_namespace = name_space;
        docsif3cmspectrumanalysismeasamplitudedata.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmSpectrumAnalysisMeasTotalSegmentPower")
    {
        docsif3cmspectrumanalysismeastotalsegmentpower = value;
        docsif3cmspectrumanalysismeastotalsegmentpower.value_namespace = name_space;
        docsif3cmspectrumanalysismeastotalsegmentpower.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIF3MIB::DocsIf3CmSpectrumAnalysisMeasTable::DocsIf3CmSpectrumAnalysisMeasEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "docsIf3CmSpectrumAnalysisMeasFrequency")
    {
        docsif3cmspectrumanalysismeasfrequency.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmSpectrumAnalysisMeasAmplitudeData")
    {
        docsif3cmspectrumanalysismeasamplitudedata.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmSpectrumAnalysisMeasTotalSegmentPower")
    {
        docsif3cmspectrumanalysismeastotalsegmentpower.yfilter = yfilter;
    }
}

bool DOCSIF3MIB::DocsIf3CmSpectrumAnalysisMeasTable::DocsIf3CmSpectrumAnalysisMeasEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIf3CmSpectrumAnalysisMeasFrequency" || name == "docsIf3CmSpectrumAnalysisMeasAmplitudeData" || name == "docsIf3CmSpectrumAnalysisMeasTotalSegmentPower")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3CmtsCmEmStatsTable::DocsIf3CmtsCmEmStatsTable()
    :
    docsif3cmtscmemstatsentry(this, {"docsif3cmtscmregstatusid"})
{

    yang_name = "docsIf3CmtsCmEmStatsTable"; yang_parent_name = "DOCS-IF3-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3CmtsCmEmStatsTable::~DocsIf3CmtsCmEmStatsTable()
{
}

bool DOCSIF3MIB::DocsIf3CmtsCmEmStatsTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsif3cmtscmemstatsentry.len(); index++)
    {
        if(docsif3cmtscmemstatsentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIF3MIB::DocsIf3CmtsCmEmStatsTable::has_operation() const
{
    for (std::size_t index=0; index<docsif3cmtscmemstatsentry.len(); index++)
    {
        if(docsif3cmtscmemstatsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIF3MIB::DocsIf3CmtsCmEmStatsTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3CmtsCmEmStatsTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3CmtsCmEmStatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3CmtsCmEmStatsTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3CmtsCmEmStatsTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIf3CmtsCmEmStatsEntry")
    {
        auto c = std::make_shared<DOCSIF3MIB::DocsIf3CmtsCmEmStatsTable::DocsIf3CmtsCmEmStatsEntry>();
        c->parent = this;
        docsif3cmtscmemstatsentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3CmtsCmEmStatsTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsif3cmtscmemstatsentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSIF3MIB::DocsIf3CmtsCmEmStatsTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIF3MIB::DocsIf3CmtsCmEmStatsTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIF3MIB::DocsIf3CmtsCmEmStatsTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIf3CmtsCmEmStatsEntry")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3CmtsCmEmStatsTable::DocsIf3CmtsCmEmStatsEntry::DocsIf3CmtsCmEmStatsEntry()
    :
    docsif3cmtscmregstatusid{YType::str, "docsIf3CmtsCmRegStatusId"},
    docsif3cmtscmemstatsem1x1modetotalduration{YType::uint32, "docsIf3CmtsCmEmStatsEm1x1ModeTotalDuration"}
{

    yang_name = "docsIf3CmtsCmEmStatsEntry"; yang_parent_name = "docsIf3CmtsCmEmStatsTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3CmtsCmEmStatsTable::DocsIf3CmtsCmEmStatsEntry::~DocsIf3CmtsCmEmStatsEntry()
{
}

bool DOCSIF3MIB::DocsIf3CmtsCmEmStatsTable::DocsIf3CmtsCmEmStatsEntry::has_data() const
{
    if (is_presence_container) return true;
    return docsif3cmtscmregstatusid.is_set
	|| docsif3cmtscmemstatsem1x1modetotalduration.is_set;
}

bool DOCSIF3MIB::DocsIf3CmtsCmEmStatsTable::DocsIf3CmtsCmEmStatsEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(docsif3cmtscmregstatusid.yfilter)
	|| ydk::is_set(docsif3cmtscmemstatsem1x1modetotalduration.yfilter);
}

std::string DOCSIF3MIB::DocsIf3CmtsCmEmStatsTable::DocsIf3CmtsCmEmStatsEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/docsIf3CmtsCmEmStatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3CmtsCmEmStatsTable::DocsIf3CmtsCmEmStatsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3CmtsCmEmStatsEntry";
    ADD_KEY_TOKEN(docsif3cmtscmregstatusid, "docsIf3CmtsCmRegStatusId");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3CmtsCmEmStatsTable::DocsIf3CmtsCmEmStatsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (docsif3cmtscmregstatusid.is_set || is_set(docsif3cmtscmregstatusid.yfilter)) leaf_name_data.push_back(docsif3cmtscmregstatusid.get_name_leafdata());
    if (docsif3cmtscmemstatsem1x1modetotalduration.is_set || is_set(docsif3cmtscmemstatsem1x1modetotalduration.yfilter)) leaf_name_data.push_back(docsif3cmtscmemstatsem1x1modetotalduration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3CmtsCmEmStatsTable::DocsIf3CmtsCmEmStatsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3CmtsCmEmStatsTable::DocsIf3CmtsCmEmStatsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSIF3MIB::DocsIf3CmtsCmEmStatsTable::DocsIf3CmtsCmEmStatsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "docsIf3CmtsCmRegStatusId")
    {
        docsif3cmtscmregstatusid = value;
        docsif3cmtscmregstatusid.value_namespace = name_space;
        docsif3cmtscmregstatusid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmtsCmEmStatsEm1x1ModeTotalDuration")
    {
        docsif3cmtscmemstatsem1x1modetotalduration = value;
        docsif3cmtscmemstatsem1x1modetotalduration.value_namespace = name_space;
        docsif3cmtscmemstatsem1x1modetotalduration.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIF3MIB::DocsIf3CmtsCmEmStatsTable::DocsIf3CmtsCmEmStatsEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "docsIf3CmtsCmRegStatusId")
    {
        docsif3cmtscmregstatusid.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmtsCmEmStatsEm1x1ModeTotalDuration")
    {
        docsif3cmtscmemstatsem1x1modetotalduration.yfilter = yfilter;
    }
}

bool DOCSIF3MIB::DocsIf3CmtsCmEmStatsTable::DocsIf3CmtsCmEmStatsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIf3CmtsCmRegStatusId" || name == "docsIf3CmtsCmEmStatsEm1x1ModeTotalDuration")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3CmEm1x1StatsTable::DocsIf3CmEm1x1StatsTable()
    :
    docsif3cmem1x1statsentry(this, {"ifindex"})
{

    yang_name = "docsIf3CmEm1x1StatsTable"; yang_parent_name = "DOCS-IF3-MIB"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3CmEm1x1StatsTable::~DocsIf3CmEm1x1StatsTable()
{
}

bool DOCSIF3MIB::DocsIf3CmEm1x1StatsTable::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<docsif3cmem1x1statsentry.len(); index++)
    {
        if(docsif3cmem1x1statsentry[index]->has_data())
            return true;
    }
    return false;
}

bool DOCSIF3MIB::DocsIf3CmEm1x1StatsTable::has_operation() const
{
    for (std::size_t index=0; index<docsif3cmem1x1statsentry.len(); index++)
    {
        if(docsif3cmem1x1statsentry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string DOCSIF3MIB::DocsIf3CmEm1x1StatsTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3CmEm1x1StatsTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3CmEm1x1StatsTable";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3CmEm1x1StatsTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3CmEm1x1StatsTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "docsIf3CmEm1x1StatsEntry")
    {
        auto c = std::make_shared<DOCSIF3MIB::DocsIf3CmEm1x1StatsTable::DocsIf3CmEm1x1StatsEntry>();
        c->parent = this;
        docsif3cmem1x1statsentry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3CmEm1x1StatsTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : docsif3cmem1x1statsentry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void DOCSIF3MIB::DocsIf3CmEm1x1StatsTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void DOCSIF3MIB::DocsIf3CmEm1x1StatsTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool DOCSIF3MIB::DocsIf3CmEm1x1StatsTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "docsIf3CmEm1x1StatsEntry")
        return true;
    return false;
}

DOCSIF3MIB::DocsIf3CmEm1x1StatsTable::DocsIf3CmEm1x1StatsEntry::DocsIf3CmEm1x1StatsEntry()
    :
    ifindex{YType::str, "ifIndex"},
    docsif3cmem1x1statsnumbertimescrossedbelowusentrythrshlds{YType::uint32, "docsIf3CmEm1x1StatsNumberTimesCrossedBelowUsEntryThrshlds"},
    docsif3cmem1x1statsnumbertimescrossedbelowdsentrythrshlds{YType::uint32, "docsIf3CmEm1x1StatsNumberTimesCrossedBelowDsEntryThrshlds"},
    docsif3cmem1x1statstotalduration{YType::uint32, "docsIf3CmEm1x1StatsTotalDuration"},
    docsif3cmem1x1statstotaldurationbelowusthrshlds{YType::uint32, "docsIf3CmEm1x1StatsTotalDurationBelowUsThrshlds"},
    docsif3cmem1x1statstotaldurationbelowdsthrshlds{YType::uint32, "docsIf3CmEm1x1StatsTotalDurationBelowDsThrshlds"},
    docsif3cmem1x1statstotaldurationbelowusdsthrshlds{YType::uint32, "docsIf3CmEm1x1StatsTotalDurationBelowUsDsThrshlds"}
{

    yang_name = "docsIf3CmEm1x1StatsEntry"; yang_parent_name = "docsIf3CmEm1x1StatsTable"; is_top_level_class = false; has_list_ancestor = false; 
}

DOCSIF3MIB::DocsIf3CmEm1x1StatsTable::DocsIf3CmEm1x1StatsEntry::~DocsIf3CmEm1x1StatsEntry()
{
}

bool DOCSIF3MIB::DocsIf3CmEm1x1StatsTable::DocsIf3CmEm1x1StatsEntry::has_data() const
{
    if (is_presence_container) return true;
    return ifindex.is_set
	|| docsif3cmem1x1statsnumbertimescrossedbelowusentrythrshlds.is_set
	|| docsif3cmem1x1statsnumbertimescrossedbelowdsentrythrshlds.is_set
	|| docsif3cmem1x1statstotalduration.is_set
	|| docsif3cmem1x1statstotaldurationbelowusthrshlds.is_set
	|| docsif3cmem1x1statstotaldurationbelowdsthrshlds.is_set
	|| docsif3cmem1x1statstotaldurationbelowusdsthrshlds.is_set;
}

bool DOCSIF3MIB::DocsIf3CmEm1x1StatsTable::DocsIf3CmEm1x1StatsEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ifindex.yfilter)
	|| ydk::is_set(docsif3cmem1x1statsnumbertimescrossedbelowusentrythrshlds.yfilter)
	|| ydk::is_set(docsif3cmem1x1statsnumbertimescrossedbelowdsentrythrshlds.yfilter)
	|| ydk::is_set(docsif3cmem1x1statstotalduration.yfilter)
	|| ydk::is_set(docsif3cmem1x1statstotaldurationbelowusthrshlds.yfilter)
	|| ydk::is_set(docsif3cmem1x1statstotaldurationbelowdsthrshlds.yfilter)
	|| ydk::is_set(docsif3cmem1x1statstotaldurationbelowusdsthrshlds.yfilter);
}

std::string DOCSIF3MIB::DocsIf3CmEm1x1StatsTable::DocsIf3CmEm1x1StatsEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "DOCS-IF3-MIB:DOCS-IF3-MIB/docsIf3CmEm1x1StatsTable/" << get_segment_path();
    return path_buffer.str();
}

std::string DOCSIF3MIB::DocsIf3CmEm1x1StatsTable::DocsIf3CmEm1x1StatsEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "docsIf3CmEm1x1StatsEntry";
    ADD_KEY_TOKEN(ifindex, "ifIndex");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > DOCSIF3MIB::DocsIf3CmEm1x1StatsTable::DocsIf3CmEm1x1StatsEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifindex.is_set || is_set(ifindex.yfilter)) leaf_name_data.push_back(ifindex.get_name_leafdata());
    if (docsif3cmem1x1statsnumbertimescrossedbelowusentrythrshlds.is_set || is_set(docsif3cmem1x1statsnumbertimescrossedbelowusentrythrshlds.yfilter)) leaf_name_data.push_back(docsif3cmem1x1statsnumbertimescrossedbelowusentrythrshlds.get_name_leafdata());
    if (docsif3cmem1x1statsnumbertimescrossedbelowdsentrythrshlds.is_set || is_set(docsif3cmem1x1statsnumbertimescrossedbelowdsentrythrshlds.yfilter)) leaf_name_data.push_back(docsif3cmem1x1statsnumbertimescrossedbelowdsentrythrshlds.get_name_leafdata());
    if (docsif3cmem1x1statstotalduration.is_set || is_set(docsif3cmem1x1statstotalduration.yfilter)) leaf_name_data.push_back(docsif3cmem1x1statstotalduration.get_name_leafdata());
    if (docsif3cmem1x1statstotaldurationbelowusthrshlds.is_set || is_set(docsif3cmem1x1statstotaldurationbelowusthrshlds.yfilter)) leaf_name_data.push_back(docsif3cmem1x1statstotaldurationbelowusthrshlds.get_name_leafdata());
    if (docsif3cmem1x1statstotaldurationbelowdsthrshlds.is_set || is_set(docsif3cmem1x1statstotaldurationbelowdsthrshlds.yfilter)) leaf_name_data.push_back(docsif3cmem1x1statstotaldurationbelowdsthrshlds.get_name_leafdata());
    if (docsif3cmem1x1statstotaldurationbelowusdsthrshlds.is_set || is_set(docsif3cmem1x1statstotaldurationbelowusdsthrshlds.yfilter)) leaf_name_data.push_back(docsif3cmem1x1statstotaldurationbelowusdsthrshlds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> DOCSIF3MIB::DocsIf3CmEm1x1StatsTable::DocsIf3CmEm1x1StatsEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> DOCSIF3MIB::DocsIf3CmEm1x1StatsTable::DocsIf3CmEm1x1StatsEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void DOCSIF3MIB::DocsIf3CmEm1x1StatsTable::DocsIf3CmEm1x1StatsEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifIndex")
    {
        ifindex = value;
        ifindex.value_namespace = name_space;
        ifindex.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmEm1x1StatsNumberTimesCrossedBelowUsEntryThrshlds")
    {
        docsif3cmem1x1statsnumbertimescrossedbelowusentrythrshlds = value;
        docsif3cmem1x1statsnumbertimescrossedbelowusentrythrshlds.value_namespace = name_space;
        docsif3cmem1x1statsnumbertimescrossedbelowusentrythrshlds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmEm1x1StatsNumberTimesCrossedBelowDsEntryThrshlds")
    {
        docsif3cmem1x1statsnumbertimescrossedbelowdsentrythrshlds = value;
        docsif3cmem1x1statsnumbertimescrossedbelowdsentrythrshlds.value_namespace = name_space;
        docsif3cmem1x1statsnumbertimescrossedbelowdsentrythrshlds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmEm1x1StatsTotalDuration")
    {
        docsif3cmem1x1statstotalduration = value;
        docsif3cmem1x1statstotalduration.value_namespace = name_space;
        docsif3cmem1x1statstotalduration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmEm1x1StatsTotalDurationBelowUsThrshlds")
    {
        docsif3cmem1x1statstotaldurationbelowusthrshlds = value;
        docsif3cmem1x1statstotaldurationbelowusthrshlds.value_namespace = name_space;
        docsif3cmem1x1statstotaldurationbelowusthrshlds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmEm1x1StatsTotalDurationBelowDsThrshlds")
    {
        docsif3cmem1x1statstotaldurationbelowdsthrshlds = value;
        docsif3cmem1x1statstotaldurationbelowdsthrshlds.value_namespace = name_space;
        docsif3cmem1x1statstotaldurationbelowdsthrshlds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "docsIf3CmEm1x1StatsTotalDurationBelowUsDsThrshlds")
    {
        docsif3cmem1x1statstotaldurationbelowusdsthrshlds = value;
        docsif3cmem1x1statstotaldurationbelowusdsthrshlds.value_namespace = name_space;
        docsif3cmem1x1statstotaldurationbelowusdsthrshlds.value_namespace_prefix = name_space_prefix;
    }
}

void DOCSIF3MIB::DocsIf3CmEm1x1StatsTable::DocsIf3CmEm1x1StatsEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifIndex")
    {
        ifindex.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmEm1x1StatsNumberTimesCrossedBelowUsEntryThrshlds")
    {
        docsif3cmem1x1statsnumbertimescrossedbelowusentrythrshlds.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmEm1x1StatsNumberTimesCrossedBelowDsEntryThrshlds")
    {
        docsif3cmem1x1statsnumbertimescrossedbelowdsentrythrshlds.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmEm1x1StatsTotalDuration")
    {
        docsif3cmem1x1statstotalduration.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmEm1x1StatsTotalDurationBelowUsThrshlds")
    {
        docsif3cmem1x1statstotaldurationbelowusthrshlds.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmEm1x1StatsTotalDurationBelowDsThrshlds")
    {
        docsif3cmem1x1statstotaldurationbelowdsthrshlds.yfilter = yfilter;
    }
    if(value_path == "docsIf3CmEm1x1StatsTotalDurationBelowUsDsThrshlds")
    {
        docsif3cmem1x1statstotaldurationbelowusdsthrshlds.yfilter = yfilter;
    }
}

bool DOCSIF3MIB::DocsIf3CmEm1x1StatsTable::DocsIf3CmEm1x1StatsEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifIndex" || name == "docsIf3CmEm1x1StatsNumberTimesCrossedBelowUsEntryThrshlds" || name == "docsIf3CmEm1x1StatsNumberTimesCrossedBelowDsEntryThrshlds" || name == "docsIf3CmEm1x1StatsTotalDuration" || name == "docsIf3CmEm1x1StatsTotalDurationBelowUsThrshlds" || name == "docsIf3CmEm1x1StatsTotalDurationBelowDsThrshlds" || name == "docsIf3CmEm1x1StatsTotalDurationBelowUsDsThrshlds")
        return true;
    return false;
}

const Enum::YLeaf CmtsCmRegState::other {1, "other"};
const Enum::YLeaf CmtsCmRegState::initialRanging {2, "initialRanging"};
const Enum::YLeaf CmtsCmRegState::rangingAutoAdjComplete {4, "rangingAutoAdjComplete"};
const Enum::YLeaf CmtsCmRegState::dhcpv4Complete {5, "dhcpv4Complete"};
const Enum::YLeaf CmtsCmRegState::registrationComplete {6, "registrationComplete"};
const Enum::YLeaf CmtsCmRegState::operational {8, "operational"};
const Enum::YLeaf CmtsCmRegState::bpiInit {9, "bpiInit"};
const Enum::YLeaf CmtsCmRegState::startEae {10, "startEae"};
const Enum::YLeaf CmtsCmRegState::startDhcpv4 {11, "startDhcpv4"};
const Enum::YLeaf CmtsCmRegState::startDhcpv6 {12, "startDhcpv6"};
const Enum::YLeaf CmtsCmRegState::dhcpv6Complete {13, "dhcpv6Complete"};
const Enum::YLeaf CmtsCmRegState::startConfigFileDownload {14, "startConfigFileDownload"};
const Enum::YLeaf CmtsCmRegState::configFileDownloadComplete {15, "configFileDownloadComplete"};
const Enum::YLeaf CmtsCmRegState::startRegistration {16, "startRegistration"};
const Enum::YLeaf CmtsCmRegState::forwardingDisabled {17, "forwardingDisabled"};
const Enum::YLeaf CmtsCmRegState::rfMuteAll {18, "rfMuteAll"};

const Enum::YLeaf IfDirection::downstream {1, "downstream"};
const Enum::YLeaf IfDirection::upstream {2, "upstream"};

const Enum::YLeaf SpectrumAnalysisWindowFunction::other {0, "other"};
const Enum::YLeaf SpectrumAnalysisWindowFunction::hann {1, "hann"};
const Enum::YLeaf SpectrumAnalysisWindowFunction::blackmanHarris {2, "blackmanHarris"};
const Enum::YLeaf SpectrumAnalysisWindowFunction::rectangular {3, "rectangular"};
const Enum::YLeaf SpectrumAnalysisWindowFunction::hamming {4, "hamming"};
const Enum::YLeaf SpectrumAnalysisWindowFunction::flatTop {5, "flatTop"};
const Enum::YLeaf SpectrumAnalysisWindowFunction::gaussian {6, "gaussian"};
const Enum::YLeaf SpectrumAnalysisWindowFunction::chebyshev {7, "chebyshev"};

const Enum::YLeaf CmRegState::other {1, "other"};
const Enum::YLeaf CmRegState::notReady {2, "notReady"};
const Enum::YLeaf CmRegState::notSynchronized {3, "notSynchronized"};
const Enum::YLeaf CmRegState::phySynchronized {4, "phySynchronized"};
const Enum::YLeaf CmRegState::usParametersAcquired {5, "usParametersAcquired"};
const Enum::YLeaf CmRegState::rangingComplete {6, "rangingComplete"};
const Enum::YLeaf CmRegState::dhcpv4Complete {7, "dhcpv4Complete"};
const Enum::YLeaf CmRegState::todEstablished {8, "todEstablished"};
const Enum::YLeaf CmRegState::securityEstablished {9, "securityEstablished"};
const Enum::YLeaf CmRegState::configFileDownloadComplete {10, "configFileDownloadComplete"};
const Enum::YLeaf CmRegState::registrationComplete {11, "registrationComplete"};
const Enum::YLeaf CmRegState::operational {12, "operational"};
const Enum::YLeaf CmRegState::accessDenied {13, "accessDenied"};
const Enum::YLeaf CmRegState::eaeInProgress {14, "eaeInProgress"};
const Enum::YLeaf CmRegState::dhcpv4InProgress {15, "dhcpv4InProgress"};
const Enum::YLeaf CmRegState::dhcpv6InProgress {16, "dhcpv6InProgress"};
const Enum::YLeaf CmRegState::dhcpv6Complete {17, "dhcpv6Complete"};
const Enum::YLeaf CmRegState::registrationInProgress {18, "registrationInProgress"};
const Enum::YLeaf CmRegState::bpiInit {19, "bpiInit"};
const Enum::YLeaf CmRegState::forwardingDisabled {20, "forwardingDisabled"};
const Enum::YLeaf CmRegState::dsTopologyResolutionInProgress {21, "dsTopologyResolutionInProgress"};
const Enum::YLeaf CmRegState::rangingInProgress {22, "rangingInProgress"};
const Enum::YLeaf CmRegState::rfMuteAll {23, "rfMuteAll"};

const Enum::YLeaf RangingState::other {1, "other"};
const Enum::YLeaf RangingState::aborted {2, "aborted"};
const Enum::YLeaf RangingState::retriesExceeded {3, "retriesExceeded"};
const Enum::YLeaf RangingState::success {4, "success"};
const Enum::YLeaf RangingState::continue_ {5, "continue"};
const Enum::YLeaf RangingState::timeoutT4 {6, "timeoutT4"};

const Enum::YLeaf DOCSIF3MIB::DocsIf3CmtsCmCtrl::DocsIf3CmtsCmCtrlCmdCommit::mute {1, "mute"};
const Enum::YLeaf DOCSIF3MIB::DocsIf3CmtsCmCtrl::DocsIf3CmtsCmCtrlCmdCommit::cmReinit {2, "cmReinit"};
const Enum::YLeaf DOCSIF3MIB::DocsIf3CmtsCmCtrl::DocsIf3CmtsCmCtrlCmdCommit::disableForwarding {3, "disableForwarding"};

const Enum::YLeaf DOCSIF3MIB::DocsIf3RccStatusTable::DocsIf3RccStatusEntry::DocsIf3RccStatusValidityCode::other {1, "other"};
const Enum::YLeaf DOCSIF3MIB::DocsIf3RccStatusTable::DocsIf3RccStatusEntry::DocsIf3RccStatusValidityCode::valid {2, "valid"};
const Enum::YLeaf DOCSIF3MIB::DocsIf3RccStatusTable::DocsIf3RccStatusEntry::DocsIf3RccStatusValidityCode::invalid {3, "invalid"};
const Enum::YLeaf DOCSIF3MIB::DocsIf3RccStatusTable::DocsIf3RccStatusEntry::DocsIf3RccStatusValidityCode::wrongPrimaryDs {4, "wrongPrimaryDs"};
const Enum::YLeaf DOCSIF3MIB::DocsIf3RccStatusTable::DocsIf3RccStatusEntry::DocsIf3RccStatusValidityCode::missingPrimaryDs {5, "missingPrimaryDs"};
const Enum::YLeaf DOCSIF3MIB::DocsIf3RccStatusTable::DocsIf3RccStatusEntry::DocsIf3RccStatusValidityCode::multiplePrimaryDs {6, "multiplePrimaryDs"};
const Enum::YLeaf DOCSIF3MIB::DocsIf3RccStatusTable::DocsIf3RccStatusEntry::DocsIf3RccStatusValidityCode::duplicateDs {7, "duplicateDs"};
const Enum::YLeaf DOCSIF3MIB::DocsIf3RccStatusTable::DocsIf3RccStatusEntry::DocsIf3RccStatusValidityCode::wrongFrequencyRange {8, "wrongFrequencyRange"};
const Enum::YLeaf DOCSIF3MIB::DocsIf3RccStatusTable::DocsIf3RccStatusEntry::DocsIf3RccStatusValidityCode::wrongConnectivity {9, "wrongConnectivity"};

const Enum::YLeaf DOCSIF3MIB::DocsIf3MdCfgTable::DocsIf3MdCfgEntry::DocsIf3MdCfgIpProvMode::ipv4Only {0, "ipv4Only"};
const Enum::YLeaf DOCSIF3MIB::DocsIf3MdCfgTable::DocsIf3MdCfgEntry::DocsIf3MdCfgIpProvMode::ipv6Only {1, "ipv6Only"};
const Enum::YLeaf DOCSIF3MIB::DocsIf3MdCfgTable::DocsIf3MdCfgEntry::DocsIf3MdCfgIpProvMode::alternate {2, "alternate"};
const Enum::YLeaf DOCSIF3MIB::DocsIf3MdCfgTable::DocsIf3MdCfgEntry::DocsIf3MdCfgIpProvMode::dualStack {3, "dualStack"};

const Enum::YLeaf DOCSIF3MIB::DocsIf3MdCfgTable::DocsIf3MdCfgEntry::DocsIf3MdCfgUsFreqRange::standard {0, "standard"};
const Enum::YLeaf DOCSIF3MIB::DocsIf3MdCfgTable::DocsIf3MdCfgEntry::DocsIf3MdCfgUsFreqRange::extended {1, "extended"};

const Enum::YLeaf DOCSIF3MIB::DocsIf3MdCfgTable::DocsIf3MdCfgEntry::DocsIf3MdCfgEarlyAuthEncrCtrl::disableEae {1, "disableEae"};
const Enum::YLeaf DOCSIF3MIB::DocsIf3MdCfgTable::DocsIf3MdCfgEntry::DocsIf3MdCfgEarlyAuthEncrCtrl::enableEaeRangingBasedEnforcement {2, "enableEaeRangingBasedEnforcement"};
const Enum::YLeaf DOCSIF3MIB::DocsIf3MdCfgTable::DocsIf3MdCfgEntry::DocsIf3MdCfgEarlyAuthEncrCtrl::enableEaeCapabilityBasedEnforcement {3, "enableEaeCapabilityBasedEnforcement"};
const Enum::YLeaf DOCSIF3MIB::DocsIf3MdCfgTable::DocsIf3MdCfgEntry::DocsIf3MdCfgEarlyAuthEncrCtrl::enableEaeTotalEnforcement {4, "enableEaeTotalEnforcement"};

const Enum::YLeaf DOCSIF3MIB::DocsIf3MdCfgTable::DocsIf3MdCfgEntry::DocsIf3MdCfgDownChannelAnnex::unknown {1, "unknown"};
const Enum::YLeaf DOCSIF3MIB::DocsIf3MdCfgTable::DocsIf3MdCfgEntry::DocsIf3MdCfgDownChannelAnnex::other {2, "other"};
const Enum::YLeaf DOCSIF3MIB::DocsIf3MdCfgTable::DocsIf3MdCfgEntry::DocsIf3MdCfgDownChannelAnnex::annexA {3, "annexA"};
const Enum::YLeaf DOCSIF3MIB::DocsIf3MdCfgTable::DocsIf3MdCfgEntry::DocsIf3MdCfgDownChannelAnnex::annexB {4, "annexB"};
const Enum::YLeaf DOCSIF3MIB::DocsIf3MdCfgTable::DocsIf3MdCfgEntry::DocsIf3MdCfgDownChannelAnnex::annexC {5, "annexC"};

const Enum::YLeaf DOCSIF3MIB::DocsIf3MdCfgTable::DocsIf3MdCfgEntry::DocsIf3MdCfgBpi2EnforceCtrl::disable {0, "disable"};
const Enum::YLeaf DOCSIF3MIB::DocsIf3MdCfgTable::DocsIf3MdCfgEntry::DocsIf3MdCfgBpi2EnforceCtrl::qosCfgFileWithBpi2AndCapabPrivSupportEnabled {1, "qosCfgFileWithBpi2AndCapabPrivSupportEnabled"};
const Enum::YLeaf DOCSIF3MIB::DocsIf3MdCfgTable::DocsIf3MdCfgEntry::DocsIf3MdCfgBpi2EnforceCtrl::qosCfgFileWithBpi2Enabled {2, "qosCfgFileWithBpi2Enabled"};
const Enum::YLeaf DOCSIF3MIB::DocsIf3MdCfgTable::DocsIf3MdCfgEntry::DocsIf3MdCfgBpi2EnforceCtrl::qosCfgFile {3, "qosCfgFile"};
const Enum::YLeaf DOCSIF3MIB::DocsIf3MdCfgTable::DocsIf3MdCfgEntry::DocsIf3MdCfgBpi2EnforceCtrl::total {4, "total"};

const Enum::YLeaf DOCSIF3MIB::DocsIf3UsChExtTable::DocsIf3UsChExtEntry::DocsIf3UsChExtSacCodeHoppingSelectionMode::none {0, "none"};
const Enum::YLeaf DOCSIF3MIB::DocsIf3UsChExtTable::DocsIf3UsChExtEntry::DocsIf3UsChExtSacCodeHoppingSelectionMode::sac1NoCodeHopping {1, "sac1NoCodeHopping"};
const Enum::YLeaf DOCSIF3MIB::DocsIf3UsChExtTable::DocsIf3UsChExtEntry::DocsIf3UsChExtSacCodeHoppingSelectionMode::sac1CodeHoppingMode1 {2, "sac1CodeHoppingMode1"};
const Enum::YLeaf DOCSIF3MIB::DocsIf3UsChExtTable::DocsIf3UsChExtEntry::DocsIf3UsChExtSacCodeHoppingSelectionMode::sac2CodeHoppingMode2 {3, "sac2CodeHoppingMode2"};
const Enum::YLeaf DOCSIF3MIB::DocsIf3UsChExtTable::DocsIf3UsChExtEntry::DocsIf3UsChExtSacCodeHoppingSelectionMode::sac2NoCodeHopping {4, "sac2NoCodeHopping"};

const Enum::YLeaf DOCSIF3MIB::DocsIf3CmMdCfgTable::DocsIf3CmMdCfgEntry::DocsIf3CmMdCfgIpProvMode::ipv4Only {0, "ipv4Only"};
const Enum::YLeaf DOCSIF3MIB::DocsIf3CmMdCfgTable::DocsIf3CmMdCfgEntry::DocsIf3CmMdCfgIpProvMode::ipv6Only {1, "ipv6Only"};
const Enum::YLeaf DOCSIF3MIB::DocsIf3CmMdCfgTable::DocsIf3CmMdCfgEntry::DocsIf3CmMdCfgIpProvMode::honorMdd {4, "honorMdd"};


}
}

