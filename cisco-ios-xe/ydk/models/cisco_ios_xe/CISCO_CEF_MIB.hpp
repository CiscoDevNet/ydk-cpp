#ifndef _CISCO_CEF_MIB_
#define _CISCO_CEF_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


namespace cisco_ios_xe {
namespace CISCO_CEF_MIB {

class CISCOCEFMIB : public ydk::Entity
{
    public:
        CISCOCEFMIB();
        ~CISCOCEFMIB();

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

        class CefFIB; //type: CISCOCEFMIB::CefFIB
        class CefCC; //type: CISCOCEFMIB::CefCC
        class CefNotifCntl; //type: CISCOCEFMIB::CefNotifCntl
        class CefFIBSummaryTable; //type: CISCOCEFMIB::CefFIBSummaryTable
        class CefPrefixTable; //type: CISCOCEFMIB::CefPrefixTable
        class CefLMPrefixTable; //type: CISCOCEFMIB::CefLMPrefixTable
        class CefPathTable; //type: CISCOCEFMIB::CefPathTable
        class CefAdjSummaryTable; //type: CISCOCEFMIB::CefAdjSummaryTable
        class CefAdjTable; //type: CISCOCEFMIB::CefAdjTable
        class CefFESelectionTable; //type: CISCOCEFMIB::CefFESelectionTable
        class CefCfgTable; //type: CISCOCEFMIB::CefCfgTable
        class CefResourceTable; //type: CISCOCEFMIB::CefResourceTable
        class CefIntTable; //type: CISCOCEFMIB::CefIntTable
        class CefPeerTable; //type: CISCOCEFMIB::CefPeerTable
        class CefPeerFIBTable; //type: CISCOCEFMIB::CefPeerFIBTable
        class CefCCGlobalTable; //type: CISCOCEFMIB::CefCCGlobalTable
        class CefCCTypeTable; //type: CISCOCEFMIB::CefCCTypeTable
        class CefInconsistencyRecordTable; //type: CISCOCEFMIB::CefInconsistencyRecordTable
        class CefStatsPrefixLenTable; //type: CISCOCEFMIB::CefStatsPrefixLenTable
        class CefSwitchingStatsTable; //type: CISCOCEFMIB::CefSwitchingStatsTable

        std::shared_ptr<cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::CefFIB> ceffib;
        std::shared_ptr<cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::CefCC> cefcc;
        std::shared_ptr<cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::CefNotifCntl> cefnotifcntl;
        std::shared_ptr<cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::CefFIBSummaryTable> ceffibsummarytable;
        std::shared_ptr<cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::CefPrefixTable> cefprefixtable;
        std::shared_ptr<cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::CefLMPrefixTable> ceflmprefixtable;
        std::shared_ptr<cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::CefPathTable> cefpathtable;
        std::shared_ptr<cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::CefAdjSummaryTable> cefadjsummarytable;
        std::shared_ptr<cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::CefAdjTable> cefadjtable;
        std::shared_ptr<cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::CefFESelectionTable> ceffeselectiontable;
        std::shared_ptr<cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::CefCfgTable> cefcfgtable;
        std::shared_ptr<cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::CefResourceTable> cefresourcetable;
        std::shared_ptr<cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::CefIntTable> cefinttable;
        std::shared_ptr<cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::CefPeerTable> cefpeertable;
        std::shared_ptr<cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::CefPeerFIBTable> cefpeerfibtable;
        std::shared_ptr<cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::CefCCGlobalTable> cefccglobaltable;
        std::shared_ptr<cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::CefCCTypeTable> cefcctypetable;
        std::shared_ptr<cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::CefInconsistencyRecordTable> cefinconsistencyrecordtable;
        std::shared_ptr<cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::CefStatsPrefixLenTable> cefstatsprefixlentable;
        std::shared_ptr<cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::CefSwitchingStatsTable> cefswitchingstatstable;
        
}; // CISCOCEFMIB


class CISCOCEFMIB::CefFIB : public ydk::Entity
{
    public:
        CefFIB();
        ~CefFIB();

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

        ydk::YLeaf ceflmprefixspinlock; //type: int32

}; // CISCOCEFMIB::CefFIB


class CISCOCEFMIB::CefCC : public ydk::Entity
{
    public:
        CefCC();
        ~CefCC();

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

