#ifndef _DOCS_IF3_MIB_
#define _DOCS_IF3_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace DOCS_IF3_MIB {

class DOCSIF3MIB : public ydk::Entity
{
    public:
        DOCSIF3MIB();
        ~DOCSIF3MIB();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class DocsIf3CmCapabilities; //type: DOCSIF3MIB::DocsIf3CmCapabilities
        class DocsIf3CmtsCmCtrl; //type: DOCSIF3MIB::DocsIf3CmtsCmCtrl
        class DocsIf3CmEnergyMgtCfg; //type: DOCSIF3MIB::DocsIf3CmEnergyMgtCfg
        class DocsIf3CmSpectrumAnalysisCtrlCmd; //type: DOCSIF3MIB::DocsIf3CmSpectrumAnalysisCtrlCmd
        class DocsIf3CmStatusTable; //type: DOCSIF3MIB::DocsIf3CmStatusTable
        class DocsIf3CmStatusUsTable; //type: DOCSIF3MIB::DocsIf3CmStatusUsTable
        class DocsIf3CmtsCmRegStatusTable; //type: DOCSIF3MIB::DocsIf3CmtsCmRegStatusTable
        class DocsIf3CmtsCmUsStatusTable; //type: DOCSIF3MIB::DocsIf3CmtsCmUsStatusTable
        class DocsIf3MdChCfgTable; //type: DOCSIF3MIB::DocsIf3MdChCfgTable
        class DocsIf3RccCfgTable; //type: DOCSIF3MIB::DocsIf3RccCfgTable
        class DocsIf3RccStatusTable; //type: DOCSIF3MIB::DocsIf3RccStatusTable
        class DocsIf3RxChCfgTable; //type: DOCSIF3MIB::DocsIf3RxChCfgTable
        class DocsIf3RxChStatusTable; //type: DOCSIF3MIB::DocsIf3RxChStatusTable
        class DocsIf3RxModuleCfgTable; //type: DOCSIF3MIB::DocsIf3RxModuleCfgTable
        class DocsIf3RxModuleStatusTable; //type: DOCSIF3MIB::DocsIf3RxModuleStatusTable
        class DocsIf3MdNodeStatusTable; //type: DOCSIF3MIB::DocsIf3MdNodeStatusTable
        class DocsIf3MdDsSgStatusTable; //type: DOCSIF3MIB::DocsIf3MdDsSgStatusTable
        class DocsIf3MdUsSgStatusTable; //type: DOCSIF3MIB::DocsIf3MdUsSgStatusTable
        class DocsIf3MdUsToDsChMappingTable; //type: DOCSIF3MIB::DocsIf3MdUsToDsChMappingTable
        class DocsIf3MdCfgTable; //type: DOCSIF3MIB::DocsIf3MdCfgTable
        class DocsIf3BondingGrpCfgTable; //type: DOCSIF3MIB::DocsIf3BondingGrpCfgTable
        class DocsIf3DsBondingGrpStatusTable; //type: DOCSIF3MIB::DocsIf3DsBondingGrpStatusTable
        class DocsIf3UsBondingGrpStatusTable; //type: DOCSIF3MIB::DocsIf3UsBondingGrpStatusTable
        class DocsIf3UsChExtTable; //type: DOCSIF3MIB::DocsIf3UsChExtTable
        class DocsIf3UsChSetTable; //type: DOCSIF3MIB::DocsIf3UsChSetTable
        class DocsIf3DsChSetTable; //type: DOCSIF3MIB::DocsIf3DsChSetTable
        class DocsIf3SignalQualityExtTable; //type: DOCSIF3MIB::DocsIf3SignalQualityExtTable
        class DocsIf3CmtsSignalQualityExtTable; //type: DOCSIF3MIB::DocsIf3CmtsSignalQualityExtTable
        class DocsIf3CmtsSpectrumAnalysisMeasTable; //type: DOCSIF3MIB::DocsIf3CmtsSpectrumAnalysisMeasTable
        class DocsIf3CmDpvStatsTable; //type: DOCSIF3MIB::DocsIf3CmDpvStatsTable
        class DocsIf3CmEventCtrlTable; //type: DOCSIF3MIB::DocsIf3CmEventCtrlTable
        class DocsIf3CmtsEventCtrlTable; //type: DOCSIF3MIB::DocsIf3CmtsEventCtrlTable
        class DocsIf3CmMdCfgTable; //type: DOCSIF3MIB::DocsIf3CmMdCfgTable
        class DocsIf3CmEnergyMgt1x1CfgTable; //type: DOCSIF3MIB::DocsIf3CmEnergyMgt1x1CfgTable
        class DocsIf3CmSpectrumAnalysisMeasTable; //type: DOCSIF3MIB::DocsIf3CmSpectrumAnalysisMeasTable
        class DocsIf3CmtsCmEmStatsTable; //type: DOCSIF3MIB::DocsIf3CmtsCmEmStatsTable
        class DocsIf3CmEm1x1StatsTable; //type: DOCSIF3MIB::DocsIf3CmEm1x1StatsTable

        std::shared_ptr<cisco_ios_xe::DOCS_IF3_MIB::DOCSIF3MIB::DocsIf3CmCapabilities> docsif3cmcapabilities;
        std::shared_ptr<cisco_ios_xe::DOCS_IF3_MIB::DOCSIF3MIB::DocsIf3CmtsCmCtrl> docsif3cmtscmctrl;
        std::shared_ptr<cisco_ios_xe::DOCS_IF3_MIB::DOCSIF3MIB::DocsIf3CmEnergyMgtCfg> docsif3cmenergymgtcfg;
        std::shared_ptr<cisco_ios_xe::DOCS_IF3_MIB::DOCSIF3MIB::DocsIf3CmSpectrumAnalysisCtrlCmd> docsif3cmspectrumanalysisctrlcmd;
        std::shared_ptr<cisco_ios_xe::DOCS_IF3_MIB::DOCSIF3MIB::DocsIf3CmStatusTable> docsif3cmstatustable;
        std::shared_ptr<cisco_ios_xe::DOCS_IF3_MIB::DOCSIF3MIB::DocsIf3CmStatusUsTable> docsif3cmstatusustable;
        std::shared_ptr<cisco_ios_xe::DOCS_IF3_MIB::DOCSIF3MIB::DocsIf3CmtsCmRegStatusTable> docsif3cmtscmregstatustable;
        std::shared_ptr<cisco_ios_xe::DOCS_IF3_MIB::DOCSIF3MIB::DocsIf3CmtsCmUsStatusTable> docsif3cmtscmusstatustable;
        std::shared_ptr<cisco_ios_xe::DOCS_IF3_MIB::DOCSIF3MIB::DocsIf3MdChCfgTable> docsif3mdchcfgtable;
        std::shared_ptr<cisco_ios_xe::DOCS_IF3_MIB::DOCSIF3MIB::DocsIf3RccCfgTable> docsif3rcccfgtable;
        std::shared_ptr<cisco_ios_xe::DOCS_IF3_MIB::DOCSIF3MIB::DocsIf3RccStatusTable> docsif3rccstatustable;
        std::shared_ptr<cisco_ios_xe::DOCS_IF3_MIB::DOCSIF3MIB::DocsIf3RxChCfgTable> docsif3rxchcfgtable;
        std::shared_ptr<cisco_ios_xe::DOCS_IF3_MIB::DOCSIF3MIB::DocsIf3RxChStatusTable> docsif3rxchstatustable;
        std::shared_ptr<cisco_ios_xe::DOCS_IF3_MIB::DOCSIF3MIB::DocsIf3RxModuleCfgTable> docsif3rxmodulecfgtable;
        std::shared_ptr<cisco_ios_xe::DOCS_IF3_MIB::DOCSIF3MIB::DocsIf3RxModuleStatusTable> docsif3rxmodulestatustable;
        std::shared_ptr<cisco_ios_xe::DOCS_IF3_MIB::DOCSIF3MIB::DocsIf3MdNodeStatusTable> docsif3mdnodestatustable;
        std::shared_ptr<cisco_ios_xe::DOCS_IF3_MIB::DOCSIF3MIB::DocsIf3MdDsSgStatusTable> docsif3mddssgstatustable;
        std::shared_ptr<cisco_ios_xe::DOCS_IF3_MIB::DOCSIF3MIB::DocsIf3MdUsSgStatusTable> docsif3mdussgstatustable;
        std::shared_ptr<cisco_ios_xe::DOCS_IF3_MIB::DOCSIF3MIB::DocsIf3MdUsToDsChMappingTable> docsif3mdustodschmappingtable;
        std::shared_ptr<cisco_ios_xe::DOCS_IF3_MIB::DOCSIF3MIB::DocsIf3MdCfgTable> docsif3mdcfgtable;
        std::shared_ptr<cisco_ios_xe::DOCS_IF3_MIB::DOCSIF3MIB::DocsIf3BondingGrpCfgTable> docsif3bondinggrpcfgtable;
        std::shared_ptr<cisco_ios_xe::DOCS_IF3_MIB::DOCSIF3MIB::DocsIf3DsBondingGrpStatusTable> docsif3dsbondinggrpstatustable;
        std::shared_ptr<cisco_ios_xe::DOCS_IF3_MIB::DOCSIF3MIB::DocsIf3UsBondingGrpStatusTable> docsif3usbondinggrpstatustable;
        std::shared_ptr<cisco_ios_xe::DOCS_IF3_MIB::DOCSIF3MIB::DocsIf3UsChExtTable> docsif3uschexttable;
        std::shared_ptr<cisco_ios_xe::DOCS_IF3_MIB::DOCSIF3MIB::DocsIf3UsChSetTable> docsif3uschsettable;
        std::shared_ptr<cisco_ios_xe::DOCS_IF3_MIB::DOCSIF3MIB::DocsIf3DsChSetTable> docsif3dschsettable;
        std::shared_ptr<cisco_ios_xe::DOCS_IF3_MIB::DOCSIF3MIB::DocsIf3SignalQualityExtTable> docsif3signalqualityexttable;
        std::shared_ptr<cisco_ios_xe::DOCS_IF3_MIB::DOCSIF3MIB::DocsIf3CmtsSignalQualityExtTable> docsif3cmtssignalqualityexttable;
        std::shared_ptr<cisco_ios_xe::DOCS_IF3_MIB::DOCSIF3MIB::DocsIf3CmtsSpectrumAnalysisMeasTable> docsif3cmtsspectrumanalysismeastable;
        std::shared_ptr<cisco_ios_xe::DOCS_IF3_MIB::DOCSIF3MIB::DocsIf3CmDpvStatsTable> docsif3cmdpvstatstable;
        std::shared_ptr<cisco_ios_xe::DOCS_IF3_MIB::DOCSIF3MIB::DocsIf3CmEventCtrlTable> docsif3cmeventctrltable;
        std::shared_ptr<cisco_ios_xe::DOCS_IF3_MIB::DOCSIF3MIB::DocsIf3CmtsEventCtrlTable> docsif3cmtseventctrltable;
        std::shared_ptr<cisco_ios_xe::DOCS_IF3_MIB::DOCSIF3MIB::DocsIf3CmMdCfgTable> docsif3cmmdcfgtable;
        std::shared_ptr<cisco_ios_xe::DOCS_IF3_MIB::DOCSIF3MIB::DocsIf3CmEnergyMgt1x1CfgTable> docsif3cmenergymgt1x1cfgtable;
        std::shared_ptr<cisco_ios_xe::DOCS_IF3_MIB::DOCSIF3MIB::DocsIf3CmSpectrumAnalysisMeasTable> docsif3cmspectrumanalysismeastable;
        std::shared_ptr<cisco_ios_xe::DOCS_IF3_MIB::DOCSIF3MIB::DocsIf3CmtsCmEmStatsTable> docsif3cmtscmemstatstable;
        std::shared_ptr<cisco_ios_xe::DOCS_IF3_MIB::DOCSIF3MIB::DocsIf3CmEm1x1StatsTable> docsif3cmem1x1statstable;
        
}; // DOCSIF3MIB


class DOCSIF3MIB::DocsIf3CmCapabilities : public ydk::Entity
{
    public:
        DocsIf3CmCapabilities();
        ~DocsIf3CmCapabilities();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf docsif3cmcapabilitiesreq; //type: binary
        ydk::YLeaf docsif3cmcapabilitiesrsp; //type: binary

}; // DOCSIF3MIB::DocsIf3CmCapabilities


class DOCSIF3MIB::DocsIf3CmtsCmCtrl : public ydk::Entity
{
    public:
        DocsIf3CmtsCmCtrl();
        ~DocsIf3CmtsCmCtrl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf docsif3cmtscmctrlcmdmacaddr; //type: string
        ydk::YLeaf docsif3cmtscmctrlcmdmuteuschid; //type: uint32
        ydk::YLeaf docsif3cmtscmctrlcmdmuteinterval; //type: uint32
        ydk::YLeaf docsif3cmtscmctrlcmddisableforwarding; //type: boolean
        ydk::YLeaf docsif3cmtscmctrlcmdcommit; //type: DocsIf3CmtsCmCtrlCmdCommit
        class DocsIf3CmtsCmCtrlCmdCommit;

}; // DOCSIF3MIB::DocsIf3CmtsCmCtrl


class DOCSIF3MIB::DocsIf3CmEnergyMgtCfg : public ydk::Entity
{
    public:
        DocsIf3CmEnergyMgtCfg();
        ~DocsIf3CmEnergyMgtCfg();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf docsif3cmenergymgtcfgfeatureenabled; //type: DocsIf3CmEnergyMgtCfgFeatureEnabled
        ydk::YLeaf docsif3cmenergymgtcfgcycleperiod; //type: uint32

}; // DOCSIF3MIB::DocsIf3CmEnergyMgtCfg


class DOCSIF3MIB::DocsIf3CmSpectrumAnalysisCtrlCmd : public ydk::Entity
{
    public:
        DocsIf3CmSpectrumAnalysisCtrlCmd();
        ~DocsIf3CmSpectrumAnalysisCtrlCmd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf docsif3cmspectrumanalysisctrlcmdenable; //type: boolean
        ydk::YLeaf docsif3cmspectrumanalysisctrlcmdinactivitytimeout; //type: int32
        ydk::YLeaf docsif3cmspectrumanalysisctrlcmdfirstsegmentcenterfrequency; //type: uint32
        ydk::YLeaf docsif3cmspectrumanalysisctrlcmdlastsegmentcenterfrequency; //type: uint32
        ydk::YLeaf docsif3cmspectrumanalysisctrlcmdsegmentfrequencyspan; //type: uint32
        ydk::YLeaf docsif3cmspectrumanalysisctrlcmdnumbinspersegment; //type: uint32
        ydk::YLeaf docsif3cmspectrumanalysisctrlcmdequivalentnoisebandwidth; //type: uint32
        ydk::YLeaf docsif3cmspectrumanalysisctrlcmdwindowfunction; //type: SpectrumAnalysisWindowFunction
        ydk::YLeaf docsif3cmspectrumanalysisctrlcmdnumberofaverages; //type: uint32

}; // DOCSIF3MIB::DocsIf3CmSpectrumAnalysisCtrlCmd


class DOCSIF3MIB::DocsIf3CmStatusTable : public ydk::Entity
{
    public:
        DocsIf3CmStatusTable();
        ~DocsIf3CmStatusTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DocsIf3CmStatusEntry; //type: DOCSIF3MIB::DocsIf3CmStatusTable::DocsIf3CmStatusEntry

        ydk::YList docsif3cmstatusentry;
        
}; // DOCSIF3MIB::DocsIf3CmStatusTable


class DOCSIF3MIB::DocsIf3CmStatusTable::DocsIf3CmStatusEntry : public ydk::Entity
{
    public:
        DocsIf3CmStatusEntry();
        ~DocsIf3CmStatusEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf docsif3cmstatusvalue; //type: CmRegState
        ydk::YLeaf docsif3cmstatuscode; //type: binary
        ydk::YLeaf docsif3cmstatusresets; //type: uint32
        ydk::YLeaf docsif3cmstatuslostsyncs; //type: uint32
        ydk::YLeaf docsif3cmstatusinvalidmaps; //type: uint32
        ydk::YLeaf docsif3cmstatusinvaliducds; //type: uint32
        ydk::YLeaf docsif3cmstatusinvalidrangingrsps; //type: uint32
        ydk::YLeaf docsif3cmstatusinvalidregrsps; //type: uint32
        ydk::YLeaf docsif3cmstatust1timeouts; //type: uint32
        ydk::YLeaf docsif3cmstatust2timeouts; //type: uint32
        ydk::YLeaf docsif3cmstatusuccssuccesses; //type: uint32
        ydk::YLeaf docsif3cmstatusuccfails; //type: uint32
        ydk::YLeaf docsif3cmstatusenergymgt1x1operstatus; //type: boolean

}; // DOCSIF3MIB::DocsIf3CmStatusTable::DocsIf3CmStatusEntry


class DOCSIF3MIB::DocsIf3CmStatusUsTable : public ydk::Entity
{
    public:
        DocsIf3CmStatusUsTable();
        ~DocsIf3CmStatusUsTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DocsIf3CmStatusUsEntry; //type: DOCSIF3MIB::DocsIf3CmStatusUsTable::DocsIf3CmStatusUsEntry