        ydk::YLeaf entlastinconsistencydetecttime; //type: uint32
        ydk::YLeaf cefinconsistencyreset; //type: CefCCAction
        ydk::YLeaf cefinconsistencyresetstatus; //type: CefCCStatus

}; // CISCOCEFMIB::CefCC


class CISCOCEFMIB::CefNotifCntl : public ydk::Entity
{
    public:
        CefNotifCntl();
        ~CefNotifCntl();

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

        ydk::YLeaf cefresourcefailurenotifenable; //type: boolean
        ydk::YLeaf cefpeerstatechangenotifenable; //type: boolean
        ydk::YLeaf cefpeerfibstatechangenotifenable; //type: boolean
        ydk::YLeaf cefnotifthrottlinginterval; //type: int32
        ydk::YLeaf cefinconsistencynotifenable; //type: boolean

}; // CISCOCEFMIB::CefNotifCntl


class CISCOCEFMIB::CefFIBSummaryTable : public ydk::Entity
{
    public:
        CefFIBSummaryTable();
        ~CefFIBSummaryTable();

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

        class CefFIBSummaryEntry; //type: CISCOCEFMIB::CefFIBSummaryTable::CefFIBSummaryEntry

        ydk::YList ceffibsummaryentry;
        
}; // CISCOCEFMIB::CefFIBSummaryTable


class CISCOCEFMIB::CefFIBSummaryTable::CefFIBSummaryEntry : public ydk::Entity
{
    public:
        CefFIBSummaryEntry();
        ~CefFIBSummaryEntry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::EntPhysicalTable::EntPhysicalEntry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf ceffibipversion; //type: CefIpVersion
        ydk::YLeaf ceffibsummaryfwdprefixes; //type: uint32

}; // CISCOCEFMIB::CefFIBSummaryTable::CefFIBSummaryEntry


class CISCOCEFMIB::CefPrefixTable : public ydk::Entity
{
    public:
        CefPrefixTable();
        ~CefPrefixTable();

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

        class CefPrefixEntry; //type: CISCOCEFMIB::CefPrefixTable::CefPrefixEntry

        ydk::YList cefprefixentry;
        
}; // CISCOCEFMIB::CefPrefixTable


class CISCOCEFMIB::CefPrefixTable::CefPrefixEntry : public ydk::Entity
{
    public:
        CefPrefixEntry();
        ~CefPrefixEntry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::EntPhysicalTable::EntPhysicalEntry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf cefprefixtype; //type: InetAddressType
        ydk::YLeaf cefprefixaddr; //type: binary
        ydk::YLeaf cefprefixlen; //type: uint32
        ydk::YLeaf cefprefixforwardinginfo; //type: string
        ydk::YLeaf cefprefixpkts; //type: uint32
        ydk::YLeaf cefprefixhcpkts; //type: uint64
        ydk::YLeaf cefprefixbytes; //type: uint32
        ydk::YLeaf cefprefixhcbytes; //type: uint64
        ydk::YLeaf cefprefixinternalnrpkts; //type: uint32
        ydk::YLeaf cefprefixinternalnrhcpkts; //type: uint64
        ydk::YLeaf cefprefixinternalnrbytes; //type: uint32
        ydk::YLeaf cefprefixinternalnrhcbytes; //type: uint64
        ydk::YLeaf cefprefixexternalnrpkts; //type: uint32
        ydk::YLeaf cefprefixexternalnrhcpkts; //type: uint64
        ydk::YLeaf cefprefixexternalnrbytes; //type: uint32
        ydk::YLeaf cefprefixexternalnrhcbytes; //type: uint64

}; // CISCOCEFMIB::CefPrefixTable::CefPrefixEntry


class CISCOCEFMIB::CefLMPrefixTable : public ydk::Entity
{
    public:
        CefLMPrefixTable();
        ~CefLMPrefixTable();

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

        class CefLMPrefixEntry; //type: CISCOCEFMIB::CefLMPrefixTable::CefLMPrefixEntry