        ydk::YList docsif3cmstatususentry;
        
}; // DOCSIF3MIB::DocsIf3CmStatusUsTable


class DOCSIF3MIB::DocsIf3CmStatusUsTable::DocsIf3CmStatusUsEntry : public ydk::Entity
{
    public:
        DocsIf3CmStatusUsEntry();
        ~DocsIf3CmStatusUsEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf docsif3cmstatusustxpower; //type: int32
        ydk::YLeaf docsif3cmstatusust3timeouts; //type: uint32
        ydk::YLeaf docsif3cmstatusust4timeouts; //type: uint32
        ydk::YLeaf docsif3cmstatususrangingaborteds; //type: uint32
        ydk::YLeaf docsif3cmstatususmodulationtype; //type: DocsisUpstreamType
        ydk::YLeaf docsif3cmstatususeqdata; //type: binary
        ydk::YLeaf docsif3cmstatusust3exceededs; //type: uint32
        ydk::YLeaf docsif3cmstatususismuted; //type: boolean
        ydk::YLeaf docsif3cmstatususrangingstatus; //type: RangingState

}; // DOCSIF3MIB::DocsIf3CmStatusUsTable::DocsIf3CmStatusUsEntry


class DOCSIF3MIB::DocsIf3CmtsCmRegStatusTable : public ydk::Entity
{
    public:
        DocsIf3CmtsCmRegStatusTable();
        ~DocsIf3CmtsCmRegStatusTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DocsIf3CmtsCmRegStatusEntry; //type: DOCSIF3MIB::DocsIf3CmtsCmRegStatusTable::DocsIf3CmtsCmRegStatusEntry

        ydk::YList docsif3cmtscmregstatusentry;
        
}; // DOCSIF3MIB::DocsIf3CmtsCmRegStatusTable


class DOCSIF3MIB::DocsIf3CmtsCmRegStatusTable::DocsIf3CmtsCmRegStatusEntry : public ydk::Entity
{
    public:
        DocsIf3CmtsCmRegStatusEntry();
        ~DocsIf3CmtsCmRegStatusEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf docsif3cmtscmregstatusid; //type: uint32
        ydk::YLeaf docsif3cmtscmregstatusmacaddr; //type: string
        ydk::YLeaf docsif3cmtscmregstatusipv6addr; //type: string
        ydk::YLeaf docsif3cmtscmregstatusipv6linklocal; //type: string
        ydk::YLeaf docsif3cmtscmregstatusipv4addr; //type: string
        ydk::YLeaf docsif3cmtscmregstatusvalue; //type: CmtsCmRegState
        ydk::YLeaf docsif3cmtscmregstatusmdifindex; //type: int32
        ydk::YLeaf docsif3cmtscmregstatusmdcmsgid; //type: uint32
        ydk::YLeaf docsif3cmtscmregstatusrcpid; //type: binary
        ydk::YLeaf docsif3cmtscmregstatusrccstatusid; //type: uint32
        ydk::YLeaf docsif3cmtscmregstatusrcsid; //type: uint32
        ydk::YLeaf docsif3cmtscmregstatustcsid; //type: uint32
        ydk::YLeaf docsif3cmtscmregstatusqosversion; //type: DocsisQosVersion
        ydk::YLeaf docsif3cmtscmregstatuslastregtime; //type: string
        ydk::YLeaf docsif3cmtscmregstatusaddrresolutionreqs; //type: uint32
        ydk::YLeaf docsif3cmtscmregstatusenergymgtenabled; //type: DocsIf3CmtsCmRegStatusEnergyMgtEnabled
        ydk::YLeaf docsif3cmtscmregstatusenergymgtoperstatus; //type: DocsIf3CmtsCmRegStatusEnergyMgtOperStatus

}; // DOCSIF3MIB::DocsIf3CmtsCmRegStatusTable::DocsIf3CmtsCmRegStatusEntry


class DOCSIF3MIB::DocsIf3CmtsCmUsStatusTable : public ydk::Entity
{
    public:
        DocsIf3CmtsCmUsStatusTable();
        ~DocsIf3CmtsCmUsStatusTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DocsIf3CmtsCmUsStatusEntry; //type: DOCSIF3MIB::DocsIf3CmtsCmUsStatusTable::DocsIf3CmtsCmUsStatusEntry

        ydk::YList docsif3cmtscmusstatusentry;
        
}; // DOCSIF3MIB::DocsIf3CmtsCmUsStatusTable


class DOCSIF3MIB::DocsIf3CmtsCmUsStatusTable::DocsIf3CmtsCmUsStatusEntry : public ydk::Entity
{
    public:
        DocsIf3CmtsCmUsStatusEntry();
        ~DocsIf3CmtsCmUsStatusEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: uint32 (refers to cisco_ios_xe::DOCS_IF3_MIB::DOCSIF3MIB::DocsIf3CmtsCmRegStatusTable::DocsIf3CmtsCmRegStatusEntry::docsif3cmtscmregstatusid)
        ydk::YLeaf docsif3cmtscmregstatusid;
        ydk::YLeaf docsif3cmtscmusstatuschifindex; //type: int32
        ydk::YLeaf docsif3cmtscmusstatusmodulationtype; //type: DocsisUpstreamType
        ydk::YLeaf docsif3cmtscmusstatusrxpower; //type: int32
        ydk::YLeaf docsif3cmtscmusstatussignalnoise; //type: int32
        ydk::YLeaf docsif3cmtscmusstatusmicroreflections; //type: uint32
        ydk::YLeaf docsif3cmtscmusstatuseqdata; //type: binary
        ydk::YLeaf docsif3cmtscmusstatusunerroreds; //type: uint32
        ydk::YLeaf docsif3cmtscmusstatuscorrecteds; //type: uint32
        ydk::YLeaf docsif3cmtscmusstatusuncorrectables; //type: uint32
        ydk::YLeaf docsif3cmtscmusstatushighresolutiontimingoffset; //type: int32
        ydk::YLeaf docsif3cmtscmusstatusismuted; //type: boolean
        ydk::YLeaf docsif3cmtscmusstatusrangingstatus; //type: RangingState

}; // DOCSIF3MIB::DocsIf3CmtsCmUsStatusTable::DocsIf3CmtsCmUsStatusEntry


class DOCSIF3MIB::DocsIf3MdChCfgTable : public ydk::Entity
{
    public:
        DocsIf3MdChCfgTable();
        ~DocsIf3MdChCfgTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DocsIf3MdChCfgEntry; //type: DOCSIF3MIB::DocsIf3MdChCfgTable::DocsIf3MdChCfgEntry

        ydk::YList docsif3mdchcfgentry;
        
}; // DOCSIF3MIB::DocsIf3MdChCfgTable


class DOCSIF3MIB::DocsIf3MdChCfgTable::DocsIf3MdChCfgEntry : public ydk::Entity
{
    public:
        DocsIf3MdChCfgEntry();
        ~DocsIf3MdChCfgEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf docsif3mdchcfgchifindex; //type: int32
        ydk::YLeaf docsif3mdchcfgispricapableds; //type: boolean
        ydk::YLeaf docsif3mdchcfgchid; //type: uint32
        ydk::YLeaf docsif3mdchcfgsfprovattrmask; //type: AttributeMask
        ydk::YLeaf docsif3mdchcfgrowstatus; //type: RowStatus

}; // DOCSIF3MIB::DocsIf3MdChCfgTable::DocsIf3MdChCfgEntry


class DOCSIF3MIB::DocsIf3RccCfgTable : public ydk::Entity
{
    public:
        DocsIf3RccCfgTable();
        ~DocsIf3RccCfgTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DocsIf3RccCfgEntry; //type: DOCSIF3MIB::DocsIf3RccCfgTable::DocsIf3RccCfgEntry

        ydk::YList docsif3rcccfgentry;
        
}; // DOCSIF3MIB::DocsIf3RccCfgTable


class DOCSIF3MIB::DocsIf3RccCfgTable::DocsIf3RccCfgEntry : public ydk::Entity
{
    public:
        DocsIf3RccCfgEntry();
        ~DocsIf3RccCfgEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf docsif3rcccfgrcpid; //type: binary
        ydk::YLeaf docsif3rcccfgrcccfgid; //type: uint32
        ydk::YLeaf docsif3rcccfgvendorspecific; //type: binary
        ydk::YLeaf docsif3rcccfgdescription; //type: string
        ydk::YLeaf docsif3rcccfgrowstatus; //type: RowStatus

}; // DOCSIF3MIB::DocsIf3RccCfgTable::DocsIf3RccCfgEntry