        ydk::YList ceflmprefixentry;
        
}; // CISCOCEFMIB::CefLMPrefixTable


class CISCOCEFMIB::CefLMPrefixTable::CefLMPrefixEntry : public ydk::Entity
{
    public:
        CefLMPrefixEntry();
        ~CefLMPrefixEntry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::EntPhysicalTable::EntPhysicalEntry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf ceflmprefixdestaddrtype; //type: InetAddressType
        ydk::YLeaf ceflmprefixdestaddr; //type: binary
        ydk::YLeaf ceflmprefixstate; //type: CefPrefixSearchState
        ydk::YLeaf ceflmprefixaddr; //type: binary
        ydk::YLeaf ceflmprefixlen; //type: uint32
        ydk::YLeaf ceflmprefixrowstatus; //type: RowStatus

}; // CISCOCEFMIB::CefLMPrefixTable::CefLMPrefixEntry


class CISCOCEFMIB::CefPathTable : public ydk::Entity
{
    public:
        CefPathTable();
        ~CefPathTable();

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

        class CefPathEntry; //type: CISCOCEFMIB::CefPathTable::CefPathEntry

        ydk::YList cefpathentry;
        
}; // CISCOCEFMIB::CefPathTable


class CISCOCEFMIB::CefPathTable::CefPathEntry : public ydk::Entity
{
    public:
        CefPathEntry();
        ~CefPathEntry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::EntPhysicalTable::EntPhysicalEntry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf cefprefixtype; //type: InetAddressType
        //type: binary (refers to cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::CefPrefixTable::CefPrefixEntry::cefprefixaddr)
        ydk::YLeaf cefprefixaddr;
        //type: uint32 (refers to cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::CefPrefixTable::CefPrefixEntry::cefprefixlen)
        ydk::YLeaf cefprefixlen;
        ydk::YLeaf cefpathid; //type: int32
        ydk::YLeaf cefpathtype; //type: CefPathType
        ydk::YLeaf cefpathinterface; //type: int32
        ydk::YLeaf cefpathnexthopaddr; //type: binary
        ydk::YLeaf cefpathrecursevrfname; //type: binary

}; // CISCOCEFMIB::CefPathTable::CefPathEntry


class CISCOCEFMIB::CefAdjSummaryTable : public ydk::Entity
{
    public:
        CefAdjSummaryTable();
        ~CefAdjSummaryTable();

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

        class CefAdjSummaryEntry; //type: CISCOCEFMIB::CefAdjSummaryTable::CefAdjSummaryEntry

        ydk::YList cefadjsummaryentry;
        
}; // CISCOCEFMIB::CefAdjSummaryTable


class CISCOCEFMIB::CefAdjSummaryTable::CefAdjSummaryEntry : public ydk::Entity
{
    public:
        CefAdjSummaryEntry();
        ~CefAdjSummaryEntry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::EntPhysicalTable::EntPhysicalEntry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf cefadjsummarylinktype; //type: CefAdjLinkType
        ydk::YLeaf cefadjsummarycomplete; //type: uint32
        ydk::YLeaf cefadjsummaryincomplete; //type: uint32
        ydk::YLeaf cefadjsummaryfixup; //type: uint32
        ydk::YLeaf cefadjsummaryredirect; //type: uint32

}; // CISCOCEFMIB::CefAdjSummaryTable::CefAdjSummaryEntry


class CISCOCEFMIB::CefAdjTable : public ydk::Entity
{
    public:
        CefAdjTable();
        ~CefAdjTable();

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

        class CefAdjEntry; //type: CISCOCEFMIB::CefAdjTable::CefAdjEntry

        ydk::YList cefadjentry;
        
}; // CISCOCEFMIB::CefAdjTable


class CISCOCEFMIB::CefAdjTable::CefAdjEntry : public ydk::Entity
{
    public:
        CefAdjEntry();
        ~CefAdjEntry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::EntPhysicalTable::EntPhysicalEntry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cefadjnexthopaddrtype; //type: InetAddressType
        ydk::YLeaf cefadjnexthopaddr; //type: binary
        ydk::YLeaf cefadjconnid; //type: uint32
        ydk::YLeaf cefadjsummarylinktype; //type: CefAdjLinkType
        ydk::YLeaf cefadjsource; //type: CefAdjacencySource
        ydk::YLeaf cefadjencap; //type: string
        ydk::YLeaf cefadjfixup; //type: string
        ydk::YLeaf cefadjmtu; //type: uint32
        ydk::YLeaf cefadjforwardinginfo; //type: string
        ydk::YLeaf cefadjpkts; //type: uint32
        ydk::YLeaf cefadjhcpkts; //type: uint64
        ydk::YLeaf cefadjbytes; //type: uint32
        ydk::YLeaf cefadjhcbytes; //type: uint64

}; // CISCOCEFMIB::CefAdjTable::CefAdjEntry


class CISCOCEFMIB::CefFESelectionTable : public ydk::Entity
{
    public:
        CefFESelectionTable();
        ~CefFESelectionTable();

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

        class CefFESelectionEntry; //type: CISCOCEFMIB::CefFESelectionTable::CefFESelectionEntry

        ydk::YList ceffeselectionentry;
        
}; // CISCOCEFMIB::CefFESelectionTable


class CISCOCEFMIB::CefFESelectionTable::CefFESelectionEntry : public ydk::Entity
{
    public:
        CefFESelectionEntry();
        ~CefFESelectionEntry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::EntPhysicalTable::EntPhysicalEntry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf ceffeselectionname; //type: string
        ydk::YLeaf ceffeselectionid; //type: int32
        ydk::YLeaf ceffeselectionspecial; //type: CefForwardingElementSpecialType
        ydk::YLeaf ceffeselectionlabels; //type: binary
        ydk::YLeaf ceffeselectionadjlinktype; //type: CefAdjLinkType
        ydk::YLeaf ceffeselectionadjinterface; //type: int32
        ydk::YLeaf ceffeselectionadjnexthopaddrtype; //type: InetAddressType
        ydk::YLeaf ceffeselectionadjnexthopaddr; //type: binary
        ydk::YLeaf ceffeselectionadjconnid; //type: uint32
        ydk::YLeaf ceffeselectionvrfname; //type: binary
        ydk::YLeaf ceffeselectionweight; //type: uint32

}; // CISCOCEFMIB::CefFESelectionTable::CefFESelectionEntry


class CISCOCEFMIB::CefCfgTable : public ydk::Entity
{
    public:
        CefCfgTable();
        ~CefCfgTable();

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

        class CefCfgEntry; //type: CISCOCEFMIB::CefCfgTable::CefCfgEntry

        ydk::YList cefcfgentry;
        
}; // CISCOCEFMIB::CefCfgTable


class CISCOCEFMIB::CefCfgTable::CefCfgEntry : public ydk::Entity
{
    public:
        CefCfgEntry();
        ~CefCfgEntry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::EntPhysicalTable::EntPhysicalEntry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf ceffibipversion; //type: CefIpVersion
        ydk::YLeaf cefcfgadminstate; //type: CefAdminStatus
        ydk::YLeaf cefcfgoperstate; //type: CefOperStatus
        ydk::YLeaf cefcfgdistributionadminstate; //type: CefAdminStatus
        ydk::YLeaf cefcfgdistributionoperstate; //type: CefOperStatus
        ydk::YLeaf cefcfgaccountingmap; //type: CefCfgAccountingMap
        ydk::YLeaf cefcfgloadsharingalgorithm; //type: CefCfgLoadSharingAlgorithm
        ydk::YLeaf cefcfgloadsharingid; //type: uint32
        ydk::YLeaf cefcfgtrafficstatsloadinterval; //type: uint32
        ydk::YLeaf cefcfgtrafficstatsupdaterate; //type: uint32
        class CefCfgLoadSharingAlgorithm;

}; // CISCOCEFMIB::CefCfgTable::CefCfgEntry


class CISCOCEFMIB::CefResourceTable : public ydk::Entity
{
    public:
        CefResourceTable();
        ~CefResourceTable();

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

        class CefResourceEntry; //type: CISCOCEFMIB::CefResourceTable::CefResourceEntry

        ydk::YList cefresourceentry;
        
}; // CISCOCEFMIB::CefResourceTable


class CISCOCEFMIB::CefResourceTable::CefResourceEntry : public ydk::Entity
{
    public:
        CefResourceEntry();
        ~CefResourceEntry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::EntPhysicalTable::EntPhysicalEntry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf cefresourcememoryused; //type: uint32
        ydk::YLeaf cefresourcefailurereason; //type: CefFailureReason

}; // CISCOCEFMIB::CefResourceTable::CefResourceEntry


class CISCOCEFMIB::CefIntTable : public ydk::Entity
{
    public:
        CefIntTable();
        ~CefIntTable();

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

        class CefIntEntry; //type: CISCOCEFMIB::CefIntTable::CefIntEntry