class DOCSIF3MIB::DocsIf3RccStatusTable : public ydk::Entity
{
    public:
        DocsIf3RccStatusTable();
        ~DocsIf3RccStatusTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DocsIf3RccStatusEntry; //type: DOCSIF3MIB::DocsIf3RccStatusTable::DocsIf3RccStatusEntry

        ydk::YList docsif3rccstatusentry;
        
}; // DOCSIF3MIB::DocsIf3RccStatusTable


class DOCSIF3MIB::DocsIf3RccStatusTable::DocsIf3RccStatusEntry : public ydk::Entity
{
    public:
        DocsIf3RccStatusEntry();
        ~DocsIf3RccStatusEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf docsif3rccstatusrcpid; //type: binary
        ydk::YLeaf docsif3rccstatusrccstatusid; //type: uint32
        ydk::YLeaf docsif3rccstatusrcccfgid; //type: uint32
        ydk::YLeaf docsif3rccstatusvaliditycode; //type: DocsIf3RccStatusValidityCode
        ydk::YLeaf docsif3rccstatusvaliditycodetext; //type: string
        class DocsIf3RccStatusValidityCode;

}; // DOCSIF3MIB::DocsIf3RccStatusTable::DocsIf3RccStatusEntry


class DOCSIF3MIB::DocsIf3RxChCfgTable : public ydk::Entity
{
    public:
        DocsIf3RxChCfgTable();
        ~DocsIf3RxChCfgTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DocsIf3RxChCfgEntry; //type: DOCSIF3MIB::DocsIf3RxChCfgTable::DocsIf3RxChCfgEntry

        ydk::YList docsif3rxchcfgentry;
        
}; // DOCSIF3MIB::DocsIf3RxChCfgTable


class DOCSIF3MIB::DocsIf3RxChCfgTable::DocsIf3RxChCfgEntry : public ydk::Entity
{
    public:
        DocsIf3RxChCfgEntry();
        ~DocsIf3RxChCfgEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        //type: binary (refers to cisco_ios_xe::DOCS_IF3_MIB::DOCSIF3MIB::DocsIf3RccCfgTable::DocsIf3RccCfgEntry::docsif3rcccfgrcpid)
        ydk::YLeaf docsif3rcccfgrcpid;
        //type: uint32 (refers to cisco_ios_xe::DOCS_IF3_MIB::DOCSIF3MIB::DocsIf3RccCfgTable::DocsIf3RccCfgEntry::docsif3rcccfgrcccfgid)
        ydk::YLeaf docsif3rcccfgrcccfgid;
        ydk::YLeaf docsif3rxchcfgrcid; //type: uint32
        ydk::YLeaf docsif3rxchcfgchifindex; //type: int32
        ydk::YLeaf docsif3rxchcfgprimarydsindicator; //type: boolean
        ydk::YLeaf docsif3rxchcfgrcrmconnectivityid; //type: uint32
        ydk::YLeaf docsif3rxchcfgrowstatus; //type: RowStatus

}; // DOCSIF3MIB::DocsIf3RxChCfgTable::DocsIf3RxChCfgEntry


class DOCSIF3MIB::DocsIf3RxChStatusTable : public ydk::Entity
{
    public:
        DocsIf3RxChStatusTable();
        ~DocsIf3RxChStatusTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DocsIf3RxChStatusEntry; //type: DOCSIF3MIB::DocsIf3RxChStatusTable::DocsIf3RxChStatusEntry

        ydk::YList docsif3rxchstatusentry;
        
}; // DOCSIF3MIB::DocsIf3RxChStatusTable


class DOCSIF3MIB::DocsIf3RxChStatusTable::DocsIf3RxChStatusEntry : public ydk::Entity
{
    public:
        DocsIf3RxChStatusEntry();
        ~DocsIf3RxChStatusEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        //type: binary (refers to cisco_ios_xe::DOCS_IF3_MIB::DOCSIF3MIB::DocsIf3RccStatusTable::DocsIf3RccStatusEntry::docsif3rccstatusrcpid)
        ydk::YLeaf docsif3rccstatusrcpid;
        //type: uint32 (refers to cisco_ios_xe::DOCS_IF3_MIB::DOCSIF3MIB::DocsIf3RccStatusTable::DocsIf3RccStatusEntry::docsif3rccstatusrccstatusid)
        ydk::YLeaf docsif3rccstatusrccstatusid;
        ydk::YLeaf docsif3rxchstatusrcid; //type: uint32
        ydk::YLeaf docsif3rxchstatuschifindex; //type: int32
        ydk::YLeaf docsif3rxchstatusprimarydsindicator; //type: boolean
        ydk::YLeaf docsif3rxchstatusrcrmconnectivityid; //type: uint32

}; // DOCSIF3MIB::DocsIf3RxChStatusTable::DocsIf3RxChStatusEntry


class DOCSIF3MIB::DocsIf3RxModuleCfgTable : public ydk::Entity
{
    public:
        DocsIf3RxModuleCfgTable();
        ~DocsIf3RxModuleCfgTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DocsIf3RxModuleCfgEntry; //type: DOCSIF3MIB::DocsIf3RxModuleCfgTable::DocsIf3RxModuleCfgEntry

        ydk::YList docsif3rxmodulecfgentry;
        
}; // DOCSIF3MIB::DocsIf3RxModuleCfgTable


class DOCSIF3MIB::DocsIf3RxModuleCfgTable::DocsIf3RxModuleCfgEntry : public ydk::Entity
{
    public:
        DocsIf3RxModuleCfgEntry();
        ~DocsIf3RxModuleCfgEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        //type: binary (refers to cisco_ios_xe::DOCS_IF3_MIB::DOCSIF3MIB::DocsIf3RccCfgTable::DocsIf3RccCfgEntry::docsif3rcccfgrcpid)
        ydk::YLeaf docsif3rcccfgrcpid;
        //type: uint32 (refers to cisco_ios_xe::DOCS_IF3_MIB::DOCSIF3MIB::DocsIf3RccCfgTable::DocsIf3RccCfgEntry::docsif3rcccfgrcccfgid)
        ydk::YLeaf docsif3rcccfgrcccfgid;
        ydk::YLeaf docsif3rxmodulecfgrmid; //type: uint32
        ydk::YLeaf docsif3rxmodulecfgrmrmconnectivityid; //type: uint32
        ydk::YLeaf docsif3rxmodulecfgfirstcenterfrequency; //type: uint32
        ydk::YLeaf docsif3rxmodulecfgrowstatus; //type: RowStatus

}; // DOCSIF3MIB::DocsIf3RxModuleCfgTable::DocsIf3RxModuleCfgEntry


class DOCSIF3MIB::DocsIf3RxModuleStatusTable : public ydk::Entity
{
    public:
        DocsIf3RxModuleStatusTable();
        ~DocsIf3RxModuleStatusTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DocsIf3RxModuleStatusEntry; //type: DOCSIF3MIB::DocsIf3RxModuleStatusTable::DocsIf3RxModuleStatusEntry

        ydk::YList docsif3rxmodulestatusentry;
        
}; // DOCSIF3MIB::DocsIf3RxModuleStatusTable


class DOCSIF3MIB::DocsIf3RxModuleStatusTable::DocsIf3RxModuleStatusEntry : public ydk::Entity
{
    public:
        DocsIf3RxModuleStatusEntry();
        ~DocsIf3RxModuleStatusEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        //type: binary (refers to cisco_ios_xe::DOCS_IF3_MIB::DOCSIF3MIB::DocsIf3RccStatusTable::DocsIf3RccStatusEntry::docsif3rccstatusrcpid)
        ydk::YLeaf docsif3rccstatusrcpid;
        //type: uint32 (refers to cisco_ios_xe::DOCS_IF3_MIB::DOCSIF3MIB::DocsIf3RccStatusTable::DocsIf3RccStatusEntry::docsif3rccstatusrccstatusid)
        ydk::YLeaf docsif3rccstatusrccstatusid;
        ydk::YLeaf docsif3rxmodulestatusrmid; //type: uint32
        ydk::YLeaf docsif3rxmodulestatusrmrmconnectivityid; //type: uint32
        ydk::YLeaf docsif3rxmodulestatusfirstcenterfrequency; //type: uint32

}; // DOCSIF3MIB::DocsIf3RxModuleStatusTable::DocsIf3RxModuleStatusEntry


class DOCSIF3MIB::DocsIf3MdNodeStatusTable : public ydk::Entity
{
    public:
        DocsIf3MdNodeStatusTable();
        ~DocsIf3MdNodeStatusTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DocsIf3MdNodeStatusEntry; //type: DOCSIF3MIB::DocsIf3MdNodeStatusTable::DocsIf3MdNodeStatusEntry

        ydk::YList docsif3mdnodestatusentry;
        
}; // DOCSIF3MIB::DocsIf3MdNodeStatusTable


class DOCSIF3MIB::DocsIf3MdNodeStatusTable::DocsIf3MdNodeStatusEntry : public ydk::Entity
{
    public:
        DocsIf3MdNodeStatusEntry();
        ~DocsIf3MdNodeStatusEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf docsif3mdnodestatusnodename; //type: binary
        ydk::YLeaf docsif3mdnodestatusmdcmsgid; //type: uint32
        ydk::YLeaf docsif3mdnodestatusmddssgid; //type: uint32
        ydk::YLeaf docsif3mdnodestatusmdussgid; //type: uint32

}; // DOCSIF3MIB::DocsIf3MdNodeStatusTable::DocsIf3MdNodeStatusEntry


class DOCSIF3MIB::DocsIf3MdDsSgStatusTable : public ydk::Entity
{
    public:
        DocsIf3MdDsSgStatusTable();
        ~DocsIf3MdDsSgStatusTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DocsIf3MdDsSgStatusEntry; //type: DOCSIF3MIB::DocsIf3MdDsSgStatusTable::DocsIf3MdDsSgStatusEntry

        ydk::YList docsif3mddssgstatusentry;
        
}; // DOCSIF3MIB::DocsIf3MdDsSgStatusTable


class DOCSIF3MIB::DocsIf3MdDsSgStatusTable::DocsIf3MdDsSgStatusEntry : public ydk::Entity
{
    public:
        DocsIf3MdDsSgStatusEntry();
        ~DocsIf3MdDsSgStatusEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf docsif3mddssgstatusmddssgid; //type: uint32
        ydk::YLeaf docsif3mddssgstatuschsetid; //type: uint32

}; // DOCSIF3MIB::DocsIf3MdDsSgStatusTable::DocsIf3MdDsSgStatusEntry


class DOCSIF3MIB::DocsIf3MdUsSgStatusTable : public ydk::Entity
{
    public:
        DocsIf3MdUsSgStatusTable();
        ~DocsIf3MdUsSgStatusTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DocsIf3MdUsSgStatusEntry; //type: DOCSIF3MIB::DocsIf3MdUsSgStatusTable::DocsIf3MdUsSgStatusEntry

        ydk::YList docsif3mdussgstatusentry;
        
}; // DOCSIF3MIB::DocsIf3MdUsSgStatusTable


class DOCSIF3MIB::DocsIf3MdUsSgStatusTable::DocsIf3MdUsSgStatusEntry : public ydk::Entity
{
    public:
        DocsIf3MdUsSgStatusEntry();
        ~DocsIf3MdUsSgStatusEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf docsif3mdussgstatusmdussgid; //type: uint32
        ydk::YLeaf docsif3mdussgstatuschsetid; //type: uint32

}; // DOCSIF3MIB::DocsIf3MdUsSgStatusTable::DocsIf3MdUsSgStatusEntry


class DOCSIF3MIB::DocsIf3MdUsToDsChMappingTable : public ydk::Entity
{
    public:
        DocsIf3MdUsToDsChMappingTable();
        ~DocsIf3MdUsToDsChMappingTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DocsIf3MdUsToDsChMappingEntry; //type: DOCSIF3MIB::DocsIf3MdUsToDsChMappingTable::DocsIf3MdUsToDsChMappingEntry

        ydk::YList docsif3mdustodschmappingentry;
        
}; // DOCSIF3MIB::DocsIf3MdUsToDsChMappingTable


class DOCSIF3MIB::DocsIf3MdUsToDsChMappingTable::DocsIf3MdUsToDsChMappingEntry : public ydk::Entity
{
    public:
        DocsIf3MdUsToDsChMappingEntry();
        ~DocsIf3MdUsToDsChMappingEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf docsif3mdustodschmappingusifindex; //type: int32
        ydk::YLeaf docsif3mdustodschmappingdsifindex; //type: int32
        ydk::YLeaf docsif3mdustodschmappingmdifindex; //type: int32

}; // DOCSIF3MIB::DocsIf3MdUsToDsChMappingTable::DocsIf3MdUsToDsChMappingEntry


class DOCSIF3MIB::DocsIf3MdCfgTable : public ydk::Entity
{
    public:
        DocsIf3MdCfgTable();
        ~DocsIf3MdCfgTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DocsIf3MdCfgEntry; //type: DOCSIF3MIB::DocsIf3MdCfgTable::DocsIf3MdCfgEntry

        ydk::YList docsif3mdcfgentry;
        
}; // DOCSIF3MIB::DocsIf3MdCfgTable


class DOCSIF3MIB::DocsIf3MdCfgTable::DocsIf3MdCfgEntry : public ydk::Entity
{
    public:
        DocsIf3MdCfgEntry();
        ~DocsIf3MdCfgEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf docsif3mdcfgmddinterval; //type: uint32
        ydk::YLeaf docsif3mdcfgipprovmode; //type: DocsIf3MdCfgIpProvMode
        ydk::YLeaf docsif3mdcfgcmstatusevctlenabled; //type: boolean
        ydk::YLeaf docsif3mdcfgusfreqrange; //type: DocsIf3MdCfgUsFreqRange
        ydk::YLeaf docsif3mdcfgmcastdsidfwdenabled; //type: boolean
        ydk::YLeaf docsif3mdcfgmultrxchmodeenabled; //type: boolean
        ydk::YLeaf docsif3mdcfgmulttxchmodeenabled; //type: boolean
        ydk::YLeaf docsif3mdcfgearlyauthencrctrl; //type: DocsIf3MdCfgEarlyAuthEncrCtrl
        ydk::YLeaf docsif3mdcfgtftpproxyenabled; //type: boolean
        ydk::YLeaf docsif3mdcfgsrcaddrverifenabled; //type: boolean
        ydk::YLeaf docsif3mdcfgdownchannelannex; //type: DocsIf3MdCfgDownChannelAnnex
        ydk::YLeaf docsif3mdcfgcmudcenabled; //type: boolean
        ydk::YLeaf docsif3mdcfgsendudcrulesenabled; //type: boolean
        ydk::YLeaf docsif3mdcfgservicetypeidlist; //type: string
        ydk::YLeaf docsif3mdcfgbpi2enforcectrl; //type: DocsIf3MdCfgBpi2EnforceCtrl
        ydk::YLeaf docsif3mdcfgenergymgt1x1enabled; //type: int32
        class DocsIf3MdCfgIpProvMode;
        class DocsIf3MdCfgUsFreqRange;
        class DocsIf3MdCfgEarlyAuthEncrCtrl;
        class DocsIf3MdCfgDownChannelAnnex;
        class DocsIf3MdCfgBpi2EnforceCtrl;

}; // DOCSIF3MIB::DocsIf3MdCfgTable::DocsIf3MdCfgEntry


class DOCSIF3MIB::DocsIf3BondingGrpCfgTable : public ydk::Entity
{
    public:
        DocsIf3BondingGrpCfgTable();
        ~DocsIf3BondingGrpCfgTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DocsIf3BondingGrpCfgEntry; //type: DOCSIF3MIB::DocsIf3BondingGrpCfgTable::DocsIf3BondingGrpCfgEntry

        ydk::YList docsif3bondinggrpcfgentry;
        
}; // DOCSIF3MIB::DocsIf3BondingGrpCfgTable


class DOCSIF3MIB::DocsIf3BondingGrpCfgTable::DocsIf3BondingGrpCfgEntry : public ydk::Entity
{
    public:
        DocsIf3BondingGrpCfgEntry();
        ~DocsIf3BondingGrpCfgEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf docsif3bondinggrpcfgdir; //type: IfDirection
        ydk::YLeaf docsif3bondinggrpcfgcfgid; //type: uint32
        ydk::YLeaf docsif3bondinggrpcfgchlist; //type: string
        ydk::YLeaf docsif3bondinggrpcfgsfprovattrmask; //type: binary
        ydk::YLeaf docsif3bondinggrpcfgdsidreseqwaittime; //type: uint32
        ydk::YLeaf docsif3bondinggrpcfgdsidreseqwarnthrshld; //type: uint32
        ydk::YLeaf docsif3bondinggrpcfgrowstatus; //type: RowStatus

}; // DOCSIF3MIB::DocsIf3BondingGrpCfgTable::DocsIf3BondingGrpCfgEntry


class DOCSIF3MIB::DocsIf3DsBondingGrpStatusTable : public ydk::Entity
{
    public:
        DocsIf3DsBondingGrpStatusTable();
        ~DocsIf3DsBondingGrpStatusTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DocsIf3DsBondingGrpStatusEntry; //type: DOCSIF3MIB::DocsIf3DsBondingGrpStatusTable::DocsIf3DsBondingGrpStatusEntry