        ydk::YList cefintentry;
        
}; // CISCOCEFMIB::CefIntTable


class CISCOCEFMIB::CefIntTable::CefIntEntry : public ydk::Entity
{
    public:
        CefIntEntry();
        ~CefIntEntry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::EntPhysicalTable::EntPhysicalEntry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf ceffibipversion; //type: CefIpVersion
        //type: int32 (refers to cisco_ios_xe::IF_MIB::IFMIB::IfTable::IfEntry::ifindex)
        ydk::YLeaf ifindex;
        ydk::YLeaf cefintswitchingstate; //type: CefIntSwitchingState
        ydk::YLeaf cefintloadsharing; //type: CefIntLoadSharing
        ydk::YLeaf cefintnonrecursiveaccouting; //type: CefIntNonrecursiveAccouting
        class CefIntSwitchingState;
        class CefIntLoadSharing;
        class CefIntNonrecursiveAccouting;

}; // CISCOCEFMIB::CefIntTable::CefIntEntry


class CISCOCEFMIB::CefPeerTable : public ydk::Entity
{
    public:
        CefPeerTable();
        ~CefPeerTable();

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

        class CefPeerEntry; //type: CISCOCEFMIB::CefPeerTable::CefPeerEntry

        ydk::YList cefpeerentry;
        
}; // CISCOCEFMIB::CefPeerTable


class CISCOCEFMIB::CefPeerTable::CefPeerEntry : public ydk::Entity
{
    public:
        CefPeerEntry();
        ~CefPeerEntry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::EntPhysicalTable::EntPhysicalEntry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf entpeerphysicalindex; //type: int32
        ydk::YLeaf cefpeeroperstate; //type: CefPeerOperState
        ydk::YLeaf cefpeernumberofresets; //type: uint32
        class CefPeerOperState;

}; // CISCOCEFMIB::CefPeerTable::CefPeerEntry


class CISCOCEFMIB::CefPeerFIBTable : public ydk::Entity
{
    public:
        CefPeerFIBTable();
        ~CefPeerFIBTable();

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

        class CefPeerFIBEntry; //type: CISCOCEFMIB::CefPeerFIBTable::CefPeerFIBEntry

        ydk::YList cefpeerfibentry;
        
}; // CISCOCEFMIB::CefPeerFIBTable


class CISCOCEFMIB::CefPeerFIBTable::CefPeerFIBEntry : public ydk::Entity
{
    public:
        CefPeerFIBEntry();
        ~CefPeerFIBEntry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::EntPhysicalTable::EntPhysicalEntry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        //type: int32 (refers to cisco_ios_xe::CISCO_CEF_MIB::CISCOCEFMIB::CefPeerTable::CefPeerEntry::entpeerphysicalindex)
        ydk::YLeaf entpeerphysicalindex;
        ydk::YLeaf ceffibipversion; //type: CefIpVersion
        ydk::YLeaf cefpeerfiboperstate; //type: CefPeerFIBOperState
        class CefPeerFIBOperState;

}; // CISCOCEFMIB::CefPeerFIBTable::CefPeerFIBEntry


class CISCOCEFMIB::CefCCGlobalTable : public ydk::Entity
{
    public:
        CefCCGlobalTable();
        ~CefCCGlobalTable();

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

        class CefCCGlobalEntry; //type: CISCOCEFMIB::CefCCGlobalTable::CefCCGlobalEntry

        ydk::YList cefccglobalentry;
        
}; // CISCOCEFMIB::CefCCGlobalTable


class CISCOCEFMIB::CefCCGlobalTable::CefCCGlobalEntry : public ydk::Entity
{
    public:
        CefCCGlobalEntry();
        ~CefCCGlobalEntry();

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

        ydk::YLeaf ceffibipversion; //type: CefIpVersion
        ydk::YLeaf cefccglobalautorepairenabled; //type: boolean
        ydk::YLeaf cefccglobalautorepairdelay; //type: uint32
        ydk::YLeaf cefccglobalautorepairholddown; //type: uint32
        ydk::YLeaf cefccglobalerrormsgenabled; //type: boolean
        ydk::YLeaf cefccglobalfullscanaction; //type: CefCCAction
        ydk::YLeaf cefccglobalfullscanstatus; //type: CefCCStatus

}; // CISCOCEFMIB::CefCCGlobalTable::CefCCGlobalEntry


class CISCOCEFMIB::CefCCTypeTable : public ydk::Entity
{
    public:
        CefCCTypeTable();
        ~CefCCTypeTable();

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

        class CefCCTypeEntry; //type: CISCOCEFMIB::CefCCTypeTable::CefCCTypeEntry