        ydk::YList docsif3dsbondinggrpstatusentry;
        
}; // DOCSIF3MIB::DocsIf3DsBondingGrpStatusTable


class DOCSIF3MIB::DocsIf3DsBondingGrpStatusTable::DocsIf3DsBondingGrpStatusEntry : public ydk::Entity
{
    public:
        DocsIf3DsBondingGrpStatusEntry();
        ~DocsIf3DsBondingGrpStatusEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf docsif3dsbondinggrpstatuschsetid; //type: uint32
        ydk::YLeaf docsif3dsbondinggrpstatusmddssgid; //type: uint32
        ydk::YLeaf docsif3dsbondinggrpstatuscfgid; //type: uint32

}; // DOCSIF3MIB::DocsIf3DsBondingGrpStatusTable::DocsIf3DsBondingGrpStatusEntry


class DOCSIF3MIB::DocsIf3UsBondingGrpStatusTable : public ydk::Entity
{
    public:
        DocsIf3UsBondingGrpStatusTable();
        ~DocsIf3UsBondingGrpStatusTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DocsIf3UsBondingGrpStatusEntry; //type: DOCSIF3MIB::DocsIf3UsBondingGrpStatusTable::DocsIf3UsBondingGrpStatusEntry

        ydk::YList docsif3usbondinggrpstatusentry;
        
}; // DOCSIF3MIB::DocsIf3UsBondingGrpStatusTable


class DOCSIF3MIB::DocsIf3UsBondingGrpStatusTable::DocsIf3UsBondingGrpStatusEntry : public ydk::Entity
{
    public:
        DocsIf3UsBondingGrpStatusEntry();
        ~DocsIf3UsBondingGrpStatusEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf docsif3usbondinggrpstatuschsetid; //type: uint32
        ydk::YLeaf docsif3usbondinggrpstatusmdussgid; //type: uint32
        ydk::YLeaf docsif3usbondinggrpstatuscfgid; //type: uint32

}; // DOCSIF3MIB::DocsIf3UsBondingGrpStatusTable::DocsIf3UsBondingGrpStatusEntry


class DOCSIF3MIB::DocsIf3UsChExtTable : public ydk::Entity
{
    public:
        DocsIf3UsChExtTable();
        ~DocsIf3UsChExtTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DocsIf3UsChExtEntry; //type: DOCSIF3MIB::DocsIf3UsChExtTable::DocsIf3UsChExtEntry

        ydk::YList docsif3uschextentry;
        
}; // DOCSIF3MIB::DocsIf3UsChExtTable


class DOCSIF3MIB::DocsIf3UsChExtTable::DocsIf3UsChExtEntry : public ydk::Entity
{
    public:
        DocsIf3UsChExtEntry();
        ~DocsIf3UsChExtEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf docsif3uschextsaccodehoppingselectionmode; //type: DocsIf3UsChExtSacCodeHoppingSelectionMode
        ydk::YLeaf docsif3uschextscdmaselectionstringactivecodes; //type: binary
        class DocsIf3UsChExtSacCodeHoppingSelectionMode;

}; // DOCSIF3MIB::DocsIf3UsChExtTable::DocsIf3UsChExtEntry


class DOCSIF3MIB::DocsIf3UsChSetTable : public ydk::Entity
{
    public:
        DocsIf3UsChSetTable();
        ~DocsIf3UsChSetTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DocsIf3UsChSetEntry; //type: DOCSIF3MIB::DocsIf3UsChSetTable::DocsIf3UsChSetEntry

        ydk::YList docsif3uschsetentry;
        
}; // DOCSIF3MIB::DocsIf3UsChSetTable


class DOCSIF3MIB::DocsIf3UsChSetTable::DocsIf3UsChSetEntry : public ydk::Entity
{
    public:
        DocsIf3UsChSetEntry();
        ~DocsIf3UsChSetEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf docsif3uschsetid; //type: uint32
        ydk::YLeaf docsif3uschsetchlist; //type: string

}; // DOCSIF3MIB::DocsIf3UsChSetTable::DocsIf3UsChSetEntry


class DOCSIF3MIB::DocsIf3DsChSetTable : public ydk::Entity
{
    public:
        DocsIf3DsChSetTable();
        ~DocsIf3DsChSetTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DocsIf3DsChSetEntry; //type: DOCSIF3MIB::DocsIf3DsChSetTable::DocsIf3DsChSetEntry

        ydk::YList docsif3dschsetentry;
        
}; // DOCSIF3MIB::DocsIf3DsChSetTable


class DOCSIF3MIB::DocsIf3DsChSetTable::DocsIf3DsChSetEntry : public ydk::Entity
{
    public:
        DocsIf3DsChSetEntry();
        ~DocsIf3DsChSetEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf docsif3dschsetid; //type: uint32
        ydk::YLeaf docsif3dschsetchlist; //type: string

}; // DOCSIF3MIB::DocsIf3DsChSetTable::DocsIf3DsChSetEntry


class DOCSIF3MIB::DocsIf3SignalQualityExtTable : public ydk::Entity
{
    public:
        DocsIf3SignalQualityExtTable();
        ~DocsIf3SignalQualityExtTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DocsIf3SignalQualityExtEntry; //type: DOCSIF3MIB::DocsIf3SignalQualityExtTable::DocsIf3SignalQualityExtEntry

        ydk::YList docsif3signalqualityextentry;
        
}; // DOCSIF3MIB::DocsIf3SignalQualityExtTable


class DOCSIF3MIB::DocsIf3SignalQualityExtTable::DocsIf3SignalQualityExtEntry : public ydk::Entity
{
    public:
        DocsIf3SignalQualityExtEntry();
        ~DocsIf3SignalQualityExtEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf docsif3signalqualityextrxmer; //type: int32
        ydk::YLeaf docsif3signalqualityextrxmersamples; //type: uint32

}; // DOCSIF3MIB::DocsIf3SignalQualityExtTable::DocsIf3SignalQualityExtEntry


class DOCSIF3MIB::DocsIf3CmtsSignalQualityExtTable : public ydk::Entity
{
    public:
        DocsIf3CmtsSignalQualityExtTable();
        ~DocsIf3CmtsSignalQualityExtTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DocsIf3CmtsSignalQualityExtEntry; //type: DOCSIF3MIB::DocsIf3CmtsSignalQualityExtTable::DocsIf3CmtsSignalQualityExtEntry

        ydk::YList docsif3cmtssignalqualityextentry;
        
}; // DOCSIF3MIB::DocsIf3CmtsSignalQualityExtTable


class DOCSIF3MIB::DocsIf3CmtsSignalQualityExtTable::DocsIf3CmtsSignalQualityExtEntry : public ydk::Entity
{
    public:
        DocsIf3CmtsSignalQualityExtEntry();
        ~DocsIf3CmtsSignalQualityExtEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf docsif3cmtssignalqualityextcnir; //type: int32
        ydk::YLeaf docsif3cmtssignalqualityextexpectedrxsignalpower; //type: int32

}; // DOCSIF3MIB::DocsIf3CmtsSignalQualityExtTable::DocsIf3CmtsSignalQualityExtEntry


class DOCSIF3MIB::DocsIf3CmtsSpectrumAnalysisMeasTable : public ydk::Entity
{
    public:
        DocsIf3CmtsSpectrumAnalysisMeasTable();
        ~DocsIf3CmtsSpectrumAnalysisMeasTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DocsIf3CmtsSpectrumAnalysisMeasEntry; //type: DOCSIF3MIB::DocsIf3CmtsSpectrumAnalysisMeasTable::DocsIf3CmtsSpectrumAnalysisMeasEntry

        ydk::YList docsif3cmtsspectrumanalysismeasentry;
        
}; // DOCSIF3MIB::DocsIf3CmtsSpectrumAnalysisMeasTable


class DOCSIF3MIB::DocsIf3CmtsSpectrumAnalysisMeasTable::DocsIf3CmtsSpectrumAnalysisMeasEntry : public ydk::Entity
{
    public:
        DocsIf3CmtsSpectrumAnalysisMeasEntry();
        ~DocsIf3CmtsSpectrumAnalysisMeasEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf docsif3cmtsspectrumanalysismeasamplitudedata; //type: binary
        ydk::YLeaf docsif3cmtsspectrumanalysismeastimeinterval; //type: uint32
        ydk::YLeaf docsif3cmtsspectrumanalysismeasrowstatus; //type: RowStatus

}; // DOCSIF3MIB::DocsIf3CmtsSpectrumAnalysisMeasTable::DocsIf3CmtsSpectrumAnalysisMeasEntry