        ydk::YList cefcctypeentry;
        
}; // CISCOCEFMIB::CefCCTypeTable


class CISCOCEFMIB::CefCCTypeTable::CefCCTypeEntry : public ydk::Entity
{
    public:
        CefCCTypeEntry();
        ~CefCCTypeEntry();

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

        ydk::YLeaf ceffibipversion; //type: CefIpVersion
        ydk::YLeaf cefcctype; //type: CefCCType
        ydk::YLeaf cefccenabled; //type: boolean
        ydk::YLeaf cefcccount; //type: uint32
        ydk::YLeaf cefccperiod; //type: uint32
        ydk::YLeaf cefccqueriessent; //type: uint32
        ydk::YLeaf cefccqueriesignored; //type: uint32
        ydk::YLeaf cefccquerieschecked; //type: uint32
        ydk::YLeaf cefccqueriesiterated; //type: uint32

}; // CISCOCEFMIB::CefCCTypeTable::CefCCTypeEntry


class CISCOCEFMIB::CefInconsistencyRecordTable : public ydk::Entity
{
    public:
        CefInconsistencyRecordTable();
        ~CefInconsistencyRecordTable();

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

        class CefInconsistencyRecordEntry; //type: CISCOCEFMIB::CefInconsistencyRecordTable::CefInconsistencyRecordEntry

        ydk::YList cefinconsistencyrecordentry;
        
}; // CISCOCEFMIB::CefInconsistencyRecordTable


class CISCOCEFMIB::CefInconsistencyRecordTable::CefInconsistencyRecordEntry : public ydk::Entity
{
    public:
        CefInconsistencyRecordEntry();
        ~CefInconsistencyRecordEntry();

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

        ydk::YLeaf ceffibipversion; //type: CefIpVersion
        ydk::YLeaf cefinconsistencyrecid; //type: int32
        ydk::YLeaf cefinconsistencyprefixtype; //type: InetAddressType
        ydk::YLeaf cefinconsistencyprefixaddr; //type: binary
        ydk::YLeaf cefinconsistencyprefixlen; //type: uint32
        ydk::YLeaf cefinconsistencyvrfname; //type: binary
        ydk::YLeaf cefinconsistencycctype; //type: CefCCType
        ydk::YLeaf cefinconsistencyentity; //type: int32
        ydk::YLeaf cefinconsistencyreason; //type: CefInconsistencyReason
        class CefInconsistencyReason;

}; // CISCOCEFMIB::CefInconsistencyRecordTable::CefInconsistencyRecordEntry


class CISCOCEFMIB::CefStatsPrefixLenTable : public ydk::Entity
{
    public:
        CefStatsPrefixLenTable();
        ~CefStatsPrefixLenTable();

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

        class CefStatsPrefixLenEntry; //type: CISCOCEFMIB::CefStatsPrefixLenTable::CefStatsPrefixLenEntry

        ydk::YList cefstatsprefixlenentry;
        
}; // CISCOCEFMIB::CefStatsPrefixLenTable


class CISCOCEFMIB::CefStatsPrefixLenTable::CefStatsPrefixLenEntry : public ydk::Entity
{
    public:
        CefStatsPrefixLenEntry();
        ~CefStatsPrefixLenEntry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::EntPhysicalTable::EntPhysicalEntry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf ceffibipversion; //type: CefIpVersion
        ydk::YLeaf cefstatsprefixlen; //type: uint32
        ydk::YLeaf cefstatsprefixqueries; //type: uint32
        ydk::YLeaf cefstatsprefixhcqueries; //type: uint64
        ydk::YLeaf cefstatsprefixinserts; //type: uint32
        ydk::YLeaf cefstatsprefixhcinserts; //type: uint64
        ydk::YLeaf cefstatsprefixdeletes; //type: uint32
        ydk::YLeaf cefstatsprefixhcdeletes; //type: uint64
        ydk::YLeaf cefstatsprefixelements; //type: uint32
        ydk::YLeaf cefstatsprefixhcelements; //type: uint64

}; // CISCOCEFMIB::CefStatsPrefixLenTable::CefStatsPrefixLenEntry


class CISCOCEFMIB::CefSwitchingStatsTable : public ydk::Entity
{
    public:
        CefSwitchingStatsTable();
        ~CefSwitchingStatsTable();

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

        class CefSwitchingStatsEntry; //type: CISCOCEFMIB::CefSwitchingStatsTable::CefSwitchingStatsEntry

        ydk::YList cefswitchingstatsentry;
        
}; // CISCOCEFMIB::CefSwitchingStatsTable


class CISCOCEFMIB::CefSwitchingStatsTable::CefSwitchingStatsEntry : public ydk::Entity
{
    public:
        CefSwitchingStatsEntry();
        ~CefSwitchingStatsEntry();

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

        //type: int32 (refers to cisco_ios_xe::ENTITY_MIB::ENTITYMIB::EntPhysicalTable::EntPhysicalEntry::entphysicalindex)
        ydk::YLeaf entphysicalindex;
        ydk::YLeaf ceffibipversion; //type: CefIpVersion
        ydk::YLeaf cefswitchingindex; //type: int32
        ydk::YLeaf cefswitchingpath; //type: string
        ydk::YLeaf cefswitchingdrop; //type: uint32
        ydk::YLeaf cefswitchinghcdrop; //type: uint64
        ydk::YLeaf cefswitchingpunt; //type: uint32
        ydk::YLeaf cefswitchinghcpunt; //type: uint64
        ydk::YLeaf cefswitchingpunt2host; //type: uint32
        ydk::YLeaf cefswitchinghcpunt2host; //type: uint64

}; // CISCOCEFMIB::CefSwitchingStatsTable::CefSwitchingStatsEntry

class CISCOCEFMIB::CefCfgTable::CefCfgEntry::CefCfgLoadSharingAlgorithm : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf original;
        static const ydk::Enum::YLeaf tunnel;
        static const ydk::Enum::YLeaf universal;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 1;
            if (name == "original") return 2;
            if (name == "tunnel") return 3;
            if (name == "universal") return 4;
            return -1;
        }
};

class CISCOCEFMIB::CefIntTable::CefIntEntry::CefIntSwitchingState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cefEnabled;
        static const ydk::Enum::YLeaf distCefEnabled;
        static const ydk::Enum::YLeaf cefDisabled;

        static int get_enum_value(const std::string & name) {
            if (name == "cefEnabled") return 1;
            if (name == "distCefEnabled") return 2;
            if (name == "cefDisabled") return 3;
            return -1;
        }
};

class CISCOCEFMIB::CefIntTable::CefIntEntry::CefIntLoadSharing : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf perPacket;
        static const ydk::Enum::YLeaf perDestination;

        static int get_enum_value(const std::string & name) {
            if (name == "perPacket") return 1;
            if (name == "perDestination") return 2;
            return -1;
        }
};

class CISCOCEFMIB::CefIntTable::CefIntEntry::CefIntNonrecursiveAccouting : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf external;

        static int get_enum_value(const std::string & name) {
            if (name == "internal") return 1;
            if (name == "external") return 2;
            return -1;
        }
};

class CISCOCEFMIB::CefPeerTable::CefPeerEntry::CefPeerOperState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf peerDisabled;
        static const ydk::Enum::YLeaf peerUp;
        static const ydk::Enum::YLeaf peerHold;

        static int get_enum_value(const std::string & name) {
            if (name == "peerDisabled") return 1;
            if (name == "peerUp") return 2;
            if (name == "peerHold") return 3;
            return -1;
        }
};

class CISCOCEFMIB::CefPeerFIBTable::CefPeerFIBEntry::CefPeerFIBOperState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf peerFIBDown;
        static const ydk::Enum::YLeaf peerFIBUp;
        static const ydk::Enum::YLeaf peerFIBReloadRequest;
        static const ydk::Enum::YLeaf peerFIBReloading;
        static const ydk::Enum::YLeaf peerFIBSynced;

        static int get_enum_value(const std::string & name) {
            if (name == "peerFIBDown") return 1;
            if (name == "peerFIBUp") return 2;
            if (name == "peerFIBReloadRequest") return 3;
            if (name == "peerFIBReloading") return 4;
            if (name == "peerFIBSynced") return 5;
            return -1;
        }
};

class CISCOCEFMIB::CefInconsistencyRecordTable::CefInconsistencyRecordEntry::CefInconsistencyReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf missing;
        static const ydk::Enum::YLeaf checksumErr;
        static const ydk::Enum::YLeaf unknown;

        static int get_enum_value(const std::string & name) {
            if (name == "missing") return 1;
            if (name == "checksumErr") return 2;
            if (name == "unknown") return 3;
            return -1;
        }
};


}
}

#endif /* _CISCO_CEF_MIB_ */