class DOCSIF3MIB::DocsIf3CmDpvStatsTable : public ydk::Entity
{
    public:
        DocsIf3CmDpvStatsTable();
        ~DocsIf3CmDpvStatsTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DocsIf3CmDpvStatsEntry; //type: DOCSIF3MIB::DocsIf3CmDpvStatsTable::DocsIf3CmDpvStatsEntry

        ydk::YList docsif3cmdpvstatsentry;
        
}; // DOCSIF3MIB::DocsIf3CmDpvStatsTable


class DOCSIF3MIB::DocsIf3CmDpvStatsTable::DocsIf3CmDpvStatsEntry : public ydk::Entity
{
    public:
        DocsIf3CmDpvStatsEntry();
        ~DocsIf3CmDpvStatsEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf docsif3cmdpvstatsgrpid; //type: uint32
        ydk::YLeaf docsif3cmdpvstatslastmeaslatency; //type: uint32
        ydk::YLeaf docsif3cmdpvstatslastmeastime; //type: string
        ydk::YLeaf docsif3cmdpvstatsminlatency; //type: uint32
        ydk::YLeaf docsif3cmdpvstatsmaxlatency; //type: uint32
        ydk::YLeaf docsif3cmdpvstatsavglatency; //type: uint32
        ydk::YLeaf docsif3cmdpvstatsnummeas; //type: uint32
        ydk::YLeaf docsif3cmdpvstatslastcleartime; //type: string

}; // DOCSIF3MIB::DocsIf3CmDpvStatsTable::DocsIf3CmDpvStatsEntry


class DOCSIF3MIB::DocsIf3CmEventCtrlTable : public ydk::Entity
{
    public:
        DocsIf3CmEventCtrlTable();
        ~DocsIf3CmEventCtrlTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DocsIf3CmEventCtrlEntry; //type: DOCSIF3MIB::DocsIf3CmEventCtrlTable::DocsIf3CmEventCtrlEntry

        ydk::YList docsif3cmeventctrlentry;
        
}; // DOCSIF3MIB::DocsIf3CmEventCtrlTable


class DOCSIF3MIB::DocsIf3CmEventCtrlTable::DocsIf3CmEventCtrlEntry : public ydk::Entity
{
    public:
        DocsIf3CmEventCtrlEntry();
        ~DocsIf3CmEventCtrlEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf docsif3cmeventctrleventid; //type: uint32
        ydk::YLeaf docsif3cmeventctrlstatus; //type: RowStatus

}; // DOCSIF3MIB::DocsIf3CmEventCtrlTable::DocsIf3CmEventCtrlEntry


class DOCSIF3MIB::DocsIf3CmtsEventCtrlTable : public ydk::Entity
{
    public:
        DocsIf3CmtsEventCtrlTable();
        ~DocsIf3CmtsEventCtrlTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DocsIf3CmtsEventCtrlEntry; //type: DOCSIF3MIB::DocsIf3CmtsEventCtrlTable::DocsIf3CmtsEventCtrlEntry

        ydk::YList docsif3cmtseventctrlentry;
        
}; // DOCSIF3MIB::DocsIf3CmtsEventCtrlTable


class DOCSIF3MIB::DocsIf3CmtsEventCtrlTable::DocsIf3CmtsEventCtrlEntry : public ydk::Entity
{
    public:
        DocsIf3CmtsEventCtrlEntry();
        ~DocsIf3CmtsEventCtrlEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf docsif3cmtseventctrleventid; //type: uint32
        ydk::YLeaf docsif3cmtseventctrlstatus; //type: RowStatus

}; // DOCSIF3MIB::DocsIf3CmtsEventCtrlTable::DocsIf3CmtsEventCtrlEntry


class DOCSIF3MIB::DocsIf3CmMdCfgTable : public ydk::Entity
{
    public:
        DocsIf3CmMdCfgTable();
        ~DocsIf3CmMdCfgTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DocsIf3CmMdCfgEntry; //type: DOCSIF3MIB::DocsIf3CmMdCfgTable::DocsIf3CmMdCfgEntry

        ydk::YList docsif3cmmdcfgentry;
        
}; // DOCSIF3MIB::DocsIf3CmMdCfgTable


class DOCSIF3MIB::DocsIf3CmMdCfgTable::DocsIf3CmMdCfgEntry : public ydk::Entity
{
    public:
        DocsIf3CmMdCfgEntry();
        ~DocsIf3CmMdCfgEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf docsif3cmmdcfgipprovmode; //type: DocsIf3CmMdCfgIpProvMode
        ydk::YLeaf docsif3cmmdcfgipprovmoderesetonchange; //type: boolean
        ydk::YLeaf docsif3cmmdcfgipprovmoderesetonchangeholdofftimer; //type: uint32
        ydk::YLeaf docsif3cmmdcfgipprovmodestoragetype; //type: StorageType
        class DocsIf3CmMdCfgIpProvMode;

}; // DOCSIF3MIB::DocsIf3CmMdCfgTable::DocsIf3CmMdCfgEntry


class DOCSIF3MIB::DocsIf3CmEnergyMgt1x1CfgTable : public ydk::Entity
{
    public:
        DocsIf3CmEnergyMgt1x1CfgTable();
        ~DocsIf3CmEnergyMgt1x1CfgTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DocsIf3CmEnergyMgt1x1CfgEntry; //type: DOCSIF3MIB::DocsIf3CmEnergyMgt1x1CfgTable::DocsIf3CmEnergyMgt1x1CfgEntry

        ydk::YList docsif3cmenergymgt1x1cfgentry;
        
}; // DOCSIF3MIB::DocsIf3CmEnergyMgt1x1CfgTable


class DOCSIF3MIB::DocsIf3CmEnergyMgt1x1CfgTable::DocsIf3CmEnergyMgt1x1CfgEntry : public ydk::Entity
{
    public:
        DocsIf3CmEnergyMgt1x1CfgEntry();
        ~DocsIf3CmEnergyMgt1x1CfgEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf docsif3cmenergymgt1x1cfgdirection; //type: IfDirection
        ydk::YLeaf docsif3cmenergymgt1x1cfgentrybitratethrshld; //type: uint32
        ydk::YLeaf docsif3cmenergymgt1x1cfgentrytimethrshld; //type: uint32
        ydk::YLeaf docsif3cmenergymgt1x1cfgexitbitratethrshld; //type: uint32
        ydk::YLeaf docsif3cmenergymgt1x1cfgexittimethrshld; //type: uint32

}; // DOCSIF3MIB::DocsIf3CmEnergyMgt1x1CfgTable::DocsIf3CmEnergyMgt1x1CfgEntry


class DOCSIF3MIB::DocsIf3CmSpectrumAnalysisMeasTable : public ydk::Entity
{
    public:
        DocsIf3CmSpectrumAnalysisMeasTable();
        ~DocsIf3CmSpectrumAnalysisMeasTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DocsIf3CmSpectrumAnalysisMeasEntry; //type: DOCSIF3MIB::DocsIf3CmSpectrumAnalysisMeasTable::DocsIf3CmSpectrumAnalysisMeasEntry

        ydk::YList docsif3cmspectrumanalysismeasentry;
        
}; // DOCSIF3MIB::DocsIf3CmSpectrumAnalysisMeasTable


class DOCSIF3MIB::DocsIf3CmSpectrumAnalysisMeasTable::DocsIf3CmSpectrumAnalysisMeasEntry : public ydk::Entity
{
    public:
        DocsIf3CmSpectrumAnalysisMeasEntry();
        ~DocsIf3CmSpectrumAnalysisMeasEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf docsif3cmspectrumanalysismeasfrequency; //type: int32
        ydk::YLeaf docsif3cmspectrumanalysismeasamplitudedata; //type: binary
        ydk::YLeaf docsif3cmspectrumanalysismeastotalsegmentpower; //type: int32

}; // DOCSIF3MIB::DocsIf3CmSpectrumAnalysisMeasTable::DocsIf3CmSpectrumAnalysisMeasEntry


class DOCSIF3MIB::DocsIf3CmtsCmEmStatsTable : public ydk::Entity
{
    public:
        DocsIf3CmtsCmEmStatsTable();
        ~DocsIf3CmtsCmEmStatsTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DocsIf3CmtsCmEmStatsEntry; //type: DOCSIF3MIB::DocsIf3CmtsCmEmStatsTable::DocsIf3CmtsCmEmStatsEntry

        ydk::YList docsif3cmtscmemstatsentry;
        
}; // DOCSIF3MIB::DocsIf3CmtsCmEmStatsTable


class DOCSIF3MIB::DocsIf3CmtsCmEmStatsTable::DocsIf3CmtsCmEmStatsEntry : public ydk::Entity
{
    public:
        DocsIf3CmtsCmEmStatsEntry();
        ~DocsIf3CmtsCmEmStatsEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: uint32 (refers to cisco_ios_xe::DOCS_IF3_MIB::DOCSIF3MIB::DocsIf3CmtsCmRegStatusTable::DocsIf3CmtsCmRegStatusEntry::docsif3cmtscmregstatusid)
        ydk::YLeaf docsif3cmtscmregstatusid;
        ydk::YLeaf docsif3cmtscmemstatsem1x1modetotalduration; //type: uint32

}; // DOCSIF3MIB::DocsIf3CmtsCmEmStatsTable::DocsIf3CmtsCmEmStatsEntry


class DOCSIF3MIB::DocsIf3CmEm1x1StatsTable : public ydk::Entity
{
    public:
        DocsIf3CmEm1x1StatsTable();
        ~DocsIf3CmEm1x1StatsTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class DocsIf3CmEm1x1StatsEntry; //type: DOCSIF3MIB::DocsIf3CmEm1x1StatsTable::DocsIf3CmEm1x1StatsEntry

        ydk::YList docsif3cmem1x1statsentry;
        
}; // DOCSIF3MIB::DocsIf3CmEm1x1StatsTable


class DOCSIF3MIB::DocsIf3CmEm1x1StatsTable::DocsIf3CmEm1x1StatsEntry : public ydk::Entity
{
    public:
        DocsIf3CmEm1x1StatsEntry();
        ~DocsIf3CmEm1x1StatsEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf docsif3cmem1x1statsnumbertimescrossedbelowusentrythrshlds; //type: uint32
        ydk::YLeaf docsif3cmem1x1statsnumbertimescrossedbelowdsentrythrshlds; //type: uint32
        ydk::YLeaf docsif3cmem1x1statstotalduration; //type: uint32
        ydk::YLeaf docsif3cmem1x1statstotaldurationbelowusthrshlds; //type: uint32
        ydk::YLeaf docsif3cmem1x1statstotaldurationbelowdsthrshlds; //type: uint32
        ydk::YLeaf docsif3cmem1x1statstotaldurationbelowusdsthrshlds; //type: uint32

}; // DOCSIF3MIB::DocsIf3CmEm1x1StatsTable::DocsIf3CmEm1x1StatsEntry

class CmtsCmRegState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf initialRanging;
        static const ydk::Enum::YLeaf rangingAutoAdjComplete;
        static const ydk::Enum::YLeaf dhcpv4Complete;
        static const ydk::Enum::YLeaf registrationComplete;
        static const ydk::Enum::YLeaf operational;
        static const ydk::Enum::YLeaf bpiInit;
        static const ydk::Enum::YLeaf startEae;
        static const ydk::Enum::YLeaf startDhcpv4;
        static const ydk::Enum::YLeaf startDhcpv6;
        static const ydk::Enum::YLeaf dhcpv6Complete;
        static const ydk::Enum::YLeaf startConfigFileDownload;
        static const ydk::Enum::YLeaf configFileDownloadComplete;
        static const ydk::Enum::YLeaf startRegistration;
        static const ydk::Enum::YLeaf forwardingDisabled;
        static const ydk::Enum::YLeaf rfMuteAll;

};

class IfDirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf downstream;
        static const ydk::Enum::YLeaf upstream;

};

class SpectrumAnalysisWindowFunction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf hann;
        static const ydk::Enum::YLeaf blackmanHarris;
        static const ydk::Enum::YLeaf rectangular;
        static const ydk::Enum::YLeaf hamming;
        static const ydk::Enum::YLeaf flatTop;
        static const ydk::Enum::YLeaf gaussian;
        static const ydk::Enum::YLeaf chebyshev;

};

class CmRegState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf notReady;
        static const ydk::Enum::YLeaf notSynchronized;
        static const ydk::Enum::YLeaf phySynchronized;
        static const ydk::Enum::YLeaf usParametersAcquired;
        static const ydk::Enum::YLeaf rangingComplete;
        static const ydk::Enum::YLeaf dhcpv4Complete;
        static const ydk::Enum::YLeaf todEstablished;
        static const ydk::Enum::YLeaf securityEstablished;
        static const ydk::Enum::YLeaf configFileDownloadComplete;
        static const ydk::Enum::YLeaf registrationComplete;
        static const ydk::Enum::YLeaf operational;
        static const ydk::Enum::YLeaf accessDenied;
        static const ydk::Enum::YLeaf eaeInProgress;
        static const ydk::Enum::YLeaf dhcpv4InProgress;
        static const ydk::Enum::YLeaf dhcpv6InProgress;
        static const ydk::Enum::YLeaf dhcpv6Complete;
        static const ydk::Enum::YLeaf registrationInProgress;
        static const ydk::Enum::YLeaf bpiInit;
        static const ydk::Enum::YLeaf forwardingDisabled;
        static const ydk::Enum::YLeaf dsTopologyResolutionInProgress;
        static const ydk::Enum::YLeaf rangingInProgress;
        static const ydk::Enum::YLeaf rfMuteAll;

};

class RangingState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf aborted;
        static const ydk::Enum::YLeaf retriesExceeded;
        static const ydk::Enum::YLeaf success;
        static const ydk::Enum::YLeaf continue_;
        static const ydk::Enum::YLeaf timeoutT4;

};

class DOCSIF3MIB::DocsIf3CmtsCmCtrl::DocsIf3CmtsCmCtrlCmdCommit : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mute;
        static const ydk::Enum::YLeaf cmReinit;
        static const ydk::Enum::YLeaf disableForwarding;

};

class DOCSIF3MIB::DocsIf3RccStatusTable::DocsIf3RccStatusEntry::DocsIf3RccStatusValidityCode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf valid;
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf wrongPrimaryDs;
        static const ydk::Enum::YLeaf missingPrimaryDs;
        static const ydk::Enum::YLeaf multiplePrimaryDs;
        static const ydk::Enum::YLeaf duplicateDs;
        static const ydk::Enum::YLeaf wrongFrequencyRange;
        static const ydk::Enum::YLeaf wrongConnectivity;

};

class DOCSIF3MIB::DocsIf3MdCfgTable::DocsIf3MdCfgEntry::DocsIf3MdCfgIpProvMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4Only;
        static const ydk::Enum::YLeaf ipv6Only;
        static const ydk::Enum::YLeaf alternate;
        static const ydk::Enum::YLeaf dualStack;

};

class DOCSIF3MIB::DocsIf3MdCfgTable::DocsIf3MdCfgEntry::DocsIf3MdCfgUsFreqRange : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf standard;
        static const ydk::Enum::YLeaf extended;

};

class DOCSIF3MIB::DocsIf3MdCfgTable::DocsIf3MdCfgEntry::DocsIf3MdCfgEarlyAuthEncrCtrl : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disableEae;
        static const ydk::Enum::YLeaf enableEaeRangingBasedEnforcement;
        static const ydk::Enum::YLeaf enableEaeCapabilityBasedEnforcement;
        static const ydk::Enum::YLeaf enableEaeTotalEnforcement;

};

class DOCSIF3MIB::DocsIf3MdCfgTable::DocsIf3MdCfgEntry::DocsIf3MdCfgDownChannelAnnex : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf annexA;
        static const ydk::Enum::YLeaf annexB;
        static const ydk::Enum::YLeaf annexC;

};

class DOCSIF3MIB::DocsIf3MdCfgTable::DocsIf3MdCfgEntry::DocsIf3MdCfgBpi2EnforceCtrl : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf qosCfgFileWithBpi2AndCapabPrivSupportEnabled;
        static const ydk::Enum::YLeaf qosCfgFileWithBpi2Enabled;
        static const ydk::Enum::YLeaf qosCfgFile;
        static const ydk::Enum::YLeaf total;

};

class DOCSIF3MIB::DocsIf3UsChExtTable::DocsIf3UsChExtEntry::DocsIf3UsChExtSacCodeHoppingSelectionMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf sac1NoCodeHopping;
        static const ydk::Enum::YLeaf sac1CodeHoppingMode1;
        static const ydk::Enum::YLeaf sac2CodeHoppingMode2;
        static const ydk::Enum::YLeaf sac2NoCodeHopping;

};

class DOCSIF3MIB::DocsIf3CmMdCfgTable::DocsIf3CmMdCfgEntry::DocsIf3CmMdCfgIpProvMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4Only;
        static const ydk::Enum::YLeaf ipv6Only;
        static const ydk::Enum::YLeaf honorMdd;

};


}
}

#endif /* _DOCS_IF3_MIB_ */

